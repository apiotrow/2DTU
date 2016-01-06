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

struct t6_136;
struct t6_136_marshaled;
struct t1_1;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m6_1518 (t6_136 * __this, t1_1 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m6_1519 (t6_136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m6_1520 (t1_1 * __this , t6_136 * p0, t6_136 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t6_136_marshal(const t6_136& unmarshaled, t6_136_marshaled& marshaled);
extern "C" void t6_136_marshal_back(const t6_136_marshaled& marshaled, t6_136& unmarshaled);
extern "C" void t6_136_marshal_cleanup(t6_136_marshaled& marshaled);
