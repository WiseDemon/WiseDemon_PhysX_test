/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef BASIC_IOS_ASSET_H
#define BASIC_IOS_ASSET_H

#include "PsShare.h"
#include "NxApex.h"
#include "NxIofxAsset.h"
#include "NxBasicIosAsset.h"
#include "NiInstancedObjectSimulation.h"
#include "ApexInterface.h"
#include "ApexSDKHelpers.h"
#include "ApexAssetAuthoring.h"
#include "ApexString.h"
#include "NiResourceProvider.h"
#include "ApexAuthorableObject.h"
#include "BasicIOSAssetParam.h"
#include "ApexAssetTracker.h"
#include "ApexRand.h"
#include "ApexRWLockable.h"

#include "ReadCheck.h"
#include "ApexAuthorableObject.h"

namespace physx
{
namespace apex
{

namespace IOFX
{

class NxIofxAsset;

}
	
namespace basicios
{

class ModuleBasicIos;
class BasicIosActor;

/**
\brief Descriptor needed to create a BasicIOS Actor
*/
class NxBasicIosActorDesc : public NxApexDesc
{
public:
	///Radius of a particle (overrides authered value)
	physx::PxF32				radius;
	///Density of a particle (overrides authered value)
	physx::PxF32				density;

	/**
	\brief constructor sets to default.
	*/
	PX_INLINE NxBasicIosActorDesc() : NxApexDesc()
	{
		init();
	}

	/**
	\brief sets members to default values.
	*/
	PX_INLINE void setToDefault()
	{
		NxApexDesc::setToDefault();
		init();
	}

	/**
	\brief checks if this is a valid descriptor.
	*/
	PX_INLINE bool isValid() const
	{
		if (!NxApexDesc::isValid())
		{
			return false;
		}

		return true;
	}

private:

	PX_INLINE void init()
	{
		// authored values will be used where these default values remain
		radius = 0.0f;
		density = 0.0f;
	}
};

class BasicIosAsset : public NxBasicIosAsset,
	public NxApexResource,
	public ApexResource,
	public ApexRWLockable
{
	friend class BasicIosAssetDummyAuthoring;
public:
	APEX_RW_LOCKABLE_BOILERPLATE

	BasicIosAsset(ModuleBasicIos*, NxResourceList&, const char*);
	BasicIosAsset(ModuleBasicIos* module, NxResourceList&, NxParameterized::Interface*, const char*);
	~BasicIosAsset();

	// NxApexAsset
	void							release();
	const char*						getName(void) const
	{
		return mName.c_str();
	}
	NxAuthObjTypeID					getObjTypeID() const
	{
		return mAssetTypeID;
	}
	const char* 					getObjTypeName() const
	{
		return getClassName();
	}
	// TODO: implement forceLoadAssets
	physx::PxU32					forceLoadAssets();

	NxApexActor*					createIosActor(NxApexScene& scene, NxIofxAsset* iofxAsset);
	void							releaseIosActor(NxApexActor&);
	bool							getSupportsDensity() const;

	// Private API for this module only
	BasicIosActor*                  getIosActorInScene(NxApexScene& scene, bool mesh) const;

	// NxApexResource methods
	void							setListIndex(NxResourceList& list, physx::PxU32 index)
	{
		m_listIndex = index;
		m_list = &list;
	}
	physx::PxU32					getListIndex() const
	{
		return m_listIndex;
	}

	physx::PxF32					getParticleRadius() const
	{
		NX_READ_ZONE();
		return mParams->particleRadius;
	}
	physx::PxF32					getRestDensity() const
	{
		NX_READ_ZONE();
		return mParams->restDensity;
	}
	physx::PxF32					getMaxInjectedParticleCount() const
	{
		NX_READ_ZONE();
		return mParams->maxInjectedParticleCount;
	}
	physx::PxU32					getMaxParticleCount() const
	{
		NX_READ_ZONE();
		return mParams->maxParticleCount;
	}
	physx::PxF32					getSceneGravityScale() const
	{
		return mParams->sceneGravityScale;
	}
	physx::PxVec3&					getExternalAcceleration() const
	{
		return mParams->externalAcceleration;
	}
	physx::PxF32					getParticleMass() const;

	const NxParameterized::Interface* getAssetNxParameterized() const
	{
		return mParams;
	}
	/**
	 * \brief Releases the ApexAsset but returns the NxParameterized::Interface and *ownership* to the caller.
	 */
	virtual NxParameterized::Interface* releaseAndReturnNxParameterizedInterface(void)
	{
		NxParameterized::Interface* ret = mParams;
		mParams = NULL;
		release();
		return ret;
	}

	NxParameterized::Interface* getDefaultActorDesc()
	{
		APEX_INVALID_OPERATION("Not yet implemented!");
		return NULL;
	}

	NxParameterized::Interface* getDefaultAssetPreviewDesc()
	{
		APEX_INVALID_OPERATION("Not yet implemented!");
		return NULL;
	}

	virtual NxApexActor* createApexActor(const NxParameterized::Interface& /*parms*/, NxApexScene& /*apexScene*/)
	{
		APEX_INVALID_OPERATION("Not yet implemented!");
		return NULL;
	}

	virtual NxApexAssetPreview* createApexAssetPreview(const NxParameterized::Interface& /*params*/, NxApexAssetPreviewScene* /*previewScene*/)
	{
		APEX_INVALID_OPERATION("Not yet implemented!");
		return NULL;
	}

	virtual bool isValidForActorCreation(const ::NxParameterized::Interface& /*parms*/, NxApexScene& /*apexScene*/) const
	{
		return true; // TODO implement this method
	}

	virtual bool isDirty() const
	{
		return false;
	}

protected:
	virtual void					destroy();

	static NxAuthObjTypeID			mAssetTypeID;
	static const char* 				getClassName()
	{
		return NX_BASIC_IOS_AUTHORING_TYPE_NAME;
	}

	NxResourceList					mIosActorList;

	ModuleBasicIos*					mModule;
	ApexSimpleString				mName;

	BasicIOSAssetParam*				mParams;

	mutable QDSRand					mSRand;
	mutable QDNormRand				mNormRand;

	enum
	{
		UNIFORM,
		NORMAL
	}								mMassDistribType;

	void processParams();

	friend class ModuleBasicIos;
	friend class BasicIosActor;
	friend class BasicIosActorCPU;
	friend class BasicIosActorGPU;
	template <class T_Module, class T_Asset, class T_AssetAuthoring> friend class physx::apex::ApexAuthorableObject;
	friend class BasicIosAuthorableObject;
};

#ifndef WITHOUT_APEX_AUTHORING
class BasicIosAssetAuthoring : public NxBasicIosAssetAuthoring, public ApexAssetAuthoring, public BasicIosAsset
{
public:
	APEX_RW_LOCKABLE_BOILERPLATE

	BasicIosAssetAuthoring(ModuleBasicIos* module, NxResourceList& list);
	BasicIosAssetAuthoring(ModuleBasicIos* module, NxResourceList& list, const char* name);
	BasicIosAssetAuthoring(ModuleBasicIos* module, NxResourceList& list, NxParameterized::Interface* params, const char* name);

	virtual void	release();

	const char* 	getName(void) const
	{
		return BasicIosAsset::getName();
	}
	const char* 	getObjTypeName() const
	{
		return BasicIosAsset::getClassName();
	}
	virtual bool	prepareForPlatform(physx::apex::NxPlatformTag)
	{
		APEX_INVALID_OPERATION("Not Implemented.");
		return false;
	}
	void			setToolString(const char* toolName, const char* toolVersion, PxU32 toolChangelist)
	{
		ApexAssetAuthoring::setToolString(toolName, toolVersion, toolChangelist);
	}

	void			setParticleRadius(physx::PxF32 radius)
	{
		mParams->particleRadius = radius;
	}
	void			setRestDensity(physx::PxF32 density)
	{
		mParams->restDensity = density;
	}
	void			setMaxInjectedParticleCount(physx::PxF32 count)
	{
		mParams->maxInjectedParticleCount = count;
	}
	void			setMaxParticleCount(physx::PxU32 count)
	{
		mParams->maxParticleCount = count;
	}
	void			setParticleMass(physx::PxF32 mass)
	{
		mParams->particleMass.center = mass;
	}

	void			setCollisionGroupName(const char* collisionGroupName);
	void			setCollisionGroupMaskName(const char* collisionGroupMaskName);

	NxParameterized::Interface* getNxParameterized() const
	{
		return (NxParameterized::Interface*)getAssetNxParameterized();
	}
	/**
	 * \brief Releases the ApexAsset but returns the NxParameterized::Interface and *ownership* to the caller.
	 */
	virtual NxParameterized::Interface* releaseAndReturnNxParameterizedInterface(void)
	{
		NxParameterized::Interface* ret = mParams;
		mParams = NULL;
		release();
		return ret;
	}
};
#endif

}
}
} // namespace physx::apex

#endif // BASIC_IOS_ASSET_H
