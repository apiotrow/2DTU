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

// Boo.Lang.Runtime.DynamicDispatching.Emitters.ImplicitConversionEmitter
struct ImplicitConversionEmitter_t5_8;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.ImplicitConversionEmitter::.ctor(System.Reflection.MethodInfo)
extern "C" void ImplicitConversionEmitter__ctor_m5_19 (ImplicitConversionEmitter_t5_8 * __this, MethodInfo_t * ___conversion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.ImplicitConversionEmitter::EmitMethodBody()
extern "C" void ImplicitConversionEmitter_EmitMethodBody_m5_20 (ImplicitConversionEmitter_t5_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
