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

#ifndef HEADER_VortexFieldSamplerEffect_h
#define HEADER_VortexFieldSamplerEffect_h

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

namespace VortexFieldSamplerEffectNS
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
	NxParameterized::Interface* VortexFieldSampler;

};

static const physx::PxU32 checksum[] = { 0x2be885a4, 0xf50fd36f, 0xe78facab, 0xc365bd58, };

} // namespace VortexFieldSamplerEffectNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class VortexFieldSamplerEffect : public NxParameterized::NxParameters, public VortexFieldSamplerEffectNS::ParametersStruct
{
public:
	VortexFieldSamplerEffect(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~VortexFieldSamplerEffect();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("VortexFieldSamplerEffect");
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
		bits = 8 * sizeof(VortexFieldSamplerEffectNS::checksum);
		return VortexFieldSamplerEffectNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const VortexFieldSamplerEffectNS::ParametersStruct& parameters(void) const
	{
		VortexFieldSamplerEffect* tmpThis = const_cast<VortexFieldSamplerEffect*>(this);
		return *(static_cast<VortexFieldSamplerEffectNS::ParametersStruct*>(tmpThis));
	}

	VortexFieldSamplerEffectNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<VortexFieldSamplerEffectNS::ParametersStruct*>(this));
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

class VortexFieldSamplerEffectFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(VortexFieldSamplerEffect), VortexFieldSamplerEffect::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, VortexFieldSamplerEffect::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class VortexFieldSamplerEffect");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(VortexFieldSamplerEffect)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, VortexFieldSamplerEffect)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, VortexFieldSamplerEffect::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, VortexFieldSamplerEffect::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class VortexFieldSamplerEffect");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of VortexFieldSamplerEffect here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (VortexFieldSamplerEffect*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (VortexFieldSamplerEffect::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (VortexFieldSamplerEffect::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (VortexFieldSamplerEffect::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (VortexFieldSamplerEffect::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace particles
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
