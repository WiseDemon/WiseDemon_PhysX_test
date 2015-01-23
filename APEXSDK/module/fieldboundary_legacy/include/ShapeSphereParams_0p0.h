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

#ifndef HEADER_ShapeSphereParams_0p0_h
#define HEADER_ShapeSphereParams_0p0_h

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

namespace ShapeSphereParams_0p0NS
{



struct ParametersStruct
{

	physx::PxMat34Legacy localPose;
	physx::PxF32 scale;
	physx::PxF32 radius;

};

static const physx::PxU32 checksum[] = { 0x0e140ccf, 0x5466e648, 0xf03976ef, 0x8845427f, };

} // namespace ShapeSphereParams_0p0NS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class ShapeSphereParams_0p0 : public NxParameterized::NxParameters, public ShapeSphereParams_0p0NS::ParametersStruct
{
public:
	ShapeSphereParams_0p0(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~ShapeSphereParams_0p0();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ShapeSphereParams");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)0 << 16) + (physx::PxU32)0;

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
		bits = 8 * sizeof(ShapeSphereParams_0p0NS::checksum);
		return ShapeSphereParams_0p0NS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const ShapeSphereParams_0p0NS::ParametersStruct& parameters(void) const
	{
		ShapeSphereParams_0p0* tmpThis = const_cast<ShapeSphereParams_0p0*>(this);
		return *(static_cast<ShapeSphereParams_0p0NS::ParametersStruct*>(tmpThis));
	}

	ShapeSphereParams_0p0NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ShapeSphereParams_0p0NS::ParametersStruct*>(this));
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

class ShapeSphereParams_0p0Factory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ShapeSphereParams_0p0), ShapeSphereParams_0p0::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, ShapeSphereParams_0p0::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ShapeSphereParams_0p0");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ShapeSphereParams_0p0)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, ShapeSphereParams_0p0)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, ShapeSphereParams_0p0::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, ShapeSphereParams_0p0::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ShapeSphereParams_0p0");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of ShapeSphereParams_0p0 here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ShapeSphereParams_0p0*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ShapeSphereParams_0p0::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (ShapeSphereParams_0p0::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (ShapeSphereParams_0p0::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (ShapeSphereParams_0p0::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif