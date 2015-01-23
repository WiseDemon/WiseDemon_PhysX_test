/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#include "NxApexDefs.h"
#include "MinPhysxSdkVersion.h"
#if NX_SDK_VERSION_NUMBER >= MIN_PHYSX_SDK_VERSION_REQUIRED

#include "NxParamUtils.h"
#include "NoiseFSAsset.h"
#include "NoiseFSAssetParams.h"
#include "NxNoiseFSPreview.h"
#include "NoiseFSAssetPreview.h"
#include "ModulePerfScope.h"
#include "PsShare.h"

#include "ReadCheck.h"
#include "WriteCheck.h"

namespace physx
{
namespace apex
{
namespace basicfs
{

using namespace APEX_NOISE;

void NoiseFSAssetPreview::drawNoiseFSPreview(void)
{
	PX_PROFILER_PERF_SCOPE("NoiseFSDrawPreview");
	if (mPreviewDetail & NOISE_DRAW_SHAPE)
	{
		drawShape();
	}

	toggleDrawPreview();
	setDrawGroupsPose();
}

#define ASSET_INFO_XPOS					(-0.9f)	// left position of the asset info
#define ASSET_INFO_YPOS					( 0.9f)	// top position of the asset info
#define DEBUG_TEXT_HEIGHT				(0.35f)	//in screen space -- would be nice to know this!


void NoiseFSAssetPreview::drawInfoLine(physx::PxU32 lineNum, const char* str)
{
#ifdef WITHOUT_DEBUG_VISUALIZE
	PX_UNUSED(lineNum);
	PX_UNUSED(str);
#else
	PxMat44 cameraMatrix = mPreviewScene->getCameraMatrix();
	mApexRenderDebug->setCurrentColor(mApexRenderDebug->getDebugColor(physx::DebugColors::Blue));
	PxVec3 textLocation = mPose.getPosition(); 
	textLocation += cameraMatrix.column1.getXYZ() * (ASSET_INFO_YPOS - (lineNum * DEBUG_TEXT_HEIGHT));
	cameraMatrix.setPosition(textLocation);
	mApexRenderDebug->debugOrientedText(cameraMatrix, str);
#endif
}

void NoiseFSAssetPreview::drawPreviewAssetInfo()
{
#ifndef WITHOUT_DEBUG_VISUALIZE
	if (!mApexRenderDebug)
	{
		return;
	}

		char buf[128];
		buf[sizeof(buf) - 1] = 0;

		ApexSimpleString myString;
		ApexSimpleString floatStr;
		physx::PxU32 lineNum = 0;

		mApexRenderDebug->pushRenderState();
		mApexRenderDebug->addToCurrentState(physx::DebugRenderState::NoZbuffer);
		mApexRenderDebug->setCurrentTextScale(1.0f);

		// asset name
		APEX_SPRINTF_S(buf, sizeof(buf) - 1, "%s %s", mAsset->getObjTypeName(), mAsset->getName());
		drawInfoLine(lineNum++, buf);
		lineNum++;

		if(mPreviewScene->getShowFullInfo())
		{
			// TODO: cache strings
			NoiseFSAssetParams& assetParams = *static_cast<NoiseFSAssetParams*>(mAsset->getAssetNxParameterized());

			APEX_SPRINTF_S(buf, sizeof(buf) - 1, "noiseStrength = %f",
				assetParams.noiseStrength
				);
			drawInfoLine(lineNum++, buf);

			// fieldBoundary filter data info
			if (assetParams.fieldBoundaryFilterDataName.buf)
			{
				myString = "FieldBoundary Filter Data = ";
				myString += ApexSimpleString(assetParams.fieldBoundaryFilterDataName.buf);
				drawInfoLine(lineNum++, myString.c_str());
			}

			// implicit info
			myString = "Fade Percentage = ";
			ApexSimpleString::ftoa(assetParams.boundaryFadePercentage, floatStr);
			myString += floatStr;
			drawInfoLine(lineNum++, myString.c_str());
		}
		mApexRenderDebug->popRenderState();
#endif
}

void NoiseFSAssetPreview::drawShape()
{
#ifndef WITHOUT_DEBUG_VISUALIZE
	if (!mApexRenderDebug)
	{
		return;
	}

	NoiseFSAssetParams& assetParams = *static_cast<NoiseFSAssetParams*>(mAsset->getAssetNxParameterized());
	//asset preview init
	if (mDrawGroupShape == 0)
	{
		mDrawGroupShape = mApexRenderDebug->beginDrawGroup(physx::PxMat44().createIdentity());

		//debug visualization
		mApexRenderDebug->setCurrentColor(mApexRenderDebug->getDebugColor(physx::DebugColors::DarkBlue));


		PxVec3 shapeSides = assetParams.defaultScale * assetParams.boundarySize;
		mApexRenderDebug->debugOrientedBound( shapeSides, mPose );

		mApexRenderDebug->endDrawGroup();
	}
#endif		
}

NoiseFSAssetPreview::~NoiseFSAssetPreview(void)
{
	if (mApexRenderDebug)
	{
		mApexRenderDebug->reset(mDrawGroupShape);
		mApexRenderDebug->reset();
		mApexRenderDebug->release();
		mApexRenderDebug = NULL;
	}
}

void NoiseFSAssetPreview::setPose(const physx::PxMat44& pose)
{
	mPose = pose;
	setDrawGroupsPose();
}

const physx::PxMat44 NoiseFSAssetPreview::getPose() const
{
	return	mPose;
}

void	NoiseFSAssetPreview::toggleDrawPreview()
{
	if (mPreviewDetail & NOISE_DRAW_SHAPE)
	{
		mApexRenderDebug->setDrawGroupVisible(mDrawGroupShape, true);
	}
	else
	{
		mApexRenderDebug->setDrawGroupVisible(mDrawGroupShape, false);
	}
}

void	NoiseFSAssetPreview::setDrawGroupsPose()
{
	mApexRenderDebug->setDrawGroupPose(mDrawGroupShape, mPose);
}


// from NxApexRenderDataProvider
void NoiseFSAssetPreview::lockRenderResources(void)
{
	ApexRenderable::renderDataLock();
}

void NoiseFSAssetPreview::unlockRenderResources(void)
{
	ApexRenderable::renderDataUnLock();
}

void NoiseFSAssetPreview::updateRenderResources(bool /*rewriteBuffers*/, void* /*userRenderData*/)
{
	if (mApexRenderDebug)
	{
		mApexRenderDebug->updateRenderResources();
	}
}

// from NxApexRenderable.h
void NoiseFSAssetPreview::dispatchRenderResources(NxUserRenderer& renderer)
{
	if (mApexRenderDebug)
	{
		if (mPreviewDetail & NOISE_DRAW_ASSET_INFO)
		{
			drawPreviewAssetInfo();
		}
		mApexRenderDebug->dispatchRenderResources(renderer);
	}
}

physx::PxBounds3 NoiseFSAssetPreview::getBounds(void) const
{
	if (mApexRenderDebug)
	{
		return(mApexRenderDebug->getBounds());
	}
	else
	{
		physx::PxBounds3 b;
		b.setEmpty();
		return b;
	}
}

void NoiseFSAssetPreview::destroy(void)
{
	delete this;
}

void NoiseFSAssetPreview::release(void)
{
	if (mInRelease)
	{
		return;
	}
	mInRelease = true;
	mAsset->releaseNoiseFSPreview(*this);
}

NoiseFSAssetPreview::NoiseFSAssetPreview(const NxNoiseFSPreviewDesc& PreviewDesc, NxApexSDK* myApexSDK, NoiseFSAsset* myNoiseFSAsset, NxApexAssetPreviewScene* previewScene) :
	mPose(PreviewDesc.mPose),
	mApexSDK(myApexSDK),
	mAsset(myNoiseFSAsset),
	mPreviewScene(previewScene),
	mPreviewDetail(PreviewDesc.mPreviewDetail),
	mDrawGroupShape(0)
{
	mApexRenderDebug = mApexSDK->createApexRenderDebug();
	drawNoiseFSPreview();
};


void NoiseFSAssetPreview::setDetailLevel(physx::PxU32 detail)
{
	NX_WRITE_ZONE();
	mPreviewDetail = detail;
	setDrawGroupsPose();
}

}
}
} // namespace physx::apex

#endif