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

// EnemyController
struct EnemyController_t9_16;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void EnemyController::.ctor()
extern "C" void EnemyController__ctor_m9_86 (EnemyController_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::Start()
extern "C" void EnemyController_Start_m9_87 (EnemyController_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::lerpToPlayer(UnityEngine.Vector3)
extern "C" void EnemyController_lerpToPlayer_m9_88 (EnemyController_t9_16 * __this, Vector3_t6_46  ___toPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::linearMoveToPlayer(UnityEngine.Vector3)
extern "C" void EnemyController_linearMoveToPlayer_m9_89 (EnemyController_t9_16 * __this, Vector3_t6_46  ___toPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::moveEnemyToPlayer()
extern "C" void EnemyController_moveEnemyToPlayer_m9_90 (EnemyController_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::Update()
extern "C" void EnemyController_Update_m9_91 (EnemyController_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::takeHit(System.Single)
extern "C" void EnemyController_takeHit_m9_92 (EnemyController_t9_16 * __this, float ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EnemyController::waitForAnimToStart(System.String)
extern "C" Object_t * EnemyController_waitForAnimToStart_m9_93 (EnemyController_t9_16 * __this, String_t* ___attackName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EnemyController::waitForAnimToEnd(System.String)
extern "C" Object_t * EnemyController_waitForAnimToEnd_m9_94 (EnemyController_t9_16 * __this, String_t* ___attackName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::shouldWeRanged()
extern "C" void EnemyController_shouldWeRanged_m9_95 (EnemyController_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::shouldWeMelee()
extern "C" void EnemyController_shouldWeMelee_m9_96 (EnemyController_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
