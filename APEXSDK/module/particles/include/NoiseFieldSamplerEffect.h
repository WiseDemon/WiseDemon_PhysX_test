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

#ifndef HEADER_NoiseFieldSamplerEffect_h
#define HEADER_NoiseFieldSamplerEffect_h

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

namespace NoiseFieldSamplerEffectNS
{

struct TranslateObject_Type;
struct OrientObject_Type;
struct ControlPoint_Type;
struct EffectPath_Type;
struct EffectProperties_Type;

struct TRANSFORM_DynamicArray1D_Type
{
	physx::PxTransform* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct ControlPoint_DynamicArray1D_Type
{
	ControlPoint_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct TranslateObject_Type
{
	physx::PxF32 TranslateX;
	physx::PxF32 TranslateY;
	physx::PxF32 TranslateZ;
};
struct ControlPoint_Type
{
	physx::PxF32 x;
	physx::PxF32 y;
};
struct OrientObject_Type
{
	physx::PxF32 RotateX;
	physx::PxF32 RotateY;
	physx::PxF32 RotateZ;
};
struct EffectPath_Type
{
	const char* PlaybackMode;
	physx::PxF32 PathDuration;
	physx::PxU32 LoopIndex;
	TRANSFORM_DynamicArray1D_Type ControlPoints;
	ControlPoint_DynamicArray1D_Type Scale;
	ControlPoint_DynamicArray1D_Type Speed;
};
struct EffectProperties_Type
{
	NxParameterized::DummyStringStruct UserString;
	bool Enable;
	TranslateObject_Type Position;
	OrientObject_Type Orientation;
	physx::PxF32 InitialDelayTime;
	physx::PxF32 Duration;
	physx::PxU32 RepeatCount;
	physx::PxF32 RepeatDelay;
	physx::PxF32 RandomizeRepeatTime;
	EffectPath_Type Path;
};

struct ParametersStruct
{

	EffectProperties_Type EffectProperties;
	NxParameterized::Interface* NoiseFieldSampler;

};

static const physx::PxU32 checksum[] = { 0x5618cee8, 0xe4396e4b, 0x83c38fec, 0x332388c5, };

} // namespace NoiseFieldSamplerEffectNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class NoiseFieldSamplerEffect : public NxParameterized::NxParameters, public NoiseFieldSamplerEffectNS::ParametersStruct
{
public:
	NoiseFieldSamplerEffect(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~NoiseFieldSamplerEffect();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("NoiseFieldSamplerEffect");
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
		bits = 8 * sizeof(NoiseFieldSamplerEffectNS::checksum);
		return NoiseFieldSamplerEffectNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const NoiseFieldSamplerEffectNS::ParametersStruct& parameters(void) const
	{
		NoiseFieldSamplerEffect* tmpThis = const_cast<NoiseFieldSamplerEffect*>(this);
		return *(static_cast<NoiseFieldSamplerEffectNS::ParametersStruct*>(tmpThis));
	}

	NoiseFieldSamplerEffectNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<NoiseFieldSamplerEffectNS::ParametersStruct*>(this));
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

class NoiseFieldSamplerEffectFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(NoiseFieldSamplerEffect), NoiseFieldSamplerEffect::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, NoiseFieldSamplerEffect::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class NoiseFieldSamplerEffect");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(NoiseFieldSamplerEffect)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, NoiseFieldSamplerEffect)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, NoiseFieldSamplerEffect::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, NoiseFieldSamplerEffect::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class NoiseFieldSamplerEffect");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of NoiseFieldSamplerEffect here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (NoiseFieldSamplerEffect*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (NoiseFieldSamplerEffect::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (NoiseFieldSamplerEffect::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (NoiseFieldSamplerEffect::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (NoiseFieldSamplerEffect::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace particles
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
