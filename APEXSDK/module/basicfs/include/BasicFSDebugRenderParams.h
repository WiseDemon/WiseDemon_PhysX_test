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
// Created: 2015.01.18 19:26:13

#ifndef HEADER_BasicFSDebugRenderParams_h
#define HEADER_BasicFSDebugRenderParams_h

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
namespace basicfs
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace BasicFSDebugRenderParamsNS
{



struct ParametersStruct
{

	bool VISUALIZE_JET_FS_ACTOR;
	bool VISUALIZE_JET_FS_ACTOR_NAME;
	bool VISUALIZE_JET_FS_SHAPE;
	bool VISUALIZE_JET_FS_FIELD;
	bool VISUALIZE_JET_FS_POSE;
	physx::PxF32 JET_FS_FIELD_SCALE;
	bool VISUALIZE_ATTRACTOR_FS_ACTOR;
	bool VISUALIZE_ATTRACTOR_FS_ACTOR_NAME;
	bool VISUALIZE_ATTRACTOR_FS_SHAPE;
	bool VISUALIZE_ATTRACTOR_FS_FIELD;
	bool VISUALIZE_ATTRACTOR_FS_POSE;
	bool VISUALIZE_VORTEX_FS_ACTOR;
	bool VISUALIZE_VORTEX_FS_ACTOR_NAME;
	bool VISUALIZE_VORTEX_FS_SHAPE;
	bool VISUALIZE_VORTEX_FS_FIELD;
	bool VISUALIZE_VORTEX_FS_POSE;
	bool VISUALIZE_NOISE_FS_ACTOR;
	bool VISUALIZE_NOISE_FS_ACTOR_NAME;
	bool VISUALIZE_NOISE_FS_SHAPE;
	bool VISUALIZE_NOISE_FS_POSE;
	bool VISUALIZE_WIND_FS_ACTOR;
	bool VISUALIZE_WIND_FS_ACTOR_NAME;

};

static const physx::PxU32 checksum[] = { 0xb0169d27, 0x35d0161d, 0xa6b13602, 0x90135fb1, };

} // namespace BasicFSDebugRenderParamsNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class BasicFSDebugRenderParams : public NxParameterized::NxParameters, public BasicFSDebugRenderParamsNS::ParametersStruct
{
public:
	BasicFSDebugRenderParams(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~BasicFSDebugRenderParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("BasicFSDebugRenderParams");
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
		bits = 8 * sizeof(BasicFSDebugRenderParamsNS::checksum);
		return BasicFSDebugRenderParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const BasicFSDebugRenderParamsNS::ParametersStruct& parameters(void) const
	{
		BasicFSDebugRenderParams* tmpThis = const_cast<BasicFSDebugRenderParams*>(this);
		return *(static_cast<BasicFSDebugRenderParamsNS::ParametersStruct*>(tmpThis));
	}

	BasicFSDebugRenderParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<BasicFSDebugRenderParamsNS::ParametersStruct*>(this));
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

class BasicFSDebugRenderParamsFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(BasicFSDebugRenderParams), BasicFSDebugRenderParams::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, BasicFSDebugRenderParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class BasicFSDebugRenderParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(BasicFSDebugRenderParams)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, BasicFSDebugRenderParams)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, BasicFSDebugRenderParams::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, BasicFSDebugRenderParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class BasicFSDebugRenderParams");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of BasicFSDebugRenderParams here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (BasicFSDebugRenderParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (BasicFSDebugRenderParams::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (BasicFSDebugRenderParams::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (BasicFSDebugRenderParams::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (BasicFSDebugRenderParams::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace basicfs
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif