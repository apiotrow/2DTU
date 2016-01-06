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

struct t6_318;
struct t1_29;
struct t1_18;
struct t1_1;
struct t6_239;

#include "codegen/il2cpp-codegen.h"

extern "C" void m6_1769_gshared (t6_318 * __this, const MethodInfo* method);
#define m6_1769(__this, method) (( void (*) (t6_318 *, const MethodInfo*))m6_1769_gshared)(__this, method)
extern "C" t1_29 * m6_1770_gshared (t6_318 * __this, t1_18* p0, t1_1 * p1, const MethodInfo* method);
#define m6_1770(__this, p0, p1, method) (( t1_29 * (*) (t6_318 *, t1_18*, t1_1 *, const MethodInfo*))m6_1770_gshared)(__this, p0, p1, method)
extern "C" t6_239 * m6_1771_gshared (t6_318 * __this, t1_1 * p0, t1_29 * p1, const MethodInfo* method);
#define m6_1771(__this, p0, p1, method) (( t6_239 * (*) (t6_318 *, t1_1 *, t1_29 *, const MethodInfo*))m6_1771_gshared)(__this, p0, p1, method)
