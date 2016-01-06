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

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct ScreenSpaceAmbientOcclusion_t10_54;
// UnityEngine.Material
struct Material_t6_69;
// UnityEngine.Shader
struct Shader_t6_68;
// UnityEngine.RenderTexture
struct RenderTexture_t6_33;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::.ctor()
extern "C" void ScreenSpaceAmbientOcclusion__ctor_m10_176 (ScreenSpaceAmbientOcclusion_t10_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterial(UnityEngine.Shader)
extern "C" Material_t6_69 * ScreenSpaceAmbientOcclusion_CreateMaterial_m10_177 (Object_t * __this /* static, unused */, Shader_t6_68 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::DestroyMaterial(UnityEngine.Material)
extern "C" void ScreenSpaceAmbientOcclusion_DestroyMaterial_m10_178 (Object_t * __this /* static, unused */, Material_t6_69 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnDisable()
extern "C" void ScreenSpaceAmbientOcclusion_OnDisable_m10_179 (ScreenSpaceAmbientOcclusion_t10_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::Start()
extern "C" void ScreenSpaceAmbientOcclusion_Start_m10_180 (ScreenSpaceAmbientOcclusion_t10_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnEnable()
extern "C" void ScreenSpaceAmbientOcclusion_OnEnable_m10_181 (ScreenSpaceAmbientOcclusion_t10_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterials()
extern "C" void ScreenSpaceAmbientOcclusion_CreateMaterials_m10_182 (ScreenSpaceAmbientOcclusion_t10_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ScreenSpaceAmbientOcclusion_OnRenderImage_m10_183 (ScreenSpaceAmbientOcclusion_t10_54 * __this, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
