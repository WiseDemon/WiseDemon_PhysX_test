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

#ifndef HEADER_ScaleByMassModifierParams_h
#define HEADER_ScaleByMassModifierParams_h

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

namespace ScaleByMassModifierParamsNS
{



struct ParametersStruct
{


};

static const physx::PxU32 checksum[] = { 0x0164ba51, 0x109896dc, 0x1c51ccab, 0xc0cebd7a, };

} // namespace ScaleByMassModifierParamsNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class ScaleByMassModifierParams : public NxParameterized::NxParameters, public ScaleByMassModifierParamsNS::ParametersStruct
{
public:
	ScaleByMassModifierParams(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~ScaleByMassModifierParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ScaleByMassModifierParams");
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
		bits = 8 * sizeof(ScaleByMassModifierParamsNS::checksum);
		return ScaleByMassModifierParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const ScaleByMassModifierParamsNS::ParametersStruct& parameters(void) const
	{
		ScaleByMassModifierParams* tmpThis = const_cast<ScaleByMassModifierParams*>(this);
		return *(static_cast<ScaleByMassModifierParamsNS::ParametersStruct*>(tmpThis));
	}

	ScaleByMassModifierParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ScaleByMassModifierParamsNS::ParametersStruct*>(this));
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

class ScaleByMassModifierParamsFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ScaleByMassModifierParams), ScaleByMassModifierParams::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, ScaleByMassModifierParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ScaleByMassModifierParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ScaleByMassModifierParams)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, ScaleByMassModifierParams)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, ScaleByMassModifierParams::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, ScaleByMassModifierParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ScaleByMassModifierParams");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of ScaleByMassModifierParams here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ScaleByMassModifierParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ScaleByMassModifierParams::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (ScaleByMassModifierParams::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (ScaleByMassModifierParams::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (ScaleByMassModifierParams::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace iofx
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
