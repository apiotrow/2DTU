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

// UnityEngine.Event
struct Event_t6_162;
struct Event_t6_162_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_EventType.h"
#include "UnityEngine_UnityEngine_EventModifiers.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m6_1208 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::.ctor(UnityEngine.Event)
extern "C" void Event__ctor_m6_1209 (Event_t6_162 * __this, Event_t6_162 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::.ctor(System.IntPtr)
extern "C" void Event__ctor_m6_1210 (Event_t6_162 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m6_1211 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t6_45  Event_get_mousePosition_m6_1212 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_mousePosition(UnityEngine.Vector2)
extern "C" void Event_set_mousePosition_m6_1213 (Event_t6_162 * __this, Vector2_t6_45  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
extern "C" Vector2_t6_45  Event_get_delta_m6_1214 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_delta(UnityEngine.Vector2)
extern "C" void Event_set_delta_m6_1215 (Event_t6_162 * __this, Vector2_t6_45  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Event::get_mouseRay()
extern "C" Ray_t6_53  Event_get_mouseRay_m6_1216 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_mouseRay(UnityEngine.Ray)
extern "C" void Event_set_mouseRay_m6_1217 (Event_t6_162 * __this, Ray_t6_53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_shift()
extern "C" bool Event_get_shift_m6_1218 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_shift(System.Boolean)
extern "C" void Event_set_shift_m6_1219 (Event_t6_162 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_control()
extern "C" bool Event_get_control_m6_1220 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_control(System.Boolean)
extern "C" void Event_set_control_m6_1221 (Event_t6_162 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_alt()
extern "C" bool Event_get_alt_m6_1222 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_alt(System.Boolean)
extern "C" void Event_set_alt_m6_1223 (Event_t6_162 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_command()
extern "C" bool Event_get_command_m6_1224 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_command(System.Boolean)
extern "C" void Event_set_command_m6_1225 (Event_t6_162 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_capsLock()
extern "C" bool Event_get_capsLock_m6_1226 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_capsLock(System.Boolean)
extern "C" void Event_set_capsLock_m6_1227 (Event_t6_162 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_numeric()
extern "C" bool Event_get_numeric_m6_1228 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_numeric(System.Boolean)
extern "C" void Event_set_numeric_m6_1229 (Event_t6_162 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_functionKey()
extern "C" bool Event_get_functionKey_m6_1230 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" Event_t6_162 * Event_get_current_m6_1231 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_current(UnityEngine.Event)
extern "C" void Event_set_current_m6_1232 (Object_t * __this /* static, unused */, Event_t6_162 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern "C" void Event_Internal_MakeMasterEventCurrent_m6_1233 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m6_1234 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m6_1235 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::KeyboardEvent(System.String)
extern "C" Event_t6_162 * Event_KeyboardEvent_m6_1236 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" int32_t Event_GetHashCode_m6_1237 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C" bool Event_Equals_m6_1238 (Event_t6_162 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
extern "C" String_t* Event_ToString_m6_1239 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m6_1240 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m6_1241 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::InitCopy(UnityEngine.Event)
extern "C" void Event_InitCopy_m6_1242 (Event_t6_162 * __this, Event_t6_162 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::InitPtr(System.IntPtr)
extern "C" void Event_InitPtr_m6_1243 (Event_t6_162 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m6_1244 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m6_1245 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
extern "C" void Event_set_type_m6_1246 (Event_t6_162 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
extern "C" int32_t Event_GetTypeForControl_m6_1247 (Event_t6_162 * __this, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetMousePosition(UnityEngine.Vector2)
extern "C" void Event_Internal_SetMousePosition_m6_1248 (Event_t6_162 * __this, Vector2_t6_45  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMousePosition(UnityEngine.Event,UnityEngine.Vector2&)
extern "C" void Event_INTERNAL_CALL_Internal_SetMousePosition_m6_1249 (Object_t * __this /* static, unused */, Event_t6_162 * ___self, Vector2_t6_45 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m6_1250 (Event_t6_162 * __this, Vector2_t6_45 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetMouseDelta(UnityEngine.Vector2)
extern "C" void Event_Internal_SetMouseDelta_m6_1251 (Event_t6_162 * __this, Vector2_t6_45  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMouseDelta(UnityEngine.Event,UnityEngine.Vector2&)
extern "C" void Event_INTERNAL_CALL_Internal_SetMouseDelta_m6_1252 (Object_t * __this /* static, unused */, Event_t6_162 * ___self, Vector2_t6_45 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMouseDelta_m6_1253 (Event_t6_162 * __this, Vector2_t6_45 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::get_button()
extern "C" int32_t Event_get_button_m6_1254 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_button(System.Int32)
extern "C" void Event_set_button_m6_1255 (Event_t6_162 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m6_1256 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
extern "C" void Event_set_modifiers_m6_1257 (Event_t6_162 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Event::get_pressure()
extern "C" float Event_get_pressure_m6_1258 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_pressure(System.Single)
extern "C" void Event_set_pressure_m6_1259 (Event_t6_162 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::get_clickCount()
extern "C" int32_t Event_get_clickCount_m6_1260 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_clickCount(System.Int32)
extern "C" void Event_set_clickCount_m6_1261 (Event_t6_162 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m6_1262 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_character(System.Char)
extern "C" void Event_set_character_m6_1263 (Event_t6_162 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m6_1264 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_commandName(System.String)
extern "C" void Event_set_commandName_m6_1265 (Event_t6_162 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m6_1266 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
extern "C" void Event_set_keyCode_m6_1267 (Event_t6_162 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m6_1268 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Use()
extern "C" void Event_Use_m6_1269 (Event_t6_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C" bool Event_PopEvent_m6_1270 (Object_t * __this /* static, unused */, Event_t6_162 * ___outEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetEventCount()
extern "C" int32_t Event_GetEventCount_m6_1271 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Event_t6_162_marshal(const Event_t6_162& unmarshaled, Event_t6_162_marshaled& marshaled);
extern "C" void Event_t6_162_marshal_back(const Event_t6_162_marshaled& marshaled, Event_t6_162& unmarshaled);
extern "C" void Event_t6_162_marshal_cleanup(Event_t6_162_marshaled& marshaled);
