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

#ifndef HEADER_NxFluidIosParameters_h
#define HEADER_NxFluidIosParameters_h

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
namespace nxfluidios
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace NxFluidIosParametersNS
{



struct ParametersStruct
{

	physx::PxU32 maxParticleCount;
	physx::PxF32 particleRadius;
	physx::PxU32 reserveParticleCount;
	physx::PxF32 restDensity;
	physx::PxF32 kernelRadiusMultiplier;
	physx::PxF32 motionLimitMultiplier;
	physx::PxU32 packetSizeMultiplier;
	physx::PxF32 stiffness;
	physx::PxF32 viscosity;
	physx::PxF32 damping;
	physx::PxF32 fadeInTime;
	physx::PxVec3 externalAcceleration;
	physx::PxF32 collisionResponseCoefficient;
	const char* simulationMethod;
	bool staticCollision;
	bool dynamicCollision;
	bool visualization;
	bool disableGravity;
	bool twoWayCollision;
	bool simulationEnabled;
	bool useGPU;
	bool priorityMode;
	bool projectedToPlane;
	physx::PxF32 staticFrictionForStaticShapes;
	physx::PxF32 staticFrictionForDynamicShapes;
	physx::PxF32 restitutionForStaticShapes;
	physx::PxF32 dynamicFrictionForStaticShapes;
	physx::PxF32 attractionForStaticShapes;
	physx::PxF32 restitutionForDynamicShapes;
	physx::PxF32 dynamicFrictionForDynamicShapes;
	physx::PxF32 attractionForDynamicShapes;
	physx::PxF32 surfaceTension;
	NxParameterized::DummyStringStruct collisionGroupName;
	NxParameterized::DummyStringStruct forcefieldMaterialName;
	physx::PxF32 collisionDistanceMultiplier;

};

static const physx::PxU32 checksum[] = { 0x9f7b84d0, 0xd6f8328f, 0x42a86f91, 0x761a1c90, };

} // namespace NxFluidIosParametersNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class NxFluidIosParameters : public NxParameterized::NxParameters, public NxFluidIosParametersNS::ParametersStruct
{
public:
	NxFluidIosParameters(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~NxFluidIosParameters();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("NxFluidIosParameters");
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
		bits = 8 * sizeof(NxFluidIosParametersNS::checksum);
		return NxFluidIosParametersNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const NxFluidIosParametersNS::ParametersStruct& parameters(void) const
	{
		NxFluidIosParameters* tmpThis = const_cast<NxFluidIosParameters*>(this);
		return *(static_cast<NxFluidIosParametersNS::ParametersStruct*>(tmpThis));
	}

	NxFluidIosParametersNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<NxFluidIosParametersNS::ParametersStruct*>(this));
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

class NxFluidIosParametersFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(NxFluidIosParameters), NxFluidIosParameters::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, NxFluidIosParameters::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class NxFluidIosParameters");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(NxFluidIosParameters)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, NxFluidIosParameters)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, NxFluidIosParameters::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, NxFluidIosParameters::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class NxFluidIosParameters");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of NxFluidIosParameters here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (NxFluidIosParameters*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (NxFluidIosParameters::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (NxFluidIosParameters::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (NxFluidIosParameters::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (NxFluidIosParameters::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace nxfluidios
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
