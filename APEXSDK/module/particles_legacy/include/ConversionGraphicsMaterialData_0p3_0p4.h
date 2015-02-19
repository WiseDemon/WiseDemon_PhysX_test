/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef CONVERSIONGRAPHICSMATERIALDATA_0P3_0P4H_H
#define CONVERSIONGRAPHICSMATERIALDATA_0P3_0P4H_H

#include "ParamConversionTemplate.h"
#include "GraphicsMaterialData_0p3.h"
#include "GraphicsMaterialData_0p4.h"

namespace physx
{
namespace apex
{

typedef ParamConversionTemplate<GraphicsMaterialData_0p3, GraphicsMaterialData_0p4, 3, 4> ConversionGraphicsMaterialData_0p3_0p4Parent;

class ConversionGraphicsMaterialData_0p3_0p4: ConversionGraphicsMaterialData_0p3_0p4Parent
{
public:
	static NxParameterized::Conversion* Create(NxParameterized::Traits* t)
	{
		void* buf = t->alloc(sizeof(ConversionGraphicsMaterialData_0p3_0p4));
		return buf ? PX_PLACEMENT_NEW(buf, ConversionGraphicsMaterialData_0p3_0p4)(t) : 0;
	}

protected:
	ConversionGraphicsMaterialData_0p3_0p4(NxParameterized::Traits* t) : ConversionGraphicsMaterialData_0p3_0p4Parent(t) {}

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

		return true;
	}
};

}
} // namespace physx::apex

#endif
