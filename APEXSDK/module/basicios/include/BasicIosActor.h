/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef __BASIC_IOS_ACTOR_H__
#define __BASIC_IOS_ACTOR_H__

#include "NxApex.h"

#include "NxBasicIosActor.h"
#include "NxIofxActor.h"
#include "BasicIosAsset.h"
#include "NiInstancedObjectSimulation.h"
#include "BasicIosScene.h"
#include "ApexActor.h"
#include "ApexContext.h"
#include "ApexFIFO.h"
#include "BasicIosCommon.h"
#include "BasicIosCommonSrc.h"
#include "InplaceStorage.h"
#include "ApexMirroredArray.h"
#include "ApexRand.h"

#if NX_SDK_VERSION_MAJOR == 3
#include <PxFiltering.h>
#endif

#define MAX_CONVEX_PLANES_COUNT         4096
#define MAX_CONVEX_VERTS_COUNT          4096
#define MAX_CONVEX_POLYGONS_DATA_SIZE   16384

#define MAX_TRIMESH_VERTS_COUNT         4096
#define MAX_TRIMESH_INDICES_COUNT       16384

namespace physx
{
namespace apex
{

namespace iofx
{
class NxApexRenderVolume;
}

class NiFieldSamplerQuery;
class NiFieldSamplerCallback;

namespace basicios
{

/* Class for managing the interactions with each emitter */
class BasicParticleInjector : public NiIosInjector, public NxApexResource, public ApexResource
{
public:
	void	setPreferredRenderVolume(physx::apex::NxApexRenderVolume* volume);
	PxF32	getLeastBenefitValue() const
	{
		return 0.0f;
	}
	bool	isBacklogged() const
	{
		return false;
	}

	void	createObjects(physx::PxU32 count, const IosNewObject* createList);
#if defined(APEX_CUDA_SUPPORT)
	void	createObjects(ApexMirroredArray<const IosNewObject>& createArray);
#endif

	void	setLODWeights(physx::PxF32 maxDistance, physx::PxF32 distanceWeight, physx::PxF32 speedWeight, physx::PxF32 lifeWeight, physx::PxF32 separationWeight, physx::PxF32 bias);

	physx::PxTaskID getCompletionTaskID() const;

	virtual physx::PxF32 getBenefit();
	virtual physx::PxF32 setResource(physx::PxF32 suggested, physx::PxF32 maxRemaining, physx::PxF32 relativeBenefit);

	virtual void release();
	void destroy();

	// NxApexResource methods
	void	setListIndex(NxResourceList& list, physx::PxU32 index);
	physx::PxU32		getListIndex() const
	{
		return m_listIndex;
	}

#if NX_SDK_VERSION_MAJOR == 2
	virtual void		setPhysXScene(NxScene*)	{}
	virtual NxScene*	getPhysXScene() const
	{
		return NULL;
	}
#elif NX_SDK_VERSION_MAJOR == 3
	virtual void		setPhysXScene(PxScene*)	{}
	virtual PxScene*	getPhysXScene() const
	{
		return NULL;
	}
#endif

	void				assignSimParticlesCount(PxU32 input)
	{
		mSimulatedParticlesCount = input;
	}

	virtual PxU32		getSimParticlesCount() const
	{
		return mSimulatedParticlesCount;
	}
	
	virtual physx::PxU32 getActivePaticleCount() const
	{
		return mSimulatedParticlesCount;
	}

	virtual void setObjectScale(physx::PxF32 objectScale);

protected:
	BasicIosActor* 			mIosActor;
	NiIofxManagerClient*	mIofxClient;
	physx::apex::NxApexRenderVolume* mVolume;
	physx::Array<PxU16>		mRandomActorClassIDs;
	PxU32					mLastRandomID;
	PxU16					mVolumeID;

	PxU32					mInjectorID;
	PxU32					mSimulatedParticlesCount;

	/* insertion buffer */
	ApexFIFO<IosNewObject>	mInjectedParticles;

	QDSRand					mRand;

	BasicParticleInjector(NxResourceList& list, BasicIosActor& actor, physx::PxU32 injectorID);
	~BasicParticleInjector();

	void init(physx::apex::NxIofxAsset* iofxAsset);

	friend class BasicIosActor;
};


class BasicIosActor : public NiInstancedObjectSimulation,
	public NxBasicIosActor,
	public NxApexResource,
	public ApexResource,
	public LODNode,
	public ApexRWLockable
{
public:
	APEX_RW_LOCKABLE_BOILERPLATE

	BasicIosActor(NxResourceList& list, BasicIosAsset& asset, BasicIosScene& scene, physx::apex::NxIofxAsset& iofxAsset, bool isDataOnDevice);
	~BasicIosActor();

	// NxApexInterface API
	void								release();
	void								destroy();

	// NxApexActor API
#if NX_SDK_VERSION_MAJOR == 2
	void								setPhysXScene(NxScene* s);
	NxScene*							getPhysXScene() const;
	virtual void						putInScene(NxScene* scene);
#elif NX_SDK_VERSION_MAJOR == 3
	void								setPhysXScene(PxScene* s);
	PxScene*							getPhysXScene() const;
	virtual void						putInScene(PxScene* scene);
#endif

	NxApexAsset*						getOwner() const
	{
		return static_cast<NxApexAsset*>(mAsset);
	}

	// ApexContext
	void								getPhysicalLodRange(physx::PxF32& min, physx::PxF32& max, bool& intOnly) const;
	physx::PxF32						getActivePhysicalLod() const;
	void								forcePhysicalLod(physx::PxF32 lod);
	/**
	\brief Selectively enables/disables debug visualization of a specific APEX actor.  Default value it true.
	*/
	virtual void setEnableDebugVisualization(bool state)
	{
		ApexActor::setEnableDebugVisualization(state);
	}

	// NxApexResource methods
	void								setListIndex(NxResourceList& list, physx::PxU32 index)
	{
		m_listIndex = index;
		m_list = &list;
	}
	physx::PxU32						getListIndex() const
	{
		return m_listIndex;
	}

	// LODNode API
	PxF32								getBenefit();
	PxF32								setResource(physx::PxF32 suggested, physx::PxF32 maxRemaining, physx::PxF32 relativeBenefit);

	// NiIOS
	physx::PxF32						getObjectRadius() const
	{
		return mAsset->getParticleRadius();
	}
	physx::PxF32						getObjectDensity() const
	{
		return mAsset->getRestDensity();
	}

	// NxBasicIosActor
	physx::PxF32						getParticleRadius() const
	{
		NX_READ_ZONE();
		return mAsset->getParticleRadius();
	}
	physx::PxF32						getRestDensity() const
	{
		NX_READ_ZONE();
		return mAsset->getRestDensity();
	}
	physx::PxU32						getParticleCount() const
	{
		NX_READ_ZONE();
		return mParticleCount;
	}
	PX_INLINE void						setOnStartFSCallback(NiFieldSamplerCallback* callback)
	{
		if (mFieldSamplerQuery)
		{
			mFieldSamplerQuery->setOnStartCallback(callback);
		}
	}
	PX_INLINE void						setOnFinishIOFXCallback(NiIofxManagerCallback* callback)
	{
		if (mIofxMgr)
		{
			mIofxMgr->setOnFinishCallback(callback);
		}
	}

	const physx::PxVec3* 				getRecentPositions(physx::PxU32& count, physx::PxU32& stride) const;

	physx::PxVec3 						getGravity() const;
	void								setGravity(physx::PxVec3& gravity);

	void								visualize();
	virtual void						submitTasks() = 0;
	virtual void						setTaskDependencies() = 0;
	virtual void						fetchResults();

	NiIosInjector*						allocateInjector(NxIofxAsset* iofxAsset);
	void								releaseInjector(NiIosInjector&);

	virtual void								setDensityOrigin(const PxVec3& v) 
	{ 
		mDensityOrigin = v; 
	}


protected:
	//Member functions below have implemented in test actor
	virtual bool checkBenefit(PxU32 totalCount) {PX_UNUSED(totalCount); return true;};
	virtual bool checkHoles(PxU32 totalCount) {PX_UNUSED(totalCount); return true;};
	virtual bool checkInState(PxU32 totalCount) {PX_UNUSED(totalCount); return true;};
	virtual bool checkHistogram(PxU32 /*bound*/, PxU32 /*beg*/, PxU32 /*back*/) {return true;};

	virtual void						removeFromScene();

	void								injectNewParticles();

	void								initStorageGroups(InplaceStorage& storage);

	void								setTaskDependencies(physx::PxTask* iosTask, bool isDataOnDevice);


#if NX_SDK_VERSION_MAJOR == 2
	void								FillCollisionData(CollisionData& baseData, NxShape* shape);
#elif  NX_SDK_VERSION_MAJOR == 3
	void								FillCollisionData(CollisionData& baseData, PxShape* shape);
#endif

	BasicIosAsset* 						mAsset;
	BasicIosScene* 						mBasicIosScene;

	NiIofxManager* 						mIofxMgr;
	NiIosBufferDesc						mBufDesc;

	NxResourceList						mInjectorList;

	physx::PxVec3						mGravityVec;
	physx::PxVec3						mUp;
	physx::PxF32						mGravity;
	physx::PxF32						mTotalElapsedTime;			//AM: People, methinks this will backfire eventually due to floating point precision loss!

	physx::PxU32						mMaxParticleCount;
	physx::PxU32						mMaxTotalParticleCount;

	physx::PxU32						mParticleCount;
	physx::PxU32						mParticleBudget;

	physx::PxU32						mInjectedCount;
	physx::PxF32						mInjectedBenefitSum;
	physx::PxF32						mInjectedBenefitMin;
	physx::PxF32						mInjectedBenefitMax;

	physx::PxU32						mLastActiveCount;
	physx::PxF32						mLastBenefitSum;
	physx::PxF32						mLastBenefitMin;
	physx::PxF32						mLastBenefitMax;

	ApexMirroredArray<physx::PxF32>		mLifeSpan;
	ApexMirroredArray<physx::PxF32>		mLifeTime;
	ApexMirroredArray<physx::PxU32>		mInjector;
	ApexMirroredArray<physx::PxF32>		mBenefit;

	ApexMirroredArray<physx::PxPlane>	mConvexPlanes;
	ApexMirroredArray<physx::PxVec4>	mConvexVerts;
	ApexMirroredArray<physx::PxU32>		mConvexPolygonsData;

	ApexMirroredArray<physx::PxVec4>	mTrimeshVerts;
	ApexMirroredArray<physx::PxU32>		mTrimeshIndices;

	ApexMirroredArray<physx::PxU32>		mInjectorsCounters;

	ApexMirroredArray<physx::PxF32>		mGridDensityGrid;
	ApexMirroredArray<physx::PxF32>		mGridDensityGridLowPass;

	GridDensityParams					mGridDensityParams;
	// Particle Density Origin
	PxVec3 mDensityOrigin;
	PxMat44 mDensityDebugMatInv;

	// If true we are
	bool mTrackGravityChanges;

	// Only for use by the IOS Asset, the actor is unaware of this
	bool mIsMesh;

	NiFieldSamplerQuery*				mFieldSamplerQuery;
	ApexMirroredArray<physx::PxVec4>	mField;

#if NX_SDK_VERSION_MAJOR == 2
	NxCollisionGroup					mCollisionGroup;
	NxGroupsMask						mCollisionGroupsMask;

	Array<NxShape*>						mOverlappedShapes;

	struct ConvexPolygon
	{
		PxPlane plane;
		PxU32   begTriIndex;
		PxU32   endTriIndex;
	};
	Array<ConvexPolygon>				mTempConvexPolygons;

	template <typename T>
	PxU32 extractConvexPolygons(const NxConvexMeshDesc& convexMeshDesc);

	template <typename T>
	void fillConvexPolygonsData(const NxConvexMeshDesc& convexMeshDesc, PxU32 polygonsDataSize);

#elif NX_SDK_VERSION_MAJOR == 3
	PxFilterData						mCollisionFilterData;
	Array<PxOverlapHit>					mOverlapHits;
#endif

	InplaceStorageGroup					mSimulationStorageGroup;
	InplaceHandle<SimulationParams>		mSimulationParamsHandle;

	physx::PxTask*				mInjectTask;

	NiFieldSamplerCallback*				mOnStartCallback;
	NiIofxManagerCallback*				mOnFinishCallback;

	friend class BasicIosInjectTask;

	friend class BasicIosAsset;
	friend class BasicParticleInjector;
};

}
}
} // namespace physx::apex

#endif // __BASIC_IOS_ACTOR_H__
