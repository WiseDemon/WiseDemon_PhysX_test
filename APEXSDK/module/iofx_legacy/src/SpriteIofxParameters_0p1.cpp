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

#include "SpriteIofxParameters_0p1.h"
#include <string.h>
#include <stdlib.h>

using namespace NxParameterized;

namespace physx
{
namespace apex
{

using namespace SpriteIofxParameters_0p1NS;

const char* const SpriteIofxParameters_0p1Factory::vptr =
    NxParameterized::getVptr<SpriteIofxParameters_0p1, SpriteIofxParameters_0p1::ClassAlignment>();

const physx::PxU32 NumParamDefs = 6;
static NxParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 4, 3, 5,
};

#define TENUM(type) physx::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NxParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 3 },
	{ TYPE_REF, false, (size_t)(&((ParametersStruct*)0)->spriteMaterialName), NULL, 0 }, // spriteMaterialName
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->spawnModifierList), CHILDREN(3), 1 }, // spawnModifierList
	{ TYPE_REF, false, 1 * sizeof(NxParameterized::Interface*), NULL, 0 }, // spawnModifierList[]
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->continuousModifierList), CHILDREN(4), 1 }, // continuousModifierList
	{ TYPE_REF, false, 1 * sizeof(NxParameterized::Interface*), NULL, 0 }, // continuousModifierList[]
};


bool SpriteIofxParameters_0p1::mBuiltFlag = false;
NxParameterized::MutexType SpriteIofxParameters_0p1::mBuiltFlagMutex;

SpriteIofxParameters_0p1::SpriteIofxParameters_0p1(NxParameterized::Traits* traits, void* buf, PxI32* refCount) :
	NxParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &SpriteIofxParameters_0p1FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

SpriteIofxParameters_0p1::~SpriteIofxParameters_0p1()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void SpriteIofxParameters_0p1::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NxParameterized::Traits* traits = mParameterizedTraits;
	physx::PxI32* refCount = mRefCount;
	void* buf = mBuffer;

	this->~SpriteIofxParameters_0p1();

	NxParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NxParameterized::DefinitionImpl* SpriteIofxParameters_0p1::getParameterDefinitionTree(void)
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

const NxParameterized::DefinitionImpl* SpriteIofxParameters_0p1::getParameterDefinitionTree(void) const
{
	SpriteIofxParameters_0p1* tmpParam = const_cast<SpriteIofxParameters_0p1*>(this);

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

NxParameterized::ErrorType SpriteIofxParameters_0p1::getParameterHandle(const char* long_name, Handle& handle) const
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

NxParameterized::ErrorType SpriteIofxParameters_0p1::getParameterHandle(const char* long_name, Handle& handle)
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

void SpriteIofxParameters_0p1::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<SpriteIofxParameters_0p1::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */
/* [0] - spawnModifierList (not an array of structs) */
/* [0] - continuousModifierList (not an array of structs) */

void SpriteIofxParameters_0p1::freeParameterDefinitionTable(NxParameterized::Traits* traits)
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

void SpriteIofxParameters_0p1::buildTree(void)
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

	// Initialize DefinitionImpl node: nodeIndex=1, longName="spriteMaterialName"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("spriteMaterialName", TYPE_REF, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The sprite material name (if this is a sprite IOFX)", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "ApexMaterials" };
		ParamDefTable[1].setRefVariantVals((const char**)RefVariantVals, 1);



	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="spawnModifierList"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("spawnModifierList", TYPE_ARRAY, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("HIDE_CLASS1", "ColorVsLifeModifierParams", true);
		HintTable[1].init("INCLUDED", physx::PxU64(1), true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("HIDE_CLASS1", "ColorVsLifeModifierParams", true);
		HintTable[1].init("INCLUDED", physx::PxU64(1), true);
		HintTable[2].init("longDescription", "These modifiers are applied to the instanced objects at object creation. (Currently RotationModifierParams is unsupported for sprites)", true);
		HintTable[3].init("shortDescription", "Spawn modifier list", true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 4);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "SimpleScaleModifierParams", "RandomScaleModifierParams", "InitialColorModifierParams", "RandomSubtextureModifierParams", "RandomRotationModifierParams", "ColorVsLifeModifierParams" };
		ParamDefTable[2].setRefVariantVals((const char**)RefVariantVals, 6);


		ParamDef->setArraySize(-1);
		static const physx::PxU8 dynHandleIndices[1] = { 0, };
		ParamDef->setDynamicHandleIndicesMap(dynHandleIndices, 1);

	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="spawnModifierList[]"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("spawnModifierList", TYPE_REF, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("HIDE_CLASS1", "ColorVsLifeModifierParams", true);
		HintTable[1].init("INCLUDED", physx::PxU64(1), true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("HIDE_CLASS1", "ColorVsLifeModifierParams", true);
		HintTable[1].init("INCLUDED", physx::PxU64(1), true);
		HintTable[2].init("longDescription", "These modifiers are applied to the instanced objects at object creation. (Currently RotationModifierParams is unsupported for sprites)", true);
		HintTable[3].init("shortDescription", "Spawn modifier list", true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 4);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "SimpleScaleModifierParams", "RandomScaleModifierParams", "InitialColorModifierParams", "RandomSubtextureModifierParams", "RandomRotationModifierParams", "ColorVsLifeModifierParams" };
		ParamDefTable[3].setRefVariantVals((const char**)RefVariantVals, 6);



	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="continuousModifierList"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("continuousModifierList", TYPE_ARRAY, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[6];
		static Hint* HintPtrTable[6] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], &HintTable[5], };
		HintTable[0].init("HIDE_CLASS1", "ColorVsLifeModifierParams", true);
		HintTable[1].init("HIDE_CLASS2", "ColorVsDensityModifierParams", true);
		HintTable[2].init("HIDE_CLASS3", "ScaleVsCameraDistanceModifierParams", true);
		HintTable[3].init("HIDE_CLASS4", "ScaleVsDensityModifierParams", true);
		HintTable[4].init("HIDE_CLASS5", "ScaleVsLifeModifierParams", true);
		HintTable[5].init("INCLUDED", physx::PxU64(1), true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 6);

#else

		static HintImpl HintTable[8];
		static Hint* HintPtrTable[8] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], &HintTable[5], &HintTable[6], &HintTable[7], };
		HintTable[0].init("HIDE_CLASS1", "ColorVsLifeModifierParams", true);
		HintTable[1].init("HIDE_CLASS2", "ColorVsDensityModifierParams", true);
		HintTable[2].init("HIDE_CLASS3", "ScaleVsCameraDistanceModifierParams", true);
		HintTable[3].init("HIDE_CLASS4", "ScaleVsDensityModifierParams", true);
		HintTable[4].init("HIDE_CLASS5", "ScaleVsLifeModifierParams", true);
		HintTable[5].init("INCLUDED", physx::PxU64(1), true);
		HintTable[6].init("longDescription", "These modifiers are applied to the instanced objects every frame. (Currently RotationModifierParams is unsupported for sprites)", true);
		HintTable[7].init("shortDescription", "Continuous modifier list", true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 8);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "ColorVsLifeCompositeModifierParams", "ColorVsDensityCompositeModifierParams", "ScaleVsLife2DModifierParams", "ScaleVsDensity2DModifierParams", "ScaleVsCameraDistance2DModifierParams", "SubtextureVsLifeModifierParams", "ViewDirectionSortingModifierParams", "ColorVsLifeModifierParams", "ColorVsDensityModifierParams", "ScaleVsLifeModifierParams", "ScaleVsDensityModifierParams", "ScaleVsCameraDistanceModifierParams", "RotationRateModifierParams", "RotationRateVsLifeModifierParams", "OrientScaleAlongScreenVelocityModifierParams" };
		ParamDefTable[4].setRefVariantVals((const char**)RefVariantVals, 15);


		ParamDef->setArraySize(-1);
		static const physx::PxU8 dynHandleIndices[1] = { 0, };
		ParamDef->setDynamicHandleIndicesMap(dynHandleIndices, 1);

	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="continuousModifierList[]"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("continuousModifierList", TYPE_REF, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[6];
		static Hint* HintPtrTable[6] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], &HintTable[5], };
		HintTable[0].init("HIDE_CLASS1", "ColorVsLifeModifierParams", true);
		HintTable[1].init("HIDE_CLASS2", "ColorVsDensityModifierParams", true);
		HintTable[2].init("HIDE_CLASS3", "ScaleVsCameraDistanceModifierParams", true);
		HintTable[3].init("HIDE_CLASS4", "ScaleVsDensityModifierParams", true);
		HintTable[4].init("HIDE_CLASS5", "ScaleVsLifeModifierParams", true);
		HintTable[5].init("INCLUDED", physx::PxU64(1), true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 6);

#else

		static HintImpl HintTable[8];
		static Hint* HintPtrTable[8] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], &HintTable[4], &HintTable[5], &HintTable[6], &HintTable[7], };
		HintTable[0].init("HIDE_CLASS1", "ColorVsLifeModifierParams", true);
		HintTable[1].init("HIDE_CLASS2", "ColorVsDensityModifierParams", true);
		HintTable[2].init("HIDE_CLASS3", "ScaleVsCameraDistanceModifierParams", true);
		HintTable[3].init("HIDE_CLASS4", "ScaleVsDensityModifierParams", true);
		HintTable[4].init("HIDE_CLASS5", "ScaleVsLifeModifierParams", true);
		HintTable[5].init("INCLUDED", physx::PxU64(1), true);
		HintTable[6].init("longDescription", "These modifiers are applied to the instanced objects every frame. (Currently RotationModifierParams is unsupported for sprites)", true);
		HintTable[7].init("shortDescription", "Continuous modifier list", true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 8);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "ColorVsLifeCompositeModifierParams", "ColorVsDensityCompositeModifierParams", "ScaleVsLife2DModifierParams", "ScaleVsDensity2DModifierParams", "ScaleVsCameraDistance2DModifierParams", "SubtextureVsLifeModifierParams", "ViewDirectionSortingModifierParams", "ColorVsLifeModifierParams", "ColorVsDensityModifierParams", "ScaleVsLifeModifierParams", "ScaleVsDensityModifierParams", "ScaleVsCameraDistanceModifierParams", "RotationRateModifierParams", "RotationRateVsLifeModifierParams", "OrientScaleAlongScreenVelocityModifierParams" };
		ParamDefTable[5].setRefVariantVals((const char**)RefVariantVals, 15);



	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[3];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(4);

		ParamDefTable[0].setChildren(Children, 3);
	}

	// SetChildren for: nodeIndex=2, longName="spawnModifierList"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(3);

		ParamDefTable[2].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=4, longName="continuousModifierList"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(5);

		ParamDefTable[4].setChildren(Children, 1);
	}

	mBuiltFlag = true;

}
void SpriteIofxParameters_0p1::initStrings(void)
{
}

void SpriteIofxParameters_0p1::initDynamicArrays(void)
{
	spawnModifierList.buf = NULL;
	spawnModifierList.isAllocated = true;
	spawnModifierList.elementSize = sizeof(NxParameterized::Interface*);
	spawnModifierList.arraySizes[0] = 0;
	continuousModifierList.buf = NULL;
	continuousModifierList.isAllocated = true;
	continuousModifierList.elementSize = sizeof(NxParameterized::Interface*);
	continuousModifierList.arraySizes[0] = 0;
}

void SpriteIofxParameters_0p1::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();

	initDynamicArrays();
	initStrings();
	initReferences();
}

void SpriteIofxParameters_0p1::initReferences(void)
{
	spriteMaterialName = NULL;

}

void SpriteIofxParameters_0p1::freeDynamicArrays(void)
{
	if (spawnModifierList.isAllocated && spawnModifierList.buf)
	{
		mParameterizedTraits->free(spawnModifierList.buf);
	}
	if (continuousModifierList.isAllocated && continuousModifierList.buf)
	{
		mParameterizedTraits->free(continuousModifierList.buf);
	}
}

void SpriteIofxParameters_0p1::freeStrings(void)
{
}

void SpriteIofxParameters_0p1::freeReferences(void)
{
	if (spriteMaterialName)
	{
		spriteMaterialName->destroy();
	}


	for (int i = 0; i < spawnModifierList.arraySizes[0]; ++i)
	{
		if (spawnModifierList.buf[i])
		{
			spawnModifierList.buf[i]->destroy();
		}
	}

	for (int i = 0; i < continuousModifierList.arraySizes[0]; ++i)
	{
		if (continuousModifierList.buf[i])
		{
			continuousModifierList.buf[i]->destroy();
		}
	}
}

} // namespace apex
} // namespace physx