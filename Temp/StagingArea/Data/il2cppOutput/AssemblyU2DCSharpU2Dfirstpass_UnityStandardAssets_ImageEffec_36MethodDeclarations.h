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

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
struct DepthOfFieldDeprecated_t10_38;
// UnityEngine.RenderTexture
struct RenderTexture_t6_33;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_34.h"

// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.ctor()
extern "C" void DepthOfFieldDeprecated__ctor_m10_89 (DepthOfFieldDeprecated_t10_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.cctor()
extern "C" void DepthOfFieldDeprecated__cctor_m10_90 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CreateMaterials()
extern "C" void DepthOfFieldDeprecated_CreateMaterials_m10_91 (DepthOfFieldDeprecated_t10_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CheckResources()
extern "C" bool DepthOfFieldDeprecated_CheckResources_m10_92 (DepthOfFieldDeprecated_t10_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnDisable()
extern "C" void DepthOfFieldDeprecated_OnDisable_m10_93 (DepthOfFieldDeprecated_t10_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnEnable()
extern "C" void DepthOfFieldDeprecated_OnEnable_m10_94 (DepthOfFieldDeprecated_t10_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::FocalDistance01(System.Single)
extern "C" float DepthOfFieldDeprecated_FocalDistance01_m10_95 (DepthOfFieldDeprecated_t10_38 * __this, float ___worldDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetDividerBasedOnQuality()
extern "C" int32_t DepthOfFieldDeprecated_GetDividerBasedOnQuality_m10_96 (DepthOfFieldDeprecated_t10_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetLowResolutionDividerBasedOnQuality(System.Int32)
extern "C" int32_t DepthOfFieldDeprecated_GetLowResolutionDividerBasedOnQuality_m10_97 (DepthOfFieldDeprecated_t10_38 * __this, int32_t ___baseDivider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_OnRenderImage_m10_98 (DepthOfFieldDeprecated_t10_38 * __this, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
extern "C" void DepthOfFieldDeprecated_Blur_m10_99 (DepthOfFieldDeprecated_t10_38 * __this, RenderTexture_t6_33 * ___from, RenderTexture_t6_33 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
extern "C" void DepthOfFieldDeprecated_BlurFg_m10_100 (DepthOfFieldDeprecated_t10_38 * __this, RenderTexture_t6_33 * ___from, RenderTexture_t6_33 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_BlurHex_m10_101 (DepthOfFieldDeprecated_t10_38 * __this, RenderTexture_t6_33 * ___from, RenderTexture_t6_33 * ___to, int32_t ___blurPass, float ___spread, RenderTexture_t6_33 * ___tmp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_Downsample_m10_102 (DepthOfFieldDeprecated_t10_38 * __this, RenderTexture_t6_33 * ___from, RenderTexture_t6_33 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_AddBokeh_m10_103 (DepthOfFieldDeprecated_t10_38 * __this, RenderTexture_t6_33 * ___bokehInfo, RenderTexture_t6_33 * ___tempTex, RenderTexture_t6_33 * ___finalTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::ReleaseTextures()
extern "C" void DepthOfFieldDeprecated_ReleaseTextures_m10_104 (DepthOfFieldDeprecated_t10_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void DepthOfFieldDeprecated_AllocateTextures_m10_105 (DepthOfFieldDeprecated_t10_38 * __this, bool ___blurForeground, RenderTexture_t6_33 * ___source, int32_t ___divider, int32_t ___lowTexDivider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
