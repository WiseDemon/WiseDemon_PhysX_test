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

#include "ShapeBoxParams.h"
#include <string.h>
#include <stdlib.h>

using namespace NxParameterized;

namespace physx
{
namespace apex
{
namespace fieldboundary
{

using namespace ShapeBoxParamsNS;

const char* const ShapeBoxParamsFactory::vptr =
    NxParameterized::getVptr<ShapeBoxParams, ShapeBoxParams::ClassAlignment>();

const physx::PxU32 NumParamDefs = 4;
static NxParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3,
};

#define TENUM(type) physx::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NxParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 3 },
	{ TYPE_MAT44, false, (size_t)(&((ParametersStruct*)0)->localPose), NULL, 0 }, // localPose
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->scale), NULL, 0 }, // scale
	{ TYPE_VEC3, false, (size_t)(&((ParametersStruct*)0)->dimensions), NULL, 0 }, // dimensions
};


bool ShapeBoxParams::mBuiltFlag = false;
NxParameterized::MutexType ShapeBoxParams::mBuiltFlagMutex;

ShapeBoxParams::ShapeBoxParams(NxParameterized::Traits* traits, void* buf, PxI32* refCount) :
	NxParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &ShapeBoxParamsFactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

ShapeBoxParams::~ShapeBoxParams()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void ShapeBoxParams::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NxParameterized::Traits* traits = mParameterizedTraits;
	physx::PxI32* refCount = mRefCount;
	void* buf = mBuffer;

	this->~ShapeBoxParams();

	NxParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NxParameterized::DefinitionImpl* ShapeBoxParams::getParameterDefinitionTree(void)
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

const NxParameterized::DefinitionImpl* ShapeBoxParams::getParameterDefinitionTree(void) const
{
	ShapeBoxParams* tmpParam = const_cast<ShapeBoxParams*>(this);

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

NxParameterized::ErrorType ShapeBoxParams::getParameterHandle(const char* long_name, Handle& handle) const
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

NxParameterized::ErrorType ShapeBoxParams::getParameterHandle(const char* long_name, Handle& handle)
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

void ShapeBoxParams::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<ShapeBoxParams::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void ShapeBoxParams::freeParameterDefinitionTable(NxParameterized::Traits* traits)
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

void ShapeBoxParams::buildTree(void)
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

	// Initialize DefinitionImpl node: nodeIndex=1, longName="localPose"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("localPose", TYPE_MAT44, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The local pose of the shape relative to the actor.  This includes both translation and rotation.", true);
		HintTable[1].init("shortDescription", "The local pose of the shape relative to the actor.", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="scale"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("scale", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The scale factor to increase/decrease the size of the shape.  The default value is 1.0.", true);
		HintTable[1].init("shortDescription", "The scale factor to increase/decrease the size of the shape.", true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="dimensions"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("dimensions", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The dimensions of the box shape.  (x,y,z) This is scaled by the scale factor of the shape.", true);
		HintTable[1].init("shortDescription", "The dimensions of the box shape.", true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

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

	mBuiltFlag = true;

}
void ShapeBoxParams::initStrings(void)
{
}

void ShapeBoxParams::initDynamicArrays(void)
{
}

void ShapeBoxParams::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	localPose = physx::PxMat44(physx::PxMat44::createIdentity());
	scale = physx::PxF32(1);
	dimensions = physx::PxVec3(init(1, 1, 1));

	initDynamicArrays();
	initStrings();
	initReferences();
}

void ShapeBoxParams::initReferences(void)
{
}

void ShapeBoxParams::freeDynamicArrays(void)
{
}

void ShapeBoxParams::freeStrings(void)
{
}

void ShapeBoxParams::freeReferences(void)
{
}

} // namespace fieldboundary
} // namespace apex
} // namespace physx
