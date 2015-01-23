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
#include "NxRenderMeshActorDesc.h"
#include "NxRenderMeshActor.h"
#include "NxRenderMeshAsset.h"

#if NX_SDK_VERSION_NUMBER >= MIN_PHYSX_SDK_VERSION_REQUIRED

#include "NxApex.h"

#include "AttractorFSActor.h"
#include "AttractorFSAsset.h"
#include "BasicFSScene.h"
#include "NiApexSDK.h"
#include "NiApexScene.h"
#include "NiApexRenderDebug.h"

#if NX_SDK_VERSION_MAJOR == 2
#include <NxScene.h>
#include "NxFromPx.h"
#elif NX_SDK_VERSION_MAJOR == 3
#include <PxScene.h>
#endif

#include <NiFieldSamplerManager.h>
#include "ApexResourceHelper.h"
#include "ReadCheck.h"
#include "WriteCheck.h"

namespace physx
{
namespace apex
{
namespace basicfs
{

#define NUM_DEBUG_POINTS 2048

AttractorFSActor::AttractorFSActor(const AttractorFSActorParams& params, AttractorFSAsset& asset, NxResourceList& list, BasicFSScene& scene)
	: BasicFSActor(scene)
	, mAsset(&asset)
{
	NX_WRITE_ZONE();
	mFieldWeight = asset.mParams->fieldWeight;

	mPose					= params.initialPose;
	mScale					= params.initialScale;
	mRadius					= mAsset->mParams->radius;
	mConstFieldStrength		= mAsset->mParams->constFieldStrength;
	mVariableFieldStrength	= mAsset->mParams->variableFieldStrength;

	list.add(*this);			// Add self to asset's list of actors
	addSelfToContext(*scene.getApexScene().getApexContext());    // Add self to ApexScene
	addSelfToContext(scene);	// Add self to BasicFSScene's list of actors

	NiFieldSamplerManager* fieldSamplerManager = mScene->getNiFieldSamplerManager();
	if (fieldSamplerManager != 0)
	{
		NiFieldSamplerDesc fieldSamplerDesc;
		if (asset.mParams->fieldDragCoeff > 0)
		{
			fieldSamplerDesc.type = NiFieldSamplerType::VELOCITY_DRAG;
			fieldSamplerDesc.dragCoeff = asset.mParams->fieldDragCoeff;
		}
		else
		{
			fieldSamplerDesc.type = NiFieldSamplerType::VELOCITY_DIRECT;
		}
		fieldSamplerDesc.gridSupportType = NiFieldSamplerGridSupportType::NONE;
#if NX_SDK_VERSION_MAJOR == 2
		fieldSamplerDesc.samplerFilterData = ApexResourceHelper::resolveCollisionGroup64(params.fieldSamplerFilterDataName ? params.fieldSamplerFilterDataName : mAsset->mParams->fieldSamplerFilterDataName);
		fieldSamplerDesc.boundaryFilterData = ApexResourceHelper::resolveCollisionGroup64(params.fieldBoundaryFilterDataName ? params.fieldBoundaryFilterDataName : mAsset->mParams->fieldBoundaryFilterDataName);
#else
		fieldSamplerDesc.samplerFilterData = ApexResourceHelper::resolveCollisionGroup128(params.fieldSamplerFilterDataName ? params.fieldSamplerFilterDataName : mAsset->mParams->fieldSamplerFilterDataName);
		fieldSamplerDesc.boundaryFilterData = ApexResourceHelper::resolveCollisionGroup128(params.fieldBoundaryFilterDataName ? params.fieldBoundaryFilterDataName : mAsset->mParams->fieldBoundaryFilterDataName);
#endif
		fieldSamplerDesc.boundaryFadePercentage = mAsset->mParams->boundaryFadePercentage;

		fieldSamplerManager->registerFieldSampler(this, fieldSamplerDesc, mScene);
		mFieldSamplerChanged = true;
	}
}

AttractorFSActor::~AttractorFSActor()
{
}

/* Must be defined inside CPP file, since they require knowledge of asset class */
NxApexAsset* 		AttractorFSActor::getOwner() const
{
	NX_READ_ZONE();
	return static_cast<NxApexAsset*>(mAsset);
}

NxBasicFSAsset* 	AttractorFSActor::getAttractorFSAsset() const
{
	NX_READ_ZONE();
	return mAsset;
}

void				AttractorFSActor::release()
{
	if (mInRelease)
	{
		return;
	}
	destroy();
} 

void AttractorFSActor::destroy()
{
	{
		NX_WRITE_ZONE();
		ApexActor::destroy();

		setPhysXScene(NULL);

		NiFieldSamplerManager* fieldSamplerManager = mScene->getNiFieldSamplerManager();
		if (fieldSamplerManager != 0)
		{
			fieldSamplerManager->unregisterFieldSampler(this);
		}
	}
	delete this;
}

void AttractorFSActor::getPhysicalLodRange(PxReal& min, PxReal& max, bool& intOnly) const
{
	NX_READ_ZONE();
	PX_UNUSED(min);
	PX_UNUSED(max);
	PX_UNUSED(intOnly);
	APEX_INVALID_OPERATION("not implemented");
}

physx::PxF32 AttractorFSActor::getActivePhysicalLod() const
{
	NX_READ_ZONE();
	APEX_INVALID_OPERATION("NxExampleActor does not support this operation");
	return -1.0f;
}

void AttractorFSActor::forcePhysicalLod(PxReal lod)
{
	NX_WRITE_ZONE();
	PX_UNUSED(lod);
	APEX_INVALID_OPERATION("not implemented");
}

// Called by game render thread
void AttractorFSActor::updateRenderResources(bool rewriteBuffers, void* userRenderData)
{
	NX_WRITE_ZONE();
	PX_UNUSED(rewriteBuffers);
	PX_UNUSED(userRenderData);
}

// Called by game render thread
void AttractorFSActor::dispatchRenderResources(NxUserRenderer& renderer)
{
	NX_READ_ZONE();
	PX_UNUSED(renderer);
}

bool AttractorFSActor::updateFieldSampler(NiFieldShapeDesc& shapeDesc, bool& isEnabled)
{
	NX_WRITE_ZONE();
	isEnabled = mFieldSamplerEnabled;
	if (mFieldSamplerChanged)
	{
		mExecuteParams.origin					= mPose.t;
		mExecuteParams.radius					= mRadius * mScale;
		mExecuteParams.constFieldStrength		= mConstFieldStrength * mScale;
		mExecuteParams.variableFieldStrength	= mVariableFieldStrength * mScale;

		shapeDesc.type = NiFieldShapeType::SPHERE;
		shapeDesc.worldToShape.M.setIdentity();
		shapeDesc.worldToShape.t = -mExecuteParams.origin;
		shapeDesc.dimensions = PxVec3(mExecuteParams.radius, 0, 0);
		shapeDesc.weight = mFieldWeight;

		mFieldSamplerChanged					= false;
		return true;
	}
	return false;
}

void AttractorFSActor::simulate(physx::PxF32 dt)
{
	NX_WRITE_ZONE();
	PX_UNUSED(dt);
}

void AttractorFSActor::setConstFieldStrength(physx::PxF32 strength)
{
	NX_WRITE_ZONE();
	mConstFieldStrength = strength;
	mFieldSamplerChanged = true;
}

void AttractorFSActor::setVariableFieldStrength(physx::PxF32 strength)
{
	NX_WRITE_ZONE();
	mVariableFieldStrength = strength;
	mFieldSamplerChanged = true;
}

void AttractorFSActor::visualize()
{
	NX_WRITE_ZONE();
#ifndef WITHOUT_DEBUG_VISUALIZE
	if ( !mEnableDebugVisualization ) return;
	NiApexRenderDebug* debugRender = mScene->mDebugRender;
	BasicFSDebugRenderParams* debugRenderParams = mScene->mBasicFSDebugRenderParams;

	if (!debugRenderParams->VISUALIZE_ATTRACTOR_FS_ACTOR)
	{
		return;
	}

	if (debugRenderParams->VISUALIZE_ATTRACTOR_FS_ACTOR_NAME)
	{
		char buf[128];
		buf[sizeof(buf) - 1] = 0;
		APEX_SPRINTF_S(buf, sizeof(buf) - 1, " %s %s", mAsset->getObjTypeName(), mAsset->getName());

		PxMat44 cameraFacingPose(mScene->mApexScene->getViewMatrix(0).inverseRT());
		PxVec3 textLocation = mPose.t;
		cameraFacingPose.setPosition(textLocation);

		debugRender->setCurrentTextScale(4.0f);
		debugRender->setCurrentColor(debugRender->getDebugColor(physx::DebugColors::Blue));
		debugRender->debugOrientedText(cameraFacingPose, buf);
	}

	if (debugRenderParams->VISUALIZE_ATTRACTOR_FS_SHAPE)
	{
		debugRender->setCurrentColor(debugRender->getDebugColor(physx::DebugColors::Blue));
//		debugRender->debugOrientedSphere(mExecuteParams.radius, 2, mDirToWorld);
		debugRender->debugSphere(mExecuteParams.origin, mExecuteParams.radius);
	}

	if (debugRenderParams->VISUALIZE_ATTRACTOR_FS_POSE)
	{
		debugRender->debugAxes(PxMat44(mPose), 1);
	}

	if (debugRenderParams->VISUALIZE_ATTRACTOR_FS_FIELD)
	{
		if (mDebugPoints.empty())
		{
			mDebugPoints.resize(NUM_DEBUG_POINTS);
			for (PxU32 i = 0; i < NUM_DEBUG_POINTS; ++i)
			{
				PxF32 rx, ry, rz;
				do
				{
					rx = physx::rand(-1.0f, +1.0f);
					ry = physx::rand(-1.0f, +1.0f);
					rz = physx::rand(-1.0f, +1.0f);
				}
				while (rx * rx + ry * ry + rz * rz > 1.0f);

				PxVec3& vec = mDebugPoints[i];

				vec.x = rx;
				vec.y = ry;
				vec.z = rz;
			}
		}

		PxU32 c1 = mScene->mDebugRender->getDebugColor(physx::DebugColors::Blue);
		PxU32 c2 = mScene->mDebugRender->getDebugColor(physx::DebugColors::Red);

		for (PxU32 i = 0; i < NUM_DEBUG_POINTS; ++i)
		{
			PxVec3 pos = mExecuteParams.origin + (mDebugPoints[i] * mExecuteParams.radius);
			PxVec3 fieldVec = executeAttractorFS(mExecuteParams, pos/*, totalElapsedMS*/);
			debugRender->debugGradientLine(pos, pos + fieldVec, c1, c2);
		}
	}

#endif
}

/******************************** CPU Version ********************************/

AttractorFSActorCPU::AttractorFSActorCPU(const AttractorFSActorParams& params, AttractorFSAsset& asset, NxResourceList& list, BasicFSScene& scene)
	: AttractorFSActor(params, asset, list, scene)
{
}

AttractorFSActorCPU::~AttractorFSActorCPU()
{
}

void AttractorFSActorCPU::executeFieldSampler(const ExecuteData& data)
{
	NX_WRITE_ZONE();
	for (PxU32 iter = 0; iter < data.count; ++iter)
	{
		PxU32 i = data.indices[iter & data.indicesMask] + (iter & ~data.indicesMask);
		physx::PxVec3* pos = (physx::PxVec3*)((physx::PxU8*)data.position + i * data.positionStride);
		data.resultField[iter] = executeAttractorFS(mExecuteParams, *pos/*, totalElapsedMS*/);
	}
}

/******************************** GPU Version ********************************/

#if defined(APEX_CUDA_SUPPORT)


AttractorFSActorGPU::AttractorFSActorGPU(const AttractorFSActorParams& params, AttractorFSAsset& asset, NxResourceList& list, BasicFSScene& scene)
	: AttractorFSActorCPU(params, asset, list, scene)
	, mConstMemGroup(CUDA_OBJ(fieldSamplerStorage))
{
}

AttractorFSActorGPU::~AttractorFSActorGPU()
{
}

bool AttractorFSActorGPU::updateFieldSampler(NiFieldShapeDesc& shapeDesc, bool& isEnabled)
{
	NX_WRITE_ZONE();
	if (AttractorFSActor::updateFieldSampler(shapeDesc, isEnabled))
	{
		APEX_CUDA_CONST_MEM_GROUP_SCOPE(mConstMemGroup);

		if (mParamsHandle.isNull())
		{
			mParamsHandle.alloc(_storage_);
		}
		mParamsHandle.update(_storage_, mExecuteParams);
		return true;
	}
	return false;
}


#endif

}
}
} // end namespace physx::apex

#endif // NX_SDK_VERSION_NUMBER >= MIN_PHYSX_SDK_VERSION_REQUIRED