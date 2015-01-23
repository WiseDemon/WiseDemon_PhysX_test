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
// Created: 2015.01.18 19:26:22

#include "FieldBoundaryAssetParameters.h"
#include <string.h>
#include <stdlib.h>

using namespace NxParameterized;

namespace physx
{
namespace apex
{
namespace fieldboundary
{

using namespace FieldBoundaryAssetParametersNS;

const char* const FieldBoundaryAssetParametersFactory::vptr =
    NxParameterized::getVptr<FieldBoundaryAssetParameters, FieldBoundaryAssetParameters::ClassAlignment>();

const physx::PxU32 NumParamDefs = 5;
static NxParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 4, 3,
};

#define TENUM(type) physx::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NxParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 3 },
	{ TYPE_ENUM, false, (size_t)(&((ParametersStruct*)0)->includeExcludeFlag), NULL, 0 }, // includeExcludeFlag
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->geometryType), CHILDREN(3), 1 }, // geometryType
	{ TYPE_REF, false, 1 * sizeof(NxParameterized::Interface*), NULL, 0 }, // geometryType[]
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->boundaryGroupMaskName), NULL, 0 }, // boundaryGroupMaskName
};


bool FieldBoundaryAssetParameters::mBuiltFlag = false;
NxParameterized::MutexType FieldBoundaryAssetParameters::mBuiltFlagMutex;

FieldBoundaryAssetParameters::FieldBoundaryAssetParameters(NxParameterized::Traits* traits, void* buf, PxI32* refCount) :
	NxParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &FieldBoundaryAssetParametersFactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

FieldBoundaryAssetParameters::~FieldBoundaryAssetParameters()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void FieldBoundaryAssetParameters::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NxParameterized::Traits* traits = mParameterizedTraits;
	physx::PxI32* refCount = mRefCount;
	void* buf = mBuffer;

	this->~FieldBoundaryAssetParameters();

	NxParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NxParameterized::DefinitionImpl* FieldBoundaryAssetParameters::getParameterDefinitionTree(void)
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

const NxParameterized::DefinitionImpl* FieldBoundaryAssetParameters::getParameterDefinitionTree(void) const
{
	FieldBoundaryAssetParameters* tmpParam = const_cast<FieldBoundaryAssetParameters*>(this);

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

NxParameterized::ErrorType FieldBoundaryAssetParameters::getParameterHandle(const char* long_name, Handle& handle) const
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

NxParameterized::ErrorType FieldBoundaryAssetParameters::getParameterHandle(const char* long_name, Handle& handle)
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

void FieldBoundaryAssetParameters::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<FieldBoundaryAssetParameters::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */
/* [0] - geometryType (not an array of structs) */

void FieldBoundaryAssetParameters::freeParameterDefinitionTable(NxParameterized::Traits* traits)
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

void FieldBoundaryAssetParameters::buildTree(void)
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






	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="includeExcludeFlag"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("includeExcludeFlag", TYPE_ENUM, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", "excludeShape", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", "excludeShape", true);
		HintTable[1].init("longDescription", "Defines if the asset is a force field include or exclude shape. Areas that are in both include and exclude shapes are excluded.  Only areas that are only in an include shape have forces applied.", true);
		HintTable[2].init("shortDescription", "Defines if the asset is a force field include or exclude shape.", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "includeShape", "excludeShape" };
		ParamDefTable[1].setEnumVals((const char**)EnumVals, 2);




	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="geometryType"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("geometryType", TYPE_ARRAY, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		HintTable[1].init("longDescription", "Specifies the type of the force field exclude shape.  (sphere, box, capsule, or convex mesh)", true);
		HintTable[2].init("shortDescription", "Geometry Type", true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "ShapeSphereParams", "ShapeBoxParams", "ShapeCapsuleParams", "ShapeConvexParams" };
		ParamDefTable[2].setRefVariantVals((const char**)RefVariantVals, 4);


		ParamDef->setArraySize(-1);
		static const physx::PxU8 dynHandleIndices[1] = { 0, };
		ParamDef->setDynamicHandleIndicesMap(dynHandleIndices, 1);

	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="geometryType[]"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("geometryType", TYPE_REF, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		HintTable[1].init("longDescription", "Specifies the type of the force field exclude shape.  (sphere, box, capsule, or convex mesh)", true);
		HintTable[2].init("shortDescription", "Geometry Type", true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "ShapeSphereParams", "ShapeBoxParams", "ShapeCapsuleParams", "ShapeConvexParams" };
		ParamDefTable[3].setRefVariantVals((const char**)RefVariantVals, 4);



	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="boundaryGroupMaskName"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("boundaryGroupMaskName", TYPE_STRING, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The boundary 64-bit groups mask name.", true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[3];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(4);

		ParamDefTable[0].setChildren(Children, 3);
	}

	// SetChildren for: nodeIndex=2, longName="geometryType"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(3);

		ParamDefTable[2].setChildren(Children, 1);
	}

	mBuiltFlag = true;

}
void FieldBoundaryAssetParameters::initStrings(void)
{
	boundaryGroupMaskName.isAllocated = true;
	boundaryGroupMaskName.buf = NULL;
}

void FieldBoundaryAssetParameters::initDynamicArrays(void)
{
	geometryType.buf = NULL;
	geometryType.isAllocated = true;
	geometryType.elementSize = sizeof(NxParameterized::Interface*);
	geometryType.arraySizes[0] = 0;
}

void FieldBoundaryAssetParameters::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	includeExcludeFlag = (const char*)"excludeShape";

	initDynamicArrays();
	initStrings();
	initReferences();
}

void FieldBoundaryAssetParameters::initReferences(void)
{
}

void FieldBoundaryAssetParameters::freeDynamicArrays(void)
{
	if (geometryType.isAllocated && geometryType.buf)
	{
		mParameterizedTraits->free(geometryType.buf);
	}
}

void FieldBoundaryAssetParameters::freeStrings(void)
{

	if (boundaryGroupMaskName.isAllocated && boundaryGroupMaskName.buf)
	{
		mParameterizedTraits->strfree((char*)boundaryGroupMaskName.buf);
	}
}

void FieldBoundaryAssetParameters::freeReferences(void)
{

	for (int i = 0; i < geometryType.arraySizes[0]; ++i)
	{
		if (geometryType.buf[i])
		{
			geometryType.buf[i]->destroy();
		}
	}
}

} // namespace fieldboundary
} // namespace apex
} // namespace physx
