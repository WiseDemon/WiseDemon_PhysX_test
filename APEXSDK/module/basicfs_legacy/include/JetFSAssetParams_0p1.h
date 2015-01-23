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

#ifndef HEADER_JetFSAssetParams_0p1_h
#define HEADER_JetFSAssetParams_0p1_h

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

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace JetFSAssetParams_0p1NS
{



struct ParametersStruct
{

	physx::PxF32 defaultScale;
	physx::PxF32 boundaryFadePercentage;
	physx::PxVec3 fieldDirection;
	physx::PxF32 fieldDirectionDeviationAngle;
	physx::PxF32 fieldDirectionOscillationPeriod;
	physx::PxF32 fieldStrength;
	physx::PxF32 fieldStrengthDeviationPercentage;
	physx::PxF32 fieldStrengthOscillationPeriod;
	physx::PxF32 gridShapeRadius;
	physx::PxF32 gridShapeHeight;
	physx::PxF32 gridBoundaryFadePercentage;
	physx::PxF32 nearRadius;
	physx::PxF32 pivotRadius;
	physx::PxF32 farRadius;
	physx::PxF32 directionalStretch;
	physx::PxF32 averageStartDistance;
	physx::PxF32 averageEndDistance;
	physx::PxF32 noisePercentage;
	physx::PxF32 noiseSpaceScale;
	physx::PxF32 noiseTimeScale;
	physx::PxU32 noiseOctaves;
	physx::PxF32 fieldDragCoeff;
	physx::PxF32 fieldWeight;
	NxParameterized::DummyStringStruct fieldBoundaryFilterDataName;
	NxParameterized::DummyStringStruct fieldSamplerFilterDataName;

};

static const physx::PxU32 checksum[] = { 0x69e560ed, 0x4dd107de, 0x04ab3f89, 0x32270f6f, };

} // namespace JetFSAssetParams_0p1NS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class JetFSAssetParams_0p1 : public NxParameterized::NxParameters, public JetFSAssetParams_0p1NS::ParametersStruct
{
public:
	JetFSAssetParams_0p1(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~JetFSAssetParams_0p1();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("JetFSAssetParams");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)0 << 16) + (physx::PxU32)1;

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
		bits = 8 * sizeof(JetFSAssetParams_0p1NS::checksum);
		return JetFSAssetParams_0p1NS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const JetFSAssetParams_0p1NS::ParametersStruct& parameters(void) const
	{
		JetFSAssetParams_0p1* tmpThis = const_cast<JetFSAssetParams_0p1*>(this);
		return *(static_cast<JetFSAssetParams_0p1NS::ParametersStruct*>(tmpThis));
	}

	JetFSAssetParams_0p1NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<JetFSAssetParams_0p1NS::ParametersStruct*>(this));
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

class JetFSAssetParams_0p1Factory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(JetFSAssetParams_0p1), JetFSAssetParams_0p1::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, JetFSAssetParams_0p1::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class JetFSAssetParams_0p1");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(JetFSAssetParams_0p1)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, JetFSAssetParams_0p1)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, JetFSAssetParams_0p1::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, JetFSAssetParams_0p1::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class JetFSAssetParams_0p1");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of JetFSAssetParams_0p1 here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (JetFSAssetParams_0p1*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (JetFSAssetParams_0p1::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (JetFSAssetParams_0p1::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (JetFSAssetParams_0p1::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (JetFSAssetParams_0p1::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
