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
// Created: 2015.01.18 19:26:24

#ifndef HEADER_RandomSubtextureModifierParams_h
#define HEADER_RandomSubtextureModifierParams_h

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
namespace iofx
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace RandomSubtextureModifierParamsNS
{



struct ParametersStruct
{

	physx::PxF32 minSubtexture;
	physx::PxF32 maxSubtexture;

};

static const physx::PxU32 checksum[] = { 0x08f8796a, 0xa2e2f9c5, 0x8997cd3a, 0xc27f7e3a, };

} // namespace RandomSubtextureModifierParamsNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class RandomSubtextureModifierParams : public NxParameterized::NxParameters, public RandomSubtextureModifierParamsNS::ParametersStruct
{
public:
	RandomSubtextureModifierParams(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~RandomSubtextureModifierParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("RandomSubtextureModifierParams");
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
		bits = 8 * sizeof(RandomSubtextureModifierParamsNS::checksum);
		return RandomSubtextureModifierParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const RandomSubtextureModifierParamsNS::ParametersStruct& parameters(void) const
	{
		RandomSubtextureModifierParams* tmpThis = const_cast<RandomSubtextureModifierParams*>(this);
		return *(static_cast<RandomSubtextureModifierParamsNS::ParametersStruct*>(tmpThis));
	}

	RandomSubtextureModifierParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<RandomSubtextureModifierParamsNS::ParametersStruct*>(this));
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

class RandomSubtextureModifierParamsFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(RandomSubtextureModifierParams), RandomSubtextureModifierParams::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, RandomSubtextureModifierParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class RandomSubtextureModifierParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(RandomSubtextureModifierParams)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, RandomSubtextureModifierParams)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, RandomSubtextureModifierParams::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, RandomSubtextureModifierParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class RandomSubtextureModifierParams");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of RandomSubtextureModifierParams here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (RandomSubtextureModifierParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (RandomSubtextureModifierParams::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (RandomSubtextureModifierParams::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (RandomSubtextureModifierParams::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (RandomSubtextureModifierParams::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace iofx
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif