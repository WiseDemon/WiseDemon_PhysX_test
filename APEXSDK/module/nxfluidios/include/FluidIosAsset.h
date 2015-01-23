/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef __APEX_PARTICLE_SYSTEM_ASSET_H__
#define __APEX_PARTICLE_SYSTEM_ASSET_H__

#include "NxApexDefs.h"
#if NX_SDK_VERSION_MAJOR == 2

#include "NxFluidIosAsset.h"
#include "NiInstancedObjectSimulation.h"
#include "ApexInterface.h"
#include "ApexSDKHelpers.h"
#include "ApexString.h"
#include "NiResourceProvider.h"
#include "ApexAuthorableObject.h"
#include "NxFluidIosParameters.h"
#include "PsShare.h"
#include "ApexAssetTracker.h"
#include "ApexAssetAuthoring.h"
#include "ApexRWLockable.h"


namespace physx
{
namespace apex
{
namespace nxfluidios
{

class ModuleFluidIos;
class FluidIosActor;

/**
	Optional template for an NxFluid descriptor.
	This defines the parameters for the NxFluid created by the NxFluidIosAsset.
	Some template parameters might be overwritten by the particle system.
*/
class FluidTemplate : public NxFluidDescBase
{
public:
	FluidTemplate()
	{
		setToDefault();
	}

	FluidTemplate&	operator=(const FluidTemplate& src);
};

class FluidIosAsset : public NxFluidIosAsset,
	public NxApexResource,
	public ApexResource,
	public ApexAssetAuthoring,
	public ApexRWLockable
{
	friend class FluidIosAssetDummyAuthoring;
public:
	APEX_RW_LOCKABLE_BOILERPLATE

	FluidIosAsset(ModuleFluidIos* module, NxResourceList& list, const char* name);

	FluidIosAsset(ModuleFluidIos* module,
	              NxResourceList& list,
	              NxParameterized::Interface* params,
	              const char* name);

	~FluidIosAsset();

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
	physx::PxU32					forceLoadAssets()
	{
		return 0;
	}

	NxApexActor*					createIosActor(NxApexScene& scene, NxIofxAsset* iofxAsset);
	void							releaseIosActor(NxApexActor&);
	bool							getSupportsDensity() const;

	// Private API for this module only
	FluidIosActor*                  getIosActorInScene(NxApexScene& scene, bool mesh) const;

	bool							getFluidTemplate(NxFluidDescBase& dest) const;

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

	physx::PxU32					getMaxParticleCount() const
	{
		return mParams->maxParticleCount;
	}
	physx::PxF32					getParticleRadius() const
	{
		if (getSupportsDensity())
		{
			return mParams->particleRadius; //SPH radius
		}
		else
		{
			// CDDM/(0.5 * (1/radius))
			return (2.0f * mParams->collisionDistanceMultiplier * mParams->particleRadius);
		}
	}
	const char* 					getCollisionGroupName() const
	{
		return mParams->collisionGroupName;
	}

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
	};

	NxParameterized::Interface* getDefaultAssetPreviewDesc()
	{
		APEX_INVALID_OPERATION("Not yet implemented!");
		return NULL;
	};

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
		return true; // todo implement this method
	}

	virtual bool isDirty() const
	{
		return false;
	}

	void							internalSetFluidTemplate(const NxFluidDescBase*);
protected:
	virtual void					destroy();

	static NxAuthObjTypeID			mAssetTypeID;
	static const char* 				getClassName()
	{
		return NX_FLUID_IOS_AUTHORING_TYPE_NAME;
	}

	NxResourceList					mPsActorList;
	NxResourceList					mIosActorList;

	ModuleFluidIos*				mModule;
	ApexSimpleString				mName;
	InitTemplate<FluidTemplate>		mFluidTemplate;

	ApexSimpleString				mCollisionGroupName;

	NxFluidIosParameters*	   	mParams;

	friend class ModuleFluidIos;
	friend class FluidIosActor;
	template <class T_Module, class T_Asset, class T_AssetAuthoring> friend class ApexAuthorableObject;
	friend class ParticleSystemAuthorableObject;
};

#ifndef WITHOUT_APEX_AUTHORING
class FluidIosAssetAuthoring : public NxFluidIosAssetAuthoring, public FluidIosAsset
{
public:
	APEX_RW_LOCKABLE_BOILERPLATE

	FluidIosAssetAuthoring(ModuleFluidIos* module, NxResourceList& list) :
		FluidIosAsset(module, list, "FluidIosAssetAuthoring") {}

	FluidIosAssetAuthoring(ModuleFluidIos* module, NxResourceList& list, const char* name) :
		FluidIosAsset(module, list, name) {}

	FluidIosAssetAuthoring(ModuleFluidIos* module, NxResourceList& list, NxParameterized::Interface* params, const char* name) :
		FluidIosAsset(module, list, params, name) {}

	virtual void	release();

	const char* 			getName(void) const
	{
		return FluidIosAsset::getName();
	}
	const char* 	getObjTypeName() const
	{
		return FluidIosAsset::getClassName();
	}
	virtual bool			prepareForPlatform(physx::apex::NxPlatformTag)
	{
		APEX_INVALID_OPERATION("Not Implemented.");
		return false;
	}

	void			setFluidTemplate(const NxFluidDescBase*);

	void			setMaxParticleCount(physx::PxU32 m)
	{
		mParams->maxParticleCount = m;
	}
	void			setParticleRadius(physx::PxF32 r)
	{
		mParams->particleRadius = r;
	}
	void			setCollisionGroupName(const char* n)
	{
		NxParameterized::Handle h(*mParams);
		mParams->getParameterHandle("collisionGroupName", h);
		mParams->setParamString(h, n);
	}

	void setToolString(const char* toolName, const char* toolVersion, PxU32 toolChangelist)
	{
		ApexAssetAuthoring::setToolString(toolName, toolVersion, toolChangelist);
	}

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

#endif // NX_SDK_VERSION_MAJOR == 2
#endif // __APEX_PARTICLE_SYSTEM_ASSET_H__