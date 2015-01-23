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
// Created: 2015.01.18 19:26:26

#ifndef HEADER_GraphicsEffectData_h
#define HEADER_GraphicsEffectData_h

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

namespace GraphicsEffectDataNS
{



struct ParametersStruct
{

	NxParameterized::DummyStringStruct Name;
	NxParameterized::Interface* IOFX;

};

static const physx::PxU32 checksum[] = { 0xe35d59af, 0xb5a73c73, 0x8c86843a, 0x40cac44d, };

} // namespace GraphicsEffectDataNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class GraphicsEffectData : public NxParameterized::NxParameters, public GraphicsEffectDataNS::ParametersStruct
{
public:
	GraphicsEffectData(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~GraphicsEffectData();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("GraphicsEffectData");
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
		bits = 8 * sizeof(GraphicsEffectDataNS::checksum);
		return GraphicsEffectDataNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const GraphicsEffectDataNS::ParametersStruct& parameters(void) const
	{
		GraphicsEffectData* tmpThis = const_cast<GraphicsEffectData*>(this);
		return *(static_cast<GraphicsEffectDataNS::ParametersStruct*>(tmpThis));
	}

	GraphicsEffectDataNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<GraphicsEffectDataNS::ParametersStruct*>(this));
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

class GraphicsEffectDataFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(GraphicsEffectData), GraphicsEffectData::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, GraphicsEffectData::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class GraphicsEffectData");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(GraphicsEffectData)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, GraphicsEffectData)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, GraphicsEffectData::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, GraphicsEffectData::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class GraphicsEffectData");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of GraphicsEffectData here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (GraphicsEffectData*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (GraphicsEffectData::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (GraphicsEffectData::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (GraphicsEffectData::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (GraphicsEffectData::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace particles
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif