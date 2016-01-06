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

// ProD.SmoothFollow
struct  SmoothFollow_t9_26  : public MonoBehaviour_t6_86
{
	// UnityEngine.Transform ProD.SmoothFollow::target
	Transform_t6_63 * ___target_2;
	// System.Single ProD.SmoothFollow::distance
	float ___distance_3;
	// System.Single ProD.SmoothFollow::height
	float ___height_4;
	// System.Single ProD.SmoothFollow::rotationDamping
	float ___rotationDamping_5;
	// System.Single ProD.SmoothFollow::heightDamping
	float ___heightDamping_6;
};
