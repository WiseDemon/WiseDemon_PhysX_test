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

#ifndef HEADER_EffectPackageFieldSamplerDatabaseParams_h
#define HEADER_EffectPackageFieldSamplerDatabaseParams_h

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

namespace EffectPackageFieldSamplerDatabaseParamsNS
{


struct REF_DynamicArray1D_Type
{
	NxParameterized::Interface** buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};


struct ParametersStruct
{

	REF_DynamicArray1D_Type FieldSamplers;

};

static const physx::PxU32 checksum[] = { 0x9409b01f, 0x0737b86e, 0x6d898480, 0xd7916ba3, };

} // namespace EffectPackageFieldSamplerDatabaseParamsNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class EffectPackageFieldSamplerDatabaseParams : public NxParameterized::NxParameters, public EffectPackageFieldSamplerDatabaseParamsNS::ParametersStruct
{
public:
	EffectPackageFieldSamplerDatabaseParams(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~EffectPackageFieldSamplerDatabaseParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("EffectPackageFieldSamplerDatabaseParams");
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
		bits = 8 * sizeof(EffectPackageFieldSamplerDatabaseParamsNS::checksum);
		return EffectPackageFieldSamplerDatabaseParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const EffectPackageFieldSamplerDatabaseParamsNS::ParametersStruct& parameters(void) const
	{
		EffectPackageFieldSamplerDatabaseParams* tmpThis = const_cast<EffectPackageFieldSamplerDatabaseParams*>(this);
		return *(static_cast<EffectPackageFieldSamplerDatabaseParamsNS::ParametersStruct*>(tmpThis));
	}

	EffectPackageFieldSamplerDatabaseParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<EffectPackageFieldSamplerDatabaseParamsNS::ParametersStruct*>(this));
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

class EffectPackageFieldSamplerDatabaseParamsFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(EffectPackageFieldSamplerDatabaseParams), EffectPackageFieldSamplerDatabaseParams::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, EffectPackageFieldSamplerDatabaseParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class EffectPackageFieldSamplerDatabaseParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(EffectPackageFieldSamplerDatabaseParams)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, EffectPackageFieldSamplerDatabaseParams)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, EffectPackageFieldSamplerDatabaseParams::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, EffectPackageFieldSamplerDatabaseParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class EffectPackageFieldSamplerDatabaseParams");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of EffectPackageFieldSamplerDatabaseParams here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (EffectPackageFieldSamplerDatabaseParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (EffectPackageFieldSamplerDatabaseParams::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (EffectPackageFieldSamplerDatabaseParams::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (EffectPackageFieldSamplerDatabaseParams::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (EffectPackageFieldSamplerDatabaseParams::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace particles
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif