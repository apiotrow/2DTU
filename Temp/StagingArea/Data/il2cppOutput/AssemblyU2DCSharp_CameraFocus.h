#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t6_287;
// UnityEngine.Transform
struct Transform_t6_63;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// CameraFocus
struct  CameraFocus_t9_11  : public MonoBehaviour_t6_86
{
	// UnityEngine.Transform[] CameraFocus::thingsToFocus
	TransformU5BU5D_t6_287* ___thingsToFocus_2;
	// UnityEngine.Transform CameraFocus::thePit
	Transform_t6_63 * ___thePit_3;
	// UnityEngine.Transform CameraFocus::valhalla
	Transform_t6_63 * ___valhalla_4;
	// UnityEngine.Color CameraFocus::fogStartColor
	Color_t6_39  ___fogStartColor_5;
	// System.Single CameraFocus::fogInitialEndDistance
	float ___fogInitialEndDistance_6;
	// System.Single CameraFocus::fogPitAndValhallaEndDistance
	float ___fogPitAndValhallaEndDistance_7;
	// System.Single CameraFocus::centerX
	float ___centerX_8;
};
