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

// UnityEngine.Mesh
struct Mesh_t6_18;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t6_81;
// UnityEngine.Texture
struct Texture_t6_30;
// UnityEngine.RenderTexture
struct RenderTexture_t6_33;
// UnityEngine.Material
struct Material_t6_69;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t6_256;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_MeshTopology.h"
#include "UnityEngine_UnityEngine_RenderBuffer.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C" void Graphics_DrawMeshNow_m6_85 (Object_t * __this /* static, unused */, Mesh_t6_18 * ___mesh, Matrix4x4_t6_50  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C" void Graphics_Internal_DrawMeshNow2_m6_86 (Object_t * __this /* static, unused */, Mesh_t6_18 * ___mesh, Matrix4x4_t6_50  ___matrix, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C" void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m6_87 (Object_t * __this /* static, unused */, Mesh_t6_18 * ___mesh, Matrix4x4_t6_50 * ___matrix, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern "C" void Graphics_DrawProceduralIndirect_m6_88 (Object_t * __this /* static, unused */, int32_t ___topology, ComputeBuffer_t6_81 * ___bufferWithArgs, int32_t ___argsOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" void Graphics_Blit_m6_89 (Object_t * __this /* static, unused */, Texture_t6_30 * ___source, RenderTexture_t6_33 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void Graphics_Blit_m6_90 (Object_t * __this /* static, unused */, Texture_t6_30 * ___source, RenderTexture_t6_33 * ___dest, Material_t6_69 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m6_91 (Object_t * __this /* static, unused */, Texture_t6_30 * ___source, RenderTexture_t6_33 * ___dest, Material_t6_69 * ___mat, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m6_92 (Object_t * __this /* static, unused */, Texture_t6_30 * ___source, RenderTexture_t6_33 * ___dest, Material_t6_69 * ___mat, int32_t ___pass, bool ___setRT, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_BlitMultiTap_m6_93 (Object_t * __this /* static, unused */, Texture_t6_30 * ___source, RenderTexture_t6_33 * ___dest, Material_t6_69 * ___mat, Vector2U5BU5D_t6_256* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_Internal_BlitMultiTap_m6_94 (Object_t * __this /* static, unused */, Texture_t6_30 * ___source, RenderTexture_t6_33 * ___dest, Material_t6_69 * ___mat, Vector2U5BU5D_t6_256* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C" void Graphics_Internal_SetNullRT_m6_95 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,System.Int32)
extern "C" void Graphics_Internal_SetRTSimple_m6_96 (Object_t * __this /* static, unused */, RenderBuffer_t6_203 * ___color, RenderBuffer_t6_203 * ___depth, int32_t ___mip, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_SetRandomWriteTarget_m6_97 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t6_81 * ___uav, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C" void Graphics_ClearRandomWriteTargets_m6_98 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_Internal_SetRandomWriteTargetBuffer_m6_99 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t6_81 * ___uav, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m6_100 (Object_t * __this /* static, unused */, RenderBuffer_t6_203  ___colorBuffer, RenderBuffer_t6_203  ___depthBuffer, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m6_101 (Object_t * __this /* static, unused */, RenderTexture_t6_33 * ___rt, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C" void Graphics_SetRenderTarget_m6_102 (Object_t * __this /* static, unused */, RenderTexture_t6_33 * ___rt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
