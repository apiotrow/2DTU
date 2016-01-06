#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t6_132;
struct AnimationCurve_t6_132_marshaled;
// UnityEngine.Material
struct Material_t6_69;
// UnityEngine.Texture2D
struct Texture2D_t6_31;
// UnityEngine.Shader
struct Shader_t6_68;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_21.h"

// UnityStandardAssets.ImageEffects.ColorCorrectionCurves
struct  ColorCorrectionCurves_t10_24  : public PostEffectsBase_t10_3
{
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::redChannel
	AnimationCurve_t6_132 * ___redChannel_5;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::greenChannel
	AnimationCurve_t6_132 * ___greenChannel_6;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::blueChannel
	AnimationCurve_t6_132 * ___blueChannel_7;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::useDepthCorrection
	bool ___useDepthCorrection_8;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::zCurve
	AnimationCurve_t6_132 * ___zCurve_9;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthRedChannel
	AnimationCurve_t6_132 * ___depthRedChannel_10;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthGreenChannel
	AnimationCurve_t6_132 * ___depthGreenChannel_11;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthBlueChannel
	AnimationCurve_t6_132 * ___depthBlueChannel_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::ccMaterial
	Material_t6_69 * ___ccMaterial_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::ccDepthMaterial
	Material_t6_69 * ___ccDepthMaterial_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveCcMaterial
	Material_t6_69 * ___selectiveCcMaterial_15;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::rgbChannelTex
	Texture2D_t6_31 * ___rgbChannelTex_16;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::rgbDepthChannelTex
	Texture2D_t6_31 * ___rgbDepthChannelTex_17;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::zCurveTex
	Texture2D_t6_31 * ___zCurveTex_18;
	// System.Single UnityStandardAssets.ImageEffects.ColorCorrectionCurves::saturation
	float ___saturation_19;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveCc
	bool ___selectiveCc_20;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveFromColor
	Color_t6_39  ___selectiveFromColor_21;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveToColor
	Color_t6_39  ___selectiveToColor_22;
	// UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode UnityStandardAssets.ImageEffects.ColorCorrectionCurves::mode
	int32_t ___mode_23;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::updateTextures
	bool ___updateTextures_24;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::colorCorrectionCurvesShader
	Shader_t6_68 * ___colorCorrectionCurvesShader_25;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::simpleColorCorrectionCurvesShader
	Shader_t6_68 * ___simpleColorCorrectionCurvesShader_26;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::colorCorrectionSelectiveShader
	Shader_t6_68 * ___colorCorrectionSelectiveShader_27;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::updateTexturesOnStartup
	bool ___updateTexturesOnStartup_28;
};
