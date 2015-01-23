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
// Created: 2015.01.18 19:26:23

#ifndef HEADER_GenericForceFieldKernelParams_h
#define HEADER_GenericForceFieldKernelParams_h

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
namespace forcefield
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace GenericForceFieldKernelParamsNS
{

struct CoordinateSystemParameters_Type;

struct CoordinateSystemParameters_Type
{
	const char* type;
	physx::PxF32 torusRadius;
};

struct ParametersStruct
{

	CoordinateSystemParameters_Type coordinateSystemParameters;
	physx::PxVec3 constant;
	physx::PxMat33Legacy positionMultiplier;
	physx::PxVec3 positionTarget;
	physx::PxMat33Legacy velocityMultiplier;
	physx::PxVec3 velocityTarget;
	physx::PxVec3 noise;
	physx::PxVec3 falloffLinear;
	physx::PxVec3 falloffQuadratic;

};

static const physx::PxU32 checksum[] = { 0xff6bc966, 0x041661be, 0x3110753d, 0x08c8332e, };

} // namespace GenericForceFieldKernelParamsNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class GenericForceFieldKernelParams : public NxParameterized::NxParameters, public GenericForceFieldKernelParamsNS::ParametersStruct
{
public:
	GenericForceFieldKernelParams(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~GenericForceFieldKernelParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("GenericForceFieldKernelParams");
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
		bits = 8 * sizeof(GenericForceFieldKernelParamsNS::checksum);
		return GenericForceFieldKernelParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const GenericForceFieldKernelParamsNS::ParametersStruct& parameters(void) const
	{
		GenericForceFieldKernelParams* tmpThis = const_cast<GenericForceFieldKernelParams*>(this);
		return *(static_cast<GenericForceFieldKernelParamsNS::ParametersStruct*>(tmpThis));
	}

	GenericForceFieldKernelParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<GenericForceFieldKernelParamsNS::ParametersStruct*>(this));
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

class GenericForceFieldKernelParamsFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(GenericForceFieldKernelParams), GenericForceFieldKernelParams::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, GenericForceFieldKernelParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class GenericForceFieldKernelParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(GenericForceFieldKernelParams)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, GenericForceFieldKernelParams)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, GenericForceFieldKernelParams::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, GenericForceFieldKernelParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class GenericForceFieldKernelParams");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of GenericForceFieldKernelParams here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (GenericForceFieldKernelParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (GenericForceFieldKernelParams::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (GenericForceFieldKernelParams::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (GenericForceFieldKernelParams::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (GenericForceFieldKernelParams::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace forcefield
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif