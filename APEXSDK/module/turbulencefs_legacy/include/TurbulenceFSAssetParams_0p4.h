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

#ifndef HEADER_TurbulenceFSAssetParams_0p4_h
#define HEADER_TurbulenceFSAssetParams_0p4_h

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

namespace TurbulenceFSAssetParams_0p4NS
{

struct rangeStructF32_Type;
struct turbulenceRangeStructEnum_Type;
struct LODWeights_Type;
struct HeatParams_Type;
struct DensityParams_Type;
struct NoiseParams_Type;

struct DensityParams_Type
{
	physx::PxF32 diffusionCoef;
};
struct rangeStructF32_Type
{
	physx::PxF32 min;
	physx::PxF32 max;
};
struct NoiseParams_Type
{
	physx::PxF32 noiseStrength;
	physx::PxVec3 noiseSpacePeriod;
	physx::PxF32 noiseTimePeriod;
	physx::PxU32 noiseOctaves;
};
struct HeatParams_Type
{
	physx::PxF32 temperatureBasedForceMultiplier;
	physx::PxF32 ambientTemperature;
	physx::PxVec3 heatForceDirection;
	physx::PxF32 thermalConductivity;
};
struct turbulenceRangeStructEnum_Type
{
	const char* min;
	const char* max;
};
struct LODWeights_Type
{
	physx::PxF32 maxDistance;
	physx::PxF32 distanceWeight;
	physx::PxF32 bias;
	physx::PxF32 benefitBias;
	physx::PxF32 benefitWeight;
};

struct ParametersStruct
{

	turbulenceRangeStructEnum_Type gridXRange;
	turbulenceRangeStructEnum_Type gridYRange;
	turbulenceRangeStructEnum_Type gridZRange;
	physx::PxVec3 gridSizeWorld;
	rangeStructF32_Type updatesPerFrameRange;
	physx::PxF32 fluidVelocityMultiplier;
	physx::PxF32 fluidVelocityClamp;
	physx::PxF32 angularVelocityMultiplier;
	physx::PxF32 angularVelocityClamp;
	physx::PxF32 linearVelocityMultiplier;
	physx::PxF32 linearVelocityClamp;
	physx::PxF32 boundaryFadePercentage;
	physx::PxF32 boundarySizePercentage;
	NxParameterized::DummyStringStruct collisionFilterDataName;
	NxParameterized::DummyStringStruct fieldBoundaryFilterDataName;
	NxParameterized::DummyStringStruct fieldSamplerFilterDataName;
	physx::PxU32 maxCollidingObjects;
	physx::PxU32 maxHeatSources;
	physx::PxU32 maxSubstanceSources;
	physx::PxF32 dragCoeff;
	physx::PxVec3 externalVelocity;
	physx::PxF32 fieldVelocityMultiplier;
	physx::PxF32 fieldVelocityWeight;
	bool useHeat;
	HeatParams_Type heatParams;
	bool useDensity;
	DensityParams_Type densityParams;
	bool isEnabledOptimizedLOD;
	physx::PxF32 customLOD;
	LODWeights_Type lodWeights;
	NoiseParams_Type noiseParams;
	physx::PxF32 dragCoeffForRigidBody;
	physx::PxF32 fluidViscosity;

};

static const physx::PxU32 checksum[] = { 0x3a061dd2, 0xcb94cf6a, 0x91aa4c66, 0xdb4642a5, };

} // namespace TurbulenceFSAssetParams_0p4NS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class TurbulenceFSAssetParams_0p4 : public NxParameterized::NxParameters, public TurbulenceFSAssetParams_0p4NS::ParametersStruct
{
public:
	TurbulenceFSAssetParams_0p4(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~TurbulenceFSAssetParams_0p4();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("TurbulenceFSAssetParams");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)0 << 16) + (physx::PxU32)4;

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
		bits = 8 * sizeof(TurbulenceFSAssetParams_0p4NS::checksum);
		return TurbulenceFSAssetParams_0p4NS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const TurbulenceFSAssetParams_0p4NS::ParametersStruct& parameters(void) const
	{
		TurbulenceFSAssetParams_0p4* tmpThis = const_cast<TurbulenceFSAssetParams_0p4*>(this);
		return *(static_cast<TurbulenceFSAssetParams_0p4NS::ParametersStruct*>(tmpThis));
	}

	TurbulenceFSAssetParams_0p4NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<TurbulenceFSAssetParams_0p4NS::ParametersStruct*>(this));
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

class TurbulenceFSAssetParams_0p4Factory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(TurbulenceFSAssetParams_0p4), TurbulenceFSAssetParams_0p4::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, TurbulenceFSAssetParams_0p4::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class TurbulenceFSAssetParams_0p4");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(TurbulenceFSAssetParams_0p4)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, TurbulenceFSAssetParams_0p4)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, TurbulenceFSAssetParams_0p4::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, TurbulenceFSAssetParams_0p4::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class TurbulenceFSAssetParams_0p4");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of TurbulenceFSAssetParams_0p4 here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (TurbulenceFSAssetParams_0p4*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (TurbulenceFSAssetParams_0p4::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (TurbulenceFSAssetParams_0p4::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (TurbulenceFSAssetParams_0p4::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (TurbulenceFSAssetParams_0p4::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
