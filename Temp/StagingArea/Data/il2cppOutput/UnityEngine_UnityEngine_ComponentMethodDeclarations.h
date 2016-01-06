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

// UnityEngine.Component
struct Component_t6_21;
// UnityEngine.Transform
struct Transform_t6_63;
// UnityEngine.GameObject
struct GameObject_t6_93;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t1_906;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m6_748 (Component_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t6_63 * Component_get_transform_m6_749 (Component_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t6_93 * Component_get_gameObject_m6_750 (Component_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t6_21 * Component_GetComponent_m6_751 (Component_t6_21 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t6_21 * Component_GetComponentInChildren_m6_752 (Component_t6_21 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C" Component_t6_21 * Component_GetComponentInParent_m6_753 (Component_t6_21 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m6_754 (Component_t6_21 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m6_755 (Component_t6_21 * __this, Type_t * ___type, List_1_t1_906 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
