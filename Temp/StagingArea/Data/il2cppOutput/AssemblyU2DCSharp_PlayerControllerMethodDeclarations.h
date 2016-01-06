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

// PlayerController
struct PlayerController_t9_22;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m9_119 (PlayerController_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m9_120 (PlayerController_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m9_121 (PlayerController_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::performHit()
extern "C" void PlayerController_performHit_m9_122 (PlayerController_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::takeHit(System.Single)
extern "C" void PlayerController_takeHit_m9_123 (PlayerController_t9_22 * __this, float ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerController::waitForAnimToStart(System.String)
extern "C" Object_t * PlayerController_waitForAnimToStart_m9_124 (PlayerController_t9_22 * __this, String_t* ___attackName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerController::waitForAnimToEnd(System.String)
extern "C" Object_t * PlayerController_waitForAnimToEnd_m9_125 (PlayerController_t9_22 * __this, String_t* ___attackName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
