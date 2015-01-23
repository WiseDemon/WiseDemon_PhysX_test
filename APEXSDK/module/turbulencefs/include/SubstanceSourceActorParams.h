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

#ifndef HEADER_SubstanceSourceActorParams_h
#define HEADER_SubstanceSourceActorParams_h

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

namespace SubstanceSourceActorParamsNS
{



struct ParametersStruct
{

	physx::PxMat34Legacy initialPose;
	physx::PxF32 initialScale;
	physx::PxF32 averageDensity;
	physx::PxF32 stdDensity;
	NxParameterized::Interface* geometryType;
	NxParameterized::DummyStringStruct fieldSamplerFilterDataName;

};

static const physx::PxU32 checksum[] = { 0x9fab21cd, 0xc247be60, 0x78f6efd9, 0x71a5002c, };

} // namespace SubstanceSourceActorParamsNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class SubstanceSourceActorParams : public NxParameterized::NxParameters, public SubstanceSourceActorParamsNS::ParametersStruct
{
public:
	SubstanceSourceActorParams(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~SubstanceSourceActorParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("SubstanceSourceActorParams");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)0 << 16) + (physx::PxU32)0;

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
		bits = 8 * sizeof(SubstanceSourceActorParamsNS::checksum);
		return SubstanceSourceActorParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const SubstanceSourceActorParamsNS::ParametersStruct& parameters(void) const
	{
		SubstanceSourceActorParams* tmpThis = const_cast<SubstanceSourceActorParams*>(this);
		return *(static_cast<SubstanceSourceActorParamsNS::ParametersStruct*>(tmpThis));
	}

	SubstanceSourceActorParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<SubstanceSourceActorParamsNS::ParametersStruct*>(this));
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

class SubstanceSourceActorParamsFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(SubstanceSourceActorParams), SubstanceSourceActorParams::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, SubstanceSourceActorParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class SubstanceSourceActorParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(SubstanceSourceActorParams)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, SubstanceSourceActorParams)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, SubstanceSourceActorParams::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, SubstanceSourceActorParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class SubstanceSourceActorParams");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of SubstanceSourceActorParams here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (SubstanceSourceActorParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (SubstanceSourceActorParams::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (SubstanceSourceActorParams::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (SubstanceSourceActorParams::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (SubstanceSourceActorParams::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace turbulencefs
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif