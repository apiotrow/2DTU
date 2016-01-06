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

struct t6_11;
struct t6_11_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m6_835 (t6_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t6_11_marshal(const t6_11& unmarshaled, t6_11_marshaled& marshaled);
extern "C" void t6_11_marshal_back(const t6_11_marshaled& marshaled, t6_11& unmarshaled);
extern "C" void t6_11_marshal_cleanup(t6_11_marshaled& marshaled);
