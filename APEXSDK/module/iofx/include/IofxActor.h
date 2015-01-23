/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef __IOFX_ACTOR_H__
#define __IOFX_ACTOR_H__

#include "NxApex.h"
#include "NxIofxActor.h"
#include "NiInstancedObjectSimulation.h"
#include "NiResourceProvider.h"
#include "ApexInterface.h"
#include "ApexActor.h"
#include "IofxAsset.h"
#include "NiIofxManager.h"
#include "IofxManager.h"
#include "Modifier.h"
#include "ApexRWLockable.h"

namespace physx
{
namespace apex
{

class NiApexScene;
class NxModifier;

namespace iofx
{

class IofxScene;
class ApexRenderVolume;

struct ObjectRange
{
	ObjectRange() : startIndex(0), objectCount(0) {}

	PxU32			startIndex;	    //!< start index for this IOFX actor
	PxU32			objectCount;	//!< count of object instances this frame
};


class IofxActorRenderData;

class IofxActor :
	public NxIofxActor,
	public NxApexResource,
	public ApexActor,
	public ApexResource,
	public ApexRWLockable
{
public:
	APEX_RW_LOCKABLE_BOILERPLATE

	IofxActor(NxApexAsset*, IofxScene*, IofxManager&);
	~IofxActor();

	// NxApexActor methods
#if NX_SDK_VERSION_MAJOR == 2
	void				setPhysXScene(NxScene*)	{ }
	NxScene* 			getPhysXScene() const
	{
		return NULL;
	}
#elif NX_SDK_VERSION_MAJOR == 3
	void				setPhysXScene(PxScene*)	{ }
	PxScene* 			getPhysXScene() const
	{
		return NULL;
	}
#endif
	NxApexAsset* getOwner() const
	{
		NX_READ_ZONE();
		return NULL;
	}
	NxApexRenderable* 	getRenderable()
	{
		return this;
	}
	NxApexActor*        getNxApexActor()
	{
		return this;
	}
	physx::PxBounds3	getBounds() const
	{
		return ApexRenderable::getBounds();
	}
	const char* 		getIosAssetName() const
	{
		NX_READ_ZONE();
		return mMgr.mIosAssetName.c_str();
	}

	void				getPhysicalLodRange(physx::PxF32& min, physx::PxF32& max, bool& intOnly) const;
	physx::PxF32		getActivePhysicalLod() const;
	void				forcePhysicalLod(physx::PxF32 lod);
	/**
	\brief Selectively enables/disables debug visualization of a specific APEX actor.  Default value it true.
	*/
	virtual void setEnableDebugVisualization(bool state)
	{
		NX_WRITE_ZONE();
		ApexActor::setEnableDebugVisualization(state);
	}

	// NxApexResource methods
	void				release();
	void			    destroy();

	physx::PxU32	    getListIndex() const
	{
		return m_listIndex;
	}
	void	            setListIndex(NxResourceList& list, physx::PxU32 index)
	{
		m_listIndex = index;
		m_list = &list;
	}

	// NxApexRenderable API
	virtual void		lockRenderResources();
	virtual void		unlockRenderResources();

	virtual void		updateRenderResources(bool rewriteBuffers, void* userRenderData);
	virtual void		dispatchRenderResources(NxUserRenderer&);

	virtual PxF32		getObjectRadius() const
	{
		NX_READ_ZONE();
		return mMgr.getObjectRadius();
	}

	virtual PxU32		getObjectCount() const
	{
		NX_READ_ZONE();
		return mRenderRange.objectCount;
	}

	virtual PxU32		getVisibleCount() const
	{
		NX_READ_ZONE();
		return mRenderVisibleCount;
	}

	bool				prepareRenderResources(IosObjectBaseData* obj);

	NxRenderMeshActor* 			loadRenderMeshActor(physx::PxU32 maxInstanceCount);

	NxApexAsset*                mRenderAsset;
	IofxScene*					mIofxScene;
	IofxManager&                mMgr;
	ApexRenderVolume*           mRenderVolume;

	/* Set by IOFX Manager at creation time, immutable */
	PxU32						mActorID;

	PxBounds3                   mResultBounds;
	ObjectRange					mResultRange;
	PxU32						mResultVisibleCount;

	ObjectRange					mRenderRange;
	PxU32						mRenderVisibleCount;

	physx::Array<IofxActorRenderData*> mRenderDataArray;

	PxU32						mSemantics;
	IofxActorRenderData*		mActiveRenderData;

	bool						mDistanceSortingEnabled;

	friend class IofxManager;
	friend class IofxManagerGPU;
};

}
}
} // namespace apex

#endif // __IOFX_ACTOR_H__