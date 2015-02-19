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
// Created: 2015.01.18 19:26:21

#ifndef HEADER_ExplosionDebugRenderParams_h
#define HEADER_ExplosionDebugRenderParams_h

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
namespace explosion
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace ExplosionDebugRenderParamsNS
{



struct ParametersStruct
{

	bool VISUALIZE_EXPLOSION_ACTOR;
	bool VISUALIZE_EXPLOSION_FORCE_FIELDS;
	bool VISUALIZE_EXPLOSION_FORCES;
	physx::PxF32 FORCE_FIELDS_FORCES_DEBUG_RENDERING_SCALING;
	physx::PxF32 FORCE_FIELDS_FORCES_DEBUG_RENDERING_SPACING;
	bool VISUALIZE_EXPLOSION_ACTOR_NAME;
	physx::PxF32 THRESHOLD_DISTANCE_EXPLOSION_ACTOR_NAME;

};

static const physx::PxU32 checksum[] = { 0xdc6a4abb, 0xfb18f161, 0x0e1d7e21, 0xf3f4682e, };

} // namespace ExplosionDebugRenderParamsNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class ExplosionDebugRenderParams : public NxParameterized::NxParameters, public ExplosionDebugRenderParamsNS::ParametersStruct
{
public:
	ExplosionDebugRenderParams(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~ExplosionDebugRenderParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ExplosionDebugRenderParams");
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
		bits = 8 * sizeof(ExplosionDebugRenderParamsNS::checksum);
		return ExplosionDebugRenderParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const ExplosionDebugRenderParamsNS::ParametersStruct& parameters(void) const
	{
		ExplosionDebugRenderParams* tmpThis = const_cast<ExplosionDebugRenderParams*>(this);
		return *(static_cast<ExplosionDebugRenderParamsNS::ParametersStruct*>(tmpThis));
	}

	ExplosionDebugRenderParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ExplosionDebugRenderParamsNS::ParametersStruct*>(this));
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

class ExplosionDebugRenderParamsFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ExplosionDebugRenderParams), ExplosionDebugRenderParams::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, ExplosionDebugRenderParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ExplosionDebugRenderParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ExplosionDebugRenderParams)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, ExplosionDebugRenderParams)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, ExplosionDebugRenderParams::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, ExplosionDebugRenderParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ExplosionDebugRenderParams");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of ExplosionDebugRenderParams here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ExplosionDebugRenderParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ExplosionDebugRenderParams::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (ExplosionDebugRenderParams::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (ExplosionDebugRenderParams::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (ExplosionDebugRenderParams::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace explosion
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
