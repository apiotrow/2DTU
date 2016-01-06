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

// UnityEngine.AnimationCurve
struct AnimationCurve_t6_132;
struct AnimationCurve_t6_132_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t6_262;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m6_973 (AnimationCurve_t6_132 * __this, KeyframeU5BU5D_t6_262* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m6_974 (AnimationCurve_t6_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m6_975 (AnimationCurve_t6_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m6_976 (AnimationCurve_t6_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m6_977 (AnimationCurve_t6_132 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" KeyframeU5BU5D_t6_262* AnimationCurve_get_keys_m6_978 (AnimationCurve_t6_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C" Keyframe_t6_131  AnimationCurve_get_Item_m6_979 (AnimationCurve_t6_132 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" int32_t AnimationCurve_get_length_m6_980 (AnimationCurve_t6_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t6_131  AnimationCurve_GetKey_Internal_m6_981 (AnimationCurve_t6_132 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t6_262* AnimationCurve_GetKeys_m6_982 (AnimationCurve_t6_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m6_983 (AnimationCurve_t6_132 * __this, KeyframeU5BU5D_t6_262* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t6_132_marshal(const AnimationCurve_t6_132& unmarshaled, AnimationCurve_t6_132_marshaled& marshaled);
extern "C" void AnimationCurve_t6_132_marshal_back(const AnimationCurve_t6_132_marshaled& marshaled, AnimationCurve_t6_132& unmarshaled);
extern "C" void AnimationCurve_t6_132_marshal_cleanup(AnimationCurve_t6_132_marshaled& marshaled);
