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

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t3_57;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificates_X500Dis_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::.ctor(System.Byte[])
extern "C" void X500DistinguishedName__ctor_m3_238 (X500DistinguishedName_t3_57 * __this, ByteU5BU5D_t1_70* ___encodedDistinguishedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Decode(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C" String_t* X500DistinguishedName_Decode_m3_239 (X500DistinguishedName_t3_57 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::GetSeparator(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C" String_t* X500DistinguishedName_GetSeparator_m3_240 (Object_t * __this /* static, unused */, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::DecodeRawData()
extern "C" void X500DistinguishedName_DecodeRawData_m3_241 (X500DistinguishedName_t3_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Canonize(System.String)
extern "C" String_t* X500DistinguishedName_Canonize_m3_242 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X500DistinguishedName::AreEqual(System.Security.Cryptography.X509Certificates.X500DistinguishedName,System.Security.Cryptography.X509Certificates.X500DistinguishedName)
extern "C" bool X500DistinguishedName_AreEqual_m3_243 (Object_t * __this /* static, unused */, X500DistinguishedName_t3_57 * ___name1, X500DistinguishedName_t3_57 * ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;