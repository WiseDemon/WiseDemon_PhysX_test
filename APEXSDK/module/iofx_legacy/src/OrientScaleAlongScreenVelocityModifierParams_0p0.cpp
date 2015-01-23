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

#include "OrientScaleAlongScreenVelocityModifierParams_0p0.h"
#include <string.h>
#include <stdlib.h>

using namespace NxParameterized;

namespace physx
{
namespace apex
{

using namespace OrientScaleAlongScreenVelocityModifierParams_0p0NS;

const char* const OrientScaleAlongScreenVelocityModifierParams_0p0Factory::vptr =
    NxParameterized::getVptr<OrientScaleAlongScreenVelocityModifierParams_0p0, OrientScaleAlongScreenVelocityModifierParams_0p0::ClassAlignment>();

const physx::PxU32 NumParamDefs = 2;
static NxParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1,
};

#define TENUM(type) physx::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NxParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 1 },
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->scalePerVelocity), NULL, 0 }, // scalePerVelocity
};


bool OrientScaleAlongScreenVelocityModifierParams_0p0::mBuiltFlag = false;
NxParameterized::MutexType OrientScaleAlongScreenVelocityModifierParams_0p0::mBuiltFlagMutex;

OrientScaleAlongScreenVelocityModifierParams_0p0::OrientScaleAlongScreenVelocityModifierParams_0p0(NxParameterized::Traits* traits, void* buf, PxI32* refCount) :
	NxParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &OrientScaleAlongScreenVelocityModifierParams_0p0FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

OrientScaleAlongScreenVelocityModifierParams_0p0::~OrientScaleAlongScreenVelocityModifierParams_0p0()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void OrientScaleAlongScreenVelocityModifierParams_0p0::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NxParameterized::Traits* traits = mParameterizedTraits;
	physx::PxI32* refCount = mRefCount;
	void* buf = mBuffer;

	this->~OrientScaleAlongScreenVelocityModifierParams_0p0();

	NxParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NxParameterized::DefinitionImpl* OrientScaleAlongScreenVelocityModifierParams_0p0::getParameterDefinitionTree(void)
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

const NxParameterized::DefinitionImpl* OrientScaleAlongScreenVelocityModifierParams_0p0::getParameterDefinitionTree(void) const
{
	OrientScaleAlongScreenVelocityModifierParams_0p0* tmpParam = const_cast<OrientScaleAlongScreenVelocityModifierParams_0p0*>(this);

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

NxParameterized::ErrorType OrientScaleAlongScreenVelocityModifierParams_0p0::getParameterHandle(const char* long_name, Handle& handle) const
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

NxParameterized::ErrorType OrientScaleAlongScreenVelocityModifierParams_0p0::getParameterHandle(const char* long_name, Handle& handle)
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

void OrientScaleAlongScreenVelocityModifierParams_0p0::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<OrientScaleAlongScreenVelocityModifierParams_0p0::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void OrientScaleAlongScreenVelocityModifierParams_0p0::freeParameterDefinitionTable(NxParameterized::Traits* traits)
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

void OrientScaleAlongScreenVelocityModifierParams_0p0::buildTree(void)
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
		HintTable[0].init("shortDescription", "OrientScaleAlongScreenVelocity modifier parameters", true);
		ParamDefTable[0].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="scalePerVelocity"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("scalePerVelocity", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", physx::PxU64(0), true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", physx::PxU64(0), true);
		HintTable[1].init("longDescription", "Scale(Velocity) = 1 + |Velocity| * scalePerVelocity", true);
		HintTable[2].init("shortDescription", "Scale per velocity", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(1);

		ParamDefTable[0].setChildren(Children, 1);
	}

	mBuiltFlag = true;

}
void OrientScaleAlongScreenVelocityModifierParams_0p0::initStrings(void)
{
}

void OrientScaleAlongScreenVelocityModifierParams_0p0::initDynamicArrays(void)
{
}

void OrientScaleAlongScreenVelocityModifierParams_0p0::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	scalePerVelocity = physx::PxF32(0.0f);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void OrientScaleAlongScreenVelocityModifierParams_0p0::initReferences(void)
{
}

void OrientScaleAlongScreenVelocityModifierParams_0p0::freeDynamicArrays(void)
{
}

void OrientScaleAlongScreenVelocityModifierParams_0p0::freeStrings(void)
{
}

void OrientScaleAlongScreenVelocityModifierParams_0p0::freeReferences(void)
{
}

} // namespace apex
} // namespace physx
