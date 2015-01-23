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

#ifndef HEADER_ScaleVsLife3DModifierParams_h
#define HEADER_ScaleVsLife3DModifierParams_h

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

namespace ScaleVsLife3DModifierParamsNS
{

struct scaleLifeStruct_Type;

struct scaleLifeStruct_DynamicArray1D_Type
{
	scaleLifeStruct_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct scaleLifeStruct_Type
{
	physx::PxF32 lifeRemaining;
	physx::PxVec3 scale;
};

struct ParametersStruct
{

	scaleLifeStruct_DynamicArray1D_Type controlPoints;

};

static const physx::PxU32 checksum[] = { 0xbaddcfda, 0x2f4deda9, 0x2c23286e, 0xf19659fd, };

} // namespace ScaleVsLife3DModifierParamsNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class ScaleVsLife3DModifierParams : public NxParameterized::NxParameters, public ScaleVsLife3DModifierParamsNS::ParametersStruct
{
public:
	ScaleVsLife3DModifierParams(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~ScaleVsLife3DModifierParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ScaleVsLife3DModifierParams");
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
		bits = 8 * sizeof(ScaleVsLife3DModifierParamsNS::checksum);
		return ScaleVsLife3DModifierParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const ScaleVsLife3DModifierParamsNS::ParametersStruct& parameters(void) const
	{
		ScaleVsLife3DModifierParams* tmpThis = const_cast<ScaleVsLife3DModifierParams*>(this);
		return *(static_cast<ScaleVsLife3DModifierParamsNS::ParametersStruct*>(tmpThis));
	}

	ScaleVsLife3DModifierParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ScaleVsLife3DModifierParamsNS::ParametersStruct*>(this));
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

class ScaleVsLife3DModifierParamsFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ScaleVsLife3DModifierParams), ScaleVsLife3DModifierParams::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, ScaleVsLife3DModifierParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ScaleVsLife3DModifierParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ScaleVsLife3DModifierParams)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, ScaleVsLife3DModifierParams)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, ScaleVsLife3DModifierParams::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, ScaleVsLife3DModifierParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ScaleVsLife3DModifierParams");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of ScaleVsLife3DModifierParams here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ScaleVsLife3DModifierParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ScaleVsLife3DModifierParams::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (ScaleVsLife3DModifierParams::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (ScaleVsLife3DModifierParams::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (ScaleVsLife3DModifierParams::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace iofx
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif