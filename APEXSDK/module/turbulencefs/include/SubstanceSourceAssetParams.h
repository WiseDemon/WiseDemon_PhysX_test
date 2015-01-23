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
// Created: 2015.01.18 19:26:27

#ifndef HEADER_SubstanceSourceAssetParams_h
#define HEADER_SubstanceSourceAssetParams_h

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
namespace turbulencefs
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace SubstanceSourceAssetParamsNS
{



struct ParametersStruct
{

	physx::PxVec3 position;
	physx::PxF32 averageDensity;
	physx::PxF32 stdDensity;
	NxParameterized::Interface* geometryType;
	NxParameterized::DummyStringStruct fieldSamplerFilterDataName;

};

static const physx::PxU32 checksum[] = { 0xb651712f, 0x02c8f1b4, 0x957de8fb, 0x53307e7c, };

} // namespace SubstanceSourceAssetParamsNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class SubstanceSourceAssetParams : public NxParameterized::NxParameters, public SubstanceSourceAssetParamsNS::ParametersStruct
{
public:
	SubstanceSourceAssetParams(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~SubstanceSourceAssetParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("SubstanceSourceAssetParams");
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
		bits = 8 * sizeof(SubstanceSourceAssetParamsNS::checksum);
		return SubstanceSourceAssetParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const SubstanceSourceAssetParamsNS::ParametersStruct& parameters(void) const
	{
		SubstanceSourceAssetParams* tmpThis = const_cast<SubstanceSourceAssetParams*>(this);
		return *(static_cast<SubstanceSourceAssetParamsNS::ParametersStruct*>(tmpThis));
	}

	SubstanceSourceAssetParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<SubstanceSourceAssetParamsNS::ParametersStruct*>(this));
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

class SubstanceSourceAssetParamsFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(SubstanceSourceAssetParams), SubstanceSourceAssetParams::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, SubstanceSourceAssetParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class SubstanceSourceAssetParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(SubstanceSourceAssetParams)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, SubstanceSourceAssetParams)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, SubstanceSourceAssetParams::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, SubstanceSourceAssetParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class SubstanceSourceAssetParams");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of SubstanceSourceAssetParams here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (SubstanceSourceAssetParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (SubstanceSourceAssetParams::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (SubstanceSourceAssetParams::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (SubstanceSourceAssetParams::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (SubstanceSourceAssetParams::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace turbulencefs
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
