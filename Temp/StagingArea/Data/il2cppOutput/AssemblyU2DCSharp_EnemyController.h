#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t6_63;
// EnemyRangedCollider
struct EnemyRangedCollider_t9_18;
// UnityEngine.Animator
struct Animator_t6_138;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// EnemyController
struct  EnemyController_t9_16  : public MonoBehaviour_t6_86
{
	// System.Boolean EnemyController::gettingKnockedBack
	bool ___gettingKnockedBack_2;
	// UnityEngine.Transform EnemyController::player
	Transform_t6_63 * ___player_3;
	// EnemyRangedCollider EnemyController::enemyRangedCollider
	EnemyRangedCollider_t9_18 * ___enemyRangedCollider_4;
	// UnityEngine.Animator EnemyController::animator
	Animator_t6_138 * ___animator_5;
	// System.Single EnemyController::gotHitSpeed
	float ___gotHitSpeed_6;
	// System.Single EnemyController::gotHitDistance
	float ___gotHitDistance_7;
	// System.Single EnemyController::lerpWalkSpeed
	float ___lerpWalkSpeed_8;
	// System.Single EnemyController::nonLerpWalkSpeed
	float ___nonLerpWalkSpeed_9;
	// System.Int32 EnemyController::health
	int32_t ___health_10;
	// System.Single EnemyController::meleeFrequency
	float ___meleeFrequency_11;
	// System.Single EnemyController::rangedFrequency
	float ___rangedFrequency_12;
	// System.Single EnemyController::nextToPlayerDistance
	float ___nextToPlayerDistance_13;
	// UnityEngine.Vector3 EnemyController::gotHitFlyToPos
	Vector3_t6_46  ___gotHitFlyToPos_14;
	// System.Boolean EnemyController::lerpyMovement
	bool ___lerpyMovement_15;
	// System.Single EnemyController::xGo
	float ___xGo_16;
	// System.Single EnemyController::zGo
	float ___zGo_17;
	// System.Boolean EnemyController::rangedAttacking
	bool ___rangedAttacking_18;
	// System.Boolean EnemyController::wantToDoARanged
	bool ___wantToDoARanged_19;
	// System.Int32 EnemyController::timesHit
	int32_t ___timesHit_20;
};
