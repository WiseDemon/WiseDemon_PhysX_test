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

#include "FieldBoundaryPreviewParameters.h"
#include <string.h>
#include <stdlib.h>

using namespace NxParameterized;

namespace physx
{
namespace apex
{
namespace fieldboundary
{

using namespace FieldBoundaryPreviewParametersNS;

const char* const FieldBoundaryPreviewParametersFactory::vptr =
    NxParameterized::getVptr<FieldBoundaryPreviewParameters, FieldBoundaryPreviewParameters::ClassAlignment>();

const physx::PxU32 NumParamDefs = 8;
static NxParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7,
};

#define TENUM(type) physx::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NxParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 3 },
	{ TYPE_MAT44, false, (size_t)(&((ParametersStruct*)0)->previewPose), NULL, 0 }, // previewPose
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->iconScale), NULL, 0 }, // iconScale
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->fieldBoundaryContainer), CHILDREN(3), 1 }, // fieldBoundaryContainer
	{ TYPE_STRUCT, false, 1 * sizeof(fieldBoundary_Type), CHILDREN(4), 3 }, // fieldBoundaryContainer[]
	{ TYPE_REF, false, (size_t)(&((fieldBoundary_Type*)0)->fieldBoundaryType), NULL, 0 }, // fieldBoundaryContainer[].fieldBoundaryType
	{ TYPE_BOOL, false, (size_t)(&((fieldBoundary_Type*)0)->useAsExcludeShape), NULL, 0 }, // fieldBoundaryContainer[].useAsExcludeShape
	{ TYPE_BOOL, false, (size_t)(&((fieldBoundary_Type*)0)->useLocalPoseAsWorldPose), NULL, 0 }, // fieldBoundaryContainer[].useLocalPoseAsWorldPose
};


bool FieldBoundaryPreviewParameters::mBuiltFlag = false;
NxParameterized::MutexType FieldBoundaryPreviewParameters::mBuiltFlagMutex;

FieldBoundaryPreviewParameters::FieldBoundaryPreviewParameters(NxParameterized::Traits* traits, void* buf, PxI32* refCount) :
	NxParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &FieldBoundaryPreviewParametersFactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

FieldBoundaryPreviewParameters::~FieldBoundaryPreviewParameters()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void FieldBoundaryPreviewParameters::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NxParameterized::Traits* traits = mParameterizedTraits;
	physx::PxI32* refCount = mRefCount;
	void* buf = mBuffer;

	this->~FieldBoundaryPreviewParameters();

	NxParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NxParameterized::DefinitionImpl* FieldBoundaryPreviewParameters::getParameterDefinitionTree(void)
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

const NxParameterized::DefinitionImpl* FieldBoundaryPreviewParameters::getParameterDefinitionTree(void) const
{
	FieldBoundaryPreviewParameters* tmpParam = const_cast<FieldBoundaryPreviewParameters*>(this);

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

NxParameterized::ErrorType FieldBoundaryPreviewParameters::getParameterHandle(const char* long_name, Handle& handle) const
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

NxParameterized::ErrorType FieldBoundaryPreviewParameters::getParameterHandle(const char* long_name, Handle& handle)
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

void FieldBoundaryPreviewParameters::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<FieldBoundaryPreviewParameters::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */
/* [1,0] - fieldBoundaryContainer.fieldBoundaryType */

void FieldBoundaryPreviewParameters::freeParameterDefinitionTable(NxParameterized::Traits* traits)
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

void FieldBoundaryPreviewParameters::buildTree(void)
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

	// Initialize DefinitionImpl node: nodeIndex=1, longName="previewPose"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("previewPose", TYPE_MAT44, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "The world space coordinates of this preview", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="iconScale"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("iconScale", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "The scale of the field boundary preview icon", true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="fieldBoundaryContainer"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("fieldBoundaryContainer", TYPE_ARRAY, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "An array containing the field boundaries associated with this preview", true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
		static const physx::PxU8 dynHandleIndices[2] = { 1, 0, };
		ParamDef->setDynamicHandleIndicesMap(dynHandleIndices, 2);

	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="fieldBoundaryContainer[]"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("fieldBoundaryContainer", TYPE_STRUCT, "fieldBoundary", true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "An array containing the field boundaries associated with this preview", true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="fieldBoundaryContainer[].fieldBoundaryType"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("fieldBoundaryType", TYPE_REF, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		HintTable[1].init("editorDisplay", "false", true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		HintTable[1].init("editorDisplay", "false", true);
		HintTable[2].init("shortDescription", "The type of the field boundary", true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "ShapeSphereParams", "ShapeBoxParams", "ShapeCapsuleParams", "ShapeConvexParams" };
		ParamDefTable[5].setRefVariantVals((const char**)RefVariantVals, 4);



	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="fieldBoundaryContainer[].useAsExcludeShape"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("useAsExcludeShape", TYPE_BOOL, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[6].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "Mark the field boundary as an exclude (RED) boundary", true);
		ParamDefTable[6].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="fieldBoundaryContainer[].useLocalPoseAsWorldPose"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("useLocalPoseAsWorldPose", TYPE_BOOL, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[7].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "Use the local-space pose of the field boundary as a world-space pose", true);
		ParamDefTable[7].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[3];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);

		ParamDefTable[0].setChildren(Children, 3);
	}

	// SetChildren for: nodeIndex=3, longName="fieldBoundaryContainer"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(4);

		ParamDefTable[3].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=4, longName="fieldBoundaryContainer[]"
	{
		static Definition* Children[3];
		Children[0] = PDEF_PTR(5);
		Children[1] = PDEF_PTR(6);
		Children[2] = PDEF_PTR(7);

		ParamDefTable[4].setChildren(Children, 3);
	}

	mBuiltFlag = true;

}
void FieldBoundaryPreviewParameters::initStrings(void)
{
}

void FieldBoundaryPreviewParameters::initDynamicArrays(void)
{
	fieldBoundaryContainer.buf = NULL;
	fieldBoundaryContainer.isAllocated = true;
	fieldBoundaryContainer.elementSize = sizeof(fieldBoundary_Type);
	fieldBoundaryContainer.arraySizes[0] = 0;
}

void FieldBoundaryPreviewParameters::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	previewPose = physx::PxMat44(physx::PxMat44::createIdentity());
	iconScale = physx::PxF32(1.0f);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void FieldBoundaryPreviewParameters::initReferences(void)
{
}

void FieldBoundaryPreviewParameters::freeDynamicArrays(void)
{
	if (fieldBoundaryContainer.isAllocated && fieldBoundaryContainer.buf)
	{
		mParameterizedTraits->free(fieldBoundaryContainer.buf);
	}
}

void FieldBoundaryPreviewParameters::freeStrings(void)
{
}

void FieldBoundaryPreviewParameters::freeReferences(void)
{

	for (int i = 0; i < fieldBoundaryContainer.arraySizes[0]; i++)
	{
		if (fieldBoundaryContainer.buf[i].fieldBoundaryType)
		{
			fieldBoundaryContainer.buf[i].fieldBoundaryType->destroy();
		}
	}
}

} // namespace fieldboundary
} // namespace apex
} // namespace physx