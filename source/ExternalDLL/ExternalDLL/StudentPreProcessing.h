/*
* Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
*/

#pragma once
#include "PreProcessing.h"
class StudentPreProcessing : public PreProcessing {
public:
	IntensityImage * stepToIntensityImage(const RGBImage &image) const;
	IntensityImage * stepToIntensityImage(const ValueGrid &image) const;
	IntensityImage * stepScaleImage(const IntensityImage &image) const;
	IntensityImage * StudentPreProcessing::stepBlur(const IntensityImage & image) const;
	IntensityImage * stepEdgeDetection(const IntensityImage &image) const;
	IntensityImage * stepThresholding(const IntensityImage &image) const;
	ValueGrid * maskImage(const IntensityImage &image, const ValueGrid maskImage) const;
};