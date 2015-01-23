/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef __FLUID_PARTICLE_INJECTOR_H__
#define __FLUID_PARTICLE_INJECTOR_H__

#include "NxApex.h"

#include "NiInstancedObjectSimulation.h"
#include "ApexActor.h"
#include "ApexRand.h"
#include "LeastBenefit.h"

namespace physx
{
namespace apex
{

namespace iofx
{
class NxApexRenderVolume;
}

namespace nxfluidios
{
class FluidIosActor;


/* Class for managing the interactions with each emitter / IOFX pair */
class FluidParticleInjector : public NiIosInjector, public NxApexResource, public ApexResource
{
public:
	void	createObjects(physx::PxU32 count, const IosNewObject* createList);
	void    setLODWeights(physx::PxF32 maxDistance, physx::PxF32 distanceWeight, physx::PxF32 speedWeight, physx::PxF32 lifeWeight, physx::PxF32 separationWeight, physx::PxF32 bias);
	void    reset();

	physx::PxTaskID getCompletionTaskID() const;
	void	setPreferredRenderVolume(NxApexRenderVolume* volume);
	bool	isBacklogged() const
	{
		return mIsBackLogged;
	}
	PxF32   getLeastBenefitValue() const;

	virtual physx::PxF32 getBenefit();
	virtual physx::PxF32 setResource(physx::PxF32 suggested, physx::PxF32 maxRemaining, physx::PxF32 relativeBenefit);

	void	release();
	void    destroy();

	// NxApexResource methods
	void	setListIndex(NxResourceList& list, physx::PxU32 index)
	{
		m_listIndex = index;
		m_list = &list;
	}
	physx::PxU32		getListIndex() const
	{
		return m_listIndex;
	}
	virtual void		setPhysXScene(NxScene*)	{}
	virtual NxScene*	getPhysXScene() const
	{
		return NULL;
	}
	physx::Array<IosNewObject>& getInjectedParticles()
	{
		return mInjectedParticles;
	}

	PX_INLINE physx::PxU32 getInjectedParticlesCount() const
	{
		return mInjectedParticles.size();
	}
	PX_INLINE void setMaxInsertionCount(physx::PxU32 value)
	{
		PX_ASSERT(value <= mInjectedParticles.size());
		mMaxInsertionCount = value;
	}

	PX_INLINE physx::PxU32 getTargetCount() const
	{
		return mSimulatedCount + mMaxInsertionCount;
	}
	void setResourceBudget(physx::PxU32 resourceBudget);

	virtual physx::PxU32 getSimParticlesCount() const
	{
		//dummy yet
		return 0;
	}
	
	virtual physx::PxU32 getActivePaticleCount() const
	{
		//TODO:JWR Implement me
		return 0;
	}

	virtual void setObjectScale(physx::PxF32 objectScale);

protected:
	FluidIosActor* 		mIosActor;
	NiIofxManagerClient* mIofxClient;
	NxApexRenderVolume* mVolume;
	physx::Array<PxU16> mRandomActorClassIDs;
	PxU32               mLastRandomID;
	PxU16				mVolumeID;

	/* LOD/deletion parameters */
	physx::PxF32		mLODMaxDistance;
	physx::PxF32		mLODDistanceWeight;
	physx::PxF32		mLODSpeedWeight;
	physx::PxF32		mLODLifeWeight;
	physx::PxF32		mLODBias;

	bool				mIsBackLogged;

	physx::PxF32		mInjectedBenefit;
	physx::PxU32		mSimulatedCount;
	physx::PxF32		mSimulatedBenefit;

	physx::PxF32		mLODNodeBenefit;
	physx::PxF32		mLODNodeResource;

	physx::PxU32		mResourceBudget;

	physx::PxU32		mMaxInsertionCount;
	physx::PxU32		mCurInsertionCount;

	/* insertion buffer */
	physx::Array<IosNewObject> mInjectedParticles;

	LeastBenefitList<PxU32> mForceDeleteList;
	LeastBenefitList<PxU32> mInjectorCullList;

	QDSRand				mRand;

	FluidParticleInjector(NxResourceList& list, FluidIosActor& actor);
	~FluidParticleInjector() {}

	void init(NxIofxAsset* iofxAsset);

	friend class FluidIosActor;
};

}
}
} // namespace physx::apex

#endif // __FLUID_PARTICLE_INJECTOR_H__
