#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t7_125;
// UnityEngine.UI.Text
struct Text_t7_63;
// PlayerController
struct PlayerController_t9_22;
// EnemyController
struct EnemyController_t9_16;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// GameUIController
struct  GameUIController_t9_21  : public MonoBehaviour_t6_86
{
	// UnityEngine.UI.Slider GameUIController::playerHealthSlider
	Slider_t7_125 * ___playerHealthSlider_2;
	// UnityEngine.UI.Slider GameUIController::enemyHealthSlider
	Slider_t7_125 * ___enemyHealthSlider_3;
	// UnityEngine.UI.Slider GameUIController::privPowerSlider
	Slider_t7_125 * ___privPowerSlider_4;
	// UnityEngine.UI.Text GameUIController::privPower
	Text_t7_63 * ___privPower_5;
	// PlayerController GameUIController::pc
	PlayerController_t9_22 * ___pc_6;
	// EnemyController GameUIController::ec
	EnemyController_t9_16 * ___ec_7;
};
