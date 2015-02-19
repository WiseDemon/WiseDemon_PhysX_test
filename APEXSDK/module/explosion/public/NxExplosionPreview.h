/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef NX_EXPLOSION_PREVIEW_H
#define NX_EXPLOSION_PREVIEW_H

#include "NxApex.h"
#include "NxApexAssetPreview.h"

namespace physx
{
namespace apex
{

PX_PUSH_PACK_DEFAULT

class NxApexRenderDebug;

namespace APEX_EXPLOSION
{
/**
	\def EXPLOSION_DRAW_NOTHING
	Draw no items.
*/
static const physx::PxU32 EXPLOSION_DRAW_NOTHING = (0x00);
/**
	\def EXPLOSION_DRAW_ICON
	Draw the icon.
*/
static const physx::PxU32 EXPLOSION_DRAW_ICON = (0x01);
/**
	\def EXPLOSION_DRAW_BOUNDARIES
	Draw the Explosion include shapes.
*/
static const physx::PxU32 EXPLOSION_DRAW_BOUNDARIES = (0x2);
/**
	\def EXPLOSION_DRAW_WITH_CYLINDERS
	Draw the explosion field boundaries.
*/
static const physx::PxU32 EXPLOSION_DRAW_WITH_CYLINDERS = (0x4);
/**
	\def EXPLOSION_DRAW_FULL_DETAIL
	Draw all of the preview rendering items.
*/
static const physx::PxU32 EXPLOSION_DRAW_FULL_DETAIL = (EXPLOSION_DRAW_ICON + EXPLOSION_DRAW_BOUNDARIES);
/**
	\def EXPLOSION_DRAW_FULL_DETAIL_BOLD
	Draw all of the preview rendering items using cylinders instead of lines to make the text and icon look BOLD.
*/
static const physx::PxU32 EXPLOSION_DRAW_FULL_DETAIL_BOLD = (EXPLOSION_DRAW_FULL_DETAIL + EXPLOSION_DRAW_WITH_CYLINDERS);
}

/**
\brief APEX asset preview wind asset.
*/
class NxExplosionPreview : public NxApexAssetPreview
{
public:
	/**
	Set the scale of the icon.
	The unscaled icon has is 1.0x1.0 game units.
	By default the scale of the icon is 1.0. (unscaled)
	*/
	virtual void	setIconScale(physx::PxF32 scale) = 0;
	/**
	Set the detail level of the preview rendering by selecting which features to enable.
	Any, all, or none of the following masks may be added together to select what should be drawn.
	The defines for the individual items are EXPLOSION_DRAW_NOTHING, EXPLOSION_DRAW_ICON, EXPLOSION_DRAW_BOUNDARIES,
	EXPLOSION_DRAW_WITH_CYLINDERS.
	All items may be drawn using the macro EXPLOSION_DRAW_FULL_DETAIL and EXPLOSION_DRAW_FULL_DETAIL_BOLD.
	*/
	virtual void	setDetailLevel(physx::PxU32 detail) = 0;

protected:
	NxExplosionPreview() {};
};


PX_POP_PACK

}
} // end namespace physx::apex

#endif // NX_EXPLOSION_PREVIEW_H
