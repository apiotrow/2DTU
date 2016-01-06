#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t6_259;
// UnityEngine.CharacterController
struct CharacterController_t6_113;
// UnityEngine.Animator
struct Animator_t6_138;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// PlayerController
struct  PlayerController_t9_22  : public MonoBehaviour_t6_86
{
	// UnityEngine.ParticleSystem[] PlayerController::hitEnemyParticleSystem
	ParticleSystemU5BU5D_t6_259* ___hitEnemyParticleSystem_2;
	// System.Single PlayerController::walkSpeed
	float ___walkSpeed_3;
	// System.Single PlayerController::gotHitSpeed
	float ___gotHitSpeed_4;
	// System.Int32 PlayerController::health
	int32_t ___health_5;
	// System.Single PlayerController::privPower
	float ___privPower_6;
	// UnityEngine.CharacterController PlayerController::controller
	CharacterController_t6_113 * ___controller_7;
	// UnityEngine.Animator PlayerController::animator
	Animator_t6_138 * ___animator_8;
	// System.Boolean PlayerController::u
	bool ___u_9;
	// System.Boolean PlayerController::d
	bool ___d_10;
	// System.Boolean PlayerController::l
	bool ___l_11;
	// System.Boolean PlayerController::r
	bool ___r_12;
	// System.Single PlayerController::xGo
	float ___xGo_13;
	// System.Single PlayerController::yGo
	float ___yGo_14;
	// System.Single PlayerController::zGo
	float ___zGo_15;
	// System.Boolean PlayerController::gotHit
	bool ___gotHit_16;
	// UnityEngine.Vector3 PlayerController::gotHitFlyToPos
	Vector3_t6_46  ___gotHitFlyToPos_17;
	// System.Boolean PlayerController::readyToTakeDmgAgain
	bool ___readyToTakeDmgAgain_18;
	// System.Boolean PlayerController::allowAttack
	bool ___allowAttack_19;
	// System.Single PlayerController::hitPower
	float ___hitPower_20;
};
