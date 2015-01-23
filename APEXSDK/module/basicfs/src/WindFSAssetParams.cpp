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
// Created: 2015.01.18 19:26:15

#include "WindFSAssetParams.h"
#include <string.h>
#include <stdlib.h>

using namespace NxParameterized;

namespace physx
{
namespace apex
{
namespace basicfs
{

using namespace WindFSAssetParamsNS;

const char* const WindFSAssetParamsFactory::vptr =
    NxParameterized::getVptr<WindFSAssetParams, WindFSAssetParams::ClassAlignment>();

const physx::PxU32 NumParamDefs = 11;
static NxParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
};

#define TENUM(type) physx::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NxParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 10 },
	{ TYPE_VEC3, false, (size_t)(&((ParametersStruct*)0)->fieldDirection), NULL, 0 }, // fieldDirection
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->fieldDirectionDeviationAngle), NULL, 0 }, // fieldDirectionDeviationAngle
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->fieldDirectionOscillationPeriod), NULL, 0 }, // fieldDirectionOscillationPeriod
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->fieldStrength), NULL, 0 }, // fieldStrength
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->fieldStrengthDeviationPercentage), NULL, 0 }, // fieldStrengthDeviationPercentage
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->fieldStrengthOscillationPeriod), NULL, 0 }, // fieldStrengthOscillationPeriod
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->fieldDragCoeff), NULL, 0 }, // fieldDragCoeff
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->fieldWeight), NULL, 0 }, // fieldWeight
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->fieldBoundaryFilterDataName), NULL, 0 }, // fieldBoundaryFilterDataName
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->fieldSamplerFilterDataName), NULL, 0 }, // fieldSamplerFilterDataName
};


bool WindFSAssetParams::mBuiltFlag = false;
NxParameterized::MutexType WindFSAssetParams::mBuiltFlagMutex;

WindFSAssetParams::WindFSAssetParams(NxParameterized::Traits* traits, void* buf, PxI32* refCount) :
	NxParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &WindFSAssetParamsFactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

WindFSAssetParams::~WindFSAssetParams()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void WindFSAssetParams::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NxParameterized::Traits* traits = mParameterizedTraits;
	physx::PxI32* refCount = mRefCount;
	void* buf = mBuffer;

	this->~WindFSAssetParams();

	NxParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NxParameterized::DefinitionImpl* WindFSAssetParams::getParameterDefinitionTree(void)
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

const NxParameterized::DefinitionImpl* WindFSAssetParams::getParameterDefinitionTree(void) const
{
	WindFSAssetParams* tmpParam = const_cast<WindFSAssetParams*>(this);

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

NxParameterized::ErrorType WindFSAssetParams::getParameterHandle(const char* long_name, Handle& handle) const
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

NxParameterized::ErrorType WindFSAssetParams::getParameterHandle(const char* long_name, Handle& handle)
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

void WindFSAssetParams::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<WindFSAssetParams::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void WindFSAssetParams::freeParameterDefinitionTable(NxParameterized::Traits* traits)
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

void WindFSAssetParams::buildTree(void)
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
		HintTable[0].init("shortDescription", "Contains the asset properties for this Wind Field Sampler.", true);
		ParamDefTable[0].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="fieldDirection"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("fieldDirection", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "field direction.", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="fieldDirectionDeviationAngle"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("fieldDirectionDeviationAngle", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", physx::PxU64(180), true);
		HintTable[1].init("min", physx::PxU64(0), true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("longDescription", "The fieldDirectionDeviationAngle parameter controls the deviation in angle of the field direction.\n", true);
		HintTable[1].init("max", physx::PxU64(180), true);
		HintTable[2].init("min", physx::PxU64(0), true);
		HintTable[3].init("shortDescription", "field direction deviation angle (in degrees).", true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 4);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="fieldDirectionOscillationPeriod"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("fieldDirectionOscillationPeriod", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(0), true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "The fieldDirectionOscillationPeriod defines the period of the field direction oscillation.\nIf the fieldDirectionDeviationAngle is non-zero the period of each sinusoidal cycle will be this parameter in seconds.\n", true);
		HintTable[1].init("min", physx::PxU64(0), true);
		HintTable[2].init("shortDescription", "field direction oscillation period in seconds.", true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="fieldStrength"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("fieldStrength", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(0), true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("min", physx::PxU64(0), true);
		HintTable[1].init("shortDescription", "field strength.", true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="fieldStrengthDeviationPercentage"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("fieldStrengthDeviationPercentage", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", physx::PxU64(1), true);
		HintTable[1].init("min", physx::PxU64(0), true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("longDescription", "The fieldStrengthDeviationPercentage parameter controls the deviation in % of the field strength.\n", true);
		HintTable[1].init("max", physx::PxU64(1), true);
		HintTable[2].init("min", physx::PxU64(0), true);
		HintTable[3].init("shortDescription", "+/- field strength deviation percentage.", true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 4);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="fieldStrengthOscillationPeriod"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("fieldStrengthOscillationPeriod", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(0), true);
		ParamDefTable[6].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "The fieldStrengthOscillationPeriod defines the period of the field strength oscillation.\nIf the fieldStrengthDeviationPercentage is non-zero the period of each sinusoidal cycle will be this parameter in seconds.\n", true);
		HintTable[1].init("min", physx::PxU64(0), true);
		HintTable[2].init("shortDescription", "field strength oscillation period in seconds.", true);
		ParamDefTable[6].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="fieldDragCoeff"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("fieldDragCoeff", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(0), true);
		ParamDefTable[7].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("min", physx::PxU64(0), true);
		HintTable[1].init("shortDescription", "Field drag coefficient. When it equals to 0, then the field is applied as a direct velocity.", true);
		ParamDefTable[7].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="fieldWeight"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("fieldWeight", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", physx::PxU64(1), true);
		HintTable[1].init("min", physx::PxU64(0), true);
		ParamDefTable[8].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("max", physx::PxU64(1), true);
		HintTable[1].init("min", physx::PxU64(0), true);
		HintTable[2].init("shortDescription", "A weight for the field, it controls how strongly the field affects particles", true);
		ParamDefTable[8].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="fieldBoundaryFilterDataName"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("fieldBoundaryFilterDataName", TYPE_STRING, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("HIDDEN", physx::PxU64(1), true);
		ParamDefTable[9].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("HIDDEN", physx::PxU64(1), true);
		HintTable[1].init("shortDescription", "The filter data name for WindFS vs Field Boundaries interaction.", true);
		ParamDefTable[9].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="fieldSamplerFilterDataName"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("fieldSamplerFilterDataName", TYPE_STRING, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The filter data name for WindFS vs other Field Samplers interaction.", true);
		ParamDefTable[10].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[10];
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

		ParamDefTable[0].setChildren(Children, 10);
	}

	mBuiltFlag = true;

}
void WindFSAssetParams::initStrings(void)
{
	fieldBoundaryFilterDataName.isAllocated = true;
	fieldBoundaryFilterDataName.buf = NULL;
	fieldSamplerFilterDataName.isAllocated = true;
	fieldSamplerFilterDataName.buf = NULL;
}

void WindFSAssetParams::initDynamicArrays(void)
{
}

void WindFSAssetParams::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	fieldDirection = physx::PxVec3(init(1, 0, 0));
	fieldDirectionDeviationAngle = physx::PxF32(0);
	fieldDirectionOscillationPeriod = physx::PxF32(0);
	fieldStrength = physx::PxF32(1);
	fieldStrengthDeviationPercentage = physx::PxF32(0);
	fieldStrengthOscillationPeriod = physx::PxF32(0);
	fieldDragCoeff = physx::PxF32(1);
	fieldWeight = physx::PxF32(1);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void WindFSAssetParams::initReferences(void)
{
}

void WindFSAssetParams::freeDynamicArrays(void)
{
}

void WindFSAssetParams::freeStrings(void)
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

void WindFSAssetParams::freeReferences(void)
{
}

} // namespace basicfs
} // namespace apex
} // namespace physx