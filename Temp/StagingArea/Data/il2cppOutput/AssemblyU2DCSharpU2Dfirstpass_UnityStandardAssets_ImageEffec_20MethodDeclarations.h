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

// UnityStandardAssets.ImageEffects.CameraMotionBlur
struct CameraMotionBlur_t10_22;
// UnityEngine.RenderTexture
struct RenderTexture_t6_33;
// UnityEngine.Camera
struct Camera_t6_80;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.ctor()
extern "C" void CameraMotionBlur__ctor_m10_35 (CameraMotionBlur_t10_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.cctor()
extern "C" void CameraMotionBlur__cctor_m10_36 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::CalculateViewProjection()
extern "C" void CameraMotionBlur_CalculateViewProjection_m10_37 (CameraMotionBlur_t10_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Start()
extern "C" void CameraMotionBlur_Start_m10_38 (CameraMotionBlur_t10_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnEnable()
extern "C" void CameraMotionBlur_OnEnable_m10_39 (CameraMotionBlur_t10_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnDisable()
extern "C" void CameraMotionBlur_OnDisable_m10_40 (CameraMotionBlur_t10_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::CheckResources()
extern "C" bool CameraMotionBlur_CheckResources_m10_41 (CameraMotionBlur_t10_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void CameraMotionBlur_OnRenderImage_m10_42 (CameraMotionBlur_t10_22 * __this, RenderTexture_t6_33 * ___source, RenderTexture_t6_33 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Remember()
extern "C" void CameraMotionBlur_Remember_m10_43 (CameraMotionBlur_t10_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::GetTmpCam()
extern "C" Camera_t6_80 * CameraMotionBlur_GetTmpCam_m10_44 (CameraMotionBlur_t10_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::StartFrame()
extern "C" void CameraMotionBlur_StartFrame_m10_45 (CameraMotionBlur_t10_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C" int32_t CameraMotionBlur_divRoundUp_m10_46 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
