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

// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_t10_29;
// UnityEngine.Material
struct Material_t6_69;
// UnityEngine.RenderTexture
struct RenderTexture_t6_33;
// UnityEngine.Texture
struct Texture_t6_30;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
extern "C" void ContrastStretch__ctor_m10_67 (ContrastStretch_t10_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
extern "C" Material_t6_69 * ContrastStretch_get_materialLum_m10_68 (ContrastStretch_t10_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
extern "C" Material_t6_69 * ContrastStretch_get_materialReduce_m10_69 (ContrastStretch_t10_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
extern "C" Material_t6_69 * ContrastStretch_get_materialAdapt_m10_70 (ContrastStretch_t10_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
extern "C" Material_t6_69 * ContrastStretch_get_materialApply_m10_71 (ContrastStretch_t10_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
extern "C" void ContrastStretch_Start_m10_72 (ContrastStretch_t10_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
extern "C" void ContrastStretch_OnEnable_m10_73 (ContrastStretch_t10_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
extern "C" void ContrastStretch_OnDisable_m10_74 (ContrastStretch_t10_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ContrastStretch_OnRenderImage_m10_75 (ContrastStretch_t10_29 * __this, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
extern "C" void ContrastStretch_CalculateAdaptation_m10_76 (ContrastStretch_t10_29 * __this, Texture_t6_30 * ___curTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
