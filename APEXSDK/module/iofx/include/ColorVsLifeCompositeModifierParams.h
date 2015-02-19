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
// Created: 2015.01.18 19:26:24

#ifndef HEADER_ColorVsLifeCompositeModifierParams_h
#define HEADER_ColorVsLifeCompositeModifierParams_h

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
namespace iofx
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace ColorVsLifeCompositeModifierParamsNS
{

struct colorLifeStruct_Type;

struct colorLifeStruct_DynamicArray1D_Type
{
	colorLifeStruct_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct colorLifeStruct_Type
{
	physx::PxF32 lifeRemaining;
	physx::PxVec4 color;
};

struct ParametersStruct
{

	colorLifeStruct_DynamicArray1D_Type controlPoints;

};

static const physx::PxU32 checksum[] = { 0x2ee279f3, 0x6440bf5b, 0x26d89b02, 0xc90fa659, };

} // namespace ColorVsLifeCompositeModifierParamsNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class ColorVsLifeCompositeModifierParams : public NxParameterized::NxParameters, public ColorVsLifeCompositeModifierParamsNS::ParametersStruct
{
public:
	ColorVsLifeCompositeModifierParams(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~ColorVsLifeCompositeModifierParams();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ColorVsLifeCompositeModifierParams");
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
		bits = 8 * sizeof(ColorVsLifeCompositeModifierParamsNS::checksum);
		return ColorVsLifeCompositeModifierParamsNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const ColorVsLifeCompositeModifierParamsNS::ParametersStruct& parameters(void) const
	{
		ColorVsLifeCompositeModifierParams* tmpThis = const_cast<ColorVsLifeCompositeModifierParams*>(this);
		return *(static_cast<ColorVsLifeCompositeModifierParamsNS::ParametersStruct*>(tmpThis));
	}

	ColorVsLifeCompositeModifierParamsNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ColorVsLifeCompositeModifierParamsNS::ParametersStruct*>(this));
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

class ColorVsLifeCompositeModifierParamsFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ColorVsLifeCompositeModifierParams), ColorVsLifeCompositeModifierParams::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, ColorVsLifeCompositeModifierParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ColorVsLifeCompositeModifierParams");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ColorVsLifeCompositeModifierParams)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, ColorVsLifeCompositeModifierParams)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, ColorVsLifeCompositeModifierParams::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, ColorVsLifeCompositeModifierParams::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ColorVsLifeCompositeModifierParams");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of ColorVsLifeCompositeModifierParams here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ColorVsLifeCompositeModifierParams*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ColorVsLifeCompositeModifierParams::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (ColorVsLifeCompositeModifierParams::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (ColorVsLifeCompositeModifierParams::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (ColorVsLifeCompositeModifierParams::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace iofx
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
