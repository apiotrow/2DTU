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

// UnityEngine.RectTransform
struct RectTransform_t6_62;
// UnityEngine.Camera
struct Camera_t6_80;
// UnityEngine.Transform
struct Transform_t6_63;
// UnityEngine.Canvas
struct Canvas_t6_156;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
extern "C" void RectTransformUtility__cctor_m6_1195 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m6_1196 (Object_t * __this /* static, unused */, RectTransform_t6_62 * ___rect, Vector2_t6_45  ___screenPoint, Camera_t6_80 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6_1197 (Object_t * __this /* static, unused */, RectTransform_t6_62 * ___rect, Vector2_t6_45 * ___screenPoint, Camera_t6_80 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern "C" Vector2_t6_45  RectTransformUtility_PixelAdjustPoint_m6_1198 (Object_t * __this /* static, unused */, Vector2_t6_45  ___point, Transform_t6_63 * ___elementTransform, Canvas_t6_156 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m6_1199 (Object_t * __this /* static, unused */, Vector2_t6_45  ___point, Transform_t6_63 * ___elementTransform, Canvas_t6_156 * ___canvas, Vector2_t6_45 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6_1200 (Object_t * __this /* static, unused */, Vector2_t6_45 * ___point, Transform_t6_63 * ___elementTransform, Canvas_t6_156 * ___canvas, Vector2_t6_45 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t6_49  RectTransformUtility_PixelAdjustRect_m6_1201 (Object_t * __this /* static, unused */, RectTransform_t6_62 * ___rectTransform, Canvas_t6_156 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m6_1202 (Object_t * __this /* static, unused */, RectTransform_t6_62 * ___rect, Vector2_t6_45  ___screenPoint, Camera_t6_80 * ___cam, Vector3_t6_46 * ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m6_1203 (Object_t * __this /* static, unused */, RectTransform_t6_62 * ___rect, Vector2_t6_45  ___screenPoint, Camera_t6_80 * ___cam, Vector2_t6_45 * ___localPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t6_53  RectTransformUtility_ScreenPointToRay_m6_1204 (Object_t * __this /* static, unused */, Camera_t6_80 * ___cam, Vector2_t6_45  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m6_1205 (Object_t * __this /* static, unused */, RectTransform_t6_62 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m6_1206 (Object_t * __this /* static, unused */, RectTransform_t6_62 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t6_45  RectTransformUtility_GetTransposed_m6_1207 (Object_t * __this /* static, unused */, Vector2_t6_45  ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
