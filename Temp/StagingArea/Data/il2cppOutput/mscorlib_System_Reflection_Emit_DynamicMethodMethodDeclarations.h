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

// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t1_279;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Reflection.Module
struct Module_t1_278;
// System.Delegate
struct Delegate_t1_22;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t1_156;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1_273;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1_812;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1_330;
// System.Globalization.CultureInfo
struct CultureInfo_t1_161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodAttributes.h"
#include "mscorlib_System_Reflection_CallingConventions.h"
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_RuntimeMethodHandle.h"

// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Type,System.Type[],System.Type)
extern "C" void DynamicMethod__ctor_m1_2463 (DynamicMethod_t1_279 * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t1_31* ___parameterTypes, Type_t * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Type,System.Type[],System.Type,System.Boolean)
extern "C" void DynamicMethod__ctor_m1_2464 (DynamicMethod_t1_279 * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t1_31* ___parameterTypes, Type_t * ___owner, bool ___skipVisibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Boolean)
extern "C" void DynamicMethod__ctor_m1_2465 (DynamicMethod_t1_279 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1_31* ___parameterTypes, Type_t * ___owner, bool ___skipVisibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Reflection.Module,System.Boolean,System.Boolean)
extern "C" void DynamicMethod__ctor_m1_2466 (DynamicMethod_t1_279 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1_31* ___parameterTypes, Type_t * ___owner, Module_t1_278 * ___m, bool ___skipVisibility, bool ___anonHosted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethod_create_dynamic_method_m1_2467 (DynamicMethod_t1_279 * __this, DynamicMethod_t1_279 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethod_destroy_dynamic_method_m1_2468 (DynamicMethod_t1_279 * __this, DynamicMethod_t1_279 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::CreateDynMethod()
extern "C" void DynamicMethod_CreateDynMethod_m1_2469 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::Finalize()
extern "C" void DynamicMethod_Finalize_m1_2470 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Reflection.Emit.DynamicMethod::CreateDelegate(System.Type)
extern "C" Delegate_t1_22 * DynamicMethod_CreateDelegate_m1_2471 (DynamicMethod_t1_279 * __this, Type_t * ___delegateType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DynamicMethod::GetBaseDefinition()
extern "C" MethodInfo_t * DynamicMethod_GetBaseDefinition_m1_2472 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t1_156* DynamicMethod_GetCustomAttributes_m1_2473 (DynamicMethod_t1_279 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t1_156* DynamicMethod_GetCustomAttributes_m1_2474 (DynamicMethod_t1_279 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator()
extern "C" ILGenerator_t1_273 * DynamicMethod_GetILGenerator_m1_2475 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator(System.Int32)
extern "C" ILGenerator_t1_273 * DynamicMethod_GetILGenerator_m1_2476 (DynamicMethod_t1_279 * __this, int32_t ___streamSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodImplAttributes System.Reflection.Emit.DynamicMethod::GetMethodImplementationFlags()
extern "C" int32_t DynamicMethod_GetMethodImplementationFlags_m1_2477 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.DynamicMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t1_812* DynamicMethod_GetParameters_m1_2478 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DynamicMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * DynamicMethod_Invoke_m1_2479 (DynamicMethod_t1_279 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1_330 * ___binder, ObjectU5BU5D_t1_156* ___parameters, CultureInfo_t1_161 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DynamicMethod::IsDefined(System.Type,System.Boolean)
extern "C" bool DynamicMethod_IsDefined_m1_2480 (DynamicMethod_t1_279 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::ToString()
extern "C" String_t* DynamicMethod_ToString_m1_2481 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::get_Attributes()
extern "C" int32_t DynamicMethod_get_Attributes_m1_2482 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::get_CallingConvention()
extern "C" int32_t DynamicMethod_get_CallingConvention_m1_2483 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_DeclaringType()
extern "C" Type_t * DynamicMethod_get_DeclaringType_m1_2484 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1_280  DynamicMethod_get_MethodHandle_m1_2485 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DynamicMethod::get_Module()
extern "C" Module_t1_278 * DynamicMethod_get_Module_m1_2486 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::get_Name()
extern "C" String_t* DynamicMethod_get_Name_m1_2487 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReflectedType()
extern "C" Type_t * DynamicMethod_get_ReflectedType_m1_2488 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReturnType()
extern "C" Type_t * DynamicMethod_get_ReturnType_m1_2489 (DynamicMethod_t1_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethod::AddRef(System.Object)
extern "C" int32_t DynamicMethod_AddRef_m1_2490 (DynamicMethod_t1_279 * __this, Object_t * ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
