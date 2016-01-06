﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.X509.PKCS12
struct PKCS12_t2_30;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1_112;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2_31;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1_97;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1_109;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t2_14;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t2_23;
// Mono.Security.ASN1
struct ASN1_t2_10;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2_33;
// System.Collections.IDictionary
struct IDictionary_t1_35;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t2_13;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C" void PKCS12__ctor_m2_203 (PKCS12_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C" void PKCS12__ctor_m2_204 (PKCS12_t2_30 * __this, ByteU5BU5D_t1_70* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C" void PKCS12__ctor_m2_205 (PKCS12_t2_30 * __this, ByteU5BU5D_t1_70* ___data, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C" void PKCS12__cctor_m2_206 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C" void PKCS12_Decode_m2_207 (PKCS12_t2_30 * __this, ByteU5BU5D_t1_70* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C" void PKCS12_Finalize_m2_208 (PKCS12_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C" void PKCS12_set_Password_m2_209 (PKCS12_t2_30 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_IterationCount()
extern "C" int32_t PKCS12_get_IterationCount_m2_210 (PKCS12_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_IterationCount(System.Int32)
extern "C" void PKCS12_set_IterationCount_m2_211 (PKCS12_t2_30 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C" ArrayList_t1_112 * PKCS12_get_Keys_m2_212 (PKCS12_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C" X509CertificateCollection_t2_31 * PKCS12_get_Certificates_m2_213 (PKCS12_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::get_RNG()
extern "C" RandomNumberGenerator_t1_97 * PKCS12_get_RNG_m2_214 (PKCS12_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS12_Compare_m2_215 (PKCS12_t2_30 * __this, ByteU5BU5D_t1_70* ___expected, ByteU5BU5D_t1_70* ___actual, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C" SymmetricAlgorithm_t1_109 * PKCS12_GetSymmetricAlgorithm_m2_216 (PKCS12_t2_30 * __this, String_t* ___algorithmOid, ByteU5BU5D_t1_70* ___salt, int32_t ___iterationCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t1_70* PKCS12_Decrypt_m2_217 (PKCS12_t2_30 * __this, String_t* ___algorithmOid, ByteU5BU5D_t1_70* ___salt, int32_t ___iterationCount, ByteU5BU5D_t1_70* ___encryptedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C" ByteU5BU5D_t1_70* PKCS12_Decrypt_m2_218 (PKCS12_t2_30 * __this, EncryptedData_t2_14 * ___ed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Encrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t1_70* PKCS12_Encrypt_m2_219 (PKCS12_t2_30 * __this, String_t* ___algorithmOid, ByteU5BU5D_t1_70* ___salt, int32_t ___iterationCount, ByteU5BU5D_t1_70* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C" DSAParameters_t1_564  PKCS12_GetExistingParameters_m2_220 (PKCS12_t2_30 * __this, bool* ___found, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C" void PKCS12_AddPrivateKey_m2_221 (PKCS12_t2_30 * __this, PrivateKeyInfo_t2_23 * ___pki, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C" void PKCS12_ReadSafeBag_m2_222 (PKCS12_t2_30 * __this, ASN1_t2_10 * ___safeBag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.PKCS12::CertificateSafeBag(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C" ASN1_t2_10 * PKCS12_CertificateSafeBag_m2_223 (PKCS12_t2_30 * __this, X509Certificate_t2_33 * ___x509, Object_t * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t1_70* PKCS12_MAC_m2_224 (PKCS12_t2_30 * __this, ByteU5BU5D_t1_70* ___password, ByteU5BU5D_t1_70* ___salt, int32_t ___iterations, ByteU5BU5D_t1_70* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::GetBytes()
extern "C" ByteU5BU5D_t1_70* PKCS12_GetBytes_m2_225 (PKCS12_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.X509.PKCS12::EncryptedContentInfo(Mono.Security.ASN1,System.String)
extern "C" ContentInfo_t2_13 * PKCS12_EncryptedContentInfo_m2_226 (PKCS12_t2_30 * __this, ASN1_t2_10 * ___safeBags, String_t* ___algorithmOid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate)
extern "C" void PKCS12_AddCertificate_m2_227 (PKCS12_t2_30 * __this, X509Certificate_t2_33 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C" void PKCS12_AddCertificate_m2_228 (PKCS12_t2_30 * __this, X509Certificate_t2_33 * ___cert, Object_t * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate)
extern "C" void PKCS12_RemoveCertificate_m2_229 (PKCS12_t2_30 * __this, X509Certificate_t2_33 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C" void PKCS12_RemoveCertificate_m2_230 (PKCS12_t2_30 * __this, X509Certificate_t2_33 * ___cert, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.PKCS12::Clone()
extern "C" Object_t * PKCS12_Clone_m2_231 (PKCS12_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C" int32_t PKCS12_get_MaximumPasswordLength_m2_232 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;