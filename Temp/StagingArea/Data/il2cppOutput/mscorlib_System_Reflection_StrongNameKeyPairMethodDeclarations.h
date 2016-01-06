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

// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t1_323;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Security.Cryptography.RSA
struct RSA_t1_117;
// Mono.Security.StrongName
struct StrongName_t1_137;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StrongNameKeyPair__ctor_m1_3047 (StrongNameKeyPair_t1_323 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_515  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m1_3048 (StrongNameKeyPair_t1_323 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_515  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1_3049 (StrongNameKeyPair_t1_323 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::GetRSA()
extern "C" RSA_t1_117 * StrongNameKeyPair_GetRSA_m1_3050 (StrongNameKeyPair_t1_323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.StrongName System.Reflection.StrongNameKeyPair::StrongName()
extern "C" StrongName_t1_137 * StrongNameKeyPair_StrongName_m1_3051 (StrongNameKeyPair_t1_323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
