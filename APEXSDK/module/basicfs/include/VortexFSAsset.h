/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef __VORTEX_FS_ASSET_H__
#define __VORTEX_FS_ASSET_H__

#include "BasicFSAsset.h"
#include "VortexFSAssetPreview.h"
#include "VortexFSAssetParams.h"
#include "VortexFSActorParams.h"
#include "ApexAuthorableObject.h"

#define NX_VORTEX_FS_AUTHORING_TYPE_NAME "VortexFSAsset"

namespace physx
{
namespace apex
{

class NxRenderMeshAsset;	
	
namespace basicfs
{

class VortexFSActor;

class VortexFSAsset : public BasicFSAsset
{
	friend class BasicFSAssetDummyAuthoring;
public:
	APEX_RW_LOCKABLE_BOILERPLATE

	VortexFSAsset(ModuleBasicFS*, NxResourceList&, const char*);
	VortexFSAsset(ModuleBasicFS*, NxResourceList&, NxParameterized::Interface*, const char*);
	~VortexFSAsset();

	/* NxApexAsset */
	NxAuthObjTypeID			getObjTypeID() const
	{
		return mAssetTypeID;
	}
	const char* 			getObjTypeName() const
	{
		return getClassName();
	}

	/* NxApexInterface */
	virtual void			release()
	{
		mModule->mSdk->releaseAsset(*this);
	}

	// TODO: implement forceLoadAssets
	PxU32					forceLoadAssets()
	{
		return 0;
	}

	NxParameterized::Interface* getAssetNxParameterized() const
	{
		return mParams;
	}

	NxParameterized::Interface* releaseAndReturnNxParameterizedInterface(void)
	{
		NxParameterized::Interface* ret = mParams;
		mParams = NULL;
		release();
		return ret;
	}

	/* NxBasicFSAsset specific methods */
	void                    destroy();

	/**
	* \brief Apply any changes that may been made to the NxParameterized::Interface on this asset.
	*/
	virtual void applyEditingChanges(void)
	{
		APEX_INVALID_OPERATION("Not yet implemented!");
	}

	NxParameterized::Interface* getDefaultActorDesc();
	virtual NxApexActor* createApexActor(const NxParameterized::Interface& /*parms*/, NxApexScene& /*apexScene*/);

	NxVortexFSPreview*	createVortexFSPreview(const NxVortexFSPreviewDesc& desc, NxApexAssetPreviewScene* previewScene);
	NxVortexFSPreview*	createVortexFSPreviewImpl(const NxVortexFSPreviewDesc& desc, VortexFSAsset* TurboAsset, NxApexAssetPreviewScene* previewScene);
	void				releaseVortexFSPreview(NxVortexFSPreview& preview);

	NxParameterized::Interface* getDefaultAssetPreviewDesc();

	virtual NxApexAssetPreview* createApexAssetPreview(const NxParameterized::Interface& /*params*/, NxApexAssetPreviewScene* previewScene);

	virtual bool isValidForActorCreation(const ::NxParameterized::Interface& /*parms*/, NxApexScene& /*apexScene*/) const
	{
		return true; // todo implement this method
	}

	/* Typical asset members */
	static const char* 			getClassName() // return to protected
	{
		return NX_VORTEX_FS_AUTHORING_TYPE_NAME;
	}

protected:

	static NxAuthObjTypeID		mAssetTypeID;

	VortexFSAssetParams*		mParams;
	VortexFSActorParams*		mDefaultActorParams;
	VortexFSPreviewParams*		mDefaultPreviewParams;

	friend class ModuleBasicFS;
	friend class VortexFSActor;
	template <class T_Module, class T_Asset, class T_AssetAuthoring> friend class physx::apex::ApexAuthorableObject;

};

class VortexFSAssetAuthoring : public VortexFSAsset, public ApexAssetAuthoring, public NxBasicFSAssetAuthoring
{
public:
	APEX_RW_LOCKABLE_BOILERPLATE

	/* NxBasicFSAssetAuthoring */
	VortexFSAssetAuthoring(ModuleBasicFS* m, NxResourceList& l) :
		VortexFSAsset(m, l, "VortexFSAssetAuthoring") {}

	VortexFSAssetAuthoring(ModuleBasicFS* m, NxResourceList& l, const char* name) :
		VortexFSAsset(m, l, name) {}

	VortexFSAssetAuthoring(ModuleBasicFS* m, NxResourceList& l, NxParameterized::Interface* params, const char* name) :
		VortexFSAsset(m, l, params, name) {}

	~VortexFSAssetAuthoring() {}
	void                    destroy()
	{
		delete this;
	}

	/* NxApexAssetAuthoring */
	const char* 			getName(void) const
	{
		return VortexFSAsset::getName();
	}
	const char* 			getObjTypeName() const
	{
		return VortexFSAsset::getClassName();
	}
	bool					prepareForPlatform(physx::apex::NxPlatformTag)
	{
		APEX_INVALID_OPERATION("Not Implemented.");
		return false;
	}

	void					setToolString(const char* toolName, const char* toolVersion, PxU32 toolChangelist)
	{
		ApexAssetAuthoring::setToolString(toolName, toolVersion, toolChangelist);
	}

	/* NxApexInterface */
	virtual void			release()
	{
		mModule->mSdk->releaseAssetAuthoring(*this);
	}

	NxParameterized::Interface* getNxParameterized() const
	{
		return VortexFSAsset::getAssetNxParameterized();
	}

	NxParameterized::Interface* releaseAndReturnNxParameterizedInterface(void)
	{
		return VortexFSAsset::releaseAndReturnNxParameterizedInterface();
	}

};

}
}
} // end namespace physx::apex

#endif