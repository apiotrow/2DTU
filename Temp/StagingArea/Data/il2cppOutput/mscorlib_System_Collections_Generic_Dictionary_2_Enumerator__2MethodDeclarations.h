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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1_1032;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_6375_gshared (Enumerator_t1_1038 * __this, Dictionary_2_t1_1032 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_6375(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1038 *, Dictionary_2_t1_1032 *, const MethodInfo*))Enumerator__ctor_m1_6375_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_6376_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_6376(__this, method) (( Object_t * (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_6376_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_6377_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_6377(__this, method) (( void (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_6377_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6378_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6378(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6378_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6379_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6379(__this, method) (( Object_t * (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6379_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6380_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6380(__this, method) (( Object_t * (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6380_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_6381_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_6381(__this, method) (( bool (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_MoveNext_m1_6381_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1034  Enumerator_get_Current_m1_6382_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_6382(__this, method) (( KeyValuePair_2_t1_1034  (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_get_Current_m1_6382_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_6383_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_6383(__this, method) (( Object_t * (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_6383_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_6384_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_6384(__this, method) (( Object_t * (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_6384_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_6385_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_6385(__this, method) (( void (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_Reset_m1_6385_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_6386_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_6386(__this, method) (( void (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_VerifyState_m1_6386_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_6387_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_6387(__this, method) (( void (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_6387_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_6388_gshared (Enumerator_t1_1038 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_6388(__this, method) (( void (*) (Enumerator_t1_1038 *, const MethodInfo*))Enumerator_Dispose_m1_6388_gshared)(__this, method)
