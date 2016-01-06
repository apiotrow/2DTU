#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct ColorCorrectionLookup_t10_25;
// UnityEngine.Texture2D
struct Texture2D_t6_31;
// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t6_33;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::.ctor()
extern "C" void ColorCorrectionLookup__ctor_m10_54 (ColorCorrectionLookup_t10_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::CheckResources()
extern "C" bool ColorCorrectionLookup_CheckResources_m10_55 (ColorCorrectionLookup_t10_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDisable()
extern "C" void ColorCorrectionLookup_OnDisable_m10_56 (ColorCorrectionLookup_t10_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDestroy()
extern "C" void ColorCorrectionLookup_OnDestroy_m10_57 (ColorCorrectionLookup_t10_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::SetIdentityLut()
extern "C" void ColorCorrectionLookup_SetIdentityLut_m10_58 (ColorCorrectionLookup_t10_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::ValidDimensions(UnityEngine.Texture2D)
extern "C" bool ColorCorrectionLookup_ValidDimensions_m10_59 (ColorCorrectionLookup_t10_25 * __this, Texture2D_t6_31 * ___tex2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::Convert(UnityEngine.Texture2D,System.String)
extern "C" void ColorCorrectionLookup_Convert_m10_60 (ColorCorrectionLookup_t10_25 * __this, Texture2D_t6_31 * ___temp2DTex, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ColorCorrectionLookup_OnRenderImage_m10_61 (ColorCorrectionLookup_t10_25 * __this, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
