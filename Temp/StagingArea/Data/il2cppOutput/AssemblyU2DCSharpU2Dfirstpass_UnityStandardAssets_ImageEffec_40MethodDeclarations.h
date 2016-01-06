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

// UnityStandardAssets.ImageEffects.GlobalFog
struct GlobalFog_t10_42;
// UnityEngine.RenderTexture
struct RenderTexture_t6_33;
// UnityEngine.Material
struct Material_t6_69;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.GlobalFog::.ctor()
extern "C" void GlobalFog__ctor_m10_115 (GlobalFog_t10_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::CheckResources()
extern "C" bool GlobalFog_CheckResources_m10_116 (GlobalFog_t10_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void GlobalFog_OnRenderImage_m10_117 (GlobalFog_t10_42 * __this, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void GlobalFog_CustomGraphicsBlit_m10_118 (Object_t * __this /* static, unused */, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___dest, Material_t6_69 * ___fxMaterial, int32_t ___passNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
