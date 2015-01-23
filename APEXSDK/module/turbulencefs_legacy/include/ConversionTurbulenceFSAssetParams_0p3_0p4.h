/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef CONVERSIONTURBULENCEFSASSETPARAMS_0P3_0P4H_H
#define CONVERSIONTURBULENCEFSASSETPARAMS_0P3_0P4H_H

#include "ParamConversionTemplate.h"
#include <stdio.h>
#include "TurbulenceFSAssetParams_0p3.h"
#include "TurbulenceFSAssetParams_0p4.h"

namespace physx
{
namespace apex
{
namespace legacy
{

typedef ParamConversionTemplate<TurbulenceFSAssetParams_0p3, TurbulenceFSAssetParams_0p4, 3, 4> ConversionTurbulenceFSAssetParams_0p3_0p4Parent;

class ConversionTurbulenceFSAssetParams_0p3_0p4: ConversionTurbulenceFSAssetParams_0p3_0p4Parent
{
public:
	static NxParameterized::Conversion* Create(NxParameterized::Traits* t)
	{
		void* buf = t->alloc(sizeof(ConversionTurbulenceFSAssetParams_0p3_0p4));
		return buf ? PX_PLACEMENT_NEW(buf, ConversionTurbulenceFSAssetParams_0p3_0p4)(t) : 0;
	}

protected:
	ConversionTurbulenceFSAssetParams_0p3_0p4(NxParameterized::Traits* t) : ConversionTurbulenceFSAssetParams_0p3_0p4Parent(t) {}

	const NxParameterized::PrefVer* getPreferredVersions() const
	{
		static NxParameterized::PrefVer prefVers[] =
		{
			//TODO:
			//	Add your preferred versions for included references here.
			//	Entry format is
			//		{ (const char*)longName, (PxU32)preferredVersion }

			{ 0, 0 } // Terminator (do not remove!)
		};

		return prefVers;
	}

	void checkGridDim(const char* paramEnumName, physx::PxF32 oldDimValue)
	{
		PxI32 oldDim = static_cast<PxI32>(oldDimValue);
		const NxParameterized::Definition* paramDef;
		NxParameterized::Handle hEnum(*mNewData, paramEnumName);
		PX_ASSERT(hEnum.isValid());
		paramDef = hEnum.parameterDefinition();

		PxI32 newDim = PX_MAX_I32;
		for (PxI32 i = paramDef->numEnumVals() - 1; i >= 0; --i)
		{
			newDim = atoi(paramDef->enumVal(i) + 4);
			if (newDim <= oldDim)
			{
				hEnum.setParamEnum(paramDef->enumVal(i));
				break;
			}
		}
		if(newDim > oldDim)
		{
			hEnum.setParamEnum(paramDef->enumVal(0));
		}
	}

	bool convert()
	{
		//TODO:
		//	Write custom conversion code here using mNewData and mLegacyData members.
		//
		//	Note that
		//		- mNewData has already been initialized with default values
		//		- same-named/same-typed members have already been copied
		//			from mLegacyData to mNewData
		//		- included references were moved to mNewData
		//			(and updated to preferred versions according to getPreferredVersions)
		//
		//	For more info see the versioning wiki.
		
		checkGridDim("gridXRange.min", mLegacyData->gridXRange.min);
		checkGridDim("gridXRange.max", mLegacyData->gridXRange.max);
		checkGridDim("gridYRange.min", mLegacyData->gridYRange.min);
		checkGridDim("gridYRange.max", mLegacyData->gridYRange.max);
		checkGridDim("gridZRange.min", mLegacyData->gridZRange.min);
		checkGridDim("gridZRange.max", mLegacyData->gridZRange.max);

		return true;
	}
};

}
}
} // namespace physx::apex

#endif