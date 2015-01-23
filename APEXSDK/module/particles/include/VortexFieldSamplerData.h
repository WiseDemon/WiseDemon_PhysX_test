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
// Created: 2015.01.18 19:26:25

#ifndef HEADER_VortexFieldSamplerData_h
#define HEADER_VortexFieldSamplerData_h

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
namespace particles
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace VortexFieldSamplerDataNS
{



struct ParametersStruct
{

	NxParameterized::DummyStringStruct Name;
	NxParameterized::Interface* VortexFieldSampler;

};

static const physx::PxU32 checksum[] = { 0xe1494a82, 0xeb4d703f, 0xa17e8922, 0x25b15901, };

} // namespace VortexFieldSamplerDataNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class VortexFieldSamplerData : public NxParameterized::NxParameters, public VortexFieldSamplerDataNS::ParametersStruct
{
public:
	VortexFieldSamplerData(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~VortexFieldSamplerData();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("VortexFieldSamplerData");
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
		bits = 8 * sizeof(VortexFieldSamplerDataNS::checksum);
		return VortexFieldSamplerDataNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const VortexFieldSamplerDataNS::ParametersStruct& parameters(void) const
	{
		VortexFieldSamplerData* tmpThis = const_cast<VortexFieldSamplerData*>(this);
		return *(static_cast<VortexFieldSamplerDataNS::ParametersStruct*>(tmpThis));
	}

	VortexFieldSamplerDataNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<VortexFieldSamplerDataNS::ParametersStruct*>(this));
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

class VortexFieldSamplerDataFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(VortexFieldSamplerData), VortexFieldSamplerData::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, VortexFieldSamplerData::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class VortexFieldSamplerData");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(VortexFieldSamplerData)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, VortexFieldSamplerData)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, VortexFieldSamplerData::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, VortexFieldSamplerData::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class VortexFieldSamplerData");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of VortexFieldSamplerData here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (VortexFieldSamplerData*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (VortexFieldSamplerData::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (VortexFieldSamplerData::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (VortexFieldSamplerData::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (VortexFieldSamplerData::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace particles
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
