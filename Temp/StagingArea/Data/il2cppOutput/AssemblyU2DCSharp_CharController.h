#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t6_113;
// UnityEngine.Animator
struct Animator_t6_138;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CharController
struct  CharController_t9_12  : public MonoBehaviour_t6_86
{
	// UnityEngine.CharacterController CharController::controller
	CharacterController_t6_113 * ___controller_2;
	// System.Single CharController::speed
	float ___speed_3;
	// UnityEngine.Animator CharController::animator
	Animator_t6_138 * ___animator_4;
	// System.Boolean CharController::u
	bool ___u_5;
	// System.Boolean CharController::d
	bool ___d_6;
	// System.Boolean CharController::l
	bool ___l_7;
	// System.Boolean CharController::r
	bool ___r_8;
};
