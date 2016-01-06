﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t1_89;
// Mono.Math.BigInteger
struct BigInteger_t1_94;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C" void SequentialSearchPrimeGeneratorBase__ctor_m1_1115 (SequentialSearchPrimeGeneratorBase_t1_89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C" BigInteger_t1_94 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m1_1116 (SequentialSearchPrimeGeneratorBase_t1_89 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C" BigInteger_t1_94 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m1_1117 (SequentialSearchPrimeGeneratorBase_t1_89 * __this, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C" BigInteger_t1_94 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m1_1118 (SequentialSearchPrimeGeneratorBase_t1_89 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C" bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m1_1119 (SequentialSearchPrimeGeneratorBase_t1_89 * __this, BigInteger_t1_94 * ___bi, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;