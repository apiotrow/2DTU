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

struct t6_10;
struct t6_10_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m6_15 (t6_10 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t6_10_marshal(const t6_10& unmarshaled, t6_10_marshaled& marshaled);
extern "C" void t6_10_marshal_back(const t6_10_marshaled& marshaled, t6_10& unmarshaled);
extern "C" void t6_10_marshal_cleanup(t6_10_marshaled& marshaled);
