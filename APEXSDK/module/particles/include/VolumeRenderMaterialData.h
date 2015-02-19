/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


// This file was generated by NxParameterized/scripts/GenParameterized.pl
// Created: 2015.01.18 19:26:25

#ifndef HEADER_VolumeRenderMaterialData_h
#define HEADER_VolumeRenderMaterialData_h

#include "NxParametersTypes.h"

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
#include "NxParameterized.h"
#include "NxParameters.h"
#include "NxParameterizedTraits.h"
#include "NxTraitsInternal.h"
#endif

namespace physx
{
namespace apex
{
namespace particles
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace VolumeRenderMaterialDataNS
{

struct colorLifeStruct_Type;

struct colorLifeStruct_DynamicArray1D_Type
{
	colorLifeStruct_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct colorLifeStruct_Type
{
	physx::PxF32 density;
	physx::PxVec4 color;
};

struct ParametersStruct
{

	NxParameterized::DummyStringStruct Name;
	NxParameterized::DummyStringStruct ApplicationMaterialName;
	NxParameterized::DummyStringStruct UserProperties;
	const char* RenderMode;
	const char* RenderMethod;
	const char* ResolutionScale;
	const char* FillMode;
	bool GenerateShadows;
	bool BlurShadows;
	bool GenerateMipmaps;
	bool EnableStencilOpt;
	physx::PxF32 StepScale;
	physx::PxF32 Density;
	physx::PxF32 EdgeFade;
	physx::PxF32 OpacityThreshold;
	physx::PxF32 RayJitter;
	physx::PxF32 IsoValue;
	physx::PxF32 IsoValueSign;
	physx::PxU32 ShadowSamples;
	physx::PxF32 ShadowDistance;
	physx::PxF32 ShadowDensity;
	physx::PxF32 ShadowJitter;
	physx::PxF32 ShadowAmount;
	physx::PxVec3 LightDir;
	physx::PxVec4 LightColor;
	physx::PxF32 BlockEmptyThreshold;
	bool ReadDepth;
	physx::PxF32 ColorMapScale;
	physx::PxF32 ColorMapOffset;
	colorLifeStruct_DynamicArray1D_Type ColorMap;
	physx::PxF32 TextureRangeMin;
	physx::PxF32 TextureRangeMax;

};

static const physx::PxU32 checksum[] = { 0xfb381de2, 0xf2cfee66, 0x5b5fbef9, 0x9199ccee, };

} // namespace VolumeRenderMaterialDataNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class VolumeRenderMaterialData : public NxParameterized::NxParameters, public VolumeRenderMaterialDataNS::ParametersStruct
{
public:
	VolumeRenderMaterialData(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~VolumeRenderMaterialData();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("VolumeRenderMaterialData");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)0 << 16) + (physx::PxU32)1;

	static physx::PxU32 staticVersion(void)
	{
		return ClassVersion;
	}

	physx::PxU32 version(void) const
	{
		return(staticVersion());
	}

	static const physx::PxU32 ClassAlignment = 8;

	static const physx::PxU32* staticChecksum(physx::PxU32& bits)
	{
		bits = 8 * sizeof(VolumeRenderMaterialDataNS::checksum);
		return VolumeRenderMaterialDataNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const VolumeRenderMaterialDataNS::ParametersStruct& parameters(void) const
	{
		VolumeRenderMaterialData* tmpThis = const_cast<VolumeRenderMaterialData*>(this);
		return *(static_cast<VolumeRenderMaterialDataNS::ParametersStruct*>(tmpThis));
	}

	VolumeRenderMaterialDataNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<VolumeRenderMaterialDataNS::ParametersStruct*>(this));
	}

	virtual NxParameterized::ErrorType getParameterHandle(const char* long_name, NxParameterized::Handle& handle) const;
	virtual NxParameterized::ErrorType getParameterHandle(const char* long_name, NxParameterized::Handle& handle);

	void initDefaults(void);

protected:

	virtual const NxParameterized::DefinitionImpl* getParameterDefinitionTree(void);
	virtual const NxParameterized::DefinitionImpl* getParameterDefinitionTree(void) const;


	virtual void getVarPtr(const NxParameterized::Handle& handle, void*& ptr, size_t& offset) const;

private:

	void buildTree(void);
	void initDynamicArrays(void);
	void initStrings(void);
	void initReferences(void);
	void freeDynamicArrays(void);
	void freeStrings(void);
	void freeReferences(void);

	static bool mBuiltFlag;
	static NxParameterized::MutexType mBuiltFlagMutex;
};

class VolumeRenderMaterialDataFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(VolumeRenderMaterialData), VolumeRenderMaterialData::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, VolumeRenderMaterialData::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class VolumeRenderMaterialData");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(VolumeRenderMaterialData)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, VolumeRenderMaterialData)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, VolumeRenderMaterialData::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, VolumeRenderMaterialData::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class VolumeRenderMaterialData");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of VolumeRenderMaterialData here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (VolumeRenderMaterialData*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (VolumeRenderMaterialData::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (VolumeRenderMaterialData::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (VolumeRenderMaterialData::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (VolumeRenderMaterialData::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace particles
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
