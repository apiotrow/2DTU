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

// UnityStandardAssets.ImageEffects.Blur
struct Blur_t10_18;
// UnityEngine.Material
struct Material_t6_69;
// UnityEngine.RenderTexture
struct RenderTexture_t6_33;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.Blur::.ctor()
extern "C" void Blur__ctor_m10_23 (Blur_t10_18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::.cctor()
extern "C" void Blur__cctor_m10_24 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::get_material()
extern "C" Material_t6_69 * Blur_get_material_m10_25 (Blur_t10_18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::OnDisable()
extern "C" void Blur_OnDisable_m10_26 (Blur_t10_18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::Start()
extern "C" void Blur_Start_m10_27 (Blur_t10_18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C" void Blur_FourTapCone_m10_28 (Blur_t10_18 * __this, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___dest, int32_t ___iteration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Blur_DownSample4x_m10_29 (Blur_t10_18 * __this, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Blur_OnRenderImage_m10_30 (Blur_t10_18 * __this, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
