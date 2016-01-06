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

// OrbitCamera
struct OrbitCamera_t9_1;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void OrbitCamera::.ctor()
extern "C" void OrbitCamera__ctor_m9_0 (OrbitCamera_t9_1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::Start()
extern "C" void OrbitCamera_Start_m9_1 (OrbitCamera_t9_1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::Update()
extern "C" void OrbitCamera_Update_m9_2 (OrbitCamera_t9_1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::LateUpdate()
extern "C" void OrbitCamera_LateUpdate_m9_3 (OrbitCamera_t9_1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::HandlePlayerInput()
extern "C" void OrbitCamera_HandlePlayerInput_m9_4 (OrbitCamera_t9_1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::CalculateDesiredPosition()
extern "C" void OrbitCamera_CalculateDesiredPosition_m9_5 (OrbitCamera_t9_1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OrbitCamera::CalculatePosition(System.Single,System.Single,System.Single)
extern "C" Vector3_t6_46  OrbitCamera_CalculatePosition_m9_6 (OrbitCamera_t9_1 * __this, float ___rotationX, float ___rotationY, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::UpdatePosition()
extern "C" void OrbitCamera_UpdatePosition_m9_7 (OrbitCamera_t9_1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::Reset()
extern "C" void OrbitCamera_Reset_m9_8 (OrbitCamera_t9_1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OrbitCamera::ClampAngle(System.Single,System.Single,System.Single)
extern "C" float OrbitCamera_ClampAngle_m9_9 (OrbitCamera_t9_1 * __this, float ___angle, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
