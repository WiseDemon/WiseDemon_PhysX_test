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

#ifndef HEADER_ShapeCapsuleParams_0p1_h
#define HEADER_ShapeCapsuleParams_0p1_h

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

namespace ShapeCapsuleParams_0p1NS
{



struct ParametersStruct
{

	physx::PxMat44 localPose;
	physx::PxF32 scale;
	physx::PxF32 radius;
	physx::PxF32 height;

};

static const physx::PxU32 checksum[] = { 0x49a64e55, 0x36bd0c6f, 0x2a503560, 0x0b398be7, };

} // namespace ShapeCapsuleParams_0p1NS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class ShapeCapsuleParams_0p1 : public NxParameterized::NxParameters, public ShapeCapsuleParams_0p1NS::ParametersStruct
{
public:
	ShapeCapsuleParams_0p1(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~ShapeCapsuleParams_0p1();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ShapeCapsuleParams");
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
		bits = 8 * sizeof(ShapeCapsuleParams_0p1NS::checksum);
		return ShapeCapsuleParams_0p1NS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const ShapeCapsuleParams_0p1NS::ParametersStruct& parameters(void) const
	{
		ShapeCapsuleParams_0p1* tmpThis = const_cast<ShapeCapsuleParams_0p1*>(this);
		return *(static_cast<ShapeCapsuleParams_0p1NS::ParametersStruct*>(tmpThis));
	}

	ShapeCapsuleParams_0p1NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ShapeCapsuleParams_0p1NS::ParametersStruct*>(this));
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

class ShapeCapsuleParams_0p1Factory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ShapeCapsuleParams_0p1), ShapeCapsuleParams_0p1::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, ShapeCapsuleParams_0p1::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ShapeCapsuleParams_0p1");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ShapeCapsuleParams_0p1)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, ShapeCapsuleParams_0p1)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, ShapeCapsuleParams_0p1::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, ShapeCapsuleParams_0p1::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ShapeCapsuleParams_0p1");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of ShapeCapsuleParams_0p1 here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ShapeCapsuleParams_0p1*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ShapeCapsuleParams_0p1::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (ShapeCapsuleParams_0p1::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (ShapeCapsuleParams_0p1::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (ShapeCapsuleParams_0p1::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
