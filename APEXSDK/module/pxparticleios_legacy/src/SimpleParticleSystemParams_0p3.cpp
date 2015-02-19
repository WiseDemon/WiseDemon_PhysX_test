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

#include "SimpleParticleSystemParams_0p3.h"
#include <string.h>
#include <stdlib.h>

using namespace NxParameterized;

namespace physx
{
namespace apex
{

using namespace SimpleParticleSystemParams_0p3NS;

const char* const SimpleParticleSystemParams_0p3Factory::vptr =
    NxParameterized::getVptr<SimpleParticleSystemParams_0p3, SimpleParticleSystemParams_0p3::ClassAlignment>();

const physx::PxU32 NumParamDefs = 6;
static NxParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5,
};

#define TENUM(type) physx::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NxParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 1 },
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->GridDensity), CHILDREN(1), 4 }, // GridDensity
	{ TYPE_BOOL, false, (size_t)(&((GridDensityParams_Type*)0)->Enabled), NULL, 0 }, // GridDensity.Enabled
	{ TYPE_ENUM, false, (size_t)(&((GridDensityParams_Type*)0)->Resolution), NULL, 0 }, // GridDensity.Resolution
	{ TYPE_F32, false, (size_t)(&((GridDensityParams_Type*)0)->GridSize), NULL, 0 }, // GridDensity.GridSize
	{ TYPE_U32, false, (size_t)(&((GridDensityParams_Type*)0)->MaxCellCount), NULL, 0 }, // GridDensity.MaxCellCount
};


bool SimpleParticleSystemParams_0p3::mBuiltFlag = false;
NxParameterized::MutexType SimpleParticleSystemParams_0p3::mBuiltFlagMutex;

SimpleParticleSystemParams_0p3::SimpleParticleSystemParams_0p3(NxParameterized::Traits* traits, void* buf, PxI32* refCount) :
	NxParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &SimpleParticleSystemParams_0p3FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

SimpleParticleSystemParams_0p3::~SimpleParticleSystemParams_0p3()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void SimpleParticleSystemParams_0p3::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NxParameterized::Traits* traits = mParameterizedTraits;
	physx::PxI32* refCount = mRefCount;
	void* buf = mBuffer;

	this->~SimpleParticleSystemParams_0p3();

	NxParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NxParameterized::DefinitionImpl* SimpleParticleSystemParams_0p3::getParameterDefinitionTree(void)
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

const NxParameterized::DefinitionImpl* SimpleParticleSystemParams_0p3::getParameterDefinitionTree(void) const
{
	SimpleParticleSystemParams_0p3* tmpParam = const_cast<SimpleParticleSystemParams_0p3*>(this);

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

NxParameterized::ErrorType SimpleParticleSystemParams_0p3::getParameterHandle(const char* long_name, Handle& handle) const
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

NxParameterized::ErrorType SimpleParticleSystemParams_0p3::getParameterHandle(const char* long_name, Handle& handle)
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

void SimpleParticleSystemParams_0p3::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<SimpleParticleSystemParams_0p3::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void SimpleParticleSystemParams_0p3::freeParameterDefinitionTable(NxParameterized::Traits* traits)
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

void SimpleParticleSystemParams_0p3::buildTree(void)
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

	// Initialize DefinitionImpl node: nodeIndex=1, longName="GridDensity"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("GridDensity", TYPE_STRUCT, "GridDensityParams", true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Settings for Density Grid\n", true);
		HintTable[1].init("shortDescription", "Settings for Density Grid", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="GridDensity.Enabled"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("Enabled", TYPE_BOOL, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "If this option is true; a density will be computed based on the grouping of particles in a 3d grid\n", true);
		HintTable[1].init("shortDescription", "Compute a Density Using a Grid", true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="GridDensity.Resolution"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("Resolution", TYPE_ENUM, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This enumeration defines the 3d resolution of the grid.\n", true);
		HintTable[1].init("shortDescription", "Number of cells in a 3D grid, used to calculate particles positions. Higher values divide the grid into more cells.", true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "GDG_8", "GDG_16", "GDG_32", "GDG_64", "GDG_128", "GDG_256" };
		ParamDefTable[3].setEnumVals((const char**)EnumVals, 6);




	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="GridDensity.GridSize"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("GridSize", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("DISPLAY_NAME", "Grid Depth", true);
		HintTable[1].init("min", physx::PxU64(0), true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("DISPLAY_NAME", "Grid Depth", true);
		HintTable[1].init("longDescription", "The default value is 10 units\nMust be positive.\n", true);
		HintTable[2].init("min", physx::PxU64(0), true);
		HintTable[3].init("shortDescription", "Depth of grid", true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 4);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="GridDensity.MaxCellCount"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("MaxCellCount", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(0), true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "This is the integer count representing how many particles reside in a single grid cell before the density is considered 1.\nIt is valid for the density to be greater than one.  For example, if there were 32 particles in a grid cell with a max-cell count of\n16, then the density would be equal to 2.\n", true);
		HintTable[1].init("min", physx::PxU64(0), true);
		HintTable[2].init("shortDescription", "This is the number of particles within a grid cell for a density of 1", true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(1);

		ParamDefTable[0].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=1, longName="GridDensity"
	{
		static Definition* Children[4];
		Children[0] = PDEF_PTR(2);
		Children[1] = PDEF_PTR(3);
		Children[2] = PDEF_PTR(4);
		Children[3] = PDEF_PTR(5);

		ParamDefTable[1].setChildren(Children, 4);
	}

	mBuiltFlag = true;

}
void SimpleParticleSystemParams_0p3::initStrings(void)
{
}

void SimpleParticleSystemParams_0p3::initDynamicArrays(void)
{
}

void SimpleParticleSystemParams_0p3::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	GridDensity.Enabled = bool(0);
	GridDensity.Resolution = (const char*)"GDG_16";
	GridDensity.GridSize = physx::PxF32(10);
	GridDensity.MaxCellCount = physx::PxU32(16);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void SimpleParticleSystemParams_0p3::initReferences(void)
{
}

void SimpleParticleSystemParams_0p3::freeDynamicArrays(void)
{
}

void SimpleParticleSystemParams_0p3::freeStrings(void)
{
}

void SimpleParticleSystemParams_0p3::freeReferences(void)
{
}

} // namespace apex
} // namespace physx
