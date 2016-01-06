#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

struct t1_18;
struct t1_853;
struct t5_2;
struct t1_1;
struct t5_3;
struct t1_35;
struct t1_36;
struct t5_4;
struct t5_6;
struct t5_5;
struct t1_37;
struct t1_41;
struct t5_7;
struct t5_8;
struct t1_29;
struct t5_10;
struct t1_904;
struct t5_12;
struct t1_143;
struct t1_905;
struct t5_13;
struct t1_170;
struct t1_33;
struct t1_906;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t1_33.h"
#include "t5_0.h"
#include "t5_0MD.h"
#include "t5_1.h"
#include "t5_1MD.h"
#include "t1_18.h"
#include "t1_158MD.h"
#include "t1_158.h"
#include "t1_25.h"
#include "t1_23.h"
#include "t1_1.h"
#include "t5_2.h"
#include "t5_2MD.h"
#include "t1_24.h"
#include "t5_3.h"
#include "t1_36.h"
#include "t5_4.h"
#include "t5_4MD.h"
#include "t1_1MD.h"
#include "t1_901MD.h"
#include "t5_6.h"
#include "t5_6MD.h"
#include "t1_901.h"
#include "t1_689MD.h"
#include "t5_5.h"
#include "t5_5MD.h"
#include "t1_4.h"
#include "t1_18MD.h"
#include "t1_37.h"
#include "t1_37MD.h"
#include "mscorlib_ArrayTypes.h"
#include "t5_7.h"
#include "t5_7MD.h"
#include "t1_297MD.h"
#include "t1_38.h"
#include "t1_38MD.h"
#include "t1_40.h"
#include "t1_297.h"
#include "t1_291.h"
#include "t1_28.h"
#include "t1_322.h"
#include "t1_322MD.h"
#include "t1_320.h"
#include "t1_291MD.h"
#include "t5_8.h"
#include "t5_8MD.h"
#include "t1_29.h"
#include "t1_208.h"
#include "t1_208MD.h"
#include "t1_380.h"
#include "t1_380MD.h"
#include "t1_29MD.h"
#include "t5_9.h"
#include "t5_9MD.h"
#include "t5_10.h"
#include "t5_10MD.h"
#include "t5_11MD.h"
#include "t5_11.h"
#include "t5_12.h"
#include "t5_12MD.h"
#include "t1_688MD.h"
#include "t1_10.h"
#include "t5_14.h"
#include "t5_14MD.h"
#include "t1_363.h"
#include "t1_768MD.h"
#include "t1_768.h"
#include "t5_13.h"
#include "t5_13MD.h"
#include "t5_3MD.h"
#include "t1_28MD.h"
#include "t1_786.h"
#include "t1_33MD.h"
#include "t1_665MD.h"
#include "t1_665.h"
#include "t1_22MD.h"
#include "t1_22.h"
#include "t1_21.h"
#include "t1_20.h"
#include "t1_12.h"
#include "t1_9.h"
#include "t1_39.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern TypeInfo* t1_158_TI_var;
extern TypeInfo* t1_853_TI_var;
extern TypeInfo* t1_852_TI_var;
extern TypeInfo* t1_143_TI_var;
extern "C" t1_18* m5_0 (t1_1 * __this , t1_1 * p0, t1_18* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_158_TI_var = il2cpp_codegen_type_info_from_index(36);
		t1_853_TI_var = il2cpp_codegen_type_info_from_index(168);
		t1_852_TI_var = il2cpp_codegen_type_info_from_index(141);
		t1_143_TI_var = il2cpp_codegen_type_info_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	t1_158 * V_0 = {0};
	t1_1 * V_1 = {0};
	t1_1 * V_2 = {0};
	t1_43 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t1_43 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1_158 * L_0 = (t1_158 *)il2cpp_codegen_object_new (t1_158_TI_var);
		m1_4382(L_0, NULL);
		V_0 = L_0;
		t1_1 * L_1 = p0;
		t1_1 * L_2 = (t1_1 *)InterfaceFuncInvoker0< t1_1 * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, t1_853_TI_var, L_1);
		V_1 = L_2;
		t1_1 * L_3 = V_1;
		V_2 = ((t1_1 *)IsInst(L_3, t1_852_TI_var));
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			t1_1 * L_4 = V_1;
			bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t1_143_TI_var, L_4);
			if (!L_5)
			{
				goto IL_0051;
			}
		}

IL_001f:
		{
			t1_158 * L_6 = V_0;
			t1_1 * L_7 = V_1;
			t1_1 * L_8 = (t1_1 *)InterfaceFuncInvoker0< t1_1 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t1_143_TI_var, L_7);
			m1_4402(L_6, L_8, NULL);
			goto IL_0046;
		}

IL_0031:
		{
			t1_158 * L_9 = V_0;
			t1_18* L_10 = p1;
			m1_4399(L_9, L_10, NULL);
			t1_158 * L_11 = V_0;
			t1_1 * L_12 = V_1;
			t1_1 * L_13 = (t1_1 *)InterfaceFuncInvoker0< t1_1 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t1_143_TI_var, L_12);
			m1_4402(L_11, L_13, NULL);
		}

IL_0046:
		{
			t1_1 * L_14 = V_1;
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t1_143_TI_var, L_14);
			if (L_15)
			{
				goto IL_0031;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t1_43 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			t1_1 * L_16 = V_2;
			if (!L_16)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			t1_1 * L_17 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t1_852_TI_var, L_17);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(t1_43 *)
	}

IL_0063:
	{
		t1_158 * L_18 = V_0;
		t1_18* L_19 = m1_4394(L_18, NULL);
		return L_19;
	}
}
extern "C" void m5_1 (t5_2 * __this, t1_1 * p0, t1_24 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t5_3 * m5_2 (t5_2 * __this, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m5_2((t5_2 *)__this->f9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if ((__this->f2 != NULL || MethodHasParameters((MethodInfo*)(__this->f3.f0))) && ___methodIsStatic)
	{
		typedef t5_3 * (*FunctionPointerType) (t1_1 *, t1_1 * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t5_3 * (*FunctionPointerType) (t1_1 * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t5_3_TI_var;
extern "C" t5_3 * pinvoke_delegate_wrapper_t5_2(Il2CppObject* delegate)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_3_TI_var = il2cpp_codegen_type_info_from_index(832);
		s_Il2CppMethodIntialized = true;
	}
	typedef methodPointerType (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation and marshaling of return value back from native representation
	methodPointerType _return_value = _il2cpp_pinvoke_func();
	t5_3 * __return_value_unmarshaled = { 0 };
	__return_value_unmarshaled = il2cpp_codegen_marshal_function_ptr_to_delegate<t5_3>(_return_value, t5_3_TI_var);

	return __return_value_unmarshaled;
}
extern "C" t1_1 * m5_3 (t5_2 * __this, t1_36 * p0, t1_1 * p1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t1_1 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern "C" t5_3 * m5_4 (t5_2 * __this, t1_1 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t5_3 *)__result;
}
extern "C" void m5_5 (t5_4 * __this, const MethodInfo* method)
{
	{
		m1_0(__this, NULL);
		return;
	}
}
extern TypeInfo* t5_6_TI_var;
extern TypeInfo* t1_901_TI_var;
extern TypeInfo* t5_4_TI_var;
extern const MethodInfo* m1_5580_MI_var;
extern "C" void m5_6 (t1_1 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_6_TI_var = il2cpp_codegen_type_info_from_index(833);
		t1_901_TI_var = il2cpp_codegen_type_info_from_index(834);
		t5_4_TI_var = il2cpp_codegen_type_info_from_index(835);
		m1_5580_MI_var = il2cpp_codegen_method_info_from_index(2147483703);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t5_6_TI_var);
		t1_1* L_0 = ((t5_6_SFs*)t5_6_TI_var->static_fields)->f0;
		t1_901 * L_1 = (t1_901 *)il2cpp_codegen_object_new (t1_901_TI_var);
		m1_5580(L_1, L_0, m1_5580_MI_var);
		((t5_4_SFs*)t5_4_TI_var->static_fields)->f0 = L_1;
		return;
	}
}
extern TypeInfo* t5_4_TI_var;
extern "C" t5_3 * m5_7 (t5_4 * __this, t5_6 * p0, t5_2 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_4_TI_var = il2cpp_codegen_type_info_from_index(835);
		s_Il2CppMethodIntialized = true;
	}
	t5_3 * V_0 = {0};
	t1_901 * V_1 = {0};
	t1_43 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t1_43 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t5_4_TI_var);
		t1_901 * L_0 = ((t5_4_SFs*)t5_4_TI_var->static_fields)->f0;
		t5_6 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t5_6 *, t5_3 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t5_4_TI_var);
		t1_901 * L_3 = ((t5_4_SFs*)t5_4_TI_var->static_fields)->f0;
		V_1 = L_3;
		t1_901 * L_4 = V_1;
		m1_4536(NULL, L_4, NULL);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(t5_4_TI_var);
			t1_901 * L_5 = ((t5_4_SFs*)t5_4_TI_var->static_fields)->f0;
			t5_6 * L_6 = p0;
			bool L_7 = (bool)VirtFuncInvoker2< bool, t5_6 *, t5_3 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::TryGetValue(!0,!1&) */, L_5, L_6, (&V_0));
			if (L_7)
			{
				goto IL_0043;
			}
		}

IL_0030:
		{
			t5_2 * L_8 = p1;
			t5_3 * L_9 = m5_2(L_8, NULL);
			V_0 = L_9;
			IL2CPP_RUNTIME_CLASS_INIT(t5_4_TI_var);
			t1_901 * L_10 = ((t5_4_SFs*)t5_4_TI_var->static_fields)->f0;
			t5_6 * L_11 = p0;
			t5_3 * L_12 = V_0;
			VirtActionInvoker2< t5_6 *, t5_3 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Add(!0,!1) */, L_10, L_11, L_12);
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t1_43 *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		t1_901 * L_13 = V_1;
		m1_4537(NULL, L_13, NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(t1_43 *)
	}

IL_004f:
	{
		t5_3 * L_14 = V_0;
		return L_14;
	}
}
extern "C" void m5_8 (t5_5 * __this, const MethodInfo* method)
{
	{
		m1_0(__this, NULL);
		return;
	}
}
extern "C" int32_t m5_9 (t5_5 * __this, t5_6 * p0, const MethodInfo* method)
{
	{
		t5_6 * L_0 = p0;
		t1_37 * L_1 = (L_0->f1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Type::GetHashCode() */, L_1);
		t5_6 * L_3 = p0;
		t1_18* L_4 = (L_3->f2);
		int32_t L_5 = m1_438(L_4, NULL);
		t5_6 * L_6 = p0;
		t1_41* L_7 = (L_6->f3);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_2^(int32_t)L_5))^(int32_t)(((int32_t)((int32_t)(((t1_33 *)L_7)->max_length))))));
	}
}
extern TypeInfo* t1_18_TI_var;
extern "C" bool m5_10 (t5_5 * __this, t5_6 * p0, t5_6 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_18_TI_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		t5_6 * L_0 = p0;
		t1_37 * L_1 = (L_0->f1);
		t5_6 * L_2 = p1;
		t1_37 * L_3 = (L_2->f1);
		if ((((t1_1*)(t1_37 *)L_1) == ((t1_1*)(t1_37 *)L_3)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		t5_6 * L_4 = p0;
		t1_41* L_5 = (L_4->f3);
		t5_6 * L_6 = p1;
		t1_41* L_7 = (L_6->f3);
		if ((((int32_t)(((int32_t)((int32_t)(((t1_33 *)L_5)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((t1_33 *)L_7)->max_length)))))))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}

IL_002a:
	{
		t5_6 * L_8 = p0;
		t1_18* L_9 = (L_8->f2);
		t5_6 * L_10 = p1;
		t1_18* L_11 = (L_10->f2);
		IL2CPP_RUNTIME_CLASS_INIT(t1_18_TI_var);
		bool L_12 = m1_460(NULL, L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}

IL_0042:
	{
		V_0 = 0;
		goto IL_0064;
	}

IL_0049:
	{
		t5_6 * L_13 = p0;
		t1_41* L_14 = (L_13->f3);
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		t5_6 * L_17 = p1;
		t1_41* L_18 = (L_17->f3);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		if ((((t1_1*)(t1_37 *)(*(t1_37 **)(t1_37 **)SZArrayLdElema(L_14, L_16, sizeof(t1_37 *)))) == ((t1_1*)(t1_37 *)(*(t1_37 **)(t1_37 **)SZArrayLdElema(L_18, L_20, sizeof(t1_37 *))))))
		{
			goto IL_0060;
		}
	}
	{
		return 0;
	}

IL_0060:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0064:
	{
		int32_t L_22 = V_0;
		t5_6 * L_23 = p0;
		t1_41* L_24 = (L_23->f3);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((t1_33 *)L_24)->max_length)))))))
		{
			goto IL_0049;
		}
	}
	{
		return 1;
	}
}
extern "C" void m5_11 (t5_6 * __this, t1_37 * p0, t1_18* p1, t1_41* p2, const MethodInfo* method)
{
	{
		m1_0(__this, NULL);
		t1_37 * L_0 = p0;
		__this->f1 = L_0;
		t1_18* L_1 = p1;
		__this->f2 = L_1;
		t1_41* L_2 = p2;
		__this->f3 = L_2;
		return;
	}
}
extern TypeInfo* t5_5_TI_var;
extern TypeInfo* t5_6_TI_var;
extern "C" void m5_12 (t1_1 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_5_TI_var = il2cpp_codegen_type_info_from_index(836);
		t5_6_TI_var = il2cpp_codegen_type_info_from_index(833);
		s_Il2CppMethodIntialized = true;
	}
	{
		t5_5 * L_0 = (t5_5 *)il2cpp_codegen_object_new (t5_5_TI_var);
		m5_8(L_0, NULL);
		((t5_6_SFs*)t5_6_TI_var->static_fields)->f0 = L_0;
		return;
	}
}
extern const Il2CppType* t1_1_0_0_0_var;
extern const Il2CppType* t1_170_0_0_0_var;
extern TypeInfo* t1_18_TI_var;
extern TypeInfo* t1_37_TI_var;
extern TypeInfo* t1_41_TI_var;
extern TypeInfo* t1_297_TI_var;
extern Il2CppCodeGenString* _stringLiteral691;
extern "C" void m5_13 (t5_7 * __this, t1_37 * p0, t1_18* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_1_0_0_0_var = il2cpp_codegen_type_from_index(0);
		t1_170_0_0_0_var = il2cpp_codegen_type_from_index(19);
		t1_18_TI_var = il2cpp_codegen_type_info_from_index(11);
		t1_37_TI_var = il2cpp_codegen_type_info_from_index(3);
		t1_41_TI_var = il2cpp_codegen_type_info_from_index(57);
		t1_297_TI_var = il2cpp_codegen_type_info_from_index(263);
		_stringLiteral691 = il2cpp_codegen_string_literal_from_index(691);
		s_Il2CppMethodIntialized = true;
	}
	{
		m1_0(__this, NULL);
		t1_37 * L_0 = p0;
		t1_18* L_1 = (t1_18*)VirtFuncInvoker0< t1_18* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		t1_18* L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1_18_TI_var);
		t1_18* L_3 = m1_424(NULL, L_1, _stringLiteral691, L_2, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t1_37_TI_var);
		t1_37 * L_4 = m1_899(NULL, LoadTypeToken(t1_1_0_0_0_var), NULL);
		t1_41* L_5 = ((t1_41*)SZArrayNew(t1_41_TI_var, 2));
		t1_37 * L_6 = m1_899(NULL, LoadTypeToken(t1_1_0_0_0_var), NULL);
		ArrayElementTypeCheck (L_5, L_6);
		*((t1_37 **)(t1_37 **)SZArrayLdElema(L_5, 0, sizeof(t1_37 *))) = (t1_37 *)L_6;
		t1_41* L_7 = L_5;
		t1_37 * L_8 = m1_899(NULL, LoadTypeToken(t1_170_0_0_0_var), NULL);
		ArrayElementTypeCheck (L_7, L_8);
		*((t1_37 **)(t1_37 **)SZArrayLdElema(L_7, 1, sizeof(t1_37 *))) = (t1_37 *)L_8;
		t1_37 * L_9 = p0;
		t1_297 * L_10 = (t1_297 *)il2cpp_codegen_object_new (t1_297_TI_var);
		m1_2463(L_10, L_3, L_4, L_7, L_9, NULL);
		__this->f0 = L_10;
		t1_297 * L_11 = (__this->f0);
		t1_291 * L_12 = m1_2475(L_11, NULL);
		__this->f1 = L_12;
		return;
	}
}
extern "C" t5_3 * m5_14 (t5_7 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(4 /* System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitMethodBody() */, __this);
		t5_3 * L_0 = m5_15(__this, NULL);
		return L_0;
	}
}
extern const Il2CppType* t5_3_0_0_0_var;
extern TypeInfo* t1_37_TI_var;
extern TypeInfo* t5_3_TI_var;
extern "C" t5_3 * m5_15 (t5_7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_3_0_0_0_var = il2cpp_codegen_type_from_index(832);
		t1_37_TI_var = il2cpp_codegen_type_info_from_index(3);
		t5_3_TI_var = il2cpp_codegen_type_info_from_index(832);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_297 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t1_37_TI_var);
		t1_37 * L_1 = m1_899(NULL, LoadTypeToken(t5_3_0_0_0_var), NULL);
		t1_28 * L_2 = m1_2471(L_0, L_1, NULL);
		return ((t5_3 *)CastclassSealed(L_2, t5_3_TI_var));
	}
}
extern TypeInfo* t1_322_TI_var;
extern "C" void m5_16 (t5_7 * __this, t1_37 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_322_TI_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_37 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_0);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		t1_291 * L_2 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t1_322_TI_var);
		t1_320  L_3 = ((t1_322_SFs*)t1_322_TI_var->static_fields)->f118;
		t1_37 * L_4 = p0;
		VirtActionInvoker2< t1_320 , t1_37 * >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_2, L_3, L_4);
		t1_291 * L_5 = (__this->f1);
		t1_320  L_6 = ((t1_322_SFs*)t1_322_TI_var->static_fields)->f112;
		t1_37 * L_7 = p0;
		VirtActionInvoker2< t1_320 , t1_37 * >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_5, L_6, L_7);
		goto IL_0043;
	}

IL_0032:
	{
		t1_291 * L_8 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t1_322_TI_var);
		t1_320  L_9 = ((t1_322_SFs*)t1_322_TI_var->static_fields)->f115;
		t1_37 * L_10 = p0;
		VirtActionInvoker2< t1_320 , t1_37 * >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_8, L_9, L_10);
	}

IL_0043:
	{
		return;
	}
}
extern TypeInfo* t1_322_TI_var;
extern "C" void m5_17 (t5_7 * __this, t1_37 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_322_TI_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_37 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		t1_291 * L_2 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t1_322_TI_var);
		t1_320  L_3 = ((t1_322_SFs*)t1_322_TI_var->static_fields)->f137;
		t1_37 * L_4 = p0;
		VirtActionInvoker2< t1_320 , t1_37 * >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_2, L_3, L_4);
	}

IL_001c:
	{
		return;
	}
}
extern const Il2CppType* t1_25_0_0_0_var;
extern TypeInfo* t1_37_TI_var;
extern TypeInfo* t1_322_TI_var;
extern "C" void m5_18 (t5_7 * __this, t1_37 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_25_0_0_0_var = il2cpp_codegen_type_from_index(74);
		t1_37_TI_var = il2cpp_codegen_type_info_from_index(3);
		t1_322_TI_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_37 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1_37_TI_var);
		t1_37 * L_1 = m1_899(NULL, LoadTypeToken(t1_25_0_0_0_var), NULL);
		if ((!(((t1_1*)(t1_37 *)L_0) == ((t1_1*)(t1_37 *)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		t1_291 * L_2 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t1_322_TI_var);
		t1_320  L_3 = ((t1_322_SFs*)t1_322_TI_var->static_fields)->f20;
		VirtActionInvoker1< t1_320  >::Invoke(4 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_2, L_3);
		goto IL_002c;
	}

IL_0025:
	{
		t1_37 * L_4 = p0;
		m5_17(__this, L_4, NULL);
	}

IL_002c:
	{
		t1_291 * L_5 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t1_322_TI_var);
		t1_320  L_6 = ((t1_322_SFs*)t1_322_TI_var->static_fields)->f41;
		VirtActionInvoker1< t1_320  >::Invoke(4 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_5, L_6);
		return;
	}
}
extern "C" void m5_19 (t5_8 * __this, t1_29 * p0, const MethodInfo* method)
{
	{
		t1_29 * L_0 = p0;
		t1_37 * L_1 = (t1_37 *)VirtFuncInvoker0< t1_37 * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		t1_29 * L_2 = p0;
		t1_18* L_3 = (t1_18*)VirtFuncInvoker0< t1_18* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		m5_13(__this, L_1, L_3, NULL);
		t1_29 * L_4 = p0;
		__this->f2 = L_4;
		return;
	}
}
extern TypeInfo* t1_322_TI_var;
extern "C" void m5_20 (t5_8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_322_TI_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_291 * L_0 = (((t5_7 *)__this)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t1_322_TI_var);
		t1_320  L_1 = ((t1_322_SFs*)t1_322_TI_var->static_fields)->f2;
		VirtActionInvoker1< t1_320  >::Invoke(4 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_0, L_1);
		t1_29 * L_2 = (__this->f2);
		t1_829* L_3 = (t1_829*)VirtFuncInvoker0< t1_829* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		int32_t L_4 = 0;
		t1_37 * L_5 = (t1_37 *)VirtFuncInvoker0< t1_37 * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(t1_380 **)(t1_380 **)SZArrayLdElema(L_3, L_4, sizeof(t1_380 *))));
		m5_16(__this, L_5, NULL);
		t1_291 * L_6 = (((t5_7 *)__this)->f1);
		t1_320  L_7 = ((t1_322_SFs*)t1_322_TI_var->static_fields)->f39;
		t1_29 * L_8 = (__this->f2);
		VirtActionInvoker2< t1_320 , t1_29 * >::Invoke(6 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo) */, L_6, L_7, L_8);
		t1_29 * L_9 = (__this->f2);
		t1_37 * L_10 = (t1_37 *)VirtFuncInvoker0< t1_37 * >::Invoke(32 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_9);
		m5_18(__this, L_10, NULL);
		return;
	}
}
extern TypeInfo* t5_11_TI_var;
extern TypeInfo* t1_1_TI_var;
extern const MethodInfo* m5_57_MI_var;
extern "C" void m5_21 (t5_10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_11_TI_var = il2cpp_codegen_type_info_from_index(837);
		t1_1_TI_var = il2cpp_codegen_type_info_from_index(0);
		m5_57_MI_var = il2cpp_codegen_method_info_from_index(2147483704);
		s_Il2CppMethodIntialized = true;
	}
	{
		t5_11 * L_0 = (t5_11 *)il2cpp_codegen_object_new (t5_11_TI_var);
		m5_57(L_0, m5_57_MI_var);
		__this->f0 = L_0;
		t1_1 * L_1 = (t1_1 *)il2cpp_codegen_object_new (t1_1_TI_var);
		m1_0(L_1, NULL);
		__this->f1 = L_1;
		m1_0(__this, NULL);
		return;
	}
}
extern "C" t1_1* m5_22 (t5_10 * __this, const MethodInfo* method)
{
	{
		t5_11 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m5_23 (t5_12 * __this, const MethodInfo* method)
{
	{
		m1_0(__this, NULL);
		return;
	}
}
extern "C" t1_29 * m5_24 (t5_12 * __this, const MethodInfo* method)
{
	{
		t1_29 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t1_1 * m5_25 (t5_12 * __this, const MethodInfo* method)
{
	{
		t1_29 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t1_1 * m5_26 (t5_12 * __this, const MethodInfo* method)
{
	{
		t1_1* L_0 = m5_27(__this, NULL);
		return L_0;
	}
}
extern TypeInfo* t5_12_TI_var;
extern "C" t1_1* m5_27 (t5_12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_12_TI_var = il2cpp_codegen_type_info_from_index(838);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t* L_0 = &(__this->f2);
		int32_t L_1 = m1_4533(NULL, L_0, 0, ((int32_t)-2), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		t5_12 * L_2 = (t5_12 *)il2cpp_codegen_object_new (t5_12_TI_var);
		m5_23(L_2, NULL);
		return L_2;
	}
}
extern TypeInfo* t5_14_TI_var;
extern TypeInfo* t1_904_TI_var;
extern TypeInfo* t1_903_TI_var;
extern TypeInfo* t1_29_TI_var;
extern TypeInfo* t1_143_TI_var;
extern TypeInfo* t1_852_TI_var;
extern "C" bool m5_28 (t5_12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_14_TI_var = il2cpp_codegen_type_info_from_index(839);
		t1_904_TI_var = il2cpp_codegen_type_info_from_index(840);
		t1_903_TI_var = il2cpp_codegen_type_info_from_index(841);
		t1_29_TI_var = il2cpp_codegen_type_info_from_index(56);
		t1_143_TI_var = il2cpp_codegen_type_info_from_index(158);
		t1_852_TI_var = il2cpp_codegen_type_info_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	t1_43 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t1_43 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->f2);
		V_0 = L_0;
		__this->f2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00c2;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		t5_10 * L_2 = ((t5_14_SFs*)t5_14_TI_var->static_fields)->f3;
		t1_1* L_3 = m5_22(L_2, NULL);
		t1_1* L_4 = (t1_1*)InterfaceFuncInvoker0< t1_1* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, t1_904_TI_var, L_3);
		__this->f0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_008d;
			}
		}

IL_0047:
		{
			goto IL_008d;
		}

IL_004c:
		{
			t1_1* L_6 = (__this->f0);
			t1_38 * L_7 = (t1_38 *)InterfaceFuncInvoker0< t1_38 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, t1_903_TI_var, L_6);
			__this->f1 = L_7;
			t1_38 * L_8 = (__this->f1);
			int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_8);
			if ((!(((uint32_t)L_9) == ((uint32_t)8))))
			{
				goto IL_008d;
			}
		}

IL_006e:
		{
			t1_38 * L_10 = (__this->f1);
			__this->f3 = ((t1_29 *)CastclassClass(L_10, t1_29_TI_var));
			__this->f2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xC4, FINALLY_00a2);
		}

IL_008d:
		{
			t1_1* L_11 = (__this->f0);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t1_143_TI_var, L_11);
			if (L_12)
			{
				goto IL_004c;
			}
		}

IL_009d:
		{
			IL2CPP_LEAVE(0xBB, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t1_43 *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a6;
			}
		}

IL_00a5:
		{
			IL2CPP_END_FINALLY(162)
		}

IL_00a6:
		{
			t1_1* L_14 = (__this->f0);
			if (L_14)
			{
				goto IL_00af;
			}
		}

IL_00ae:
		{
			IL2CPP_END_FINALLY(162)
		}

IL_00af:
		{
			t1_1* L_15 = (__this->f0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t1_852_TI_var, L_15);
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_JUMP_TBL(0xBB, IL_00bb)
		IL2CPP_RETHROW_IF_UNHANDLED(t1_43 *)
	}

IL_00bb:
	{
		__this->f2 = (-1);
	}

IL_00c2:
	{
		return 0;
	}

IL_00c4:
	{
		return 1;
	}
	// Dead block : IL_00c6: ldloc.2
}
extern TypeInfo* t1_852_TI_var;
extern "C" void m5_29 (t5_12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_852_TI_var = il2cpp_codegen_type_info_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	t1_43 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t1_43 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->f2);
		V_0 = L_0;
		__this->f2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t1_43 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			t1_1* L_2 = (__this->f0);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			t1_1* L_3 = (__this->f0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t1_852_TI_var, L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(t1_43 *)
	}

IL_003b:
	{
		return;
	}
}
extern TypeInfo* t1_768_TI_var;
extern "C" void m5_30 (t5_12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_768_TI_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_768 * L_0 = (t1_768 *)il2cpp_codegen_object_new (t1_768_TI_var);
		m1_5246(L_0, NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
extern "C" void m5_31 (t5_13 * __this, const MethodInfo* method)
{
	{
		m1_0(__this, NULL);
		return;
	}
}
extern TypeInfo* t5_14_TI_var;
extern "C" t5_3 * m5_32 (t5_13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_14_TI_var = il2cpp_codegen_type_info_from_index(839);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_1 * L_0 = (__this->f0);
		t1_37 * L_1 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		t5_3 * L_2 = m5_36(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern const Il2CppType* t5_14_0_0_0_var;
extern TypeInfo* t1_170_TI_var;
extern TypeInfo* t5_14_TI_var;
extern TypeInfo* t1_37_TI_var;
extern TypeInfo* t5_4_TI_var;
extern TypeInfo* t5_10_TI_var;
extern TypeInfo* t1_23_TI_var;
extern "C" void m5_33 (t1_1 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_14_0_0_0_var = il2cpp_codegen_type_from_index(839);
		t1_170_TI_var = il2cpp_codegen_type_info_from_index(19);
		t5_14_TI_var = il2cpp_codegen_type_info_from_index(839);
		t1_37_TI_var = il2cpp_codegen_type_info_from_index(3);
		t5_4_TI_var = il2cpp_codegen_type_info_from_index(835);
		t5_10_TI_var = il2cpp_codegen_type_info_from_index(842);
		t1_23_TI_var = il2cpp_codegen_type_info_from_index(49);
		s_Il2CppMethodIntialized = true;
	}
	{
		((t5_14_SFs*)t5_14_TI_var->static_fields)->f0 = ((t1_170*)SZArrayNew(t1_170_TI_var, 0));
		IL2CPP_RUNTIME_CLASS_INIT(t1_37_TI_var);
		t1_37 * L_0 = m1_899(NULL, LoadTypeToken(t5_14_0_0_0_var), NULL);
		((t5_14_SFs*)t5_14_TI_var->static_fields)->f1 = L_0;
		t5_4 * L_1 = (t5_4 *)il2cpp_codegen_object_new (t5_4_TI_var);
		m5_5(L_1, NULL);
		((t5_14_SFs*)t5_14_TI_var->static_fields)->f2 = L_1;
		t5_10 * L_2 = (t5_10 *)il2cpp_codegen_object_new (t5_10_TI_var);
		m5_21(L_2, NULL);
		((t5_14_SFs*)t5_14_TI_var->static_fields)->f3 = L_2;
		bool L_3 = 1;
		t1_1 * L_4 = Box(t1_23_TI_var, &L_3);
		((t5_14_SFs*)t5_14_TI_var->static_fields)->f4 = L_4;
		return;
	}
}
extern TypeInfo* t1_37_TI_var;
extern TypeInfo* t5_6_TI_var;
extern TypeInfo* t5_14_TI_var;
extern "C" t5_3 * m5_34 (t1_1 * __this , t1_1 * p0, t1_18* p1, t1_41* p2, t5_2 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_37_TI_var = il2cpp_codegen_type_info_from_index(3);
		t5_6_TI_var = il2cpp_codegen_type_info_from_index(833);
		t5_14_TI_var = il2cpp_codegen_type_info_from_index(839);
		s_Il2CppMethodIntialized = true;
	}
	t1_37 * V_0 = {0};
	t5_6 * V_1 = {0};
	t1_37 * G_B2_0 = {0};
	t1_37 * G_B1_0 = {0};
	{
		t1_1 * L_0 = p0;
		t1_37 * L_1 = ((t1_37 *)IsInstClass(L_0, t1_37_TI_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		t1_1 * L_2 = p0;
		t1_37 * L_3 = m1_5(L_2, NULL);
		G_B2_0 = L_3;
	}

IL_0013:
	{
		V_0 = G_B2_0;
		t1_37 * L_4 = V_0;
		t1_18* L_5 = p1;
		t1_41* L_6 = p2;
		t5_6 * L_7 = (t5_6 *)il2cpp_codegen_object_new (t5_6_TI_var);
		m5_11(L_7, L_4, L_5, L_6, NULL);
		V_1 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		t5_4 * L_8 = ((t5_14_SFs*)t5_14_TI_var->static_fields)->f2;
		t5_6 * L_9 = V_1;
		t5_2 * L_10 = p3;
		t5_3 * L_11 = m5_7(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
extern TypeInfo* t5_13_TI_var;
extern TypeInfo* t1_170_TI_var;
extern TypeInfo* t1_41_TI_var;
extern TypeInfo* t5_2_TI_var;
extern TypeInfo* t5_14_TI_var;
extern const MethodInfo* m5_32_MI_var;
extern Il2CppCodeGenString* _stringLiteral2531;
extern "C" t1_1 * m5_35 (t1_1 * __this , t1_1 * p0, t1_37 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_13_TI_var = il2cpp_codegen_type_info_from_index(843);
		t1_170_TI_var = il2cpp_codegen_type_info_from_index(19);
		t1_41_TI_var = il2cpp_codegen_type_info_from_index(57);
		t5_2_TI_var = il2cpp_codegen_type_info_from_index(844);
		t5_14_TI_var = il2cpp_codegen_type_info_from_index(839);
		m5_32_MI_var = il2cpp_codegen_method_info_from_index(57);
		_stringLiteral2531 = il2cpp_codegen_string_literal_from_index(2531);
		s_Il2CppMethodIntialized = true;
	}
	t1_170* V_0 = {0};
	t5_3 * V_1 = {0};
	t5_13 * V_2 = {0};
	{
		t5_13 * L_0 = (t5_13 *)il2cpp_codegen_object_new (t5_13_TI_var);
		m5_31(L_0, NULL);
		V_2 = L_0;
		t5_13 * L_1 = V_2;
		t1_1 * L_2 = p0;
		L_1->f0 = L_2;
		t5_13 * L_3 = V_2;
		t1_37 * L_4 = p1;
		L_3->f1 = L_4;
		t5_13 * L_5 = V_2;
		t1_1 * L_6 = (L_5->f0);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return NULL;
	}

IL_0021:
	{
		t1_170* L_7 = ((t1_170*)SZArrayNew(t1_170_TI_var, 1));
		t5_13 * L_8 = V_2;
		t1_37 * L_9 = (L_8->f1);
		ArrayElementTypeCheck (L_7, L_9);
		*((t1_1 **)(t1_1 **)SZArrayLdElema(L_7, 0, sizeof(t1_1 *))) = (t1_1 *)L_9;
		V_0 = L_7;
		t5_13 * L_10 = V_2;
		t1_1 * L_11 = (L_10->f0);
		t1_41* L_12 = ((t1_41*)SZArrayNew(t1_41_TI_var, 1));
		t5_13 * L_13 = V_2;
		t1_37 * L_14 = (L_13->f1);
		ArrayElementTypeCheck (L_12, L_14);
		*((t1_37 **)(t1_37 **)SZArrayLdElema(L_12, 0, sizeof(t1_37 *))) = (t1_37 *)L_14;
		t5_13 * L_15 = V_2;
		t1_24 L_16 = { (void*)m5_32_MI_var };
		t5_2 * L_17 = (t5_2 *)il2cpp_codegen_object_new (t5_2_TI_var);
		m5_1(L_17, L_15, L_16, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		t5_3 * L_18 = m5_34(NULL, L_11, _stringLiteral2531, L_12, L_17, NULL);
		V_1 = L_18;
		t5_3 * L_19 = V_1;
		t5_13 * L_20 = V_2;
		t1_1 * L_21 = (L_20->f0);
		t1_170* L_22 = V_0;
		t1_1 * L_23 = m5_54(L_19, L_21, L_22, NULL);
		return L_23;
	}
}
extern TypeInfo* t5_3_TI_var;
extern TypeInfo* t5_15_TI_var;
extern TypeInfo* t5_14_TI_var;
extern const MethodInfo* m5_41_MI_var;
extern const MethodInfo* m5_40_MI_var;
extern "C" t5_3 * m5_36 (t1_1 * __this , t1_1 * p0, t1_37 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_3_TI_var = il2cpp_codegen_type_info_from_index(832);
		t5_15_TI_var = il2cpp_codegen_type_info_from_index(845);
		t5_14_TI_var = il2cpp_codegen_type_info_from_index(839);
		m5_41_MI_var = il2cpp_codegen_method_info_from_index(58);
		m5_40_MI_var = il2cpp_codegen_method_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	t1_37 * V_0 = {0};
	t1_29 * V_1 = {0};
	{
		t1_37 * L_0 = p1;
		t1_1 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t1_1 * >::Invoke(41 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t1_24 L_3 = { (void*)m5_41_MI_var };
		t5_3 * L_4 = (t5_3 *)il2cpp_codegen_object_new (t5_3_TI_var);
		m5_53(L_4, NULL, L_3, NULL);
		return L_4;
	}

IL_0019:
	{
		t1_1 * L_5 = p0;
		if (!((t1_1 *)IsInst(L_5, t5_15_TI_var)))
		{
			goto IL_0031;
		}
	}
	{
		t1_24 L_6 = { (void*)m5_40_MI_var };
		t5_3 * L_7 = (t5_3 *)il2cpp_codegen_object_new (t5_3_TI_var);
		m5_53(L_7, NULL, L_6, NULL);
		return L_7;
	}

IL_0031:
	{
		t1_1 * L_8 = p0;
		t1_37 * L_9 = m1_5(L_8, NULL);
		V_0 = L_9;
		t1_37 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		bool L_11 = m5_38(NULL, L_10, NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		t1_37 * L_12 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		bool L_13 = m5_38(NULL, L_12, NULL);
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		t1_37 * L_14 = V_0;
		t1_37 * L_15 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		t5_3 * L_16 = m5_37(NULL, L_14, L_15, NULL);
		return L_16;
	}

IL_0056:
	{
		t1_37 * L_17 = V_0;
		t1_37 * L_18 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		t1_29 * L_19 = m5_50(NULL, L_17, L_18, NULL);
		V_1 = L_19;
		t1_29 * L_20 = V_1;
		if (L_20)
		{
			goto IL_0071;
		}
	}
	{
		t1_24 L_21 = { (void*)m5_41_MI_var };
		t5_3 * L_22 = (t5_3 *)il2cpp_codegen_object_new (t5_3_TI_var);
		m5_53(L_22, NULL, L_21, NULL);
		return L_22;
	}

IL_0071:
	{
		t1_29 * L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		t5_3 * L_24 = m5_39(NULL, L_23, NULL);
		return L_24;
	}
}
extern const Il2CppType* t5_3_0_0_0_var;
extern const Il2CppType* t5_9_0_0_0_var;
extern TypeInfo* t1_37_TI_var;
extern TypeInfo* t1_170_TI_var;
extern TypeInfo* t1_786_TI_var;
extern TypeInfo* t1_18_TI_var;
extern TypeInfo* t5_3_TI_var;
extern Il2CppCodeGenString* _stringLiteral2532;
extern Il2CppCodeGenString* _stringLiteral2533;
extern "C" t5_3 * m5_37 (t1_1 * __this , t1_37 * p0, t1_37 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_3_0_0_0_var = il2cpp_codegen_type_from_index(832);
		t5_9_0_0_0_var = il2cpp_codegen_type_from_index(846);
		t1_37_TI_var = il2cpp_codegen_type_info_from_index(3);
		t1_170_TI_var = il2cpp_codegen_type_info_from_index(19);
		t1_786_TI_var = il2cpp_codegen_type_info_from_index(847);
		t1_18_TI_var = il2cpp_codegen_type_info_from_index(11);
		t5_3_TI_var = il2cpp_codegen_type_info_from_index(832);
		_stringLiteral2532 = il2cpp_codegen_string_literal_from_index(2532);
		_stringLiteral2533 = il2cpp_codegen_string_literal_from_index(2533);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1_37_TI_var);
		t1_37 * L_0 = m1_899(NULL, LoadTypeToken(t5_3_0_0_0_var), NULL);
		t1_37 * L_1 = m1_899(NULL, LoadTypeToken(t5_9_0_0_0_var), NULL);
		t1_170* L_2 = ((t1_170*)SZArrayNew(t1_170_TI_var, 4));
		ArrayElementTypeCheck (L_2, _stringLiteral2532);
		*((t1_1 **)(t1_1 **)SZArrayLdElema(L_2, 0, sizeof(t1_1 *))) = (t1_1 *)_stringLiteral2532;
		t1_170* L_3 = L_2;
		t1_37 * L_4 = p0;
		int32_t L_5 = m1_898(NULL, L_4, NULL);
		int32_t L_6 = L_5;
		t1_1 * L_7 = Box(t1_786_TI_var, &L_6);
		ArrayElementTypeCheck (L_3, L_7);
		*((t1_1 **)(t1_1 **)SZArrayLdElema(L_3, 1, sizeof(t1_1 *))) = (t1_1 *)L_7;
		t1_170* L_8 = L_3;
		ArrayElementTypeCheck (L_8, _stringLiteral2533);
		*((t1_1 **)(t1_1 **)SZArrayLdElema(L_8, 2, sizeof(t1_1 *))) = (t1_1 *)_stringLiteral2533;
		t1_170* L_9 = L_8;
		t1_37 * L_10 = p1;
		int32_t L_11 = m1_898(NULL, L_10, NULL);
		int32_t L_12 = L_11;
		t1_1 * L_13 = Box(t1_786_TI_var, &L_12);
		ArrayElementTypeCheck (L_9, L_13);
		*((t1_1 **)(t1_1 **)SZArrayLdElema(L_9, 3, sizeof(t1_1 *))) = (t1_1 *)L_13;
		IL2CPP_RUNTIME_CLASS_INIT(t1_18_TI_var);
		t1_18* L_14 = m1_426(NULL, L_9, NULL);
		t1_29 * L_15 = (t1_29 *)VirtFuncInvoker1< t1_29 *, t1_18* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_1, L_14);
		t1_28 * L_16 = m1_691(NULL, L_0, L_15, NULL);
		return ((t5_3 *)CastclassSealed(L_16, t5_3_TI_var));
	}
}
extern TypeInfo* t1_37_TI_var;
extern TypeInfo* t5_14_TI_var;
extern "C" bool m5_38 (t1_1 * __this , t1_37 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_37_TI_var = il2cpp_codegen_type_info_from_index(3);
		t5_14_TI_var = il2cpp_codegen_type_info_from_index(839);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_37 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1_37_TI_var);
		int32_t L_1 = m1_898(NULL, L_0, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		bool L_2 = m5_49(NULL, L_1, NULL);
		return L_2;
	}
}
extern TypeInfo* t5_8_TI_var;
extern "C" t5_3 * m5_39 (t1_1 * __this , t1_29 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_8_TI_var = il2cpp_codegen_type_info_from_index(848);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_29 * L_0 = p0;
		t5_8 * L_1 = (t5_8 *)il2cpp_codegen_object_new (t5_8_TI_var);
		m5_19(L_1, L_0, NULL);
		t5_3 * L_2 = m5_14(L_1, NULL);
		return L_2;
	}
}
extern TypeInfo* t5_15_TI_var;
extern TypeInfo* t1_37_TI_var;
extern "C" t1_1 * m5_40 (t1_1 * __this , t1_1 * p0, t1_170* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_15_TI_var = il2cpp_codegen_type_info_from_index(845);
		t1_37_TI_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_1 * L_0 = p0;
		t1_170* L_1 = p1;
		int32_t L_2 = 0;
		t1_1 * L_3 = (t1_1 *)InterfaceFuncInvoker1< t1_1 *, t1_37 * >::Invoke(0 /* System.Object Boo.Lang.Runtime.ICoercible::Coerce(System.Type) */, t5_15_TI_var, ((t1_1 *)Castclass(L_0, t5_15_TI_var)), ((t1_37 *)CastclassClass((*(t1_1 **)(t1_1 **)SZArrayLdElema(L_1, L_2, sizeof(t1_1 *))), t1_37_TI_var)));
		return L_3;
	}
}
extern "C" t1_1 * m5_41 (t1_1 * __this , t1_1 * p0, t1_170* p1, const MethodInfo* method)
{
	{
		t1_1 * L_0 = p0;
		return L_0;
	}
}
extern "C" bool m5_42 (t1_1 * __this , int32_t p0, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 0)
		{
			goto IL_003d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 1)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 2)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 3)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 4)
		{
			goto IL_0041;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 5)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 6)
		{
			goto IL_0043;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 7)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 9)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 10)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0051;
	}

IL_003b:
	{
		return 1;
	}

IL_003d:
	{
		return 1;
	}

IL_003f:
	{
		return 1;
	}

IL_0041:
	{
		return 1;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 0;
	}
}
extern TypeInfo* t1_18_TI_var;
extern "C" t1_18* m5_43 (t1_1 * __this , t1_18* p0, t1_18* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_18_TI_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_18* L_0 = p0;
		t1_18* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1_18_TI_var);
		t1_18* L_2 = m1_423(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern TypeInfo* t1_18_TI_var;
extern "C" t1_18* m5_44 (t1_1 * __this , t1_1 * p0, t1_18* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_18_TI_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1_1 * L_0 = p0;
		t1_18* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1_18_TI_var);
		t1_18* L_2 = m1_421(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern TypeInfo* t1_37_TI_var;
extern TypeInfo* t5_14_TI_var;
extern TypeInfo* t1_33_TI_var;
extern "C" bool m5_45 (t1_1 * __this , t1_1 * p0, t1_1 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_37_TI_var = il2cpp_codegen_type_info_from_index(3);
		t5_14_TI_var = il2cpp_codegen_type_info_from_index(839);
		t1_33_TI_var = il2cpp_codegen_type_info_from_index(183);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	t1_33 * V_2 = {0};
	t1_33 * V_3 = {0};
	int32_t G_B15_0 = 0;
	{
		t1_1 * L_0 = p0;
		t1_1 * L_1 = p1;
		if ((!(((t1_1*)(t1_1 *)L_0) == ((t1_1*)(t1_1 *)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		return 1;
	}

IL_0009:
	{
		t1_1 * L_2 = p0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		t1_1 * L_3 = p1;
		t1_1 * L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker1< bool, t1_1 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		return L_5;
	}

IL_0017:
	{
		t1_1 * L_6 = p1;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		t1_1 * L_7 = p0;
		t1_1 * L_8 = p1;
		bool L_9 = (bool)VirtFuncInvoker1< bool, t1_1 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_7, L_8);
		return L_9;
	}

IL_0025:
	{
		t1_1 * L_10 = p0;
		t1_37 * L_11 = m1_5(L_10, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t1_37_TI_var);
		int32_t L_12 = m1_898(NULL, L_11, NULL);
		V_0 = L_12;
		t1_1 * L_13 = p1;
		t1_37 * L_14 = m1_5(L_13, NULL);
		int32_t L_15 = m1_898(NULL, L_14, NULL);
		V_1 = L_15;
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		bool L_17 = m5_42(NULL, L_16, NULL);
		if (!L_17)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		bool L_19 = m5_42(NULL, L_18, NULL);
		if (!L_19)
		{
			goto IL_005d;
		}
	}
	{
		t1_1 * L_20 = p0;
		int32_t L_21 = V_0;
		t1_1 * L_22 = p1;
		int32_t L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		bool L_24 = m5_48(NULL, L_20, L_21, L_22, L_23, NULL);
		return L_24;
	}

IL_005d:
	{
		t1_1 * L_25 = p0;
		V_2 = ((t1_33 *)IsInstClass(L_25, t1_33_TI_var));
		t1_33 * L_26 = V_2;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		t1_1 * L_27 = p1;
		V_3 = ((t1_33 *)IsInstClass(L_27, t1_33_TI_var));
		t1_33 * L_28 = V_3;
		if (!L_28)
		{
			goto IL_007f;
		}
	}
	{
		t1_33 * L_29 = V_2;
		t1_33 * L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		bool L_31 = m5_46(NULL, L_29, L_30, NULL);
		return L_31;
	}

IL_007f:
	{
		t1_1 * L_32 = p0;
		t1_1 * L_33 = p1;
		bool L_34 = (bool)VirtFuncInvoker1< bool, t1_1 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_32, L_33);
		if (L_34)
		{
			goto IL_0094;
		}
	}
	{
		t1_1 * L_35 = p1;
		t1_1 * L_36 = p0;
		bool L_37 = (bool)VirtFuncInvoker1< bool, t1_1 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_35, L_36);
		G_B15_0 = ((int32_t)(L_37));
		goto IL_0095;
	}

IL_0094:
	{
		G_B15_0 = 1;
	}

IL_0095:
	{
		return G_B15_0;
	}
}
extern TypeInfo* t1_665_TI_var;
extern TypeInfo* t5_14_TI_var;
extern Il2CppCodeGenString* _stringLiteral2534;
extern "C" bool m5_46 (t1_1 * __this , t1_33 * p0, t1_33 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_665_TI_var = il2cpp_codegen_type_info_from_index(4);
		t5_14_TI_var = il2cpp_codegen_type_info_from_index(839);
		_stringLiteral2534 = il2cpp_codegen_string_literal_from_index(2534);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		t1_33 * L_0 = p0;
		int32_t L_1 = m1_783(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		t1_33 * L_2 = p1;
		int32_t L_3 = m1_783(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		t1_665 * L_4 = (t1_665 *)il2cpp_codegen_object_new (t1_665_TI_var);
		m1_4655(L_4, _stringLiteral2534, NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0023:
	{
		t1_33 * L_5 = p0;
		int32_t L_6 = m1_781(L_5, NULL);
		t1_33 * L_7 = p1;
		int32_t L_8 = m1_781(L_7, NULL);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		return 0;
	}

IL_0036:
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_003d:
	{
		t1_33 * L_9 = p0;
		int32_t L_10 = V_0;
		t1_1 * L_11 = m1_800(L_9, L_10, NULL);
		t1_33 * L_12 = p1;
		int32_t L_13 = V_0;
		t1_1 * L_14 = m1_800(L_12, L_13, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		bool L_15 = m5_45(NULL, L_11, L_14, NULL);
		if (L_15)
		{
			goto IL_0057;
		}
	}
	{
		return 0;
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		t1_33 * L_18 = p0;
		int32_t L_19 = m1_781(L_18, NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_003d;
		}
	}
	{
		return 1;
	}
}
extern "C" int32_t m5_47 (t1_1 * __this , int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)15))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = p1;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0013;
		}
	}

IL_0010:
	{
		return (int32_t)(((int32_t)15));
	}

IL_0013:
	{
		int32_t L_2 = p0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)14))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = p1;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0026;
		}
	}

IL_0023:
	{
		return (int32_t)(((int32_t)14));
	}

IL_0026:
	{
		int32_t L_4 = p0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_5 = p1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0039;
		}
	}

IL_0036:
	{
		return (int32_t)(((int32_t)13));
	}

IL_0039:
	{
		int32_t L_6 = p0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_7 = p1;
		if ((((int32_t)L_7) == ((int32_t)5)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = p1;
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_9 = p1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)9))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_10 = p1;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0062;
		}
	}

IL_005f:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0062:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0065:
	{
		int32_t L_11 = p1;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_12 = p0;
		if ((((int32_t)L_12) == ((int32_t)5)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_13 = p0;
		if ((((int32_t)L_13) == ((int32_t)7)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_14 = p0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)9))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_15 = p0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_008e;
		}
	}

IL_008b:
	{
		return (int32_t)(((int32_t)11));
	}

IL_008e:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0091:
	{
		int32_t L_16 = p0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)11))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_17 = p1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00a4;
		}
	}

IL_00a1:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00a4:
	{
		int32_t L_18 = p0;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_19 = p1;
		if ((((int32_t)L_19) == ((int32_t)5)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_20 = p1;
		if ((((int32_t)L_20) == ((int32_t)7)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_21 = p1;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00c5;
		}
	}

IL_00c2:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00c5:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00c8:
	{
		int32_t L_22 = p1;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_23 = p0;
		if ((((int32_t)L_23) == ((int32_t)5)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_24 = p0;
		if ((((int32_t)L_24) == ((int32_t)7)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_25 = p0;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00e9;
		}
	}

IL_00e6:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00e9:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00ec:
	{
		return (int32_t)(((int32_t)9));
	}
}
extern TypeInfo* t1_851_TI_var;
extern TypeInfo* t5_14_TI_var;
extern TypeInfo* t1_22_TI_var;
extern "C" bool m5_48 (t1_1 * __this , t1_1 * p0, int32_t p1, t1_1 * p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_851_TI_var = il2cpp_codegen_type_info_from_index(84);
		t5_14_TI_var = il2cpp_codegen_type_info_from_index(839);
		t1_22_TI_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	t1_1 * V_0 = {0};
	t1_1 * V_1 = {0};
	int32_t V_2 = {0};
	{
		t1_1 * L_0 = p0;
		V_0 = ((t1_1 *)Castclass(L_0, t1_851_TI_var));
		t1_1 * L_1 = p2;
		V_1 = ((t1_1 *)Castclass(L_1, t1_851_TI_var));
		int32_t L_2 = p1;
		int32_t L_3 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		int32_t L_4 = m5_47(NULL, L_2, L_3, NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 0)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 1)
		{
			goto IL_0083;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 2)
		{
			goto IL_0072;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 3)
		{
			goto IL_0061;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 4)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 5)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00a5;
	}

IL_003c:
	{
		t1_1 * L_6 = V_0;
		t1_22  L_7 = (t1_22 )InterfaceFuncInvoker1< t1_22 , t1_1 * >::Invoke(4 /* System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider) */, t1_851_TI_var, L_6, (t1_1 *)NULL);
		t1_1 * L_8 = V_1;
		t1_22  L_9 = (t1_22 )InterfaceFuncInvoker1< t1_22 , t1_1 * >::Invoke(4 /* System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider) */, t1_851_TI_var, L_8, (t1_1 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t1_22_TI_var);
		bool L_10 = m1_607(NULL, L_7, L_9, NULL);
		return L_10;
	}

IL_0050:
	{
		t1_1 * L_11 = V_0;
		double L_12 = (double)InterfaceFuncInvoker1< double, t1_1 * >::Invoke(5 /* System.Double System.IConvertible::ToDouble(System.IFormatProvider) */, t1_851_TI_var, L_11, (t1_1 *)NULL);
		t1_1 * L_13 = V_1;
		double L_14 = (double)InterfaceFuncInvoker1< double, t1_1 * >::Invoke(5 /* System.Double System.IConvertible::ToDouble(System.IFormatProvider) */, t1_851_TI_var, L_13, (t1_1 *)NULL);
		return ((((double)L_12) == ((double)L_14))? 1 : 0);
	}

IL_0061:
	{
		t1_1 * L_15 = V_0;
		float L_16 = (float)InterfaceFuncInvoker1< float, t1_1 * >::Invoke(10 /* System.Single System.IConvertible::ToSingle(System.IFormatProvider) */, t1_851_TI_var, L_15, (t1_1 *)NULL);
		t1_1 * L_17 = V_1;
		float L_18 = (float)InterfaceFuncInvoker1< float, t1_1 * >::Invoke(10 /* System.Single System.IConvertible::ToSingle(System.IFormatProvider) */, t1_851_TI_var, L_17, (t1_1 *)NULL);
		return ((((float)L_16) == ((float)L_18))? 1 : 0);
	}

IL_0072:
	{
		t1_1 * L_19 = V_0;
		uint64_t L_20 = (uint64_t)InterfaceFuncInvoker1< uint64_t, t1_1 * >::Invoke(15 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, t1_851_TI_var, L_19, (t1_1 *)NULL);
		t1_1 * L_21 = V_1;
		uint64_t L_22 = (uint64_t)InterfaceFuncInvoker1< uint64_t, t1_1 * >::Invoke(15 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, t1_851_TI_var, L_21, (t1_1 *)NULL);
		return ((((int64_t)L_20) == ((int64_t)L_22))? 1 : 0);
	}

IL_0083:
	{
		t1_1 * L_23 = V_0;
		int64_t L_24 = (int64_t)InterfaceFuncInvoker1< int64_t, t1_1 * >::Invoke(8 /* System.Int64 System.IConvertible::ToInt64(System.IFormatProvider) */, t1_851_TI_var, L_23, (t1_1 *)NULL);
		t1_1 * L_25 = V_1;
		int64_t L_26 = (int64_t)InterfaceFuncInvoker1< int64_t, t1_1 * >::Invoke(8 /* System.Int64 System.IConvertible::ToInt64(System.IFormatProvider) */, t1_851_TI_var, L_25, (t1_1 *)NULL);
		return ((((int64_t)L_24) == ((int64_t)L_26))? 1 : 0);
	}

IL_0094:
	{
		t1_1 * L_27 = V_0;
		uint32_t L_28 = (uint32_t)InterfaceFuncInvoker1< uint32_t, t1_1 * >::Invoke(14 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, t1_851_TI_var, L_27, (t1_1 *)NULL);
		t1_1 * L_29 = V_1;
		uint32_t L_30 = (uint32_t)InterfaceFuncInvoker1< uint32_t, t1_1 * >::Invoke(14 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, t1_851_TI_var, L_29, (t1_1 *)NULL);
		return ((((int32_t)L_28) == ((int32_t)L_30))? 1 : 0);
	}

IL_00a5:
	{
		t1_1 * L_31 = V_0;
		int32_t L_32 = (int32_t)InterfaceFuncInvoker1< int32_t, t1_1 * >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, t1_851_TI_var, L_31, (t1_1 *)NULL);
		t1_1 * L_33 = V_1;
		int32_t L_34 = (int32_t)InterfaceFuncInvoker1< int32_t, t1_1 * >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, t1_851_TI_var, L_33, (t1_1 *)NULL);
		return ((((int32_t)L_32) == ((int32_t)L_34))? 1 : 0);
	}
}
extern "C" bool m5_49 (t1_1 * __this , int32_t p0, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 0)
		{
			goto IL_0057;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 1)
		{
			goto IL_005b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 2)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 3)
		{
			goto IL_0043;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 4)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 5)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 6)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 7)
		{
			goto IL_004f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 9)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 10)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 11)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 12)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_005d;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 1;
	}

IL_0055:
	{
		return 1;
	}

IL_0057:
	{
		return 1;
	}

IL_0059:
	{
		return 1;
	}

IL_005b:
	{
		return 1;
	}

IL_005d:
	{
		return 0;
	}
}
extern TypeInfo* t5_14_TI_var;
extern "C" t1_29 * m5_50 (t1_1 * __this , t1_37 * p0, t1_37 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_14_TI_var = il2cpp_codegen_type_info_from_index(839);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	t1_29 * G_B3_0 = {0};
	t1_29 * G_B1_0 = {0};
	t1_29 * G_B2_0 = {0};
	{
		t1_37 * L_0 = p0;
		t1_367* L_1 = (t1_367*)VirtFuncInvoker1< t1_367*, int32_t >::Invoke(51 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_0, ((int32_t)88));
		t1_37 * L_2 = p0;
		t1_37 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		t1_29 * L_4 = m5_52(NULL, (t1_1*)(t1_1*)L_1, L_2, L_3, NULL);
		t1_29 * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		t1_37 * L_6 = p1;
		t1_367* L_7 = (t1_367*)VirtFuncInvoker1< t1_367*, int32_t >::Invoke(51 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_6, ((int32_t)88));
		t1_37 * L_8 = p0;
		t1_37 * L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		t1_29 * L_10 = m5_52(NULL, (t1_1*)(t1_1*)L_7, L_8, L_9, NULL);
		t1_29 * L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t5_14_TI_var);
		t1_1* L_12 = m5_51(NULL, NULL);
		t1_37 * L_13 = p0;
		t1_37 * L_14 = p1;
		t1_29 * L_15 = m5_52(NULL, L_12, L_13, L_14, NULL);
		G_B3_0 = L_15;
	}

IL_0038:
	{
		return G_B3_0;
	}
}
extern TypeInfo* t5_12_TI_var;
extern "C" t1_1* m5_51 (t1_1 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_12_TI_var = il2cpp_codegen_type_info_from_index(838);
		s_Il2CppMethodIntialized = true;
	}
	t5_12 * V_0 = {0};
	{
		t5_12 * L_0 = (t5_12 *)il2cpp_codegen_object_new (t5_12_TI_var);
		m5_23(L_0, NULL);
		V_0 = L_0;
		t5_12 * L_1 = V_0;
		t5_12 * L_2 = L_1;
		L_2->f2 = ((int32_t)-2);
		return L_2;
	}
}
extern TypeInfo* t1_906_TI_var;
extern TypeInfo* t1_905_TI_var;
extern TypeInfo* t1_18_TI_var;
extern TypeInfo* t1_143_TI_var;
extern TypeInfo* t1_852_TI_var;
extern Il2CppCodeGenString* _stringLiteral2535;
extern "C" t1_29 * m5_52 (t1_1 * __this , t1_1* p0, t1_37 * p1, t1_37 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_906_TI_var = il2cpp_codegen_type_info_from_index(849);
		t1_905_TI_var = il2cpp_codegen_type_info_from_index(850);
		t1_18_TI_var = il2cpp_codegen_type_info_from_index(11);
		t1_143_TI_var = il2cpp_codegen_type_info_from_index(158);
		t1_852_TI_var = il2cpp_codegen_type_info_from_index(141);
		_stringLiteral2535 = il2cpp_codegen_string_literal_from_index(2535);
		s_Il2CppMethodIntialized = true;
	}
	t1_29 * V_0 = {0};
	t1_1* V_1 = {0};
	t1_829* V_2 = {0};
	t1_29 * V_3 = {0};
	t1_43 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t1_43 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1_1* L_0 = p0;
		t1_1* L_1 = (t1_1*)InterfaceFuncInvoker0< t1_1* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator() */, t1_906_TI_var, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_000c:
		{
			t1_1* L_2 = V_1;
			t1_29 * L_3 = (t1_29 *)InterfaceFuncInvoker0< t1_29 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current() */, t1_905_TI_var, L_2);
			V_0 = L_3;
			t1_29 * L_4 = V_0;
			t1_18* L_5 = (t1_18*)VirtFuncInvoker0< t1_18* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
			IL2CPP_RUNTIME_CLASS_INIT(t1_18_TI_var);
			bool L_6 = m1_460(NULL, L_5, _stringLiteral2535, NULL);
			if (!L_6)
			{
				goto IL_002d;
			}
		}

IL_0028:
		{
			goto IL_0072;
		}

IL_002d:
		{
			t1_29 * L_7 = V_0;
			t1_37 * L_8 = (t1_37 *)VirtFuncInvoker0< t1_37 * >::Invoke(32 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_7);
			t1_37 * L_9 = p2;
			if ((((t1_1*)(t1_37 *)L_8) == ((t1_1*)(t1_37 *)L_9)))
			{
				goto IL_003e;
			}
		}

IL_0039:
		{
			goto IL_0072;
		}

IL_003e:
		{
			t1_29 * L_10 = V_0;
			t1_829* L_11 = (t1_829*)VirtFuncInvoker0< t1_829* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_2 = L_11;
			t1_829* L_12 = V_2;
			if ((((int32_t)(((int32_t)((int32_t)(((t1_33 *)L_12)->max_length))))) == ((int32_t)1)))
			{
				goto IL_0053;
			}
		}

IL_004e:
		{
			goto IL_0072;
		}

IL_0053:
		{
			t1_829* L_13 = V_2;
			int32_t L_14 = 0;
			t1_37 * L_15 = (t1_37 *)VirtFuncInvoker0< t1_37 * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(t1_380 **)(t1_380 **)SZArrayLdElema(L_13, L_14, sizeof(t1_380 *))));
			t1_37 * L_16 = p1;
			bool L_17 = (bool)VirtFuncInvoker1< bool, t1_37 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_16);
			if (L_17)
			{
				goto IL_006b;
			}
		}

IL_0066:
		{
			goto IL_0072;
		}

IL_006b:
		{
			t1_29 * L_18 = V_0;
			V_3 = L_18;
			IL2CPP_LEAVE(0x8F, FINALLY_0082);
		}

IL_0072:
		{
			t1_1* L_19 = V_1;
			bool L_20 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t1_143_TI_var, L_19);
			if (L_20)
			{
				goto IL_000c;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t1_43 *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		{
			t1_1* L_21 = V_1;
			if (L_21)
			{
				goto IL_0086;
			}
		}

IL_0085:
		{
			IL2CPP_END_FINALLY(130)
		}

IL_0086:
		{
			t1_1* L_22 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t1_852_TI_var, L_22);
			IL2CPP_END_FINALLY(130)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
		IL2CPP_RETHROW_IF_UNHANDLED(t1_43 *)
	}

IL_008d:
	{
		return (t1_29 *)NULL;
	}

IL_008f:
	{
		t1_29 * L_23 = V_3;
		return L_23;
	}
}
extern "C" void m5_53 (t5_3 * __this, t1_1 * p0, t1_24 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t1_1 * m5_54 (t5_3 * __this, t1_1 * p0, t1_170* p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m5_54((t5_3 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1_1 * (*FunctionPointerType) (t1_1 *, t1_1 * __this, t1_1 * p0, t1_170* p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1_1 * (*FunctionPointerType) (t1_1 * __this, t1_1 * p0, t1_170* p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1_1 * (*FunctionPointerType) (t1_1 * __this, t1_170* p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t1_1 * pinvoke_delegate_wrapper_t5_3(Il2CppObject* delegate, t1_1 * p0, t1_170* p1)
{
	// Marshaling of parameter 'p0' to native representation
	t1_1 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t1_1 * m5_55 (t5_3 * __this, t1_1 * p0, t1_170* p1, t1_36 * p2, t1_1 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t1_1 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t1_1 * m5_56 (t5_3 * __this, t1_1 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t1_1 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
