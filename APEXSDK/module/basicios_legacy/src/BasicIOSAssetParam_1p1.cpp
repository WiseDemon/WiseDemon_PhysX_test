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

#include "BasicIOSAssetParam_1p1.h"
#include <string.h>
#include <stdlib.h>

using namespace NxParameterized;

namespace physx
{
namespace apex
{

using namespace BasicIOSAssetParam_1p1NS;

const char* const BasicIOSAssetParam_1p1Factory::vptr =
    NxParameterized::getVptr<BasicIOSAssetParam_1p1, BasicIOSAssetParam_1p1::ClassAlignment>();

const physx::PxU32 NumParamDefs = 27;
static NxParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7, 8, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 9, 10, 11, 23,
	24, 25, 26,
};

#define TENUM(type) physx::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NxParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 19 },
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->restDensity), NULL, 0 }, // restDensity
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->particleRadius), NULL, 0 }, // particleRadius
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->maxParticleCount), NULL, 0 }, // maxParticleCount
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->maxInjectedParticleCount), NULL, 0 }, // maxInjectedParticleCount
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->maxCollidingObjects), NULL, 0 }, // maxCollidingObjects
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->sceneGravityScale), NULL, 0 }, // sceneGravityScale
	{ TYPE_VEC3, false, (size_t)(&((ParametersStruct*)0)->externalAcceleration), NULL, 0 }, // externalAcceleration
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->particleMass), CHILDREN(19), 3 }, // particleMass
	{ TYPE_F32, false, (size_t)(&((RandomF32_Type*)0)->center), NULL, 0 }, // particleMass.center
	{ TYPE_F32, false, (size_t)(&((RandomF32_Type*)0)->spread), NULL, 0 }, // particleMass.spread
	{ TYPE_ENUM, false, (size_t)(&((RandomF32_Type*)0)->type), NULL, 0 }, // particleMass.type
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->collisionFilterDataName), NULL, 0 }, // collisionFilterDataName
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->fieldSamplerFilterDataName), NULL, 0 }, // fieldSamplerFilterDataName
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->staticCollision), NULL, 0 }, // staticCollision
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->restitutionForStaticShapes), NULL, 0 }, // restitutionForStaticShapes
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->dynamicCollision), NULL, 0 }, // dynamicCollision
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->restitutionForDynamicShapes), NULL, 0 }, // restitutionForDynamicShapes
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->collisionDistanceMultiplier), NULL, 0 }, // collisionDistanceMultiplier
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->collisionThreshold), NULL, 0 }, // collisionThreshold
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->collisionWithConvex), NULL, 0 }, // collisionWithConvex
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->collisionWithTriangleMesh), NULL, 0 }, // collisionWithTriangleMesh
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->GridDensity), CHILDREN(22), 4 }, // GridDensity
	{ TYPE_BOOL, false, (size_t)(&((GridDensityParams_Type*)0)->Enabled), NULL, 0 }, // GridDensity.Enabled
	{ TYPE_ENUM, false, (size_t)(&((GridDensityParams_Type*)0)->Resolution), NULL, 0 }, // GridDensity.Resolution
	{ TYPE_F32, false, (size_t)(&((GridDensityParams_Type*)0)->GridSize), NULL, 0 }, // GridDensity.GridSize
	{ TYPE_U32, false, (size_t)(&((GridDensityParams_Type*)0)->MaxCellCount), NULL, 0 }, // GridDensity.MaxCellCount
};


bool BasicIOSAssetParam_1p1::mBuiltFlag = false;
NxParameterized::MutexType BasicIOSAssetParam_1p1::mBuiltFlagMutex;

BasicIOSAssetParam_1p1::BasicIOSAssetParam_1p1(NxParameterized::Traits* traits, void* buf, PxI32* refCount) :
	NxParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &BasicIOSAssetParam_1p1FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

BasicIOSAssetParam_1p1::~BasicIOSAssetParam_1p1()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void BasicIOSAssetParam_1p1::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NxParameterized::Traits* traits = mParameterizedTraits;
	physx::PxI32* refCount = mRefCount;
	void* buf = mBuffer;

	this->~BasicIOSAssetParam_1p1();

	NxParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NxParameterized::DefinitionImpl* BasicIOSAssetParam_1p1::getParameterDefinitionTree(void)
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

const NxParameterized::DefinitionImpl* BasicIOSAssetParam_1p1::getParameterDefinitionTree(void) const
{
	BasicIOSAssetParam_1p1* tmpParam = const_cast<BasicIOSAssetParam_1p1*>(this);

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

NxParameterized::ErrorType BasicIOSAssetParam_1p1::getParameterHandle(const char* long_name, Handle& handle) const
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

NxParameterized::ErrorType BasicIOSAssetParam_1p1::getParameterHandle(const char* long_name, Handle& handle)
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

void BasicIOSAssetParam_1p1::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<BasicIOSAssetParam_1p1::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void BasicIOSAssetParam_1p1::freeParameterDefinitionTable(NxParameterized::Traits* traits)
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

void BasicIOSAssetParam_1p1::buildTree(void)
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

	// Initialize DefinitionImpl node: nodeIndex=1, longName="restDensity"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("restDensity", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("min", physx::PxU64(0), true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("longDescription", "\nAuthored density of the instanced objects simulated by this IOS.  Emitters need this\nvalue for constant density emitter effects.\n", true);
		HintTable[2].init("min", physx::PxU64(0), true);
		HintTable[3].init("shortDescription", "Rest density of particles", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 4);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="particleRadius"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("particleRadius", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("min", physx::PxU64(0), true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("longDescription", "\nRadius of a particle.\n", true);
		HintTable[2].init("min", physx::PxU64(0), true);
		HintTable[3].init("shortDescription", "Radius of a particle", true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 4);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="maxParticleCount"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("maxParticleCount", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(0), true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("min", physx::PxU64(0), true);
		HintTable[1].init("shortDescription", "Maximum particle count", true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="maxInjectedParticleCount"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("maxInjectedParticleCount", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(0), true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "\nThe maximum number of new particles to be spawned on each frame. Use values >1 to provide the absolute value,\nor 0 <= x <= 1 to provide the percentage rate to overall number of particles. \n", true);
		HintTable[1].init("min", physx::PxU64(0), true);
		HintTable[2].init("shortDescription", "Maximum number of newly created particles on each frame", true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="maxCollidingObjects"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("maxCollidingObjects", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(1), true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "Maximum number of objects that are able to collide with each other (boxes, spheres, capsules, hspaces, convexmeshes, trimeshes).\n", true);
		HintTable[1].init("min", physx::PxU64(1), true);
		HintTable[2].init("shortDescription", "Maximum number of particles that are able to collide with each other.", true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="sceneGravityScale"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("sceneGravityScale", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(0), true);
		ParamDefTable[6].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("min", physx::PxU64(0), true);
		HintTable[1].init("shortDescription", "Used to scale, or even disable the basic IOS's gravity", true);
		ParamDefTable[6].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="externalAcceleration"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("externalAcceleration", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("gameScale", "true", true);
		ParamDefTable[7].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("shortDescription", "Acceleration (m/s^2) applied to all particles at all time steps (added to the scaled scene gravity).", true);
		ParamDefTable[7].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="particleMass"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("particleMass", TYPE_STRUCT, "RandomF32", true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Defines parameters of probability distribution of particle masses.\n", true);
		HintTable[1].init("shortDescription", "Probability distribution of particle masses for this IOS.", true);
		ParamDefTable[8].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="particleMass.center"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("center", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Center of distribution", true);
		ParamDefTable[9].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="particleMass.spread"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("spread", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Spread is std deviation for normal distribution or halfwidth for uniform distribution.\n", true);
		HintTable[1].init("shortDescription", "Spread of distribution", true);
		ParamDefTable[10].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="particleMass.type"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("type", TYPE_ENUM, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Type of probability distribution (currently only normal and uniform are supported).\n", true);
		HintTable[1].init("shortDescription", "Distribution type", true);
		ParamDefTable[11].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "uniform", "normal" };
		ParamDefTable[11].setEnumVals((const char**)EnumVals, 2);




	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="collisionFilterDataName"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("collisionFilterDataName", TYPE_STRING, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("HIDDEN", physx::PxU64(1), true);
		ParamDefTable[12].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("HIDDEN", physx::PxU64(1), true);
		HintTable[1].init("shortDescription", "The filter data (group/groupsMask) name for IOS vs PhysX interaction.", true);
		ParamDefTable[12].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="fieldSamplerFilterDataName"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("fieldSamplerFilterDataName", TYPE_STRING, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The filter data name for IOS vs FieldSampler interaction.", true);
		ParamDefTable[13].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=14, longName="staticCollision"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[14];
		ParamDef->init("staticCollision", TYPE_BOOL, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", physx::PxU64(1), true);
		ParamDefTable[14].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", physx::PxU64(1), true);
		HintTable[1].init("shortDescription", "Enables collision with static shapes", true);
		ParamDefTable[14].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=15, longName="restitutionForStaticShapes"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[15];
		ParamDef->init("restitutionForStaticShapes", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", physx::PxF64(0.5), true);
		HintTable[1].init("max", physx::PxU64(1), true);
		HintTable[2].init("min", physx::PxU64(0), true);
		ParamDefTable[15].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", physx::PxF64(0.5), true);
		HintTable[1].init("max", physx::PxU64(1), true);
		HintTable[2].init("min", physx::PxU64(0), true);
		HintTable[3].init("shortDescription", "Defines the restitution coefficient used for collisions with static shapes.", true);
		ParamDefTable[15].setHints((const NxParameterized::Hint**)HintPtrTable, 4);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=16, longName="dynamicCollision"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[16];
		ParamDef->init("dynamicCollision", TYPE_BOOL, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", physx::PxU64(1), true);
		ParamDefTable[16].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", physx::PxU64(1), true);
		HintTable[1].init("shortDescription", "Enables collision with dynamic shapes", true);
		ParamDefTable[16].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=17, longName="restitutionForDynamicShapes"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[17];
		ParamDef->init("restitutionForDynamicShapes", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("defaultValue", physx::PxF64(0.5), true);
		HintTable[1].init("max", physx::PxU64(1), true);
		HintTable[2].init("min", physx::PxU64(0), true);
		ParamDefTable[17].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValue", physx::PxF64(0.5), true);
		HintTable[1].init("max", physx::PxU64(1), true);
		HintTable[2].init("min", physx::PxU64(0), true);
		HintTable[3].init("shortDescription", "Defines the restitution coefficient used for collisions with dynamic shapes.", true);
		ParamDefTable[17].setHints((const NxParameterized::Hint**)HintPtrTable, 4);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=18, longName="collisionDistanceMultiplier"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[18];
		ParamDef->init("collisionDistanceMultiplier", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(0), true);
		ParamDefTable[18].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("min", physx::PxU64(0), true);
		HintTable[1].init("shortDescription", "Defines the distance (= collisionDistanceMultiplier*particleRadius) between particles and collision geometry, which is maintained during simulation.", true);
		ParamDefTable[18].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=19, longName="collisionThreshold"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[19];
		ParamDef->init("collisionThreshold", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("min", physx::PxU64(0), true);
		ParamDefTable[19].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("gameScale", "true", true);
		HintTable[1].init("min", physx::PxU64(0), true);
		HintTable[2].init("shortDescription", "Defines the threshold for collision between particles and collision geometry, inside this threshold collision contact is generated without a response.", true);
		ParamDefTable[19].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=20, longName="collisionWithConvex"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[20];
		ParamDef->init("collisionWithConvex", TYPE_BOOL, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", physx::PxU64(1), true);
		ParamDefTable[20].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", physx::PxU64(1), true);
		HintTable[1].init("shortDescription", "Enables collision with convex shapes", true);
		ParamDefTable[20].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=21, longName="collisionWithTriangleMesh"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[21];
		ParamDef->init("collisionWithTriangleMesh", TYPE_BOOL, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("defaultValue", physx::PxU64(0), true);
		ParamDefTable[21].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValue", physx::PxU64(0), true);
		HintTable[1].init("shortDescription", "Enables collision with triangle mesh shapes", true);
		ParamDefTable[21].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=22, longName="GridDensity"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[22];
		ParamDef->init("GridDensity", TYPE_STRUCT, "GridDensityParams", true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Settings for Density Grid\n", true);
		HintTable[1].init("shortDescription", "Settings for Density Grid", true);
		ParamDefTable[22].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=23, longName="GridDensity.Enabled"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[23];
		ParamDef->init("Enabled", TYPE_BOOL, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "If this option is true; density will be computed based on the grouping of particles in a 3d grid\n", true);
		HintTable[1].init("shortDescription", "Compute Density Using a Grid", true);
		ParamDefTable[23].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=24, longName="GridDensity.Resolution"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[24];
		ParamDef->init("Resolution", TYPE_ENUM, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This enumeration defines the 3d resolution of the grid.\n", true);
		HintTable[1].init("shortDescription", "Number of cells in a 3D grid, used to calculate particles positions. Higher values divide the grid into more cells.", true);
		ParamDefTable[24].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "GDG_8", "GDG_16", "GDG_32", "GDG_64", "GDG_128", "GDG_256" };
		ParamDefTable[24].setEnumVals((const char**)EnumVals, 6);




	}

	// Initialize DefinitionImpl node: nodeIndex=25, longName="GridDensity.GridSize"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[25];
		ParamDef->init("GridSize", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("DISPLAY_NAME", "Grid Depth", true);
		HintTable[1].init("min", physx::PxU64(0), true);
		ParamDefTable[25].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("DISPLAY_NAME", "Grid Depth", true);
		HintTable[1].init("longDescription", "The default value is a 10 units\nMust be positive.\n", true);
		HintTable[2].init("min", physx::PxU64(0), true);
		HintTable[3].init("shortDescription", "Depth of grid.", true);
		ParamDefTable[25].setHints((const NxParameterized::Hint**)HintPtrTable, 4);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=26, longName="GridDensity.MaxCellCount"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[26];
		ParamDef->init("MaxCellCount", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("min", physx::PxU64(0), true);
		ParamDefTable[26].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("longDescription", "This is the integer count representing how many particles reside in a single grid cell before the density is considered 1.\nIt is valid for the density to be greater than one.  For example, if there were 32 particles in a grid cell with a max-cell count of\n16, then the density would be equal to 2.\n", true);
		HintTable[1].init("min", physx::PxU64(0), true);
		HintTable[2].init("shortDescription", "This is the number of particles within a gridcell for a density of 1", true);
		ParamDefTable[26].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[19];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);
		Children[4] = PDEF_PTR(5);
		Children[5] = PDEF_PTR(6);
		Children[6] = PDEF_PTR(7);
		Children[7] = PDEF_PTR(8);
		Children[8] = PDEF_PTR(12);
		Children[9] = PDEF_PTR(13);
		Children[10] = PDEF_PTR(14);
		Children[11] = PDEF_PTR(15);
		Children[12] = PDEF_PTR(16);
		Children[13] = PDEF_PTR(17);
		Children[14] = PDEF_PTR(18);
		Children[15] = PDEF_PTR(19);
		Children[16] = PDEF_PTR(20);
		Children[17] = PDEF_PTR(21);
		Children[18] = PDEF_PTR(22);

		ParamDefTable[0].setChildren(Children, 19);
	}

	// SetChildren for: nodeIndex=8, longName="particleMass"
	{
		static Definition* Children[3];
		Children[0] = PDEF_PTR(9);
		Children[1] = PDEF_PTR(10);
		Children[2] = PDEF_PTR(11);

		ParamDefTable[8].setChildren(Children, 3);
	}

	// SetChildren for: nodeIndex=22, longName="GridDensity"
	{
		static Definition* Children[4];
		Children[0] = PDEF_PTR(23);
		Children[1] = PDEF_PTR(24);
		Children[2] = PDEF_PTR(25);
		Children[3] = PDEF_PTR(26);

		ParamDefTable[22].setChildren(Children, 4);
	}

	mBuiltFlag = true;

}
void BasicIOSAssetParam_1p1::initStrings(void)
{
	collisionFilterDataName.isAllocated = true;
	collisionFilterDataName.buf = NULL;
	fieldSamplerFilterDataName.isAllocated = true;
	fieldSamplerFilterDataName.buf = NULL;
}

void BasicIOSAssetParam_1p1::initDynamicArrays(void)
{
}

void BasicIOSAssetParam_1p1::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	restDensity = physx::PxF32(0);
	particleRadius = physx::PxF32(1);
	maxParticleCount = physx::PxU32(16384);
	maxInjectedParticleCount = physx::PxF32(0.1);
	maxCollidingObjects = physx::PxU32(32);
	sceneGravityScale = physx::PxF32(1);
	externalAcceleration = physx::PxVec3(init(0, 0, 0));
	particleMass.center = physx::PxF32(0);
	particleMass.spread = physx::PxF32(0);
	particleMass.type = (const char*)"uniform";

	particleMass.center = 1.0f;

	staticCollision = bool(1);
	restitutionForStaticShapes = physx::PxF32(0.5f);
	dynamicCollision = bool(1);
	restitutionForDynamicShapes = physx::PxF32(0.5f);
	collisionDistanceMultiplier = physx::PxF32(1.0f);
	collisionThreshold = physx::PxF32(0.001f);
	collisionWithConvex = bool(1);
	collisionWithTriangleMesh = bool(0);
	GridDensity.Enabled = bool(0);
	GridDensity.Resolution = (const char*)"GDG_16";
	GridDensity.GridSize = physx::PxF32(10);
	GridDensity.MaxCellCount = physx::PxU32(16);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void BasicIOSAssetParam_1p1::initReferences(void)
{
}

void BasicIOSAssetParam_1p1::freeDynamicArrays(void)
{
}

void BasicIOSAssetParam_1p1::freeStrings(void)
{

	if (collisionFilterDataName.isAllocated && collisionFilterDataName.buf)
	{
		mParameterizedTraits->strfree((char*)collisionFilterDataName.buf);
	}

	if (fieldSamplerFilterDataName.isAllocated && fieldSamplerFilterDataName.buf)
	{
		mParameterizedTraits->strfree((char*)fieldSamplerFilterDataName.buf);
	}
}

void BasicIOSAssetParam_1p1::freeReferences(void)
{
}

} // namespace apex
} // namespace physx
