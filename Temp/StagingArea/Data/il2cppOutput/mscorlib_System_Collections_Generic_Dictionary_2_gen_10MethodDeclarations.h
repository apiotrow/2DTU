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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1_1006;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1008;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1_1466;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1_1467;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_459;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1_1012;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m1_6061_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6061(__this, method) (( void (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2__ctor_m1_6061_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_6063_gshared (Dictionary_2_t1_1006 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6063(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1006 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6063_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_6064_gshared (Dictionary_2_t1_1006 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6064(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1006 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_6064_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_6066_gshared (Dictionary_2_t1_1006 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_515  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6066(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1006 *, SerializationInfo_t1_176 *, StreamingContext_t1_515 , const MethodInfo*))Dictionary_2__ctor_m1_6066_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_6068_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_6068(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1006 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_6068_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_6070_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_6070(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1006 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_6070_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_6072_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_6072(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1006 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_6072_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_6074_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_6074(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1006 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_6074_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_6076_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_6076(__this, ___key, method) (( void (*) (Dictionary_2_t1_1006 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_6076_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6078_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6078(__this, method) (( bool (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6078_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6080_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6080(__this, method) (( Object_t * (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6082_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6082(__this, method) (( bool (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6082_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6084_gshared (Dictionary_2_t1_1006 * __this, KeyValuePair_2_t1_1009  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6084(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1006 *, KeyValuePair_2_t1_1009 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6084_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6086_gshared (Dictionary_2_t1_1006 * __this, KeyValuePair_2_t1_1009  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6086(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1006 *, KeyValuePair_2_t1_1009 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6086_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6088_gshared (Dictionary_2_t1_1006 * __this, KeyValuePair_2U5BU5D_t1_1466* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6088(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1006 *, KeyValuePair_2U5BU5D_t1_1466*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6088_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6090_gshared (Dictionary_2_t1_1006 * __this, KeyValuePair_2_t1_1009  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6090(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1006 *, KeyValuePair_2_t1_1009 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6090_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_6092_gshared (Dictionary_2_t1_1006 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_6092(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1006 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_6092_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6094_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6094(__this, method) (( Object_t * (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6094_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6096_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6096(__this, method) (( Object_t* (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6096_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6098_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6098(__this, method) (( Object_t * (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_6100_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_6100(__this, method) (( int32_t (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2_get_Count_m1_6100_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m1_6102_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_6102(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1006 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_6102_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_6104_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_6104(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1006 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m1_6104_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_6106_gshared (Dictionary_2_t1_1006 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_6106(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1006 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_6106_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_6108_gshared (Dictionary_2_t1_1006 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_6108(__this, ___size, method) (( void (*) (Dictionary_2_t1_1006 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_6108_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_6110_gshared (Dictionary_2_t1_1006 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_6110(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1006 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_6110_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1009  Dictionary_2_make_pair_m1_6112_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_6112(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1009  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m1_6112_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m1_6114_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_6114(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m1_6114_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_6116_gshared (Dictionary_2_t1_1006 * __this, KeyValuePair_2U5BU5D_t1_1466* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_6116(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1006 *, KeyValuePair_2U5BU5D_t1_1466*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_6116_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m1_6118_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_6118(__this, method) (( void (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2_Resize_m1_6118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_6120_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_6120(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1006 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m1_6120_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m1_6122_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_6122(__this, method) (( void (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2_Clear_m1_6122_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_6124_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_6124(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1006 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_6124_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_6126_gshared (Dictionary_2_t1_1006 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_6126(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1006 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m1_6126_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_6128_gshared (Dictionary_2_t1_1006 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_515  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_6128(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1006 *, SerializationInfo_t1_176 *, StreamingContext_t1_515 , const MethodInfo*))Dictionary_2_GetObjectData_m1_6128_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_6130_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_6130(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1006 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_6130_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_6132_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_6132(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1006 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_6132_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_6134_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_6134(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1006 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_6134_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1_1012 * Dictionary_2_get_Values_m1_6136_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_6136(__this, method) (( ValueCollection_t1_1012 * (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2_get_Values_m1_6136_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_6138_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_6138(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1006 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_6138_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m1_6140_gshared (Dictionary_2_t1_1006 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_6140(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1_1006 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_6140_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_6142_gshared (Dictionary_2_t1_1006 * __this, KeyValuePair_2_t1_1009  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_6142(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1006 *, KeyValuePair_2_t1_1009 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_6142_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1014  Dictionary_2_GetEnumerator_m1_6144_gshared (Dictionary_2_t1_1006 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_6144(__this, method) (( Enumerator_t1_1014  (*) (Dictionary_2_t1_1006 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_6144_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_6146_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_6146(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_6146_gshared)(__this /* static, unused */, ___key, ___value, method)
