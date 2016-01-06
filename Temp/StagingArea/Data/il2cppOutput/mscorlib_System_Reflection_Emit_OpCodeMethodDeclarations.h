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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_OpCode.h"
#include "mscorlib_System_Reflection_Emit_StackBehaviour.h"

// System.Void System.Reflection.Emit.OpCode::.ctor(System.Int32,System.Int32)
extern "C" void OpCode__ctor_m1_2647 (OpCode_t1_299 * __this, int32_t ___p, int32_t ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::GetHashCode()
extern "C" int32_t OpCode_GetHashCode_m1_2648 (OpCode_t1_299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.OpCode::Equals(System.Object)
extern "C" bool OpCode_Equals_m1_2649 (OpCode_t1_299 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::ToString()
extern "C" String_t* OpCode_ToString_m1_2650 (OpCode_t1_299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::get_Name()
extern "C" String_t* OpCode_get_Name_m1_2651 (OpCode_t1_299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::get_Size()
extern "C" int32_t OpCode_get_Size_m1_2652 (OpCode_t1_299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPop()
extern "C" int32_t OpCode_get_StackBehaviourPop_m1_2653 (OpCode_t1_299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPush()
extern "C" int32_t OpCode_get_StackBehaviourPush_m1_2654 (OpCode_t1_299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.OpCode::op_Equality(System.Reflection.Emit.OpCode,System.Reflection.Emit.OpCode)
extern "C" bool OpCode_op_Equality_m1_2655 (Object_t * __this /* static, unused */, OpCode_t1_299  ___a, OpCode_t1_299  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
