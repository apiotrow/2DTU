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

// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct NoiseAndGrain_t10_46;
// UnityEngine.RenderTexture
struct RenderTexture_t6_33;
// UnityEngine.Material
struct Material_t6_69;
// UnityEngine.Texture2D
struct Texture2D_t6_31;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.ctor()
extern "C" void NoiseAndGrain__ctor_m10_133 (NoiseAndGrain_t10_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.cctor()
extern "C" void NoiseAndGrain__cctor_m10_134 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::CheckResources()
extern "C" bool NoiseAndGrain_CheckResources_m10_135 (NoiseAndGrain_t10_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void NoiseAndGrain_OnRenderImage_m10_136 (NoiseAndGrain_t10_46 * __this, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,System.Int32)
extern "C" void NoiseAndGrain_DrawNoiseQuadGrid_m10_137 (Object_t * __this /* static, unused */, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___dest, Material_t6_69 * ___fxMaterial, Texture2D_t6_31 * ___noise, int32_t ___passNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
