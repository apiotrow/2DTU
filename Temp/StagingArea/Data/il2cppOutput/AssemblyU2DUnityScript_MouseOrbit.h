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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MouseOrbit
struct  MouseOrbit_t8_8  : public MonoBehaviour_t6_86
{
	// UnityEngine.Transform MouseOrbit::target
	Transform_t6_63 * ___target_2;
	// System.Single MouseOrbit::distance
	float ___distance_3;
	// System.Single MouseOrbit::xSpeed
	float ___xSpeed_4;
	// System.Single MouseOrbit::ySpeed
	float ___ySpeed_5;
	// System.Int32 MouseOrbit::yMinLimit
	int32_t ___yMinLimit_6;
	// System.Int32 MouseOrbit::yMaxLimit
	int32_t ___yMaxLimit_7;
	// System.Single MouseOrbit::x
	float ___x_8;
	// System.Single MouseOrbit::y
	float ___y_9;
};
