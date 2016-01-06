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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1008;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1470;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1_1471;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_459;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1_1036;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_6299_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6299(__this, method) (( void (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2__ctor_m1_6299_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_6300_gshared (Dictionary_2_t1_1032 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6300(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1032 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6300_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_6301_gshared (Dictionary_2_t1_1032 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6301(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1032 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_6301_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_6302_gshared (Dictionary_2_t1_1032 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_515  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6302(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1032 *, SerializationInfo_t1_176 *, StreamingContext_t1_515 , const MethodInfo*))Dictionary_2__ctor_m1_6302_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_6303_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_6303(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1032 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_6303_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_6304_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_6304(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1032 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_6304_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_6305_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_6305(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1032 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_6305_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_6306_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_6306(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1032 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_6306_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_6307_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_6307(__this, ___key, method) (( void (*) (Dictionary_2_t1_1032 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_6307_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6308_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6308(__this, method) (( bool (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6308_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6309_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6309(__this, method) (( Object_t * (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6309_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6310_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6310(__this, method) (( bool (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6310_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6311_gshared (Dictionary_2_t1_1032 * __this, KeyValuePair_2_t1_1034  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6311(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1032 *, KeyValuePair_2_t1_1034 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6311_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6312_gshared (Dictionary_2_t1_1032 * __this, KeyValuePair_2_t1_1034  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6312(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1032 *, KeyValuePair_2_t1_1034 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6312_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6313_gshared (Dictionary_2_t1_1032 * __this, KeyValuePair_2U5BU5D_t1_1470* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6313(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1032 *, KeyValuePair_2U5BU5D_t1_1470*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6313_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6314_gshared (Dictionary_2_t1_1032 * __this, KeyValuePair_2_t1_1034  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6314(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1032 *, KeyValuePair_2_t1_1034 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6314_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_6315_gshared (Dictionary_2_t1_1032 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_6315(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1032 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_6315_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6316_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6316(__this, method) (( Object_t * (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6316_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6317_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6317(__this, method) (( Object_t* (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6317_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6318_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6318(__this, method) (( Object_t * (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6318_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_6319_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_6319(__this, method) (( int32_t (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2_get_Count_m1_6319_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_6320_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_6320(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1032 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_6320_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_6321_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_6321(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1032 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_6321_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_6322_gshared (Dictionary_2_t1_1032 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_6322(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1032 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_6322_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_6323_gshared (Dictionary_2_t1_1032 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_6323(__this, ___size, method) (( void (*) (Dictionary_2_t1_1032 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_6323_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_6324_gshared (Dictionary_2_t1_1032 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_6324(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1032 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_6324_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1034  Dictionary_2_make_pair_m1_6325_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_6325(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1034  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_6325_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_6326_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_6326(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_6326_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_6327_gshared (Dictionary_2_t1_1032 * __this, KeyValuePair_2U5BU5D_t1_1470* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_6327(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1032 *, KeyValuePair_2U5BU5D_t1_1470*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_6327_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_6328_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_6328(__this, method) (( void (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2_Resize_m1_6328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_6329_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_6329(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1032 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_6329_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_6330_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_6330(__this, method) (( void (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2_Clear_m1_6330_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_6331_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_6331(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1032 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_6331_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_6332_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_6332(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1032 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_6332_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_6333_gshared (Dictionary_2_t1_1032 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_515  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_6333(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1032 *, SerializationInfo_t1_176 *, StreamingContext_t1_515 , const MethodInfo*))Dictionary_2_GetObjectData_m1_6333_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_6334_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_6334(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1032 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_6334_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_6335_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_6335(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1032 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_6335_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_6336_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_6336(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1032 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_6336_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1_1036 * Dictionary_2_get_Values_m1_6337_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_6337(__this, method) (( ValueCollection_t1_1036 * (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2_get_Values_m1_6337_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_6338_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_6338(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1032 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_6338_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_6339_gshared (Dictionary_2_t1_1032 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_6339(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1032 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_6339_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_6340_gshared (Dictionary_2_t1_1032 * __this, KeyValuePair_2_t1_1034  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_6340(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1032 *, KeyValuePair_2_t1_1034 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_6340_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1038  Dictionary_2_GetEnumerator_m1_6341_gshared (Dictionary_2_t1_1032 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_6341(__this, method) (( Enumerator_t1_1038  (*) (Dictionary_2_t1_1032 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_6341_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_6342_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_6342(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_6342_gshared)(__this /* static, unused */, ___key, ___value, method)
