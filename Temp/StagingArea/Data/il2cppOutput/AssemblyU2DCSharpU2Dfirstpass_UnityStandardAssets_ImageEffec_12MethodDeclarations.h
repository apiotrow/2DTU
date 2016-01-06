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

// UnityStandardAssets.ImageEffects.BloomAndFlares
struct BloomAndFlares_t10_14;
// UnityEngine.RenderTexture
struct RenderTexture_t6_33;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::.ctor()
extern "C" void BloomAndFlares__ctor_m10_12 (BloomAndFlares_t10_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::CheckResources()
extern "C" bool BloomAndFlares_CheckResources_m10_13 (BloomAndFlares_t10_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_OnRenderImage_m10_14 (BloomAndFlares_t10_14 * __this, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_AddTo_m10_15 (BloomAndFlares_t10_14 * __this, float ___intensity_, RenderTexture_t6_33 * ___from, RenderTexture_t6_33 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_BlendFlares_m10_16 (BloomAndFlares_t10_14 * __this, RenderTexture_t6_33 * ___from, RenderTexture_t6_33 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_BrightFilter_m10_17 (BloomAndFlares_t10_14 * __this, float ___thresh, float ___useAlphaAsMask, RenderTexture_t6_33 * ___from, RenderTexture_t6_33 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_Vignette_m10_18 (BloomAndFlares_t10_14 * __this, float ___amount, RenderTexture_t6_33 * ___from, RenderTexture_t6_33 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
