/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef __BASIC_IOS_SCENE_H__
#define __BASIC_IOS_SCENE_H__

#include "NxApex.h"
#include "NxModuleBasicIos.h"
#include "NiApexSDK.h"
#include "NiModule.h"
#include "ModuleBasicIos.h"
#include "ApexSharedUtils.h"
#include "ApexSDKHelpers.h"
#include "ApexContext.h"
#include "ApexActor.h"
#include "ModulePerfScope.h"

#include "PsTime.h"

#include "DebugRenderParams.h"
#include "BasicIosDebugRenderParams.h"

#include "BasicIosCommon.h"
#include "BasicIosCommonSrc.h"

#include "NiFieldSamplerQuery.h"

#if defined(APEX_CUDA_SUPPORT)
#include "../cuda/include/common.h"

#include "ApexCudaWrapper.h"
#include "CudaModuleScene.h"

#define SCENE_CUDA_OBJ(scene, name) static_cast<BasicIosSceneGPU&>(scene).APEX_CUDA_OBJ_NAME(name)

#endif

namespace physx
{
namespace apex
{

class NiApexRenderDebug;
class NiFieldSamplerManager;

namespace basicios
{

class BasicIosInjectorStorage
{
public:
	virtual bool growInjectorStorage(physx::PxU32 newSize) = 0;
};
class BasicIosInjectorAllocator
{
public:
	BasicIosInjectorAllocator(BasicIosInjectorStorage* storage) : mStorage(storage)
	{
		mFreeInjectorListStart = NULL_INJECTOR_INDEX;
		mReleasedInjectorListStart = NULL_INJECTOR_INDEX;
	}

	physx::PxU32				allocateInjectorID();
	void						releaseInjectorID(physx::PxU32);
	void						flushReleased();

	static const PxU32			NULL_INJECTOR_INDEX = 0xFFFFFFFFu;
	static const PxU32			USED_INJECTOR_INDEX = 0xFFFFFFFEu;

private:
	BasicIosInjectorStorage*	mStorage;

	physx::Array<PxU32>			mInjectorList;
	PxU32						mFreeInjectorListStart;
	PxU32						mReleasedInjectorListStart;
};


class BasicIosScene : public NiModuleScene, public ApexContext, public NxApexResource, public ApexResource, protected BasicIosInjectorStorage
{
public:
	BasicIosScene(ModuleBasicIos& module, NiApexScene& scene, NiApexRenderDebug* renderDebug, NxResourceList& list);
	~BasicIosScene();

	/* NiModuleScene */
	void									release()
	{
		mModule->releaseNiModuleScene(*this);
	}

#if NX_SDK_VERSION_MAJOR == 2
	NxScene*                                getModulePhysXScene() const
	{
		return mPhysXScene;
	}
	void                                    setModulePhysXScene(NxScene*);
	NxScene* 								mPhysXScene;
#elif NX_SDK_VERSION_MAJOR == 3
	PxScene*                                getModulePhysXScene() const
	{
		return mPhysXScene;
	}
	void                                    setModulePhysXScene(PxScene*);
	PxScene* 								mPhysXScene;
#endif

	void									visualize();

	virtual NxModule*						getNxModule()
	{
		return mModule;
	}

	virtual NxApexSceneStats* getStats()
	{
		return 0;
	}

	physx::PxF32							getBenefit();
	physx::PxF32							setResource(physx::PxF32 , physx::PxF32, physx::PxF32);

	bool							lockRenderResources()
	{
		renderLockAllActors();	// Lock options not implemented yet
		return true;
	}

	bool							unlockRenderResources()
	{
		renderUnLockAllActors();	// Lock options not implemented yet
		return true;
	}

	/* NxApexResource */
	physx::PxU32							getListIndex() const
	{
		return m_listIndex;
	}
	void                                    setListIndex(NxResourceList& list, physx::PxU32 index)
	{
		m_listIndex = index;
		m_list = &list;
	}

	virtual BasicIosActor*					createIosActor(NxResourceList& list, BasicIosAsset& asset, physx::apex::NxIofxAsset& iofxAsset) = 0;

	virtual void							submitTasks(PxF32 elapsedTime, PxF32 substepSize, PxU32 numSubSteps);
	virtual void							setTaskDependencies();
	virtual void							fetchResults();

	NiFieldSamplerManager* 					getNiFieldSamplerManager();

	NiApexScene&							getApexScene() const
	{
		return *mApexScene;
	}

	PX_INLINE BasicIosInjectorAllocator&	getInjectorAllocator()
	{
		return mInjectorAllocator;
	}
	virtual void							fetchInjectorParams(PxU32 injectorID, InjectorParams& injParams) = 0;
	virtual void							updateInjectorParams(PxU32 injectorID, const InjectorParams& injParams) = 0;

protected:
	virtual void onSimulationStart() {}
	virtual void onSimulationFinish()
	{
		mInjectorAllocator.flushReleased();
	}


	ModuleBasicIos* 						mModule;
	NiApexScene* 							mApexScene;

	void									destroy();

	physx::PxF32							computeAABBDistanceSquared(const physx::PxBounds3& aabb);

	NiApexRenderDebug* 						mDebugRender;
	physx::PxF32							mSumBenefit;

	DebugRenderParams*						mDebugRenderParams;
	BasicIosDebugRenderParams*				mBasicIosDebugRenderParams;

	NiFieldSamplerManager* 					mFieldSamplerManager;

	BasicIosInjectorAllocator				mInjectorAllocator;

	friend class BasicIosActor;
	friend class BasicIosAsset;
	friend class ModuleBasicIos;
};


}
}
} // namespace physx::apex

#endif // __BASIC_IOS_SCENE_H__