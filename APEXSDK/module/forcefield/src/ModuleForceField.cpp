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
#include "ModuleForceField.h"
#include "ForceFieldScene.h"
#include "ForceFieldAsset.h"
#include "NiApexScene.h"
#include "PxMemoryBuffer.h"
#include "ModulePerfScope.h"
#include "NiModuleFieldSampler.h"
using namespace forcefield;
#endif

#include "NxApex.h"
#include "NiApexSDK.h"
#include "PsShare.h"

#include "NxLock.h"

namespace physx
{
namespace apex
{

#if defined(_USRDLL)

/* Modules don't have to link against the framework, they keep their own */
NiApexSDK* gApexSdk = 0;
NxApexSDK* NxGetApexSDK()
{
	return gApexSdk;
}
NiApexSDK* NiGetApexSDK()
{
	return gApexSdk;
}

NXAPEX_API NxModule*  NX_CALL_CONV createModule(
    NiApexSDK* inSdk,
    NiModule** niRef,
    physx::PxU32 APEXsdkVersion,
    physx::PxU32 PhysXsdkVersion,
    NxApexCreateError* errorCode)
{
	if (APEXsdkVersion != NX_APEX_SDK_VERSION)
	{
		if (errorCode)
		{
			*errorCode = APEX_CE_WRONG_VERSION;
		}
		return NULL;
	}

	if (PhysXsdkVersion != NX_PHYSICS_SDK_VERSION)
	{
		if (errorCode)
		{
			*errorCode = APEX_CE_WRONG_VERSION;
		}
		return NULL;
	}

#if NX_SDK_VERSION_NUMBER >= MIN_PHYSX_SDK_VERSION_REQUIRED
	gApexSdk = inSdk;
	APEX_INIT_FOUNDATION();
	initModuleProfiling(inSdk, "ForceField");
	ModuleForceField* impl = PX_NEW(ModuleForceField)(inSdk);
	*niRef  = (NiModule*) impl;
	return (NxModule*) impl;
#else // NX_SDK_VERSION_NUMBER >= MIN_PHYSX_SDK_VERSION_REQUIRED
	if (errorCode != NULL)
	{
		*errorCode = APEX_CE_WRONG_VERSION;
	}

	PX_UNUSED(niRef);
	PX_UNUSED(inSdk);
	return NULL; // Force field Module can only compile against MIN_PHYSX_SDK_VERSION_REQUIRED and above
#endif // NX_SDK_VERSION_NUMBER >= MIN_PHYSX_SDK_VERSION_REQUIRED
}

#else
/* Statically linking entry function */
void instantiateModuleForceField()
{
#if NX_SDK_VERSION_NUMBER >= MIN_PHYSX_SDK_VERSION_REQUIRED
	NiApexSDK* sdk = NiGetApexSDK();
	initModuleProfiling(sdk, "ForceField");
	forcefield::ModuleForceField* impl = PX_NEW(forcefield::ModuleForceField)(sdk);
	sdk->registerExternalModule((NxModule*) impl, (NiModule*) impl);
#endif
}
#endif // `defined(_USRDLL)

namespace forcefield
{
/* === ModuleForceField Implementation === */

#if NX_SDK_VERSION_NUMBER >= MIN_PHYSX_SDK_VERSION_REQUIRED

NxAuthObjTypeID ForceFieldAsset::mAssetTypeID;  // Static class member of ForceFieldAsset
#ifdef WITHOUT_APEX_AUTHORING

class ForceFieldAssetDummyAuthoring : public NxApexAssetAuthoring, public UserAllocated
{
public:
	ForceFieldAssetDummyAuthoring(ModuleForceField* module, NxResourceList& list, NxParameterized::Interface* params, const char* name)
	{
		PX_UNUSED(module);
		PX_UNUSED(list);
		PX_UNUSED(params);
		PX_UNUSED(name);
	}

	ForceFieldAssetDummyAuthoring(ModuleForceField* module, NxResourceList& list, const char* name)
	{
		PX_UNUSED(module);
		PX_UNUSED(list);
		PX_UNUSED(name);
	}

	ForceFieldAssetDummyAuthoring(ModuleForceField* module, NxResourceList& list)
	{
		PX_UNUSED(module);
		PX_UNUSED(list);
	}

	virtual void setToolString(const char* /*toolName*/, const char* /*toolVersion*/, PxU32 /*toolChangelist*/)
	{

	}


	virtual void release()
	{
		destroy();
	}

	// internal
	void destroy()
	{
		delete this;
	}

	const char* getName(void) const
	{
		return NULL;
	}

	/**
	* \brief Returns the name of this APEX authorable object type
	*/
	virtual const char* getObjTypeName() const
	{
		return ForceFieldAsset::getClassName();
	}

	/**
	 * \brief Prepares a fully authored Asset Authoring object for a specified platform
	*/
	virtual bool prepareForPlatform(physx::apex::NxPlatformTag)
	{
		PX_ASSERT(0);
		return false;
	}

	/**
	* \brief Save asset's NxParameterized interface, may return NULL
	*/
	virtual NxParameterized::Interface* getNxParameterized()
	{
		PX_ASSERT(0);
		return NULL;
	}

	virtual NxParameterized::Interface* releaseAndReturnNxParameterizedInterface(void)
	{
		PX_ALWAYS_ASSERT();
		return NULL;
	}
};

typedef ApexAuthorableObject<ModuleForceField, ForceFieldAsset, ForceFieldAssetDummyAuthoring> ForceFieldAO;

#else
typedef ApexAuthorableObject<ModuleForceField, ForceFieldAsset, ForceFieldAssetAuthoring> ForceFieldAO;
#endif

ModuleForceField::ModuleForceField(NiApexSDK* inSdk)
{
	name = "ForceField";
	mSdk = inSdk;
	mApiProxy = this;
	mModuleParams = NULL;
	mFieldSamplerModule = NULL;

	/* Register asset type and create a namespace for its assets */
	const char* pName = ForceFieldAssetParams::staticClassName();
	ForceFieldAO* eAO = PX_NEW(ForceFieldAO)(this, mAuthorableObjects, pName);
	ForceFieldAsset::mAssetTypeID = eAO->getResID();

	/* Register the NxParameterized factories */
	NxParameterized::Traits* traits = mSdk->getParameterizedTraits();
#	define PARAM_CLASS(clas) PARAM_CLASS_REGISTER_FACTORY(traits, clas)
#	include "ForcefieldParamClasses.inc"

	registerLODParameter("Radius", NxRange<physx::PxU32>(1, 10));
}

ModuleForceField::~ModuleForceField()
{
	releaseModuleProfiling();
}

void ModuleForceField::destroy()
{
	// release the NxParameterized factory
	NxParameterized::Traits* traits = mSdk->getParameterizedTraits();

	if (mModuleParams)
	{
		mModuleParams->destroy();
		mModuleParams = NULL;
	}

	Module::destroy();
	delete this;

	if (traits)
	{
#		define PARAM_CLASS(clas) PARAM_CLASS_REMOVE_FACTORY(traits, clas)
#		include "ForcefieldParamClasses.inc"
	}
}

NxParameterized::Interface* ModuleForceField::getDefaultModuleDesc()
{
	NxParameterized::Traits* traits = mSdk->getParameterizedTraits();

	if (!mModuleParams)
	{
		mModuleParams = DYNAMIC_CAST(ForceFieldModuleParams*)
		                (traits->createNxParameterized("ForceFieldModuleParams"));
		PX_ASSERT(mModuleParams);
	}
	else
	{
		mModuleParams->initDefaults();
	}

	return mModuleParams;
}

void ModuleForceField::init(const NxModuleForceFieldDesc& expDesc)
{
	PX_PROFILER_PERF_SCOPE("ForceFieldModuleInit");  // profile this function
	mModuleValue = expDesc.moduleValue;
}

NxAuthObjTypeID ModuleForceField::getForceFieldAssetTypeID() const
{
	return ForceFieldAsset::mAssetTypeID;
}
NxAuthObjTypeID ModuleForceField::getModuleID() const
{
	return ForceFieldAsset::mAssetTypeID;
}


/* == ForceField Scene methods == */
NiModuleScene* ModuleForceField::createNiModuleScene(NiApexScene& scene, NiApexRenderDebug* renderDebug)
{
#if defined(APEX_CUDA_SUPPORT)
	NX_READ_LOCK(scene);
	if (scene.getTaskManager()->getGpuDispatcher())
	{
		return PX_NEW(ForceFieldSceneGPU)(*this, scene, renderDebug, mForceFieldScenes);
	}
	else
#endif
		return PX_NEW(ForceFieldSceneCPU)(*this, scene, renderDebug, mForceFieldScenes);
}

void ModuleForceField::releaseNiModuleScene(NiModuleScene& scene)
{
	ForceFieldScene* es = DYNAMIC_CAST(ForceFieldScene*)(&scene);
	es->destroy();
}

physx::PxU32 ModuleForceField::forceLoadAssets()
{
	physx::PxU32 loadedAssetCount = 0;
	for (physx::PxU32 i = 0; i < mAuthorableObjects.getSize(); i++)
	{
		NiApexAuthorableObject* ao = static_cast<NiApexAuthorableObject*>(mAuthorableObjects.getResource(i));
		loadedAssetCount += ao->forceLoadAssets();
	}
	return loadedAssetCount;
}

ForceFieldScene* ModuleForceField::getForceFieldScene(const NxApexScene& apexScene)
{
	for (physx::PxU32 i = 0 ; i < mForceFieldScenes.getSize() ; i++)
	{
		ForceFieldScene* es = DYNAMIC_CAST(ForceFieldScene*)(mForceFieldScenes.getResource(i));
		if (es->mApexScene == &apexScene)
		{
			return es;
		}
	}

	PX_ASSERT(!"Unable to locate an appropriate ForceFieldScene");
	return NULL;
}

NxApexRenderableIterator* ModuleForceField::createRenderableIterator(const NxApexScene& apexScene)
{
	ForceFieldScene* es = getForceFieldScene(apexScene);
	if (es)
	{
		return es->createRenderableIterator();
	}

	return NULL;
}

NiModuleFieldSampler* ModuleForceField::getNiModuleFieldSampler()
{
	if (!mFieldSamplerModule)
	{
		NiModule* nim = mSdk->getNiModuleByName("FieldSampler");
		if (nim)
		{
			mFieldSamplerModule = DYNAMIC_CAST(NiModuleFieldSampler*)(nim);
		}
	}
	return mFieldSamplerModule;
}

#endif // NX_SDK_VERSION_NUMBER >= MIN_PHYSX_SDK_VERSION_REQUIRED

}
}
} // end namespace physx::apex