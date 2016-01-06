#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t6_288;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t6_93;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// TestParticles
struct  TestParticles_t9_2  : public MonoBehaviour_t6_86
{
	// UnityEngine.GameObject[] TestParticles::m_PrefabListFire
	GameObjectU5BU5D_t6_288* ___m_PrefabListFire_2;
	// UnityEngine.GameObject[] TestParticles::m_PrefabListWind
	GameObjectU5BU5D_t6_288* ___m_PrefabListWind_3;
	// UnityEngine.GameObject[] TestParticles::m_PrefabListWater
	GameObjectU5BU5D_t6_288* ___m_PrefabListWater_4;
	// UnityEngine.GameObject[] TestParticles::m_PrefabListEarth
	GameObjectU5BU5D_t6_288* ___m_PrefabListEarth_5;
	// UnityEngine.GameObject[] TestParticles::m_PrefabListIce
	GameObjectU5BU5D_t6_288* ___m_PrefabListIce_6;
	// UnityEngine.GameObject[] TestParticles::m_PrefabListThunder
	GameObjectU5BU5D_t6_288* ___m_PrefabListThunder_7;
	// UnityEngine.GameObject[] TestParticles::m_PrefabListLight
	GameObjectU5BU5D_t6_288* ___m_PrefabListLight_8;
	// UnityEngine.GameObject[] TestParticles::m_PrefabListDarkness
	GameObjectU5BU5D_t6_288* ___m_PrefabListDarkness_9;
	// System.Int32 TestParticles::m_CurrentElementIndex
	int32_t ___m_CurrentElementIndex_10;
	// System.Int32 TestParticles::m_CurrentParticleIndex
	int32_t ___m_CurrentParticleIndex_11;
	// System.String TestParticles::m_ElementName
	String_t* ___m_ElementName_12;
	// System.String TestParticles::m_ParticleName
	String_t* ___m_ParticleName_13;
	// UnityEngine.GameObject[] TestParticles::m_CurrentElementList
	GameObjectU5BU5D_t6_288* ___m_CurrentElementList_14;
	// UnityEngine.GameObject TestParticles::m_CurrentParticle
	GameObject_t6_93 * ___m_CurrentParticle_15;
};
