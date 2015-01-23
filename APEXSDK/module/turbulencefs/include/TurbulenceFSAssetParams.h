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

#ifndef HEADER_TurbulenceFSAssetParams_h
#define HEADER_TurbulenceFSAssetParams_h

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

namespace TurbulenceFSAssetParamsNS
{

struct rangeStructF32_Type;
struct turbulenceRangeStructEnum_Type;
struct LODWeights_Type;
struct HeatParams_Type;
struct DensityParams_Type;
struct NoiseParams_Type;
struct FlameParams_Type;

struct turbulenceRangeStructEnum_Type
{
	const char* min;
	const char* max;
};
struct FlameParams_Type
{
	physx::PxF32 IgnitionTemp;
	physx::PxF32 MaxIgnitionTemp;
	physx::PxF32 ReactionSpeed;
	physx::PxF32 HeatReleased;
	physx::PxF32 DensityEmission;
	physx::PxF32 FuelInefficiency;
	physx::PxF32 Expansion;
	physx::PxF32 Cooling;
	physx::PxF32 Buoyancy;
	physx::PxVec3 BuoyancyUpVector;
	physx::PxF32 RoomTemperature;
	physx::PxVec4 Dissipation;
	physx::PxU32 ResolutionMultiplier;
};
struct LODWeights_Type
{
	physx::PxF32 maxDistance;
	physx::PxF32 distanceWeight;
	physx::PxF32 bias;
	physx::PxF32 benefitBias;
	physx::PxF32 benefitWeight;
};
struct rangeStructF32_Type
{
	physx::PxF32 min;
	physx::PxF32 max;
};
struct DensityParams_Type
{
	physx::PxF32 diffusionCoef;
	physx::PxF32 densityFieldFade;
	physx::PxU32 densityGridMultiplier;
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

struct ParametersStruct
{

	turbulenceRangeStructEnum_Type gridXRange;
	turbulenceRangeStructEnum_Type gridYRange;
	turbulenceRangeStructEnum_Type gridZRange;
	physx::PxVec3 gridSizeWorld;
	rangeStructF32_Type updatesPerFrameRange;
	physx::PxF32 angularVelocityMultiplier;
	physx::PxF32 angularVelocityClamp;
	physx::PxF32 linearVelocityMultiplier;
	physx::PxF32 linearVelocityClamp;
	physx::PxF32 velocityFieldFadeTime;
	physx::PxF32 velocityFieldFadeDelay;
	physx::PxF32 velocityFieldFadeIntensity;
	physx::PxF32 boundaryFadePercentage;
	physx::PxF32 boundarySizePercentage;
	NxParameterized::DummyStringStruct collisionFilterDataName;
	NxParameterized::DummyStringStruct fieldBoundaryFilterDataName;
	NxParameterized::DummyStringStruct fieldSamplerFilterDataName;
	physx::PxU32 maxCollidingObjects;
	physx::PxU32 maxVelocitySources;
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
	NxParameterized::Interface* volumeRenderMaterialName;
	bool useFlame;
	FlameParams_Type flameParams;
	const char* solverAccuracy;

};

static const physx::PxU32 checksum[] = { 0xff4e345f, 0x4753fc4d, 0x08d9bcae, 0x07116ddc, };

} // namespace TurbulenceFSAssetParamsNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class TurbulenceFSAssetParams : public NxParameterized::NxParameters, public TurbulenceFSAssetParamsNS::ParametersStruct
{
public:
	TurbulenceFSAssetParams(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~TurbulenceFSAssetParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("TurbulenceFSAssetParams");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)1 << 16) + (physx::PxU32)4;

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
		bits = 8 * sizeof(TurbulenceFSAssetParamsNS::checksum);
		return TurbulenceFSAssetParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const TurbulenceFSAssetParamsNS::ParametersStruct& parameters(void) const
	{
		TurbulenceFSAssetParams* tmpThis = const_cast<TurbulenceFSAssetParams*>(this);
		return *(static_cast<TurbulenceFSAssetParamsNS::ParametersStruct*>(tmpThis));
	}

	TurbulenceFSAssetParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<TurbulenceFSAssetParamsNS::ParametersStruct*>(this));
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

class TurbulenceFSAssetParamsFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(TurbulenceFSAssetParams), TurbulenceFSAssetParams::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, TurbulenceFSAssetParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class TurbulenceFSAssetParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(TurbulenceFSAssetParams)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, TurbulenceFSAssetParams)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, TurbulenceFSAssetParams::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, TurbulenceFSAssetParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class TurbulenceFSAssetParams");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of TurbulenceFSAssetParams here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (TurbulenceFSAssetParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (TurbulenceFSAssetParams::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (TurbulenceFSAssetParams::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (TurbulenceFSAssetParams::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (TurbulenceFSAssetParams::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace turbulencefs
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif