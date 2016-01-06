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

// UnityEngine.GUISkin
struct GUISkin_t6_169;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t6_171;
// UnityEngine.GUIStyle
struct GUIStyle_t6_176;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t6_167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m6_1277 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m6_1278 (Object_t * __this /* static, unused */, DateTime_t1_126  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m6_1279 (Object_t * __this /* static, unused */, GUISkin_t6_169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t6_169 * GUI_get_skin_m6_1280 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" void GUI_DoSetSkin_m6_1281 (Object_t * __this /* static, unused */, GUISkin_t6_169 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::get_tooltip()
extern "C" String_t* GUI_get_tooltip_m6_1282 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m6_1283 (Object_t * __this /* static, unused */, Rect_t6_49  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m6_1284 (Object_t * __this /* static, unused */, Rect_t6_49  ___position, GUIContent_t6_171 * ___content, GUIStyle_t6_176 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent)
extern "C" bool GUI_Button_m6_1285 (Object_t * __this /* static, unused */, Rect_t6_49  ___position, GUIContent_t6_171 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t6_49  GUI_Window_m6_1286 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t6_49  ___clientRect, WindowFunction_t6_167 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m6_1287 (Object_t * __this /* static, unused */, WindowFunction_t6_167 * ___func, int32_t ___id, GUISkin_t6_169 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t6_176 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m6_1288 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::Internal_GetTooltip()
extern "C" String_t* GUI_Internal_GetTooltip_m6_1289 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m6_1290 (Object_t * __this /* static, unused */, Rect_t6_49  ___position, GUIContent_t6_171 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m6_1291 (Object_t * __this /* static, unused */, Rect_t6_49 * ___position, GUIContent_t6_171 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m6_1292 (Object_t * __this /* static, unused */, Rect_t6_49  ___position, GUIContent_t6_171 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m6_1293 (Object_t * __this /* static, unused */, Rect_t6_49 * ___position, GUIContent_t6_171 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t6_49  GUI_DoWindow_m6_1294 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t6_49  ___clientRect, WindowFunction_t6_167 * ___func, GUIContent_t6_171 * ___title, GUIStyle_t6_176 * ___style, GUISkin_t6_169 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t6_49  GUI_INTERNAL_CALL_DoWindow_m6_1295 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t6_49 * ___clientRect, WindowFunction_t6_167 * ___func, GUIContent_t6_171 * ___title, GUIStyle_t6_176 * ___style, GUISkin_t6_169 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
