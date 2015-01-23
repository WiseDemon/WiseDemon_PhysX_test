/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#include "NxApexDefs.h"
#include "MinPhysxSdkVersion.h"
#if NX_SDK_VERSION_NUMBER >= MIN_PHYSX_SDK_VERSION_REQUIRED

#include "NxApex.h"

#include "BasicFSScene.h"
#include "JetFSActor.h"
#include "AttractorFSActor.h"
#include "VortexFSActor.h"
#include "NoiseFSActor.h"
#include "WindFSActor.h"

#include "NiApexScene.h"
#include "NiApexRenderDebug.h"
#include "ModulePerfScope.h"
#include "NxFromPx.h"
#include "NiModuleFieldSampler.h"

#if defined(APEX_CUDA_SUPPORT)
#include "ApexCudaSource.h"
#endif


namespace physx
{
namespace apex
{
namespace basicfs
{

BasicFSScene::BasicFSScene(ModuleBasicFS& module, NiApexScene& scene, NiApexRenderDebug* debugRender, NxResourceList& list)
	: mModule(&module)
	, mApexScene(&scene)
	, mDebugRender(debugRender)
	, mFieldSamplerManager(0)
{
	list.add(*this);		// Add self to module's list of BasicFSScenes

	/* Initialize reference to JetFSDebugRenderParams */
	mDebugRenderParams = DYNAMIC_CAST(DebugRenderParams*)(mApexScene->getDebugRenderParams());
	PX_ASSERT(mDebugRenderParams);
	NxParameterized::Handle handle(*mDebugRenderParams), memberHandle(*mDebugRenderParams);
	int size;

	if (mDebugRenderParams->getParameterHandle("moduleName", handle) == NxParameterized::ERROR_NONE)
	{
		handle.getArraySize(size, 0);
		handle.resizeArray(size + 1);
		if (handle.getChildHandle(size, memberHandle) == NxParameterized::ERROR_NONE)
		{
			memberHandle.initParamRef(BasicFSDebugRenderParams::staticClassName(), true);
		}
	}

	/* Load reference to JetFSDebugRenderParams */
	NxParameterized::Interface* refPtr = NULL;
	memberHandle.getParamRef(refPtr);
	mBasicFSDebugRenderParams = DYNAMIC_CAST(BasicFSDebugRenderParams*)(refPtr);
	PX_ASSERT(mBasicFSDebugRenderParams);
}

BasicFSScene::~BasicFSScene()
{
}

void BasicFSScene::visualize() // Fix!
{
#ifndef WITHOUT_DEBUG_VISUALIZE
	if (!mBasicFSDebugRenderParams->VISUALIZE_JET_FS_ACTOR && !mBasicFSDebugRenderParams->VISUALIZE_ATTRACTOR_FS_ACTOR && !mBasicFSDebugRenderParams->VISUALIZE_VORTEX_FS_ACTOR && !mBasicFSDebugRenderParams->VISUALIZE_NOISE_FS_ACTOR)
	{
		return;
	}

	mDebugRender->pushRenderState();
	// This is using the new debug rendering
	for (PxU32 i = 0 ; i < mActorArray.size() ; i++)
	{
		BasicFSActor* actor = DYNAMIC_CAST(BasicFSActor*)(mActorArray[i]); // Fix!
		actor->visualize();
	}
	mDebugRender->popRenderState();
#endif
}

void BasicFSScene::destroy()
{
	removeAllActors();
	mApexScene->moduleReleased(*this);
	delete this;
}

#if NX_SDK_VERSION_MAJOR == 2
void BasicFSScene::setModulePhysXScene(NxScene* nxScene)
#elif NX_SDK_VERSION_MAJOR == 3
void BasicFSScene::setModulePhysXScene(PxScene* nxScene)
#endif
{
	if (nxScene)
	{
		for (PxU32 i = 0 ; i < mActorArray.size() ; i++)
		{
			BasicFSActor* actor = DYNAMIC_CAST(BasicFSActor*)(mActorArray[i]);
			actor->setPhysXScene(nxScene);
		}
	}
	else
	{
		for (PxU32 i = 0 ; i < mActorArray.size() ; i++)
		{
			BasicFSActor* actor = DYNAMIC_CAST(BasicFSActor*)(mActorArray[i]);
			actor->setPhysXScene(NULL);
		}
	}

	mPhysXScene = nxScene;
}

void BasicFSScene::submitTasks(PxF32 elapsedTime, PxF32 /*substepSize*/, PxU32 /*numSubSteps*/)
{
	for (physx::PxU32 i = 0; i < mActorArray.size(); ++i)
	{
		BasicFSActor* actor = DYNAMIC_CAST(BasicFSActor*)(mActorArray[i]);
		actor->simulate(elapsedTime);
	}
}


// Called by ApexScene::fetchResults() with all actors render data locked.
void BasicFSScene::fetchResults()
{
	PX_PROFILER_PERF_SCOPE("BasicFSSceneFetchResults");
}

NiFieldSamplerManager* BasicFSScene::getNiFieldSamplerManager()
{
	if (mFieldSamplerManager == NULL)
	{
		NiModuleFieldSampler* moduleFieldSampler = mModule->getNiModuleFieldSampler();
		if (moduleFieldSampler != NULL)
		{
			mFieldSamplerManager = moduleFieldSampler->getNiFieldSamplerManager(*mApexScene);
			PX_ASSERT(mFieldSamplerManager != NULL);
		}
	}
	return mFieldSamplerManager;
}


/******************************** CPU Version ********************************/


BasicFSSceneCPU::BasicFSSceneCPU(ModuleBasicFS& module, NiApexScene& scene, NiApexRenderDebug* debugRender, NxResourceList& list) :
	BasicFSScene(module, scene, debugRender, list)
{
}

BasicFSSceneCPU::~BasicFSSceneCPU()
{
}

JetFSActor*	BasicFSSceneCPU::createJetFSActor(const JetFSActorParams& params, JetFSAsset& asset, NxResourceList& list)
{
	return PX_NEW(JetFSActorCPU)(params, asset, list, *this);
}

AttractorFSActor* BasicFSSceneCPU::createAttractorFSActor(const AttractorFSActorParams& params, AttractorFSAsset& asset, NxResourceList& list)
{
	return PX_NEW(AttractorFSActorCPU)(params, asset, list, *this);
}

VortexFSActor*	BasicFSSceneCPU::createVortexFSActor(const VortexFSActorParams& params, VortexFSAsset& asset, NxResourceList& list)
{
	return PX_NEW(VortexFSActorCPU)(params, asset, list, *this);
}

NoiseFSActor* BasicFSSceneCPU::createNoiseFSActor(const NoiseFSActorParams& params, NoiseFSAsset& asset, NxResourceList& list)
{
	return PX_NEW(NoiseFSActorCPU)(params, asset, list, *this);
}

WindFSActor* BasicFSSceneCPU::createWindFSActor(const WindFSActorParams& params, WindFSAsset& asset, NxResourceList& list)
{
	return PX_NEW(WindFSActorCPU)(params, asset, list, *this);
}

/******************************** GPU Version ********************************/

#if defined(APEX_CUDA_SUPPORT)


BasicFSSceneGPU::BasicFSSceneGPU(ModuleBasicFS& module, NiApexScene& scene, NiApexRenderDebug* debugRender, NxResourceList& list)
	: BasicFSScene(module, scene, debugRender, list)
	, CudaModuleScene(scene, *mModule, APEX_CUDA_TO_STR(APEX_CUDA_MODULE_PREFIX))
{
	{
		physx::PxGpuDispatcher* gd = mApexScene->getTaskManager()->getGpuDispatcher();
		PX_ASSERT(gd != NULL);
		mCtxMgr = gd->getCudaContextManager();
		physx::PxScopedCudaLock _lock_(*mCtxMgr);

//CUDA module objects
#include "../cuda/include/basicfs.h"
	}
}

BasicFSSceneGPU::~BasicFSSceneGPU()
{
	CudaModuleScene::destroy(*mApexScene);
}

JetFSActor*	BasicFSSceneGPU::createJetFSActor(const JetFSActorParams& params, JetFSAsset& asset, NxResourceList& list)
{
	return PX_NEW(JetFSActorGPU)(params, asset, list, *this);
}

AttractorFSActor* BasicFSSceneGPU::createAttractorFSActor(const AttractorFSActorParams& params, AttractorFSAsset& asset, NxResourceList& list)
{
	return PX_NEW(AttractorFSActorGPU)(params, asset, list, *this);
}

VortexFSActor*	BasicFSSceneGPU::createVortexFSActor(const VortexFSActorParams& params, VortexFSAsset& asset, NxResourceList& list)
{
	return PX_NEW(VortexFSActorGPU)(params, asset, list, *this);
}

NoiseFSActor* BasicFSSceneGPU::createNoiseFSActor(const NoiseFSActorParams& params, NoiseFSAsset& asset, NxResourceList& list)
{
	return PX_NEW(NoiseFSActorGPU)(params, asset, list, *this);
}

WindFSActor* BasicFSSceneGPU::createWindFSActor(const WindFSActorParams& params, WindFSAsset& asset, NxResourceList& list)
{
	return PX_NEW(WindFSActorGPU)(params, asset, list, *this);
}

ApexCudaConstStorage* BasicFSSceneGPU::getFieldSamplerCudaConstStorage()
{
	return &APEX_CUDA_OBJ_NAME(fieldSamplerStorage);
}

bool BasicFSSceneGPU::launchFieldSamplerCudaKernel(const fieldsampler::NiFieldSamplerKernelLaunchData& launchData)
{
	LAUNCH_FIELD_SAMPLER_KERNEL(launchData);
}


#endif

}
}
} // end namespace physx::apex

#endif // NX_SDK_VERSION_NUMBER >= MIN_PHYSX_SDK_VERSION_REQUIRED