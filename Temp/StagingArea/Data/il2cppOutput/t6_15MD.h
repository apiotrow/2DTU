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

struct t6_15;
struct t6_15_marshaled;
struct t1_18;
struct t1_37;

#include "codegen/il2cpp-codegen.h"

extern "C" void m6_21 (t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m6_22 (t1_1 * __this , t6_15 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t6_15 * m6_23 (t1_1 * __this , t1_18* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t6_15 * m6_24 (t1_1 * __this , t1_37 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t6_15 * m6_25 (t1_1 * __this , t1_37 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t6_15_marshal(const t6_15& unmarshaled, t6_15_marshaled& marshaled);
extern "C" void t6_15_marshal_back(const t6_15_marshaled& marshaled, t6_15& unmarshaled);
extern "C" void t6_15_marshal_cleanup(t6_15_marshaled& marshaled);
