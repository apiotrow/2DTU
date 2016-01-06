﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t7_201;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t6_299;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m7_1527_gshared (ObjectPool_1_t7_201 * __this, UnityAction_1_t6_299 * ___actionOnGet, UnityAction_1_t6_299 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m7_1527(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t7_201 *, UnityAction_1_t6_299 *, UnityAction_1_t6_299 *, const MethodInfo*))ObjectPool_1__ctor_m7_1527_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m7_1529_gshared (ObjectPool_1_t7_201 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m7_1529(__this, method) (( int32_t (*) (ObjectPool_1_t7_201 *, const MethodInfo*))ObjectPool_1_get_countAll_m7_1529_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m7_1531_gshared (ObjectPool_1_t7_201 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m7_1531(__this, ___value, method) (( void (*) (ObjectPool_1_t7_201 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m7_1531_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m7_1533_gshared (ObjectPool_1_t7_201 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m7_1533(__this, method) (( int32_t (*) (ObjectPool_1_t7_201 *, const MethodInfo*))ObjectPool_1_get_countActive_m7_1533_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m7_1535_gshared (ObjectPool_1_t7_201 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m7_1535(__this, method) (( int32_t (*) (ObjectPool_1_t7_201 *, const MethodInfo*))ObjectPool_1_get_countInactive_m7_1535_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m7_1537_gshared (ObjectPool_1_t7_201 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m7_1537(__this, method) (( Object_t * (*) (ObjectPool_1_t7_201 *, const MethodInfo*))ObjectPool_1_Get_m7_1537_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m7_1539_gshared (ObjectPool_1_t7_201 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m7_1539(__this, ___element, method) (( void (*) (ObjectPool_1_t7_201 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m7_1539_gshared)(__this, ___element, method)