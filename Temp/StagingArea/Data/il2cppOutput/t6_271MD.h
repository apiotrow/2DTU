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

struct t6_271;
struct t6_5;
struct t6_5_marshaled;
struct t1_29;
struct t1_170;

#include "codegen/il2cpp-codegen.h"

extern "C" void m6_1599_gshared (t6_271 * __this, t6_5 * p0, t1_29 * p1, bool p2, const MethodInfo* method);
#define m6_1599(__this, p0, p1, p2, method) (( void (*) (t6_271 *, t6_5 *, t1_29 *, bool, const MethodInfo*))m6_1599_gshared)(__this, p0, p1, p2, method)
extern "C" void m6_1748_gshared (t6_271 * __this, t1_170* p0, const MethodInfo* method);
#define m6_1748(__this, p0, method) (( void (*) (t6_271 *, t1_170*, const MethodInfo*))m6_1748_gshared)(__this, p0, method)
