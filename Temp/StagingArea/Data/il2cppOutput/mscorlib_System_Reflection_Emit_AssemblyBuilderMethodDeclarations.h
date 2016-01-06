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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1_264;
// System.Reflection.AssemblyName
struct AssemblyName_t1_322;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t1_311;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1_269;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1_268;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Reflection.Module
struct Module_t1_278;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"

// System.Void System.Reflection.Emit.AssemblyBuilder::.ctor(System.Reflection.AssemblyName,System.String,System.Reflection.Emit.AssemblyBuilderAccess,System.Boolean)
extern "C" void AssemblyBuilder__ctor_m1_2419 (AssemblyBuilder_t1_264 * __this, AssemblyName_t1_322 * ___n, String_t* ___directory, int32_t ___access, bool ___corlib_internal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)
extern "C" void AssemblyBuilder_basic_init_m1_2420 (Object_t * __this /* static, unused */, AssemblyBuilder_t1_264 * ___ab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m1_2421 (AssemblyBuilder_t1_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::AddPermissionRequests(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C" void AssemblyBuilder_AddPermissionRequests_m1_2422 (AssemblyBuilder_t1_264 * __this, PermissionSet_t1_311 * ___required, PermissionSet_t1_311 * ___optional, PermissionSet_t1_311 * ___refused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String)
extern "C" ModuleBuilder_t1_269 * AssemblyBuilder_DefineDynamicModule_m1_2423 (AssemblyBuilder_t1_264 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.String,System.Boolean,System.Boolean)
extern "C" ModuleBuilder_t1_269 * AssemblyBuilder_DefineDynamicModule_m1_2424 (AssemblyBuilder_t1_264 * __this, String_t* ___name, String_t* ___fileName, bool ___emitSymbolInfo, bool ___transient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1_268* AssemblyBuilder_GetModulesInternal_m1_2425 (AssemblyBuilder_t1_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t1_31* AssemblyBuilder_GetTypes_m1_2426 (AssemblyBuilder_t1_264 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m1_2427 (AssemblyBuilder_t1_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsSave()
extern "C" bool AssemblyBuilder_get_IsSave_m1_2428 (AssemblyBuilder_t1_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsRun()
extern "C" bool AssemblyBuilder_get_IsRun_m1_2429 (AssemblyBuilder_t1_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_AssemblyDir()
extern "C" String_t* AssemblyBuilder_get_AssemblyDir_m1_2430 (AssemblyBuilder_t1_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.AssemblyBuilder::GetManifestModule()
extern "C" Module_t1_278 * AssemblyBuilder_GetManifestModule_m1_2431 (AssemblyBuilder_t1_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t1_33 * AssemblyBuilder_not_supported_m1_2432 (AssemblyBuilder_t1_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::check_name_and_filename(System.String,System.String,System.Boolean)
extern "C" void AssemblyBuilder_check_name_and_filename_m1_2433 (AssemblyBuilder_t1_264 * __this, String_t* ___name, String_t* ___fileName, bool ___fileNeedsToExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1_322 * AssemblyBuilder_UnprotectedGetName_m1_2434 (AssemblyBuilder_t1_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
