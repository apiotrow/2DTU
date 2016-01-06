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

// UnityEngine.ParticleSystem
struct ParticleSystem_t6_101;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t6_259;
// UnityEngine.Transform
struct Transform_t6_63;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t1_907;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.ParticleSystem::get_isStopped()
extern "C" bool ParticleSystem_get_isStopped_m6_862 (ParticleSystem_t6_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m6_863 (ParticleSystem_t6_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m6_864 (ParticleSystem_t6_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m6_865 (ParticleSystem_t6_101 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t6_259* ParticleSystem_GetParticleSystems_m6_866 (Object_t * __this /* static, unused */, ParticleSystem_t6_101 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6_867 (Object_t * __this /* static, unused */, Transform_t6_63 * ___transform, List_1_t1_907 * ___particleSystems, const MethodInfo* method) IL2CPP_METHOD_ATTR;
