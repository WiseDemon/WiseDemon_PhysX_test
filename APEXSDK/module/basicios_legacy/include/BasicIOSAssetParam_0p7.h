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
// Created: 2015.01.18 19:26:28

#ifndef HEADER_BasicIOSAssetParam_0p7_h
#define HEADER_BasicIOSAssetParam_0p7_h

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

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace BasicIOSAssetParam_0p7NS
{

struct RandomF32_Type;

struct RandomF32_Type
{
	physx::PxF32 center;
	physx::PxF32 spread;
	const char* type;
};

struct ParametersStruct
{

	physx::PxF32 restDensity;
	physx::PxF32 particleRadius;
	physx::PxU32 maxParticleCount;
	physx::PxF32 maxInjectedParticleCount;
	physx::PxU32 maxCollidingObjects;
	physx::PxF32 sceneGravityScale;
	physx::PxVec3 externalAcceleration;
	RandomF32_Type particleMass;
	NxParameterized::DummyStringStruct collisionFilterDataName;
	NxParameterized::DummyStringStruct fieldSamplerFilterDataName;
	bool staticCollision;
	physx::PxF32 restitutionForStaticShapes;
	bool dynamicCollision;
	physx::PxF32 restitutionForDynamicShapes;
	physx::PxF32 collisionDistanceMultiplier;
	physx::PxF32 collisionThreshold;
	bool collisionWithConvex;
	bool collisionWithTriangleMesh;

};

static const physx::PxU32 checksum[] = { 0xd08a68f8, 0xdfb2b2cb, 0x04b13ed2, 0x8ac33237, };

} // namespace BasicIOSAssetParam_0p7NS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class BasicIOSAssetParam_0p7 : public NxParameterized::NxParameters, public BasicIOSAssetParam_0p7NS::ParametersStruct
{
public:
	BasicIOSAssetParam_0p7(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~BasicIOSAssetParam_0p7();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("BasicIOSAssetParam");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)0 << 16) + (physx::PxU32)7;

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
		bits = 8 * sizeof(BasicIOSAssetParam_0p7NS::checksum);
		return BasicIOSAssetParam_0p7NS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const BasicIOSAssetParam_0p7NS::ParametersStruct& parameters(void) const
	{
		BasicIOSAssetParam_0p7* tmpThis = const_cast<BasicIOSAssetParam_0p7*>(this);
		return *(static_cast<BasicIOSAssetParam_0p7NS::ParametersStruct*>(tmpThis));
	}

	BasicIOSAssetParam_0p7NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<BasicIOSAssetParam_0p7NS::ParametersStruct*>(this));
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

class BasicIOSAssetParam_0p7Factory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(BasicIOSAssetParam_0p7), BasicIOSAssetParam_0p7::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, BasicIOSAssetParam_0p7::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class BasicIOSAssetParam_0p7");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(BasicIOSAssetParam_0p7)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, BasicIOSAssetParam_0p7)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, BasicIOSAssetParam_0p7::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, BasicIOSAssetParam_0p7::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class BasicIOSAssetParam_0p7");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of BasicIOSAssetParam_0p7 here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (BasicIOSAssetParam_0p7*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (BasicIOSAssetParam_0p7::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (BasicIOSAssetParam_0p7::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (BasicIOSAssetParam_0p7::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (BasicIOSAssetParam_0p7::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
