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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1125;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_7281_gshared (Enumerator_t1_1131 * __this, Dictionary_2_t1_1125 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_7281(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1131 *, Dictionary_2_t1_1125 *, const MethodInfo*))Enumerator__ctor_m1_7281_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_7282_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_7282(__this, method) (( Object_t * (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_7282_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_7283_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_7283(__this, method) (( void (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_7283_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7284_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7284(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7284_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7285_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7285(__this, method) (( Object_t * (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7285_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7286_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7286(__this, method) (( Object_t * (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7286_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_7287_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_7287(__this, method) (( bool (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_MoveNext_m1_7287_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1_1127  Enumerator_get_Current_m1_7288_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_7288(__this, method) (( KeyValuePair_2_t1_1127  (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_get_Current_m1_7288_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_7289_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_7289(__this, method) (( Object_t * (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_7289_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m1_7290_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_7290(__this, method) (( bool (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_7290_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Reset()
extern "C" void Enumerator_Reset_m1_7291_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_7291(__this, method) (( void (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_Reset_m1_7291_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_7292_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_7292(__this, method) (( void (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_VerifyState_m1_7292_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_7293_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_7293(__this, method) (( void (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_7293_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m1_7294_gshared (Enumerator_t1_1131 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_7294(__this, method) (( void (*) (Enumerator_t1_1131 *, const MethodInfo*))Enumerator_Dispose_m1_7294_gshared)(__this, method)
