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

struct t6_283;
struct t1_1;
struct t1_35;
struct t1_36;

#include "codegen/il2cpp-codegen.h"
#include "t1_24.h"
#include "t6_39.h"

extern "C" void m6_1647_gshared (t6_283 * __this, t1_1 * p0, t1_24 p1, const MethodInfo* method);
#define m6_1647(__this, p0, p1, method) (( void (*) (t6_283 *, t1_1 *, t1_24, const MethodInfo*))m6_1647_gshared)(__this, p0, p1, method)
extern "C" void m6_1800_gshared (t6_283 * __this, t6_39  p0, const MethodInfo* method);
#define m6_1800(__this, p0, method) (( void (*) (t6_283 *, t6_39 , const MethodInfo*))m6_1800_gshared)(__this, p0, method)
extern "C" t1_1 * m6_1801_gshared (t6_283 * __this, t6_39  p0, t1_36 * p1, t1_1 * p2, const MethodInfo* method);
#define m6_1801(__this, p0, p1, p2, method) (( t1_1 * (*) (t6_283 *, t6_39 , t1_36 *, t1_1 *, const MethodInfo*))m6_1801_gshared)(__this, p0, p1, p2, method)
extern "C" void m6_1802_gshared (t6_283 * __this, t1_1 * p0, const MethodInfo* method);
#define m6_1802(__this, p0, method) (( void (*) (t6_283 *, t1_1 *, const MethodInfo*))m6_1802_gshared)(__this, p0, method)
