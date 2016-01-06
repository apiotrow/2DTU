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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m1_6919_gshared (InternalEnumerator_1_t1_1095 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m1_6919(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1_1095 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m1_6919_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_6920_gshared (InternalEnumerator_1_t1_1095 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_6920(__this, method) (( void (*) (InternalEnumerator_1_t1_1095 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_6920_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_6921_gshared (InternalEnumerator_1_t1_1095 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_6921(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1_1095 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_6921_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m1_6922_gshared (InternalEnumerator_1_t1_1095 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m1_6922(__this, method) (( void (*) (InternalEnumerator_1_t1_1095 *, const MethodInfo*))InternalEnumerator_1_Dispose_m1_6922_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m1_6923_gshared (InternalEnumerator_1_t1_1095 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m1_6923(__this, method) (( bool (*) (InternalEnumerator_1_t1_1095 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m1_6923_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t1_209  InternalEnumerator_1_get_Current_m1_6924_gshared (InternalEnumerator_1_t1_1095 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m1_6924(__this, method) (( TimeSpan_t1_209  (*) (InternalEnumerator_1_t1_1095 *, const MethodInfo*))InternalEnumerator_1_get_Current_m1_6924_gshared)(__this, method)
