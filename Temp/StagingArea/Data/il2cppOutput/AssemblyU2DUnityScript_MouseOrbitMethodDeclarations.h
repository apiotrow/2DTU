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

// MouseOrbit
struct MouseOrbit_t8_8;

#include "codegen/il2cpp-codegen.h"

// System.Void MouseOrbit::.ctor()
extern "C" void MouseOrbit__ctor_m8_22 (MouseOrbit_t8_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseOrbit::Start()
extern "C" void MouseOrbit_Start_m8_23 (MouseOrbit_t8_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseOrbit::LateUpdate()
extern "C" void MouseOrbit_LateUpdate_m8_24 (MouseOrbit_t8_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
extern "C" float MouseOrbit_ClampAngle_m8_25 (Object_t * __this /* static, unused */, float ___angle, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseOrbit::Main()
extern "C" void MouseOrbit_Main_m8_26 (MouseOrbit_t8_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
