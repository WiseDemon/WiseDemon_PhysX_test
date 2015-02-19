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
// Created: 2015.01.18 19:26:14

#include "NoiseFSAssetParams.h"
#include <string.h>
#include <stdlib.h>

using namespace NxParameterized;

namespace physx
{
namespace apex
{
namespace basicfs
{

using namespace NoiseFSAssetParamsNS;

const char* const NoiseFSAssetParamsFactory::vptr =
    NxParameterized::getVptr<NoiseFSAssetParams, NoiseFSAssetParams::ClassAlignment>();

const physx::PxU32 NumParamDefs = 19;
static NxParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
};

#define TENUM(type) physx::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NxParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 18 },
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->defaultScale), NULL, 0 }, // defaultScale
	{ TYPE_VEC3, false, (size_t)(&((ParametersStruct*)0)->boundarySize), NULL, 0 }, // boundarySize
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->boundaryFadePercentage), NULL, 0 }, // boundaryFadePercentage
	{ TYPE_ENUM, false, (size_t)(&((ParametersStruct*)0)->fieldType), NULL, 0 }, // fieldType
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->fieldDragCoeff), NULL, 0 }, // fieldDragCoeff
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->fieldWeight), NULL, 0 }, // fieldWeight
	{ TYPE_ENUM, false, (size_t)(&((ParametersStruct*)0)->noiseType), NULL, 0 }, // noiseType
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->noiseSeed), NULL, 0 }, // noiseSeed
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->noiseStrength), NULL, 0 }, // noiseStrength
	{ TYPE_VEC3, false, (size_t)(&((ParametersStruct*)0)->noiseSpacePeriod), NULL, 0 }, // noiseSpacePeriod
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->noiseTimePeriod), NULL, 0 }, // noiseTimePeriod
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->noiseOctaves), NULL, 0 }, // noiseOctaves
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->noiseStrengthOctaveMultiplier), NULL, 0 }, // noiseStrengthOctaveMultiplier
	{ TYPE_VEC3, false, (size_t)(&((ParametersStruct*)0)->noiseSpacePeriodOctaveMultiplier), NULL, 0 }, // noiseSpacePeriodOctaveMultiplier
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->noiseTimePeriodOctaveMultiplier), NULL, 0 }, // noiseTimePeriodOctaveMultiplier
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->fieldBoundaryFilterDataName), NULL, 0 }, // fieldBoundaryFilterDataName
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->fieldSamplerFilterDataName), NULL, 0 }, // fieldSamplerFilterDataName
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->useLocalSpace), NULL, 0 }, // useLocalSpace
};


bool NoiseFSAssetParams::mBuiltFlag = false;
NxParameterized::MutexType NoiseFSAssetParams::mBuiltFlagMutex;

NoiseFSAssetParams::NoiseFSAssetParams(NxParameterized::Traits* traits, void* buf, PxI32* refCount) :
	NxParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &NoiseFSAssetParamsFactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

NoiseFSAssetParams::~NoiseFSAssetParams()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void NoiseFSAssetParams::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NxParameterized::Traits* traits = mParameterizedTraits;
	physx::PxI32* refCount = mRefCount;
	void* buf = mBuffer;

	this->~NoiseFSAssetParams();

	NxParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NxParameterized::DefinitionImpl* NoiseFSAssetParams::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NxParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NxParameterized::DefinitionImpl* NoiseFSAssetParams::getParameterDefinitionTree(void) const
{
	NoiseFSAssetParams* tmpParam = const_cast<NoiseFSAssetParams*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NxParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NxParameterized::ErrorType NoiseFSAssetParams::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NxParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NxParameterized::ErrorType NoiseFSAssetParams::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NxParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void NoiseFSAssetParams::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<NoiseFSAssetParams::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void NoiseFSAssetParams::freeParameterDefinitionTable(NxParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NxParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (physx::PxU32 i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void NoiseFSAssetParams::buildTree(void)
{

	physx::PxU32 allocSize = sizeof(NxParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NxParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(static_cast<void*>(ParamDefTable), 0, allocSize);

	for (physx::PxU32 i = 0; i < NumParamDefs; ++i)
	{
		NX_PARAM_PLACEMENT_NEW(ParamDefTable + i, NxParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Contains the asset properties for this Noise Field Sampler.", true);
		ParamDefTable[0].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="defaultScale"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("defaultScale", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("HIDDEN", physx::PxU64(1), true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("HIDDEN", physx::PxU64(1), true);
		HintTable[1].init("longDescription", "The default scale factor of the boundary shape.  The default value is 1.0.", true);
		HintTable[2].init("shortDescription", "The default scale factor of the boundary shape.", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="boundarySize"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("boundarySize", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Size of the boundary box.", true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="boundaryFadePercentage"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("boundaryFadePercentage", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", physx::PxU64(1), true);
		HintTable[1].init("min", physx::PxU64(0), true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("max", physx::PxU64(1), true);
		HintTable[1].init("min", physx::PxU64(0), true);
		HintTable[2].init("shortDescription", "Percentage of distance from boundary to center where fade out starts.", true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="fieldType"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("fieldType", TYPE_ENUM, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Type of field.", true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "FORCE", "VELOCITY_DRAG", "VELOCITY_DIRECT" };
		ParamDefTable[4].setEnumVals((const char**)EnumVals, 3);




	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="fieldDragCoeff"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("fieldDragCoeff", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(0), true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("min", physx::PxU64(0), true);
		HintTable[1].init("shortDescription", "Field drag coefficient (only for VELOCITY_DRAG field type).", true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="fieldWeight"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("fieldWeight", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", physx::PxU64(1), true);
		HintTable[1].init("min", physx::PxU64(0), true);
		ParamDefTable[6].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("max", physx::PxU64(1), true);
		HintTable[1].init("min", physx::PxU64(0), true);
		HintTable[2].init("shortDescription", "A weight for the field, it controls how strongly the field affects particles", true);
		ParamDefTable[6].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="noiseType"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("noiseType", TYPE_ENUM, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Type of noise (simplex, curl and etc.).", true);
		ParamDefTable[7].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "SIMPLEX", "CURL" };
		ParamDefTable[7].setEnumVals((const char**)EnumVals, 2);




	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="noiseSeed"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("noiseSeed", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Seed for the noise random generator.", true);
		ParamDefTable[8].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="noiseStrength"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("noiseStrength", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Noise strength.", true);
		ParamDefTable[9].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="noiseSpacePeriod"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("noiseSpacePeriod", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Noise period in space.", true);
		ParamDefTable[10].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="noiseTimePeriod"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("noiseTimePeriod", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Noise period in time.", true);
		ParamDefTable[11].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="noiseOctaves"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("noiseOctaves", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Number of the noise octaves (more octaves give more turbulent noise, but increase computational time).", true);
		ParamDefTable[12].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="noiseStrengthOctaveMultiplier"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("noiseStrengthOctaveMultiplier", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Noise strength multiplier from one octave to the next.", true);
		ParamDefTable[13].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=14, longName="noiseSpacePeriodOctaveMultiplier"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[14];
		ParamDef->init("noiseSpacePeriodOctaveMultiplier", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Noise period in space multiplier from one octave to the next.", true);
		ParamDefTable[14].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=15, longName="noiseTimePeriodOctaveMultiplier"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[15];
		ParamDef->init("noiseTimePeriodOctaveMultiplier", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Noise period in time multiplier from one octave to the next.", true);
		ParamDefTable[15].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=16, longName="fieldBoundaryFilterDataName"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[16];
		ParamDef->init("fieldBoundaryFilterDataName", TYPE_STRING, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("HIDDEN", physx::PxU64(1), true);
		ParamDefTable[16].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("HIDDEN", physx::PxU64(1), true);
		HintTable[1].init("shortDescription", "The filter data name for NoiseFS vs Field Boundaries interaction.", true);
		ParamDefTable[16].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=17, longName="fieldSamplerFilterDataName"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[17];
		ParamDef->init("fieldSamplerFilterDataName", TYPE_STRING, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The filter data name for NoiseFS vs other Field Samplers interaction.", true);
		ParamDefTable[17].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=18, longName="useLocalSpace"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[18];
		ParamDef->init("useLocalSpace", TYPE_BOOL, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "when enabled, noise calculation is done in the local space.", true);
		ParamDefTable[18].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[18];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);
		Children[4] = PDEF_PTR(5);
		Children[5] = PDEF_PTR(6);
		Children[6] = PDEF_PTR(7);
		Children[7] = PDEF_PTR(8);
		Children[8] = PDEF_PTR(9);
		Children[9] = PDEF_PTR(10);
		Children[10] = PDEF_PTR(11);
		Children[11] = PDEF_PTR(12);
		Children[12] = PDEF_PTR(13);
		Children[13] = PDEF_PTR(14);
		Children[14] = PDEF_PTR(15);
		Children[15] = PDEF_PTR(16);
		Children[16] = PDEF_PTR(17);
		Children[17] = PDEF_PTR(18);

		ParamDefTable[0].setChildren(Children, 18);
	}

	mBuiltFlag = true;

}
void NoiseFSAssetParams::initStrings(void)
{
	fieldBoundaryFilterDataName.isAllocated = true;
	fieldBoundaryFilterDataName.buf = NULL;
	fieldSamplerFilterDataName.isAllocated = true;
	fieldSamplerFilterDataName.buf = NULL;
}

void NoiseFSAssetParams::initDynamicArrays(void)
{
}

void NoiseFSAssetParams::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	defaultScale = physx::PxF32(1);
	boundarySize = physx::PxVec3(init(10, 10, 10));
	boundaryFadePercentage = physx::PxF32(0.1);
	fieldType = (const char*)"VELOCITY_DIRECT";
	fieldDragCoeff = physx::PxF32(1);
	fieldWeight = physx::PxF32(1);
	noiseType = (const char*)"CURL";
	noiseSeed = physx::PxU32(0);
	noiseStrength = physx::PxF32(1);
	noiseSpacePeriod = physx::PxVec3(init(1.0, 1.0, 1.0));
	noiseTimePeriod = physx::PxF32(1);
	noiseOctaves = physx::PxU32(1);
	noiseStrengthOctaveMultiplier = physx::PxF32(0.5);
	noiseSpacePeriodOctaveMultiplier = physx::PxVec3(init(0.5, 0.5, 0.5));
	noiseTimePeriodOctaveMultiplier = physx::PxF32(0.5);
	useLocalSpace = bool(false);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void NoiseFSAssetParams::initReferences(void)
{
}

void NoiseFSAssetParams::freeDynamicArrays(void)
{
}

void NoiseFSAssetParams::freeStrings(void)
{

	if (fieldBoundaryFilterDataName.isAllocated && fieldBoundaryFilterDataName.buf)
	{
		mParameterizedTraits->strfree((char*)fieldBoundaryFilterDataName.buf);
	}

	if (fieldSamplerFilterDataName.isAllocated && fieldSamplerFilterDataName.buf)
	{
		mParameterizedTraits->strfree((char*)fieldSamplerFilterDataName.buf);
	}
}

void NoiseFSAssetParams::freeReferences(void)
{
}

} // namespace basicfs
} // namespace apex
} // namespace physx
