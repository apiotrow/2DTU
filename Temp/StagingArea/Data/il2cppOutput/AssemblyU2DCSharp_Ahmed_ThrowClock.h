#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t6_138;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t6_259;
// UnityEngine.Transform
struct Transform_t6_63;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Ahmed_ThrowClock
struct  Ahmed_ThrowClock_t9_8  : public MonoBehaviour_t6_86
{
	// UnityEngine.Animator Ahmed_ThrowClock::animator
	Animator_t6_138 * ___animator_2;
	// UnityEngine.ParticleSystem[] Ahmed_ThrowClock::pss
	ParticleSystemU5BU5D_t6_259* ___pss_3;
	// UnityEngine.Transform Ahmed_ThrowClock::explosionHolder
	Transform_t6_63 * ___explosionHolder_4;
	// System.Boolean Ahmed_ThrowClock::readyToThrowClock
	bool ___readyToThrowClock_5;
};
