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

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t6_308;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t6_309;
// System.Object[]
struct ObjectU5BU5D_t1_156;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m6_1735_gshared (InvokableCall_1_t6_308 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m6_1735(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t6_308 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m6_1735_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m6_1736_gshared (InvokableCall_1_t6_308 * __this, UnityAction_1_t6_309 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m6_1736(__this, ___action, method) (( void (*) (InvokableCall_1_t6_308 *, UnityAction_1_t6_309 *, const MethodInfo*))InvokableCall_1__ctor_m6_1736_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m6_1737_gshared (InvokableCall_1_t6_308 * __this, ObjectU5BU5D_t1_156* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m6_1737(__this, ___args, method) (( void (*) (InvokableCall_1_t6_308 *, ObjectU5BU5D_t1_156*, const MethodInfo*))InvokableCall_1_Invoke_m6_1737_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m6_1738_gshared (InvokableCall_1_t6_308 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m6_1738(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t6_308 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m6_1738_gshared)(__this, ___targetObj, ___method, method)
