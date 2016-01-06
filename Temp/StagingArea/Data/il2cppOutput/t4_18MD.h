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

struct t4_18;
struct t1_1;
struct t1_35;
struct t1_36;

#include "codegen/il2cpp-codegen.h"
#include "t1_24.h"

extern "C" void m4_64_gshared (t4_18 * __this, t1_1 * p0, t1_24 p1, const MethodInfo* method);
#define m4_64(__this, p0, p1, method) (( void (*) (t4_18 *, t1_1 *, t1_24, const MethodInfo*))m4_64_gshared)(__this, p0, p1, method)
extern "C" t1_1 * m4_65_gshared (t4_18 * __this, t1_1 * p0, const MethodInfo* method);
#define m4_65(__this, p0, method) (( t1_1 * (*) (t4_18 *, t1_1 *, const MethodInfo*))m4_65_gshared)(__this, p0, method)
extern "C" t1_1 * m4_66_gshared (t4_18 * __this, t1_1 * p0, t1_36 * p1, t1_1 * p2, const MethodInfo* method);
#define m4_66(__this, p0, p1, p2, method) (( t1_1 * (*) (t4_18 *, t1_1 *, t1_36 *, t1_1 *, const MethodInfo*))m4_66_gshared)(__this, p0, p1, p2, method)
extern "C" t1_1 * m4_67_gshared (t4_18 * __this, t1_1 * p0, const MethodInfo* method);
#define m4_67(__this, p0, method) (( t1_1 * (*) (t4_18 *, t1_1 *, const MethodInfo*))m4_67_gshared)(__this, p0, method)
