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

struct t6_14;
struct t6_14_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m6_18 (t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m6_19 (t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m6_20 (t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t6_14_marshal(const t6_14& unmarshaled, t6_14_marshaled& marshaled);
extern "C" void t6_14_marshal_back(const t6_14_marshaled& marshaled, t6_14& unmarshaled);
extern "C" void t6_14_marshal_cleanup(t6_14_marshaled& marshaled);
