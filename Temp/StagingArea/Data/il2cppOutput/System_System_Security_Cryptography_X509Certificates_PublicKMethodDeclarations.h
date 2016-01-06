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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t3_52;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2_33;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3_53;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_548;
// System.Security.Cryptography.Oid
struct Oid_t3_54;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.Security.Cryptography.DSA
struct DSA_t1_105;
// System.Security.Cryptography.RSA
struct RSA_t1_117;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m3_230 (PublicKey_t3_52 * __this, X509Certificate_t2_33 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t3_53 * PublicKey_get_EncodedKeyValue_m3_231 (PublicKey_t3_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t3_53 * PublicKey_get_EncodedParameters_m3_232 (PublicKey_t3_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1_548 * PublicKey_get_Key_m3_233 (PublicKey_t3_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t3_54 * PublicKey_get_Oid_m3_234 (PublicKey_t3_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t1_70* PublicKey_GetUnsignedBigInteger_m3_235 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_70* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1_105 * PublicKey_DecodeDSA_m3_236 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_70* ___rawPublicKey, ByteU5BU5D_t1_70* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1_117 * PublicKey_DecodeRSA_m3_237 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_70* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
