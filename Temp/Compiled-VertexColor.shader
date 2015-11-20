// Compiled shader for PC, Mac & Linux Standalone, uncompressed size: 75.9KB

// Skipping shader variants that would not be included into build of current scene.

Shader "VertexColor" {
SubShader { 
 Tags { "QUEUE"="Geometry+0" "IGNOREPROJECTOR"="False" "RenderType"="Opaque" }


 // Stats for Vertex shader:
 //      opengl : 11 avg math (10..13), 0 avg texture (0..1)
 Pass {
  Name "FORWARD"
  Tags { "LIGHTMODE"="ForwardBase" "QUEUE"="Geometry+0" "IGNOREPROJECTOR"="False" "SHADOWSUPPORT"="true" "RenderType"="Opaque" }
  GpuProgramID 57566
Program "vp" {
SubProgram "opengl " {
// Stats: 10 math
Keywords { "DIRECTIONAL" "SHADOWS_OFF" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
attribute vec4 TANGENT;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
void main ()
{
  vec3 tmpvar_1;
  tmpvar_1 = (_Object2World * gl_Vertex).xyz;
  vec4 v_2;
  v_2.x = _World2Object[0].x;
  v_2.y = _World2Object[1].x;
  v_2.z = _World2Object[2].x;
  v_2.w = _World2Object[3].x;
  vec4 v_3;
  v_3.x = _World2Object[0].y;
  v_3.y = _World2Object[1].y;
  v_3.z = _World2Object[2].y;
  v_3.w = _World2Object[3].y;
  vec4 v_4;
  v_4.x = _World2Object[0].z;
  v_4.y = _World2Object[1].z;
  v_4.z = _World2Object[2].z;
  v_4.w = _World2Object[3].z;
  vec3 tmpvar_5;
  tmpvar_5 = normalize(((
    (v_2.xyz * gl_Normal.x)
   + 
    (v_3.xyz * gl_Normal.y)
  ) + (v_4.xyz * gl_Normal.z)));
  mat3 tmpvar_6;
  tmpvar_6[0] = _Object2World[0].xyz;
  tmpvar_6[1] = _Object2World[1].xyz;
  tmpvar_6[2] = _Object2World[2].xyz;
  vec3 tmpvar_7;
  tmpvar_7 = normalize((tmpvar_6 * TANGENT.xyz));
  vec3 tmpvar_8;
  tmpvar_8 = (((tmpvar_5.yzx * tmpvar_7.zxy) - (tmpvar_5.zxy * tmpvar_7.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec4 tmpvar_9;
  tmpvar_9.x = tmpvar_7.x;
  tmpvar_9.y = tmpvar_8.x;
  tmpvar_9.z = tmpvar_5.x;
  tmpvar_9.w = tmpvar_1.x;
  vec4 tmpvar_10;
  tmpvar_10.x = tmpvar_7.y;
  tmpvar_10.y = tmpvar_8.y;
  tmpvar_10.z = tmpvar_5.y;
  tmpvar_10.w = tmpvar_1.y;
  vec4 tmpvar_11;
  tmpvar_11.x = tmpvar_7.z;
  tmpvar_11.y = tmpvar_8.z;
  tmpvar_11.z = tmpvar_5.z;
  tmpvar_11.w = tmpvar_1.z;
  vec4 tmpvar_12;
  tmpvar_12.w = 1.0;
  tmpvar_12.xyz = tmpvar_5;
  vec3 x2_13;
  vec3 x1_14;
  x1_14.x = dot (unity_SHAr, tmpvar_12);
  x1_14.y = dot (unity_SHAg, tmpvar_12);
  x1_14.z = dot (unity_SHAb, tmpvar_12);
  vec4 tmpvar_15;
  tmpvar_15 = (tmpvar_5.xyzz * tmpvar_5.yzzx);
  x2_13.x = dot (unity_SHBr, tmpvar_15);
  x2_13.y = dot (unity_SHBg, tmpvar_15);
  x2_13.z = dot (unity_SHBb, tmpvar_15);
  gl_Position = (gl_ModelViewProjectionMatrix * gl_Vertex);
  xlv_TEXCOORD0 = tmpvar_9;
  xlv_TEXCOORD1 = tmpvar_10;
  xlv_TEXCOORD2 = tmpvar_11;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD3 = ((x2_13 + (unity_SHC.xyz * 
    ((tmpvar_5.x * tmpvar_5.x) - (tmpvar_5.y * tmpvar_5.y))
  )) + x1_14);
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  c_2.w = 0.0;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  c_2.xyz = (xlv_COLOR0.xyz * xlv_TEXCOORD3);
  vec4 c_3;
  c_3.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * 2.0);
  c_3.w = 1.0;
  c_2 = (c_2 + c_3);
  c_2.xyz = c_2.xyz;
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 11 math, 1 textures
Keywords { "DIRECTIONAL" "SHADOWS_SCREEN" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 _ProjectionParams;
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
attribute vec4 TANGENT;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_TEXCOORD4;
void main ()
{
  vec4 tmpvar_1;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec3 tmpvar_2;
  tmpvar_2 = (_Object2World * gl_Vertex).xyz;
  vec4 v_3;
  v_3.x = _World2Object[0].x;
  v_3.y = _World2Object[1].x;
  v_3.z = _World2Object[2].x;
  v_3.w = _World2Object[3].x;
  vec4 v_4;
  v_4.x = _World2Object[0].y;
  v_4.y = _World2Object[1].y;
  v_4.z = _World2Object[2].y;
  v_4.w = _World2Object[3].y;
  vec4 v_5;
  v_5.x = _World2Object[0].z;
  v_5.y = _World2Object[1].z;
  v_5.z = _World2Object[2].z;
  v_5.w = _World2Object[3].z;
  vec3 tmpvar_6;
  tmpvar_6 = normalize(((
    (v_3.xyz * gl_Normal.x)
   + 
    (v_4.xyz * gl_Normal.y)
  ) + (v_5.xyz * gl_Normal.z)));
  mat3 tmpvar_7;
  tmpvar_7[0] = _Object2World[0].xyz;
  tmpvar_7[1] = _Object2World[1].xyz;
  tmpvar_7[2] = _Object2World[2].xyz;
  vec3 tmpvar_8;
  tmpvar_8 = normalize((tmpvar_7 * TANGENT.xyz));
  vec3 tmpvar_9;
  tmpvar_9 = (((tmpvar_6.yzx * tmpvar_8.zxy) - (tmpvar_6.zxy * tmpvar_8.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec4 tmpvar_10;
  tmpvar_10.x = tmpvar_8.x;
  tmpvar_10.y = tmpvar_9.x;
  tmpvar_10.z = tmpvar_6.x;
  tmpvar_10.w = tmpvar_2.x;
  vec4 tmpvar_11;
  tmpvar_11.x = tmpvar_8.y;
  tmpvar_11.y = tmpvar_9.y;
  tmpvar_11.z = tmpvar_6.y;
  tmpvar_11.w = tmpvar_2.y;
  vec4 tmpvar_12;
  tmpvar_12.x = tmpvar_8.z;
  tmpvar_12.y = tmpvar_9.z;
  tmpvar_12.z = tmpvar_6.z;
  tmpvar_12.w = tmpvar_2.z;
  vec4 tmpvar_13;
  tmpvar_13.w = 1.0;
  tmpvar_13.xyz = tmpvar_6;
  vec3 x2_14;
  vec3 x1_15;
  x1_15.x = dot (unity_SHAr, tmpvar_13);
  x1_15.y = dot (unity_SHAg, tmpvar_13);
  x1_15.z = dot (unity_SHAb, tmpvar_13);
  vec4 tmpvar_16;
  tmpvar_16 = (tmpvar_6.xyzz * tmpvar_6.yzzx);
  x2_14.x = dot (unity_SHBr, tmpvar_16);
  x2_14.y = dot (unity_SHBg, tmpvar_16);
  x2_14.z = dot (unity_SHBb, tmpvar_16);
  vec4 o_17;
  vec4 tmpvar_18;
  tmpvar_18 = (tmpvar_1 * 0.5);
  vec2 tmpvar_19;
  tmpvar_19.x = tmpvar_18.x;
  tmpvar_19.y = (tmpvar_18.y * _ProjectionParams.x);
  o_17.xy = (tmpvar_19 + tmpvar_18.w);
  o_17.zw = tmpvar_1.zw;
  gl_Position = tmpvar_1;
  xlv_TEXCOORD0 = tmpvar_10;
  xlv_TEXCOORD1 = tmpvar_11;
  xlv_TEXCOORD2 = tmpvar_12;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD3 = ((x2_14 + (unity_SHC.xyz * 
    ((tmpvar_6.x * tmpvar_6.x) - (tmpvar_6.y * tmpvar_6.y))
  )) + x1_15);
  xlv_TEXCOORD4 = o_17;
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
uniform sampler2D _ShadowMapTexture;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_TEXCOORD4;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  c_2.w = 0.0;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  c_2.xyz = (xlv_COLOR0.xyz * xlv_TEXCOORD3);
  vec4 c_3;
  c_3.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * (texture2DProj (_ShadowMapTexture, xlv_TEXCOORD4).x * 2.0));
  c_3.w = 1.0;
  c_2 = (c_2 + c_3);
  c_2.xyz = c_2.xyz;
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 10 math
Keywords { "DIRECTIONAL" "SHADOWS_OFF" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "VERTEXLIGHT_ON" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 unity_4LightPosX0;
uniform vec4 unity_4LightPosY0;
uniform vec4 unity_4LightPosZ0;
uniform vec4 unity_4LightAtten0;
uniform vec4 unity_LightColor[8];
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
attribute vec4 TANGENT;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
void main ()
{
  vec3 tmpvar_1;
  tmpvar_1 = (_Object2World * gl_Vertex).xyz;
  vec4 v_2;
  v_2.x = _World2Object[0].x;
  v_2.y = _World2Object[1].x;
  v_2.z = _World2Object[2].x;
  v_2.w = _World2Object[3].x;
  vec4 v_3;
  v_3.x = _World2Object[0].y;
  v_3.y = _World2Object[1].y;
  v_3.z = _World2Object[2].y;
  v_3.w = _World2Object[3].y;
  vec4 v_4;
  v_4.x = _World2Object[0].z;
  v_4.y = _World2Object[1].z;
  v_4.z = _World2Object[2].z;
  v_4.w = _World2Object[3].z;
  vec3 tmpvar_5;
  tmpvar_5 = normalize(((
    (v_2.xyz * gl_Normal.x)
   + 
    (v_3.xyz * gl_Normal.y)
  ) + (v_4.xyz * gl_Normal.z)));
  mat3 tmpvar_6;
  tmpvar_6[0] = _Object2World[0].xyz;
  tmpvar_6[1] = _Object2World[1].xyz;
  tmpvar_6[2] = _Object2World[2].xyz;
  vec3 tmpvar_7;
  tmpvar_7 = normalize((tmpvar_6 * TANGENT.xyz));
  vec3 tmpvar_8;
  tmpvar_8 = (((tmpvar_5.yzx * tmpvar_7.zxy) - (tmpvar_5.zxy * tmpvar_7.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec4 tmpvar_9;
  tmpvar_9.x = tmpvar_7.x;
  tmpvar_9.y = tmpvar_8.x;
  tmpvar_9.z = tmpvar_5.x;
  tmpvar_9.w = tmpvar_1.x;
  vec4 tmpvar_10;
  tmpvar_10.x = tmpvar_7.y;
  tmpvar_10.y = tmpvar_8.y;
  tmpvar_10.z = tmpvar_5.y;
  tmpvar_10.w = tmpvar_1.y;
  vec4 tmpvar_11;
  tmpvar_11.x = tmpvar_7.z;
  tmpvar_11.y = tmpvar_8.z;
  tmpvar_11.z = tmpvar_5.z;
  tmpvar_11.w = tmpvar_1.z;
  vec4 tmpvar_12;
  tmpvar_12.w = 1.0;
  tmpvar_12.xyz = tmpvar_5;
  vec3 x2_13;
  vec3 x1_14;
  x1_14.x = dot (unity_SHAr, tmpvar_12);
  x1_14.y = dot (unity_SHAg, tmpvar_12);
  x1_14.z = dot (unity_SHAb, tmpvar_12);
  vec4 tmpvar_15;
  tmpvar_15 = (tmpvar_5.xyzz * tmpvar_5.yzzx);
  x2_13.x = dot (unity_SHBr, tmpvar_15);
  x2_13.y = dot (unity_SHBg, tmpvar_15);
  x2_13.z = dot (unity_SHBb, tmpvar_15);
  vec3 col_16;
  vec4 ndotl_17;
  vec4 lengthSq_18;
  vec4 tmpvar_19;
  tmpvar_19 = (unity_4LightPosX0 - tmpvar_1.x);
  vec4 tmpvar_20;
  tmpvar_20 = (unity_4LightPosY0 - tmpvar_1.y);
  vec4 tmpvar_21;
  tmpvar_21 = (unity_4LightPosZ0 - tmpvar_1.z);
  lengthSq_18 = (tmpvar_19 * tmpvar_19);
  lengthSq_18 = (lengthSq_18 + (tmpvar_20 * tmpvar_20));
  lengthSq_18 = (lengthSq_18 + (tmpvar_21 * tmpvar_21));
  ndotl_17 = (tmpvar_19 * tmpvar_5.x);
  ndotl_17 = (ndotl_17 + (tmpvar_20 * tmpvar_5.y));
  ndotl_17 = (ndotl_17 + (tmpvar_21 * tmpvar_5.z));
  vec4 tmpvar_22;
  tmpvar_22 = max (vec4(0.0, 0.0, 0.0, 0.0), (ndotl_17 * inversesqrt(lengthSq_18)));
  ndotl_17 = tmpvar_22;
  vec4 tmpvar_23;
  tmpvar_23 = (tmpvar_22 * (1.0/((1.0 + 
    (lengthSq_18 * unity_4LightAtten0)
  ))));
  col_16 = (unity_LightColor[0].xyz * tmpvar_23.x);
  col_16 = (col_16 + (unity_LightColor[1].xyz * tmpvar_23.y));
  col_16 = (col_16 + (unity_LightColor[2].xyz * tmpvar_23.z));
  col_16 = (col_16 + (unity_LightColor[3].xyz * tmpvar_23.w));
  gl_Position = (gl_ModelViewProjectionMatrix * gl_Vertex);
  xlv_TEXCOORD0 = tmpvar_9;
  xlv_TEXCOORD1 = tmpvar_10;
  xlv_TEXCOORD2 = tmpvar_11;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD3 = (((x2_13 + 
    (unity_SHC.xyz * ((tmpvar_5.x * tmpvar_5.x) - (tmpvar_5.y * tmpvar_5.y)))
  ) + x1_14) + col_16);
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  c_2.w = 0.0;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  c_2.xyz = (xlv_COLOR0.xyz * xlv_TEXCOORD3);
  vec4 c_3;
  c_3.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * 2.0);
  c_3.w = 1.0;
  c_2 = (c_2 + c_3);
  c_2.xyz = c_2.xyz;
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 11 math, 1 textures
Keywords { "DIRECTIONAL" "SHADOWS_SCREEN" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "VERTEXLIGHT_ON" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 _ProjectionParams;
uniform vec4 unity_4LightPosX0;
uniform vec4 unity_4LightPosY0;
uniform vec4 unity_4LightPosZ0;
uniform vec4 unity_4LightAtten0;
uniform vec4 unity_LightColor[8];
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
attribute vec4 TANGENT;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_TEXCOORD4;
void main ()
{
  vec4 tmpvar_1;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec3 tmpvar_2;
  tmpvar_2 = (_Object2World * gl_Vertex).xyz;
  vec4 v_3;
  v_3.x = _World2Object[0].x;
  v_3.y = _World2Object[1].x;
  v_3.z = _World2Object[2].x;
  v_3.w = _World2Object[3].x;
  vec4 v_4;
  v_4.x = _World2Object[0].y;
  v_4.y = _World2Object[1].y;
  v_4.z = _World2Object[2].y;
  v_4.w = _World2Object[3].y;
  vec4 v_5;
  v_5.x = _World2Object[0].z;
  v_5.y = _World2Object[1].z;
  v_5.z = _World2Object[2].z;
  v_5.w = _World2Object[3].z;
  vec3 tmpvar_6;
  tmpvar_6 = normalize(((
    (v_3.xyz * gl_Normal.x)
   + 
    (v_4.xyz * gl_Normal.y)
  ) + (v_5.xyz * gl_Normal.z)));
  mat3 tmpvar_7;
  tmpvar_7[0] = _Object2World[0].xyz;
  tmpvar_7[1] = _Object2World[1].xyz;
  tmpvar_7[2] = _Object2World[2].xyz;
  vec3 tmpvar_8;
  tmpvar_8 = normalize((tmpvar_7 * TANGENT.xyz));
  vec3 tmpvar_9;
  tmpvar_9 = (((tmpvar_6.yzx * tmpvar_8.zxy) - (tmpvar_6.zxy * tmpvar_8.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec4 tmpvar_10;
  tmpvar_10.x = tmpvar_8.x;
  tmpvar_10.y = tmpvar_9.x;
  tmpvar_10.z = tmpvar_6.x;
  tmpvar_10.w = tmpvar_2.x;
  vec4 tmpvar_11;
  tmpvar_11.x = tmpvar_8.y;
  tmpvar_11.y = tmpvar_9.y;
  tmpvar_11.z = tmpvar_6.y;
  tmpvar_11.w = tmpvar_2.y;
  vec4 tmpvar_12;
  tmpvar_12.x = tmpvar_8.z;
  tmpvar_12.y = tmpvar_9.z;
  tmpvar_12.z = tmpvar_6.z;
  tmpvar_12.w = tmpvar_2.z;
  vec4 tmpvar_13;
  tmpvar_13.w = 1.0;
  tmpvar_13.xyz = tmpvar_6;
  vec3 x2_14;
  vec3 x1_15;
  x1_15.x = dot (unity_SHAr, tmpvar_13);
  x1_15.y = dot (unity_SHAg, tmpvar_13);
  x1_15.z = dot (unity_SHAb, tmpvar_13);
  vec4 tmpvar_16;
  tmpvar_16 = (tmpvar_6.xyzz * tmpvar_6.yzzx);
  x2_14.x = dot (unity_SHBr, tmpvar_16);
  x2_14.y = dot (unity_SHBg, tmpvar_16);
  x2_14.z = dot (unity_SHBb, tmpvar_16);
  vec3 col_17;
  vec4 ndotl_18;
  vec4 lengthSq_19;
  vec4 tmpvar_20;
  tmpvar_20 = (unity_4LightPosX0 - tmpvar_2.x);
  vec4 tmpvar_21;
  tmpvar_21 = (unity_4LightPosY0 - tmpvar_2.y);
  vec4 tmpvar_22;
  tmpvar_22 = (unity_4LightPosZ0 - tmpvar_2.z);
  lengthSq_19 = (tmpvar_20 * tmpvar_20);
  lengthSq_19 = (lengthSq_19 + (tmpvar_21 * tmpvar_21));
  lengthSq_19 = (lengthSq_19 + (tmpvar_22 * tmpvar_22));
  ndotl_18 = (tmpvar_20 * tmpvar_6.x);
  ndotl_18 = (ndotl_18 + (tmpvar_21 * tmpvar_6.y));
  ndotl_18 = (ndotl_18 + (tmpvar_22 * tmpvar_6.z));
  vec4 tmpvar_23;
  tmpvar_23 = max (vec4(0.0, 0.0, 0.0, 0.0), (ndotl_18 * inversesqrt(lengthSq_19)));
  ndotl_18 = tmpvar_23;
  vec4 tmpvar_24;
  tmpvar_24 = (tmpvar_23 * (1.0/((1.0 + 
    (lengthSq_19 * unity_4LightAtten0)
  ))));
  col_17 = (unity_LightColor[0].xyz * tmpvar_24.x);
  col_17 = (col_17 + (unity_LightColor[1].xyz * tmpvar_24.y));
  col_17 = (col_17 + (unity_LightColor[2].xyz * tmpvar_24.z));
  col_17 = (col_17 + (unity_LightColor[3].xyz * tmpvar_24.w));
  vec4 o_25;
  vec4 tmpvar_26;
  tmpvar_26 = (tmpvar_1 * 0.5);
  vec2 tmpvar_27;
  tmpvar_27.x = tmpvar_26.x;
  tmpvar_27.y = (tmpvar_26.y * _ProjectionParams.x);
  o_25.xy = (tmpvar_27 + tmpvar_26.w);
  o_25.zw = tmpvar_1.zw;
  gl_Position = tmpvar_1;
  xlv_TEXCOORD0 = tmpvar_10;
  xlv_TEXCOORD1 = tmpvar_11;
  xlv_TEXCOORD2 = tmpvar_12;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD3 = (((x2_14 + 
    (unity_SHC.xyz * ((tmpvar_6.x * tmpvar_6.x) - (tmpvar_6.y * tmpvar_6.y)))
  ) + x1_15) + col_17);
  xlv_TEXCOORD4 = o_25;
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
uniform sampler2D _ShadowMapTexture;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_TEXCOORD4;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  c_2.w = 0.0;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  c_2.xyz = (xlv_COLOR0.xyz * xlv_TEXCOORD3);
  vec4 c_3;
  c_3.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * (texture2DProj (_ShadowMapTexture, xlv_TEXCOORD4).x * 2.0));
  c_3.w = 1.0;
  c_2 = (c_2 + c_3);
  c_2.xyz = c_2.xyz;
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 12 math
Keywords { "DIRECTIONAL" "SHADOWS_OFF" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "FOG_LINEAR" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
uniform vec4 unity_FogParams;
attribute vec4 TANGENT;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying float xlv_TEXCOORD5;
void main ()
{
  vec4 tmpvar_1;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec3 tmpvar_2;
  tmpvar_2 = (_Object2World * gl_Vertex).xyz;
  vec4 v_3;
  v_3.x = _World2Object[0].x;
  v_3.y = _World2Object[1].x;
  v_3.z = _World2Object[2].x;
  v_3.w = _World2Object[3].x;
  vec4 v_4;
  v_4.x = _World2Object[0].y;
  v_4.y = _World2Object[1].y;
  v_4.z = _World2Object[2].y;
  v_4.w = _World2Object[3].y;
  vec4 v_5;
  v_5.x = _World2Object[0].z;
  v_5.y = _World2Object[1].z;
  v_5.z = _World2Object[2].z;
  v_5.w = _World2Object[3].z;
  vec3 tmpvar_6;
  tmpvar_6 = normalize(((
    (v_3.xyz * gl_Normal.x)
   + 
    (v_4.xyz * gl_Normal.y)
  ) + (v_5.xyz * gl_Normal.z)));
  mat3 tmpvar_7;
  tmpvar_7[0] = _Object2World[0].xyz;
  tmpvar_7[1] = _Object2World[1].xyz;
  tmpvar_7[2] = _Object2World[2].xyz;
  vec3 tmpvar_8;
  tmpvar_8 = normalize((tmpvar_7 * TANGENT.xyz));
  vec3 tmpvar_9;
  tmpvar_9 = (((tmpvar_6.yzx * tmpvar_8.zxy) - (tmpvar_6.zxy * tmpvar_8.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec4 tmpvar_10;
  tmpvar_10.x = tmpvar_8.x;
  tmpvar_10.y = tmpvar_9.x;
  tmpvar_10.z = tmpvar_6.x;
  tmpvar_10.w = tmpvar_2.x;
  vec4 tmpvar_11;
  tmpvar_11.x = tmpvar_8.y;
  tmpvar_11.y = tmpvar_9.y;
  tmpvar_11.z = tmpvar_6.y;
  tmpvar_11.w = tmpvar_2.y;
  vec4 tmpvar_12;
  tmpvar_12.x = tmpvar_8.z;
  tmpvar_12.y = tmpvar_9.z;
  tmpvar_12.z = tmpvar_6.z;
  tmpvar_12.w = tmpvar_2.z;
  vec4 tmpvar_13;
  tmpvar_13.w = 1.0;
  tmpvar_13.xyz = tmpvar_6;
  vec3 x2_14;
  vec3 x1_15;
  x1_15.x = dot (unity_SHAr, tmpvar_13);
  x1_15.y = dot (unity_SHAg, tmpvar_13);
  x1_15.z = dot (unity_SHAb, tmpvar_13);
  vec4 tmpvar_16;
  tmpvar_16 = (tmpvar_6.xyzz * tmpvar_6.yzzx);
  x2_14.x = dot (unity_SHBr, tmpvar_16);
  x2_14.y = dot (unity_SHBg, tmpvar_16);
  x2_14.z = dot (unity_SHBb, tmpvar_16);
  gl_Position = tmpvar_1;
  xlv_TEXCOORD0 = tmpvar_10;
  xlv_TEXCOORD1 = tmpvar_11;
  xlv_TEXCOORD2 = tmpvar_12;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD3 = ((x2_14 + (unity_SHC.xyz * 
    ((tmpvar_6.x * tmpvar_6.x) - (tmpvar_6.y * tmpvar_6.y))
  )) + x1_15);
  xlv_TEXCOORD5 = ((tmpvar_1.z * unity_FogParams.z) + unity_FogParams.w);
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 unity_FogColor;
uniform vec4 _LightColor0;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying float xlv_TEXCOORD5;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  c_2.w = 0.0;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  c_2.xyz = (xlv_COLOR0.xyz * xlv_TEXCOORD3);
  vec4 c_3;
  c_3.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * 2.0);
  c_3.w = 1.0;
  c_2 = (c_2 + c_3);
  c_2.xyz = c_2.xyz;
  c_2.xyz = mix (unity_FogColor.xyz, c_2.xyz, vec3(clamp (xlv_TEXCOORD5, 0.0, 1.0)));
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 13 math, 1 textures
Keywords { "DIRECTIONAL" "SHADOWS_SCREEN" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "FOG_LINEAR" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 _ProjectionParams;
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
uniform vec4 unity_FogParams;
attribute vec4 TANGENT;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_TEXCOORD4;
varying float xlv_TEXCOORD5;
void main ()
{
  vec4 tmpvar_1;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec3 tmpvar_2;
  tmpvar_2 = (_Object2World * gl_Vertex).xyz;
  vec4 v_3;
  v_3.x = _World2Object[0].x;
  v_3.y = _World2Object[1].x;
  v_3.z = _World2Object[2].x;
  v_3.w = _World2Object[3].x;
  vec4 v_4;
  v_4.x = _World2Object[0].y;
  v_4.y = _World2Object[1].y;
  v_4.z = _World2Object[2].y;
  v_4.w = _World2Object[3].y;
  vec4 v_5;
  v_5.x = _World2Object[0].z;
  v_5.y = _World2Object[1].z;
  v_5.z = _World2Object[2].z;
  v_5.w = _World2Object[3].z;
  vec3 tmpvar_6;
  tmpvar_6 = normalize(((
    (v_3.xyz * gl_Normal.x)
   + 
    (v_4.xyz * gl_Normal.y)
  ) + (v_5.xyz * gl_Normal.z)));
  mat3 tmpvar_7;
  tmpvar_7[0] = _Object2World[0].xyz;
  tmpvar_7[1] = _Object2World[1].xyz;
  tmpvar_7[2] = _Object2World[2].xyz;
  vec3 tmpvar_8;
  tmpvar_8 = normalize((tmpvar_7 * TANGENT.xyz));
  vec3 tmpvar_9;
  tmpvar_9 = (((tmpvar_6.yzx * tmpvar_8.zxy) - (tmpvar_6.zxy * tmpvar_8.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec4 tmpvar_10;
  tmpvar_10.x = tmpvar_8.x;
  tmpvar_10.y = tmpvar_9.x;
  tmpvar_10.z = tmpvar_6.x;
  tmpvar_10.w = tmpvar_2.x;
  vec4 tmpvar_11;
  tmpvar_11.x = tmpvar_8.y;
  tmpvar_11.y = tmpvar_9.y;
  tmpvar_11.z = tmpvar_6.y;
  tmpvar_11.w = tmpvar_2.y;
  vec4 tmpvar_12;
  tmpvar_12.x = tmpvar_8.z;
  tmpvar_12.y = tmpvar_9.z;
  tmpvar_12.z = tmpvar_6.z;
  tmpvar_12.w = tmpvar_2.z;
  vec4 tmpvar_13;
  tmpvar_13.w = 1.0;
  tmpvar_13.xyz = tmpvar_6;
  vec3 x2_14;
  vec3 x1_15;
  x1_15.x = dot (unity_SHAr, tmpvar_13);
  x1_15.y = dot (unity_SHAg, tmpvar_13);
  x1_15.z = dot (unity_SHAb, tmpvar_13);
  vec4 tmpvar_16;
  tmpvar_16 = (tmpvar_6.xyzz * tmpvar_6.yzzx);
  x2_14.x = dot (unity_SHBr, tmpvar_16);
  x2_14.y = dot (unity_SHBg, tmpvar_16);
  x2_14.z = dot (unity_SHBb, tmpvar_16);
  vec4 o_17;
  vec4 tmpvar_18;
  tmpvar_18 = (tmpvar_1 * 0.5);
  vec2 tmpvar_19;
  tmpvar_19.x = tmpvar_18.x;
  tmpvar_19.y = (tmpvar_18.y * _ProjectionParams.x);
  o_17.xy = (tmpvar_19 + tmpvar_18.w);
  o_17.zw = tmpvar_1.zw;
  gl_Position = tmpvar_1;
  xlv_TEXCOORD0 = tmpvar_10;
  xlv_TEXCOORD1 = tmpvar_11;
  xlv_TEXCOORD2 = tmpvar_12;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD3 = ((x2_14 + (unity_SHC.xyz * 
    ((tmpvar_6.x * tmpvar_6.x) - (tmpvar_6.y * tmpvar_6.y))
  )) + x1_15);
  xlv_TEXCOORD4 = o_17;
  xlv_TEXCOORD5 = ((tmpvar_1.z * unity_FogParams.z) + unity_FogParams.w);
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 unity_FogColor;
uniform vec4 _LightColor0;
uniform sampler2D _ShadowMapTexture;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_TEXCOORD4;
varying float xlv_TEXCOORD5;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  c_2.w = 0.0;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  c_2.xyz = (xlv_COLOR0.xyz * xlv_TEXCOORD3);
  vec4 c_3;
  c_3.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * (texture2DProj (_ShadowMapTexture, xlv_TEXCOORD4).x * 2.0));
  c_3.w = 1.0;
  c_2 = (c_2 + c_3);
  c_2.xyz = c_2.xyz;
  c_2.xyz = mix (unity_FogColor.xyz, c_2.xyz, vec3(clamp (xlv_TEXCOORD5, 0.0, 1.0)));
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 12 math
Keywords { "DIRECTIONAL" "SHADOWS_OFF" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "FOG_LINEAR" "VERTEXLIGHT_ON" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 unity_4LightPosX0;
uniform vec4 unity_4LightPosY0;
uniform vec4 unity_4LightPosZ0;
uniform vec4 unity_4LightAtten0;
uniform vec4 unity_LightColor[8];
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
uniform vec4 unity_FogParams;
attribute vec4 TANGENT;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying float xlv_TEXCOORD5;
void main ()
{
  vec4 tmpvar_1;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec3 tmpvar_2;
  tmpvar_2 = (_Object2World * gl_Vertex).xyz;
  vec4 v_3;
  v_3.x = _World2Object[0].x;
  v_3.y = _World2Object[1].x;
  v_3.z = _World2Object[2].x;
  v_3.w = _World2Object[3].x;
  vec4 v_4;
  v_4.x = _World2Object[0].y;
  v_4.y = _World2Object[1].y;
  v_4.z = _World2Object[2].y;
  v_4.w = _World2Object[3].y;
  vec4 v_5;
  v_5.x = _World2Object[0].z;
  v_5.y = _World2Object[1].z;
  v_5.z = _World2Object[2].z;
  v_5.w = _World2Object[3].z;
  vec3 tmpvar_6;
  tmpvar_6 = normalize(((
    (v_3.xyz * gl_Normal.x)
   + 
    (v_4.xyz * gl_Normal.y)
  ) + (v_5.xyz * gl_Normal.z)));
  mat3 tmpvar_7;
  tmpvar_7[0] = _Object2World[0].xyz;
  tmpvar_7[1] = _Object2World[1].xyz;
  tmpvar_7[2] = _Object2World[2].xyz;
  vec3 tmpvar_8;
  tmpvar_8 = normalize((tmpvar_7 * TANGENT.xyz));
  vec3 tmpvar_9;
  tmpvar_9 = (((tmpvar_6.yzx * tmpvar_8.zxy) - (tmpvar_6.zxy * tmpvar_8.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec4 tmpvar_10;
  tmpvar_10.x = tmpvar_8.x;
  tmpvar_10.y = tmpvar_9.x;
  tmpvar_10.z = tmpvar_6.x;
  tmpvar_10.w = tmpvar_2.x;
  vec4 tmpvar_11;
  tmpvar_11.x = tmpvar_8.y;
  tmpvar_11.y = tmpvar_9.y;
  tmpvar_11.z = tmpvar_6.y;
  tmpvar_11.w = tmpvar_2.y;
  vec4 tmpvar_12;
  tmpvar_12.x = tmpvar_8.z;
  tmpvar_12.y = tmpvar_9.z;
  tmpvar_12.z = tmpvar_6.z;
  tmpvar_12.w = tmpvar_2.z;
  vec4 tmpvar_13;
  tmpvar_13.w = 1.0;
  tmpvar_13.xyz = tmpvar_6;
  vec3 x2_14;
  vec3 x1_15;
  x1_15.x = dot (unity_SHAr, tmpvar_13);
  x1_15.y = dot (unity_SHAg, tmpvar_13);
  x1_15.z = dot (unity_SHAb, tmpvar_13);
  vec4 tmpvar_16;
  tmpvar_16 = (tmpvar_6.xyzz * tmpvar_6.yzzx);
  x2_14.x = dot (unity_SHBr, tmpvar_16);
  x2_14.y = dot (unity_SHBg, tmpvar_16);
  x2_14.z = dot (unity_SHBb, tmpvar_16);
  vec3 col_17;
  vec4 ndotl_18;
  vec4 lengthSq_19;
  vec4 tmpvar_20;
  tmpvar_20 = (unity_4LightPosX0 - tmpvar_2.x);
  vec4 tmpvar_21;
  tmpvar_21 = (unity_4LightPosY0 - tmpvar_2.y);
  vec4 tmpvar_22;
  tmpvar_22 = (unity_4LightPosZ0 - tmpvar_2.z);
  lengthSq_19 = (tmpvar_20 * tmpvar_20);
  lengthSq_19 = (lengthSq_19 + (tmpvar_21 * tmpvar_21));
  lengthSq_19 = (lengthSq_19 + (tmpvar_22 * tmpvar_22));
  ndotl_18 = (tmpvar_20 * tmpvar_6.x);
  ndotl_18 = (ndotl_18 + (tmpvar_21 * tmpvar_6.y));
  ndotl_18 = (ndotl_18 + (tmpvar_22 * tmpvar_6.z));
  vec4 tmpvar_23;
  tmpvar_23 = max (vec4(0.0, 0.0, 0.0, 0.0), (ndotl_18 * inversesqrt(lengthSq_19)));
  ndotl_18 = tmpvar_23;
  vec4 tmpvar_24;
  tmpvar_24 = (tmpvar_23 * (1.0/((1.0 + 
    (lengthSq_19 * unity_4LightAtten0)
  ))));
  col_17 = (unity_LightColor[0].xyz * tmpvar_24.x);
  col_17 = (col_17 + (unity_LightColor[1].xyz * tmpvar_24.y));
  col_17 = (col_17 + (unity_LightColor[2].xyz * tmpvar_24.z));
  col_17 = (col_17 + (unity_LightColor[3].xyz * tmpvar_24.w));
  gl_Position = tmpvar_1;
  xlv_TEXCOORD0 = tmpvar_10;
  xlv_TEXCOORD1 = tmpvar_11;
  xlv_TEXCOORD2 = tmpvar_12;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD3 = (((x2_14 + 
    (unity_SHC.xyz * ((tmpvar_6.x * tmpvar_6.x) - (tmpvar_6.y * tmpvar_6.y)))
  ) + x1_15) + col_17);
  xlv_TEXCOORD5 = ((tmpvar_1.z * unity_FogParams.z) + unity_FogParams.w);
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 unity_FogColor;
uniform vec4 _LightColor0;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying float xlv_TEXCOORD5;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  c_2.w = 0.0;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  c_2.xyz = (xlv_COLOR0.xyz * xlv_TEXCOORD3);
  vec4 c_3;
  c_3.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * 2.0);
  c_3.w = 1.0;
  c_2 = (c_2 + c_3);
  c_2.xyz = c_2.xyz;
  c_2.xyz = mix (unity_FogColor.xyz, c_2.xyz, vec3(clamp (xlv_TEXCOORD5, 0.0, 1.0)));
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 13 math, 1 textures
Keywords { "DIRECTIONAL" "SHADOWS_SCREEN" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "FOG_LINEAR" "VERTEXLIGHT_ON" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 _ProjectionParams;
uniform vec4 unity_4LightPosX0;
uniform vec4 unity_4LightPosY0;
uniform vec4 unity_4LightPosZ0;
uniform vec4 unity_4LightAtten0;
uniform vec4 unity_LightColor[8];
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
uniform vec4 unity_FogParams;
attribute vec4 TANGENT;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_TEXCOORD4;
varying float xlv_TEXCOORD5;
void main ()
{
  vec4 tmpvar_1;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec3 tmpvar_2;
  tmpvar_2 = (_Object2World * gl_Vertex).xyz;
  vec4 v_3;
  v_3.x = _World2Object[0].x;
  v_3.y = _World2Object[1].x;
  v_3.z = _World2Object[2].x;
  v_3.w = _World2Object[3].x;
  vec4 v_4;
  v_4.x = _World2Object[0].y;
  v_4.y = _World2Object[1].y;
  v_4.z = _World2Object[2].y;
  v_4.w = _World2Object[3].y;
  vec4 v_5;
  v_5.x = _World2Object[0].z;
  v_5.y = _World2Object[1].z;
  v_5.z = _World2Object[2].z;
  v_5.w = _World2Object[3].z;
  vec3 tmpvar_6;
  tmpvar_6 = normalize(((
    (v_3.xyz * gl_Normal.x)
   + 
    (v_4.xyz * gl_Normal.y)
  ) + (v_5.xyz * gl_Normal.z)));
  mat3 tmpvar_7;
  tmpvar_7[0] = _Object2World[0].xyz;
  tmpvar_7[1] = _Object2World[1].xyz;
  tmpvar_7[2] = _Object2World[2].xyz;
  vec3 tmpvar_8;
  tmpvar_8 = normalize((tmpvar_7 * TANGENT.xyz));
  vec3 tmpvar_9;
  tmpvar_9 = (((tmpvar_6.yzx * tmpvar_8.zxy) - (tmpvar_6.zxy * tmpvar_8.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec4 tmpvar_10;
  tmpvar_10.x = tmpvar_8.x;
  tmpvar_10.y = tmpvar_9.x;
  tmpvar_10.z = tmpvar_6.x;
  tmpvar_10.w = tmpvar_2.x;
  vec4 tmpvar_11;
  tmpvar_11.x = tmpvar_8.y;
  tmpvar_11.y = tmpvar_9.y;
  tmpvar_11.z = tmpvar_6.y;
  tmpvar_11.w = tmpvar_2.y;
  vec4 tmpvar_12;
  tmpvar_12.x = tmpvar_8.z;
  tmpvar_12.y = tmpvar_9.z;
  tmpvar_12.z = tmpvar_6.z;
  tmpvar_12.w = tmpvar_2.z;
  vec4 tmpvar_13;
  tmpvar_13.w = 1.0;
  tmpvar_13.xyz = tmpvar_6;
  vec3 x2_14;
  vec3 x1_15;
  x1_15.x = dot (unity_SHAr, tmpvar_13);
  x1_15.y = dot (unity_SHAg, tmpvar_13);
  x1_15.z = dot (unity_SHAb, tmpvar_13);
  vec4 tmpvar_16;
  tmpvar_16 = (tmpvar_6.xyzz * tmpvar_6.yzzx);
  x2_14.x = dot (unity_SHBr, tmpvar_16);
  x2_14.y = dot (unity_SHBg, tmpvar_16);
  x2_14.z = dot (unity_SHBb, tmpvar_16);
  vec3 col_17;
  vec4 ndotl_18;
  vec4 lengthSq_19;
  vec4 tmpvar_20;
  tmpvar_20 = (unity_4LightPosX0 - tmpvar_2.x);
  vec4 tmpvar_21;
  tmpvar_21 = (unity_4LightPosY0 - tmpvar_2.y);
  vec4 tmpvar_22;
  tmpvar_22 = (unity_4LightPosZ0 - tmpvar_2.z);
  lengthSq_19 = (tmpvar_20 * tmpvar_20);
  lengthSq_19 = (lengthSq_19 + (tmpvar_21 * tmpvar_21));
  lengthSq_19 = (lengthSq_19 + (tmpvar_22 * tmpvar_22));
  ndotl_18 = (tmpvar_20 * tmpvar_6.x);
  ndotl_18 = (ndotl_18 + (tmpvar_21 * tmpvar_6.y));
  ndotl_18 = (ndotl_18 + (tmpvar_22 * tmpvar_6.z));
  vec4 tmpvar_23;
  tmpvar_23 = max (vec4(0.0, 0.0, 0.0, 0.0), (ndotl_18 * inversesqrt(lengthSq_19)));
  ndotl_18 = tmpvar_23;
  vec4 tmpvar_24;
  tmpvar_24 = (tmpvar_23 * (1.0/((1.0 + 
    (lengthSq_19 * unity_4LightAtten0)
  ))));
  col_17 = (unity_LightColor[0].xyz * tmpvar_24.x);
  col_17 = (col_17 + (unity_LightColor[1].xyz * tmpvar_24.y));
  col_17 = (col_17 + (unity_LightColor[2].xyz * tmpvar_24.z));
  col_17 = (col_17 + (unity_LightColor[3].xyz * tmpvar_24.w));
  vec4 o_25;
  vec4 tmpvar_26;
  tmpvar_26 = (tmpvar_1 * 0.5);
  vec2 tmpvar_27;
  tmpvar_27.x = tmpvar_26.x;
  tmpvar_27.y = (tmpvar_26.y * _ProjectionParams.x);
  o_25.xy = (tmpvar_27 + tmpvar_26.w);
  o_25.zw = tmpvar_1.zw;
  gl_Position = tmpvar_1;
  xlv_TEXCOORD0 = tmpvar_10;
  xlv_TEXCOORD1 = tmpvar_11;
  xlv_TEXCOORD2 = tmpvar_12;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD3 = (((x2_14 + 
    (unity_SHC.xyz * ((tmpvar_6.x * tmpvar_6.x) - (tmpvar_6.y * tmpvar_6.y)))
  ) + x1_15) + col_17);
  xlv_TEXCOORD4 = o_25;
  xlv_TEXCOORD5 = ((tmpvar_1.z * unity_FogParams.z) + unity_FogParams.w);
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 unity_FogColor;
uniform vec4 _LightColor0;
uniform sampler2D _ShadowMapTexture;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_TEXCOORD4;
varying float xlv_TEXCOORD5;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  c_2.w = 0.0;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  c_2.xyz = (xlv_COLOR0.xyz * xlv_TEXCOORD3);
  vec4 c_3;
  c_3.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * (texture2DProj (_ShadowMapTexture, xlv_TEXCOORD4).x * 2.0));
  c_3.w = 1.0;
  c_2 = (c_2 + c_3);
  c_2.xyz = c_2.xyz;
  c_2.xyz = mix (unity_FogColor.xyz, c_2.xyz, vec3(clamp (xlv_TEXCOORD5, 0.0, 1.0)));
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
}
Program "fp" {
SubProgram "opengl " {
Keywords { "DIRECTIONAL" "SHADOWS_OFF" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "DIRECTIONAL" "SHADOWS_SCREEN" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "DIRECTIONAL" "SHADOWS_OFF" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "FOG_LINEAR" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "DIRECTIONAL" "SHADOWS_SCREEN" "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "FOG_LINEAR" }
"!!GLSL"
}
}
 }


 // Stats for Vertex shader:
 //      opengl : 13 avg math (7..21), 1 avg texture (0..2)
 Pass {
  Name "FORWARD"
  Tags { "LIGHTMODE"="ForwardAdd" "QUEUE"="Geometry+0" "IGNOREPROJECTOR"="False" "RenderType"="Opaque" }
  ZWrite Off
  Blend One One
  GpuProgramID 84597
Program "vp" {
SubProgram "opengl " {
// Stats: 13 math, 1 textures
Keywords { "POINT" }
"!!GLSL#version 120

#ifdef VERTEX

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
attribute vec4 TANGENT;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
void main ()
{
  vec4 v_1;
  v_1.x = _World2Object[0].x;
  v_1.y = _World2Object[1].x;
  v_1.z = _World2Object[2].x;
  v_1.w = _World2Object[3].x;
  vec4 v_2;
  v_2.x = _World2Object[0].y;
  v_2.y = _World2Object[1].y;
  v_2.z = _World2Object[2].y;
  v_2.w = _World2Object[3].y;
  vec4 v_3;
  v_3.x = _World2Object[0].z;
  v_3.y = _World2Object[1].z;
  v_3.z = _World2Object[2].z;
  v_3.w = _World2Object[3].z;
  vec3 tmpvar_4;
  tmpvar_4 = normalize(((
    (v_1.xyz * gl_Normal.x)
   + 
    (v_2.xyz * gl_Normal.y)
  ) + (v_3.xyz * gl_Normal.z)));
  mat3 tmpvar_5;
  tmpvar_5[0] = _Object2World[0].xyz;
  tmpvar_5[1] = _Object2World[1].xyz;
  tmpvar_5[2] = _Object2World[2].xyz;
  vec3 tmpvar_6;
  tmpvar_6 = normalize((tmpvar_5 * TANGENT.xyz));
  vec3 tmpvar_7;
  tmpvar_7 = (((tmpvar_4.yzx * tmpvar_6.zxy) - (tmpvar_4.zxy * tmpvar_6.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec3 tmpvar_8;
  tmpvar_8.x = tmpvar_6.x;
  tmpvar_8.y = tmpvar_7.x;
  tmpvar_8.z = tmpvar_4.x;
  vec3 tmpvar_9;
  tmpvar_9.x = tmpvar_6.y;
  tmpvar_9.y = tmpvar_7.y;
  tmpvar_9.z = tmpvar_4.y;
  vec3 tmpvar_10;
  tmpvar_10.x = tmpvar_6.z;
  tmpvar_10.y = tmpvar_7.z;
  tmpvar_10.z = tmpvar_4.z;
  gl_Position = (gl_ModelViewProjectionMatrix * gl_Vertex);
  xlv_TEXCOORD0 = tmpvar_8;
  xlv_TEXCOORD1 = tmpvar_9;
  xlv_TEXCOORD2 = tmpvar_10;
  xlv_TEXCOORD3 = (_Object2World * gl_Vertex).xyz;
  xlv_COLOR0 = gl_Color;
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
uniform sampler2D _LightTexture0;
uniform mat4 _LightMatrix0;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  vec4 tmpvar_3;
  tmpvar_3.w = 1.0;
  tmpvar_3.xyz = xlv_TEXCOORD3;
  vec3 tmpvar_4;
  tmpvar_4 = (_LightMatrix0 * tmpvar_3).xyz;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  vec4 c_5;
  c_5.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, normalize((_WorldSpaceLightPos0.xyz - xlv_TEXCOORD3)))
  )) * (texture2D (_LightTexture0, vec2(dot (tmpvar_4, tmpvar_4))).w * 2.0));
  c_5.w = 1.0;
  c_2.xyz = c_5.xyz;
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 7 math
Keywords { "DIRECTIONAL" }
"!!GLSL#version 120

#ifdef VERTEX

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
attribute vec4 TANGENT;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
void main ()
{
  vec4 v_1;
  v_1.x = _World2Object[0].x;
  v_1.y = _World2Object[1].x;
  v_1.z = _World2Object[2].x;
  v_1.w = _World2Object[3].x;
  vec4 v_2;
  v_2.x = _World2Object[0].y;
  v_2.y = _World2Object[1].y;
  v_2.z = _World2Object[2].y;
  v_2.w = _World2Object[3].y;
  vec4 v_3;
  v_3.x = _World2Object[0].z;
  v_3.y = _World2Object[1].z;
  v_3.z = _World2Object[2].z;
  v_3.w = _World2Object[3].z;
  vec3 tmpvar_4;
  tmpvar_4 = normalize(((
    (v_1.xyz * gl_Normal.x)
   + 
    (v_2.xyz * gl_Normal.y)
  ) + (v_3.xyz * gl_Normal.z)));
  mat3 tmpvar_5;
  tmpvar_5[0] = _Object2World[0].xyz;
  tmpvar_5[1] = _Object2World[1].xyz;
  tmpvar_5[2] = _Object2World[2].xyz;
  vec3 tmpvar_6;
  tmpvar_6 = normalize((tmpvar_5 * TANGENT.xyz));
  vec3 tmpvar_7;
  tmpvar_7 = (((tmpvar_4.yzx * tmpvar_6.zxy) - (tmpvar_4.zxy * tmpvar_6.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec3 tmpvar_8;
  tmpvar_8.x = tmpvar_6.x;
  tmpvar_8.y = tmpvar_7.x;
  tmpvar_8.z = tmpvar_4.x;
  vec3 tmpvar_9;
  tmpvar_9.x = tmpvar_6.y;
  tmpvar_9.y = tmpvar_7.y;
  tmpvar_9.z = tmpvar_4.y;
  vec3 tmpvar_10;
  tmpvar_10.x = tmpvar_6.z;
  tmpvar_10.y = tmpvar_7.z;
  tmpvar_10.z = tmpvar_4.z;
  gl_Position = (gl_ModelViewProjectionMatrix * gl_Vertex);
  xlv_TEXCOORD0 = tmpvar_8;
  xlv_TEXCOORD1 = tmpvar_9;
  xlv_TEXCOORD2 = tmpvar_10;
  xlv_TEXCOORD3 = (_Object2World * gl_Vertex).xyz;
  xlv_COLOR0 = gl_Color;
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  vec4 c_3;
  c_3.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * 2.0);
  c_3.w = 1.0;
  c_2.xyz = c_3.xyz;
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 19 math, 2 textures
Keywords { "SPOT" }
"!!GLSL#version 120

#ifdef VERTEX

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
attribute vec4 TANGENT;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
void main ()
{
  vec4 v_1;
  v_1.x = _World2Object[0].x;
  v_1.y = _World2Object[1].x;
  v_1.z = _World2Object[2].x;
  v_1.w = _World2Object[3].x;
  vec4 v_2;
  v_2.x = _World2Object[0].y;
  v_2.y = _World2Object[1].y;
  v_2.z = _World2Object[2].y;
  v_2.w = _World2Object[3].y;
  vec4 v_3;
  v_3.x = _World2Object[0].z;
  v_3.y = _World2Object[1].z;
  v_3.z = _World2Object[2].z;
  v_3.w = _World2Object[3].z;
  vec3 tmpvar_4;
  tmpvar_4 = normalize(((
    (v_1.xyz * gl_Normal.x)
   + 
    (v_2.xyz * gl_Normal.y)
  ) + (v_3.xyz * gl_Normal.z)));
  mat3 tmpvar_5;
  tmpvar_5[0] = _Object2World[0].xyz;
  tmpvar_5[1] = _Object2World[1].xyz;
  tmpvar_5[2] = _Object2World[2].xyz;
  vec3 tmpvar_6;
  tmpvar_6 = normalize((tmpvar_5 * TANGENT.xyz));
  vec3 tmpvar_7;
  tmpvar_7 = (((tmpvar_4.yzx * tmpvar_6.zxy) - (tmpvar_4.zxy * tmpvar_6.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec3 tmpvar_8;
  tmpvar_8.x = tmpvar_6.x;
  tmpvar_8.y = tmpvar_7.x;
  tmpvar_8.z = tmpvar_4.x;
  vec3 tmpvar_9;
  tmpvar_9.x = tmpvar_6.y;
  tmpvar_9.y = tmpvar_7.y;
  tmpvar_9.z = tmpvar_4.y;
  vec3 tmpvar_10;
  tmpvar_10.x = tmpvar_6.z;
  tmpvar_10.y = tmpvar_7.z;
  tmpvar_10.z = tmpvar_4.z;
  gl_Position = (gl_ModelViewProjectionMatrix * gl_Vertex);
  xlv_TEXCOORD0 = tmpvar_8;
  xlv_TEXCOORD1 = tmpvar_9;
  xlv_TEXCOORD2 = tmpvar_10;
  xlv_TEXCOORD3 = (_Object2World * gl_Vertex).xyz;
  xlv_COLOR0 = gl_Color;
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
uniform sampler2D _LightTexture0;
uniform mat4 _LightMatrix0;
uniform sampler2D _LightTextureB0;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  vec4 tmpvar_3;
  tmpvar_3.w = 1.0;
  tmpvar_3.xyz = xlv_TEXCOORD3;
  vec4 tmpvar_4;
  tmpvar_4 = (_LightMatrix0 * tmpvar_3);
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  vec4 c_5;
  c_5.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, normalize((_WorldSpaceLightPos0.xyz - xlv_TEXCOORD3)))
  )) * ((
    (float((tmpvar_4.z > 0.0)) * texture2D (_LightTexture0, ((tmpvar_4.xy / tmpvar_4.w) + 0.5)).w)
   * texture2D (_LightTextureB0, vec2(
    dot (tmpvar_4.xyz, tmpvar_4.xyz)
  )).w) * 2.0));
  c_5.w = 1.0;
  c_2.xyz = c_5.xyz;
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 14 math, 2 textures
Keywords { "POINT_COOKIE" }
"!!GLSL#version 120

#ifdef VERTEX

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
attribute vec4 TANGENT;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
void main ()
{
  vec4 v_1;
  v_1.x = _World2Object[0].x;
  v_1.y = _World2Object[1].x;
  v_1.z = _World2Object[2].x;
  v_1.w = _World2Object[3].x;
  vec4 v_2;
  v_2.x = _World2Object[0].y;
  v_2.y = _World2Object[1].y;
  v_2.z = _World2Object[2].y;
  v_2.w = _World2Object[3].y;
  vec4 v_3;
  v_3.x = _World2Object[0].z;
  v_3.y = _World2Object[1].z;
  v_3.z = _World2Object[2].z;
  v_3.w = _World2Object[3].z;
  vec3 tmpvar_4;
  tmpvar_4 = normalize(((
    (v_1.xyz * gl_Normal.x)
   + 
    (v_2.xyz * gl_Normal.y)
  ) + (v_3.xyz * gl_Normal.z)));
  mat3 tmpvar_5;
  tmpvar_5[0] = _Object2World[0].xyz;
  tmpvar_5[1] = _Object2World[1].xyz;
  tmpvar_5[2] = _Object2World[2].xyz;
  vec3 tmpvar_6;
  tmpvar_6 = normalize((tmpvar_5 * TANGENT.xyz));
  vec3 tmpvar_7;
  tmpvar_7 = (((tmpvar_4.yzx * tmpvar_6.zxy) - (tmpvar_4.zxy * tmpvar_6.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec3 tmpvar_8;
  tmpvar_8.x = tmpvar_6.x;
  tmpvar_8.y = tmpvar_7.x;
  tmpvar_8.z = tmpvar_4.x;
  vec3 tmpvar_9;
  tmpvar_9.x = tmpvar_6.y;
  tmpvar_9.y = tmpvar_7.y;
  tmpvar_9.z = tmpvar_4.y;
  vec3 tmpvar_10;
  tmpvar_10.x = tmpvar_6.z;
  tmpvar_10.y = tmpvar_7.z;
  tmpvar_10.z = tmpvar_4.z;
  gl_Position = (gl_ModelViewProjectionMatrix * gl_Vertex);
  xlv_TEXCOORD0 = tmpvar_8;
  xlv_TEXCOORD1 = tmpvar_9;
  xlv_TEXCOORD2 = tmpvar_10;
  xlv_TEXCOORD3 = (_Object2World * gl_Vertex).xyz;
  xlv_COLOR0 = gl_Color;
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
uniform samplerCube _LightTexture0;
uniform mat4 _LightMatrix0;
uniform sampler2D _LightTextureB0;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  vec4 tmpvar_3;
  tmpvar_3.w = 1.0;
  tmpvar_3.xyz = xlv_TEXCOORD3;
  vec3 tmpvar_4;
  tmpvar_4 = (_LightMatrix0 * tmpvar_3).xyz;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  vec4 c_5;
  c_5.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, normalize((_WorldSpaceLightPos0.xyz - xlv_TEXCOORD3)))
  )) * ((texture2D (_LightTextureB0, vec2(
    dot (tmpvar_4, tmpvar_4)
  )).w * textureCube (_LightTexture0, tmpvar_4).w) * 2.0));
  c_5.w = 1.0;
  c_2.xyz = c_5.xyz;
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 10 math, 1 textures
Keywords { "DIRECTIONAL_COOKIE" }
"!!GLSL#version 120

#ifdef VERTEX

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
attribute vec4 TANGENT;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
void main ()
{
  vec4 v_1;
  v_1.x = _World2Object[0].x;
  v_1.y = _World2Object[1].x;
  v_1.z = _World2Object[2].x;
  v_1.w = _World2Object[3].x;
  vec4 v_2;
  v_2.x = _World2Object[0].y;
  v_2.y = _World2Object[1].y;
  v_2.z = _World2Object[2].y;
  v_2.w = _World2Object[3].y;
  vec4 v_3;
  v_3.x = _World2Object[0].z;
  v_3.y = _World2Object[1].z;
  v_3.z = _World2Object[2].z;
  v_3.w = _World2Object[3].z;
  vec3 tmpvar_4;
  tmpvar_4 = normalize(((
    (v_1.xyz * gl_Normal.x)
   + 
    (v_2.xyz * gl_Normal.y)
  ) + (v_3.xyz * gl_Normal.z)));
  mat3 tmpvar_5;
  tmpvar_5[0] = _Object2World[0].xyz;
  tmpvar_5[1] = _Object2World[1].xyz;
  tmpvar_5[2] = _Object2World[2].xyz;
  vec3 tmpvar_6;
  tmpvar_6 = normalize((tmpvar_5 * TANGENT.xyz));
  vec3 tmpvar_7;
  tmpvar_7 = (((tmpvar_4.yzx * tmpvar_6.zxy) - (tmpvar_4.zxy * tmpvar_6.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec3 tmpvar_8;
  tmpvar_8.x = tmpvar_6.x;
  tmpvar_8.y = tmpvar_7.x;
  tmpvar_8.z = tmpvar_4.x;
  vec3 tmpvar_9;
  tmpvar_9.x = tmpvar_6.y;
  tmpvar_9.y = tmpvar_7.y;
  tmpvar_9.z = tmpvar_4.y;
  vec3 tmpvar_10;
  tmpvar_10.x = tmpvar_6.z;
  tmpvar_10.y = tmpvar_7.z;
  tmpvar_10.z = tmpvar_4.z;
  gl_Position = (gl_ModelViewProjectionMatrix * gl_Vertex);
  xlv_TEXCOORD0 = tmpvar_8;
  xlv_TEXCOORD1 = tmpvar_9;
  xlv_TEXCOORD2 = tmpvar_10;
  xlv_TEXCOORD3 = (_Object2World * gl_Vertex).xyz;
  xlv_COLOR0 = gl_Color;
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
uniform sampler2D _LightTexture0;
uniform mat4 _LightMatrix0;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  vec4 tmpvar_3;
  tmpvar_3.w = 1.0;
  tmpvar_3.xyz = xlv_TEXCOORD3;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  vec4 c_4;
  c_4.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * (texture2D (_LightTexture0, (_LightMatrix0 * tmpvar_3).xy).w * 2.0));
  c_4.w = 1.0;
  c_2.xyz = c_4.xyz;
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 15 math, 1 textures
Keywords { "POINT" "FOG_LINEAR" }
"!!GLSL#version 120

#ifdef VERTEX

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
uniform vec4 unity_FogParams;
attribute vec4 TANGENT;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
varying float xlv_TEXCOORD5;
void main ()
{
  vec4 tmpvar_1;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec4 v_2;
  v_2.x = _World2Object[0].x;
  v_2.y = _World2Object[1].x;
  v_2.z = _World2Object[2].x;
  v_2.w = _World2Object[3].x;
  vec4 v_3;
  v_3.x = _World2Object[0].y;
  v_3.y = _World2Object[1].y;
  v_3.z = _World2Object[2].y;
  v_3.w = _World2Object[3].y;
  vec4 v_4;
  v_4.x = _World2Object[0].z;
  v_4.y = _World2Object[1].z;
  v_4.z = _World2Object[2].z;
  v_4.w = _World2Object[3].z;
  vec3 tmpvar_5;
  tmpvar_5 = normalize(((
    (v_2.xyz * gl_Normal.x)
   + 
    (v_3.xyz * gl_Normal.y)
  ) + (v_4.xyz * gl_Normal.z)));
  mat3 tmpvar_6;
  tmpvar_6[0] = _Object2World[0].xyz;
  tmpvar_6[1] = _Object2World[1].xyz;
  tmpvar_6[2] = _Object2World[2].xyz;
  vec3 tmpvar_7;
  tmpvar_7 = normalize((tmpvar_6 * TANGENT.xyz));
  vec3 tmpvar_8;
  tmpvar_8 = (((tmpvar_5.yzx * tmpvar_7.zxy) - (tmpvar_5.zxy * tmpvar_7.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec3 tmpvar_9;
  tmpvar_9.x = tmpvar_7.x;
  tmpvar_9.y = tmpvar_8.x;
  tmpvar_9.z = tmpvar_5.x;
  vec3 tmpvar_10;
  tmpvar_10.x = tmpvar_7.y;
  tmpvar_10.y = tmpvar_8.y;
  tmpvar_10.z = tmpvar_5.y;
  vec3 tmpvar_11;
  tmpvar_11.x = tmpvar_7.z;
  tmpvar_11.y = tmpvar_8.z;
  tmpvar_11.z = tmpvar_5.z;
  gl_Position = tmpvar_1;
  xlv_TEXCOORD0 = tmpvar_9;
  xlv_TEXCOORD1 = tmpvar_10;
  xlv_TEXCOORD2 = tmpvar_11;
  xlv_TEXCOORD3 = (_Object2World * gl_Vertex).xyz;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD5 = ((tmpvar_1.z * unity_FogParams.z) + unity_FogParams.w);
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
uniform sampler2D _LightTexture0;
uniform mat4 _LightMatrix0;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
varying float xlv_TEXCOORD5;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  vec4 tmpvar_3;
  tmpvar_3.w = 1.0;
  tmpvar_3.xyz = xlv_TEXCOORD3;
  vec3 tmpvar_4;
  tmpvar_4 = (_LightMatrix0 * tmpvar_3).xyz;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  vec4 c_5;
  c_5.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, normalize((_WorldSpaceLightPos0.xyz - xlv_TEXCOORD3)))
  )) * (texture2D (_LightTexture0, vec2(dot (tmpvar_4, tmpvar_4))).w * 2.0));
  c_5.w = 1.0;
  c_2.xyz = (c_5.xyz * vec3(clamp (xlv_TEXCOORD5, 0.0, 1.0)));
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 9 math
Keywords { "DIRECTIONAL" "FOG_LINEAR" }
"!!GLSL#version 120

#ifdef VERTEX

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
uniform vec4 unity_FogParams;
attribute vec4 TANGENT;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
varying float xlv_TEXCOORD5;
void main ()
{
  vec4 tmpvar_1;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec4 v_2;
  v_2.x = _World2Object[0].x;
  v_2.y = _World2Object[1].x;
  v_2.z = _World2Object[2].x;
  v_2.w = _World2Object[3].x;
  vec4 v_3;
  v_3.x = _World2Object[0].y;
  v_3.y = _World2Object[1].y;
  v_3.z = _World2Object[2].y;
  v_3.w = _World2Object[3].y;
  vec4 v_4;
  v_4.x = _World2Object[0].z;
  v_4.y = _World2Object[1].z;
  v_4.z = _World2Object[2].z;
  v_4.w = _World2Object[3].z;
  vec3 tmpvar_5;
  tmpvar_5 = normalize(((
    (v_2.xyz * gl_Normal.x)
   + 
    (v_3.xyz * gl_Normal.y)
  ) + (v_4.xyz * gl_Normal.z)));
  mat3 tmpvar_6;
  tmpvar_6[0] = _Object2World[0].xyz;
  tmpvar_6[1] = _Object2World[1].xyz;
  tmpvar_6[2] = _Object2World[2].xyz;
  vec3 tmpvar_7;
  tmpvar_7 = normalize((tmpvar_6 * TANGENT.xyz));
  vec3 tmpvar_8;
  tmpvar_8 = (((tmpvar_5.yzx * tmpvar_7.zxy) - (tmpvar_5.zxy * tmpvar_7.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec3 tmpvar_9;
  tmpvar_9.x = tmpvar_7.x;
  tmpvar_9.y = tmpvar_8.x;
  tmpvar_9.z = tmpvar_5.x;
  vec3 tmpvar_10;
  tmpvar_10.x = tmpvar_7.y;
  tmpvar_10.y = tmpvar_8.y;
  tmpvar_10.z = tmpvar_5.y;
  vec3 tmpvar_11;
  tmpvar_11.x = tmpvar_7.z;
  tmpvar_11.y = tmpvar_8.z;
  tmpvar_11.z = tmpvar_5.z;
  gl_Position = tmpvar_1;
  xlv_TEXCOORD0 = tmpvar_9;
  xlv_TEXCOORD1 = tmpvar_10;
  xlv_TEXCOORD2 = tmpvar_11;
  xlv_TEXCOORD3 = (_Object2World * gl_Vertex).xyz;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD5 = ((tmpvar_1.z * unity_FogParams.z) + unity_FogParams.w);
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec4 xlv_COLOR0;
varying float xlv_TEXCOORD5;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  vec4 c_3;
  c_3.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * 2.0);
  c_3.w = 1.0;
  c_2.xyz = (c_3.xyz * vec3(clamp (xlv_TEXCOORD5, 0.0, 1.0)));
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 21 math, 2 textures
Keywords { "SPOT" "FOG_LINEAR" }
"!!GLSL#version 120

#ifdef VERTEX

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
uniform vec4 unity_FogParams;
attribute vec4 TANGENT;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
varying float xlv_TEXCOORD5;
void main ()
{
  vec4 tmpvar_1;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec4 v_2;
  v_2.x = _World2Object[0].x;
  v_2.y = _World2Object[1].x;
  v_2.z = _World2Object[2].x;
  v_2.w = _World2Object[3].x;
  vec4 v_3;
  v_3.x = _World2Object[0].y;
  v_3.y = _World2Object[1].y;
  v_3.z = _World2Object[2].y;
  v_3.w = _World2Object[3].y;
  vec4 v_4;
  v_4.x = _World2Object[0].z;
  v_4.y = _World2Object[1].z;
  v_4.z = _World2Object[2].z;
  v_4.w = _World2Object[3].z;
  vec3 tmpvar_5;
  tmpvar_5 = normalize(((
    (v_2.xyz * gl_Normal.x)
   + 
    (v_3.xyz * gl_Normal.y)
  ) + (v_4.xyz * gl_Normal.z)));
  mat3 tmpvar_6;
  tmpvar_6[0] = _Object2World[0].xyz;
  tmpvar_6[1] = _Object2World[1].xyz;
  tmpvar_6[2] = _Object2World[2].xyz;
  vec3 tmpvar_7;
  tmpvar_7 = normalize((tmpvar_6 * TANGENT.xyz));
  vec3 tmpvar_8;
  tmpvar_8 = (((tmpvar_5.yzx * tmpvar_7.zxy) - (tmpvar_5.zxy * tmpvar_7.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec3 tmpvar_9;
  tmpvar_9.x = tmpvar_7.x;
  tmpvar_9.y = tmpvar_8.x;
  tmpvar_9.z = tmpvar_5.x;
  vec3 tmpvar_10;
  tmpvar_10.x = tmpvar_7.y;
  tmpvar_10.y = tmpvar_8.y;
  tmpvar_10.z = tmpvar_5.y;
  vec3 tmpvar_11;
  tmpvar_11.x = tmpvar_7.z;
  tmpvar_11.y = tmpvar_8.z;
  tmpvar_11.z = tmpvar_5.z;
  gl_Position = tmpvar_1;
  xlv_TEXCOORD0 = tmpvar_9;
  xlv_TEXCOORD1 = tmpvar_10;
  xlv_TEXCOORD2 = tmpvar_11;
  xlv_TEXCOORD3 = (_Object2World * gl_Vertex).xyz;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD5 = ((tmpvar_1.z * unity_FogParams.z) + unity_FogParams.w);
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
uniform sampler2D _LightTexture0;
uniform mat4 _LightMatrix0;
uniform sampler2D _LightTextureB0;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
varying float xlv_TEXCOORD5;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  vec4 tmpvar_3;
  tmpvar_3.w = 1.0;
  tmpvar_3.xyz = xlv_TEXCOORD3;
  vec4 tmpvar_4;
  tmpvar_4 = (_LightMatrix0 * tmpvar_3);
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  vec4 c_5;
  c_5.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, normalize((_WorldSpaceLightPos0.xyz - xlv_TEXCOORD3)))
  )) * ((
    (float((tmpvar_4.z > 0.0)) * texture2D (_LightTexture0, ((tmpvar_4.xy / tmpvar_4.w) + 0.5)).w)
   * texture2D (_LightTextureB0, vec2(
    dot (tmpvar_4.xyz, tmpvar_4.xyz)
  )).w) * 2.0));
  c_5.w = 1.0;
  c_2.xyz = (c_5.xyz * vec3(clamp (xlv_TEXCOORD5, 0.0, 1.0)));
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 16 math, 2 textures
Keywords { "POINT_COOKIE" "FOG_LINEAR" }
"!!GLSL#version 120

#ifdef VERTEX

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
uniform vec4 unity_FogParams;
attribute vec4 TANGENT;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
varying float xlv_TEXCOORD5;
void main ()
{
  vec4 tmpvar_1;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec4 v_2;
  v_2.x = _World2Object[0].x;
  v_2.y = _World2Object[1].x;
  v_2.z = _World2Object[2].x;
  v_2.w = _World2Object[3].x;
  vec4 v_3;
  v_3.x = _World2Object[0].y;
  v_3.y = _World2Object[1].y;
  v_3.z = _World2Object[2].y;
  v_3.w = _World2Object[3].y;
  vec4 v_4;
  v_4.x = _World2Object[0].z;
  v_4.y = _World2Object[1].z;
  v_4.z = _World2Object[2].z;
  v_4.w = _World2Object[3].z;
  vec3 tmpvar_5;
  tmpvar_5 = normalize(((
    (v_2.xyz * gl_Normal.x)
   + 
    (v_3.xyz * gl_Normal.y)
  ) + (v_4.xyz * gl_Normal.z)));
  mat3 tmpvar_6;
  tmpvar_6[0] = _Object2World[0].xyz;
  tmpvar_6[1] = _Object2World[1].xyz;
  tmpvar_6[2] = _Object2World[2].xyz;
  vec3 tmpvar_7;
  tmpvar_7 = normalize((tmpvar_6 * TANGENT.xyz));
  vec3 tmpvar_8;
  tmpvar_8 = (((tmpvar_5.yzx * tmpvar_7.zxy) - (tmpvar_5.zxy * tmpvar_7.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec3 tmpvar_9;
  tmpvar_9.x = tmpvar_7.x;
  tmpvar_9.y = tmpvar_8.x;
  tmpvar_9.z = tmpvar_5.x;
  vec3 tmpvar_10;
  tmpvar_10.x = tmpvar_7.y;
  tmpvar_10.y = tmpvar_8.y;
  tmpvar_10.z = tmpvar_5.y;
  vec3 tmpvar_11;
  tmpvar_11.x = tmpvar_7.z;
  tmpvar_11.y = tmpvar_8.z;
  tmpvar_11.z = tmpvar_5.z;
  gl_Position = tmpvar_1;
  xlv_TEXCOORD0 = tmpvar_9;
  xlv_TEXCOORD1 = tmpvar_10;
  xlv_TEXCOORD2 = tmpvar_11;
  xlv_TEXCOORD3 = (_Object2World * gl_Vertex).xyz;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD5 = ((tmpvar_1.z * unity_FogParams.z) + unity_FogParams.w);
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
uniform samplerCube _LightTexture0;
uniform mat4 _LightMatrix0;
uniform sampler2D _LightTextureB0;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
varying float xlv_TEXCOORD5;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  vec4 tmpvar_3;
  tmpvar_3.w = 1.0;
  tmpvar_3.xyz = xlv_TEXCOORD3;
  vec3 tmpvar_4;
  tmpvar_4 = (_LightMatrix0 * tmpvar_3).xyz;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  vec4 c_5;
  c_5.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, normalize((_WorldSpaceLightPos0.xyz - xlv_TEXCOORD3)))
  )) * ((texture2D (_LightTextureB0, vec2(
    dot (tmpvar_4, tmpvar_4)
  )).w * textureCube (_LightTexture0, tmpvar_4).w) * 2.0));
  c_5.w = 1.0;
  c_2.xyz = (c_5.xyz * vec3(clamp (xlv_TEXCOORD5, 0.0, 1.0)));
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 12 math, 1 textures
Keywords { "DIRECTIONAL_COOKIE" "FOG_LINEAR" }
"!!GLSL#version 120

#ifdef VERTEX

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
uniform vec4 unity_FogParams;
attribute vec4 TANGENT;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
varying float xlv_TEXCOORD5;
void main ()
{
  vec4 tmpvar_1;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec4 v_2;
  v_2.x = _World2Object[0].x;
  v_2.y = _World2Object[1].x;
  v_2.z = _World2Object[2].x;
  v_2.w = _World2Object[3].x;
  vec4 v_3;
  v_3.x = _World2Object[0].y;
  v_3.y = _World2Object[1].y;
  v_3.z = _World2Object[2].y;
  v_3.w = _World2Object[3].y;
  vec4 v_4;
  v_4.x = _World2Object[0].z;
  v_4.y = _World2Object[1].z;
  v_4.z = _World2Object[2].z;
  v_4.w = _World2Object[3].z;
  vec3 tmpvar_5;
  tmpvar_5 = normalize(((
    (v_2.xyz * gl_Normal.x)
   + 
    (v_3.xyz * gl_Normal.y)
  ) + (v_4.xyz * gl_Normal.z)));
  mat3 tmpvar_6;
  tmpvar_6[0] = _Object2World[0].xyz;
  tmpvar_6[1] = _Object2World[1].xyz;
  tmpvar_6[2] = _Object2World[2].xyz;
  vec3 tmpvar_7;
  tmpvar_7 = normalize((tmpvar_6 * TANGENT.xyz));
  vec3 tmpvar_8;
  tmpvar_8 = (((tmpvar_5.yzx * tmpvar_7.zxy) - (tmpvar_5.zxy * tmpvar_7.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec3 tmpvar_9;
  tmpvar_9.x = tmpvar_7.x;
  tmpvar_9.y = tmpvar_8.x;
  tmpvar_9.z = tmpvar_5.x;
  vec3 tmpvar_10;
  tmpvar_10.x = tmpvar_7.y;
  tmpvar_10.y = tmpvar_8.y;
  tmpvar_10.z = tmpvar_5.y;
  vec3 tmpvar_11;
  tmpvar_11.x = tmpvar_7.z;
  tmpvar_11.y = tmpvar_8.z;
  tmpvar_11.z = tmpvar_5.z;
  gl_Position = tmpvar_1;
  xlv_TEXCOORD0 = tmpvar_9;
  xlv_TEXCOORD1 = tmpvar_10;
  xlv_TEXCOORD2 = tmpvar_11;
  xlv_TEXCOORD3 = (_Object2World * gl_Vertex).xyz;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD5 = ((tmpvar_1.z * unity_FogParams.z) + unity_FogParams.w);
}


#endif
#ifdef FRAGMENT
uniform vec4 _WorldSpaceLightPos0;
uniform vec4 _LightColor0;
uniform sampler2D _LightTexture0;
uniform mat4 _LightMatrix0;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying vec3 xlv_TEXCOORD3;
varying vec4 xlv_COLOR0;
varying float xlv_TEXCOORD5;
void main ()
{
  vec3 worldN_1;
  vec4 c_2;
  vec4 tmpvar_3;
  tmpvar_3.w = 1.0;
  tmpvar_3.xyz = xlv_TEXCOORD3;
  worldN_1.x = xlv_TEXCOORD0.z;
  worldN_1.y = xlv_TEXCOORD1.z;
  worldN_1.z = xlv_TEXCOORD2.z;
  vec4 c_4;
  c_4.xyz = (((xlv_COLOR0.xyz * _LightColor0.xyz) * max (0.0, 
    dot (worldN_1, _WorldSpaceLightPos0.xyz)
  )) * (texture2D (_LightTexture0, (_LightMatrix0 * tmpvar_3).xy).w * 2.0));
  c_4.w = 1.0;
  c_2.xyz = (c_4.xyz * vec3(clamp (xlv_TEXCOORD5, 0.0, 1.0)));
  c_2.w = 1.0;
  gl_FragData[0] = c_2;
}


#endif
"
}
}
Program "fp" {
SubProgram "opengl " {
Keywords { "POINT" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "DIRECTIONAL" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "SPOT" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "POINT_COOKIE" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "DIRECTIONAL_COOKIE" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "POINT" "FOG_LINEAR" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "DIRECTIONAL" "FOG_LINEAR" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "SPOT" "FOG_LINEAR" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "POINT_COOKIE" "FOG_LINEAR" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "DIRECTIONAL_COOKIE" "FOG_LINEAR" }
"!!GLSL"
}
}
 }


 // Stats for Vertex shader:
 //      opengl : 3 math
 Pass {
  Name "PREPASS"
  Tags { "LIGHTMODE"="PrePassBase" "QUEUE"="Geometry+0" "IGNOREPROJECTOR"="False" "RenderType"="Opaque" }
  GpuProgramID 168216
Program "vp" {
SubProgram "opengl " {
// Stats: 3 math
"!!GLSL#version 120

#ifdef VERTEX

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 unity_WorldTransformParams;
attribute vec4 TANGENT;
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
void main ()
{
  vec4 v_1;
  v_1.x = _World2Object[0].x;
  v_1.y = _World2Object[1].x;
  v_1.z = _World2Object[2].x;
  v_1.w = _World2Object[3].x;
  vec4 v_2;
  v_2.x = _World2Object[0].y;
  v_2.y = _World2Object[1].y;
  v_2.z = _World2Object[2].y;
  v_2.w = _World2Object[3].y;
  vec4 v_3;
  v_3.x = _World2Object[0].z;
  v_3.y = _World2Object[1].z;
  v_3.z = _World2Object[2].z;
  v_3.w = _World2Object[3].z;
  vec3 tmpvar_4;
  tmpvar_4 = normalize(((
    (v_1.xyz * gl_Normal.x)
   + 
    (v_2.xyz * gl_Normal.y)
  ) + (v_3.xyz * gl_Normal.z)));
  mat3 tmpvar_5;
  tmpvar_5[0] = _Object2World[0].xyz;
  tmpvar_5[1] = _Object2World[1].xyz;
  tmpvar_5[2] = _Object2World[2].xyz;
  vec3 tmpvar_6;
  tmpvar_6 = normalize((tmpvar_5 * TANGENT.xyz));
  vec3 tmpvar_7;
  tmpvar_7 = (((tmpvar_4.yzx * tmpvar_6.zxy) - (tmpvar_4.zxy * tmpvar_6.yzx)) * (TANGENT.w * unity_WorldTransformParams.w));
  vec3 tmpvar_8;
  tmpvar_8.x = tmpvar_6.x;
  tmpvar_8.y = tmpvar_7.x;
  tmpvar_8.z = tmpvar_4.x;
  vec3 tmpvar_9;
  tmpvar_9.x = tmpvar_6.y;
  tmpvar_9.y = tmpvar_7.y;
  tmpvar_9.z = tmpvar_4.y;
  vec3 tmpvar_10;
  tmpvar_10.x = tmpvar_6.z;
  tmpvar_10.y = tmpvar_7.z;
  tmpvar_10.z = tmpvar_4.z;
  gl_Position = (gl_ModelViewProjectionMatrix * gl_Vertex);
  xlv_TEXCOORD0 = tmpvar_8;
  xlv_TEXCOORD1 = tmpvar_9;
  xlv_TEXCOORD2 = tmpvar_10;
}


#endif
#ifdef FRAGMENT
varying vec3 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
void main ()
{
  vec4 res_1;
  vec3 worldN_2;
  worldN_2.x = xlv_TEXCOORD0.z;
  worldN_2.y = xlv_TEXCOORD1.z;
  worldN_2.z = xlv_TEXCOORD2.z;
  res_1.xyz = ((worldN_2 * 0.5) + 0.5);
  res_1.w = 0.0;
  gl_FragData[0] = res_1;
}


#endif
"
}
}
Program "fp" {
SubProgram "opengl " {
"!!GLSL"
}
}
 }


 // Stats for Vertex shader:
 //      opengl : 6 avg math (4..8), 1 texture
 Pass {
  Name "PREPASS"
  Tags { "LIGHTMODE"="PrePassFinal" "QUEUE"="Geometry+0" "IGNOREPROJECTOR"="False" "RenderType"="Opaque" }
  ZWrite Off
  GpuProgramID 249212
Program "vp" {
SubProgram "opengl " {
// Stats: 6 math, 1 textures
Keywords { "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "HDR_LIGHT_PREPASS_OFF" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 _ProjectionParams;
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _World2Object;
varying vec4 xlv_COLOR0;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
void main ()
{
  vec4 tmpvar_1;
  vec4 tmpvar_2;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec4 o_3;
  vec4 tmpvar_4;
  tmpvar_4 = (tmpvar_1 * 0.5);
  vec2 tmpvar_5;
  tmpvar_5.x = tmpvar_4.x;
  tmpvar_5.y = (tmpvar_4.y * _ProjectionParams.x);
  o_3.xy = (tmpvar_5 + tmpvar_4.w);
  o_3.zw = tmpvar_1.zw;
  tmpvar_2.zw = vec2(0.0, 0.0);
  tmpvar_2.xy = vec2(0.0, 0.0);
  vec4 v_6;
  v_6.x = _World2Object[0].x;
  v_6.y = _World2Object[1].x;
  v_6.z = _World2Object[2].x;
  v_6.w = _World2Object[3].x;
  vec4 v_7;
  v_7.x = _World2Object[0].y;
  v_7.y = _World2Object[1].y;
  v_7.z = _World2Object[2].y;
  v_7.w = _World2Object[3].y;
  vec4 v_8;
  v_8.x = _World2Object[0].z;
  v_8.y = _World2Object[1].z;
  v_8.z = _World2Object[2].z;
  v_8.w = _World2Object[3].z;
  vec3 tmpvar_9;
  tmpvar_9 = normalize(((
    (v_6.xyz * gl_Normal.x)
   + 
    (v_7.xyz * gl_Normal.y)
  ) + (v_8.xyz * gl_Normal.z)));
  vec4 tmpvar_10;
  tmpvar_10.w = 1.0;
  tmpvar_10.xyz = tmpvar_9;
  vec3 x2_11;
  vec3 x1_12;
  x1_12.x = dot (unity_SHAr, tmpvar_10);
  x1_12.y = dot (unity_SHAg, tmpvar_10);
  x1_12.z = dot (unity_SHAb, tmpvar_10);
  vec4 tmpvar_13;
  tmpvar_13 = (tmpvar_9.xyzz * tmpvar_9.yzzx);
  x2_11.x = dot (unity_SHBr, tmpvar_13);
  x2_11.y = dot (unity_SHBg, tmpvar_13);
  x2_11.z = dot (unity_SHBb, tmpvar_13);
  gl_Position = tmpvar_1;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD0 = o_3;
  xlv_TEXCOORD1 = tmpvar_2;
  xlv_TEXCOORD2 = ((x2_11 + (unity_SHC.xyz * 
    ((tmpvar_9.x * tmpvar_9.x) - (tmpvar_9.y * tmpvar_9.y))
  )) + x1_12);
}


#endif
#ifdef FRAGMENT
uniform sampler2D _LightBuffer;
varying vec4 xlv_COLOR0;
varying vec4 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD2;
void main ()
{
  vec4 c_1;
  vec4 light_2;
  light_2 = -(log2(texture2DProj (_LightBuffer, xlv_TEXCOORD0)));
  light_2.xyz = (light_2.xyz + xlv_TEXCOORD2);
  vec4 c_3;
  c_3.xyz = (xlv_COLOR0.xyz * light_2.xyz);
  c_3.w = 1.0;
  c_1.xyz = c_3.xyz;
  c_1.w = 1.0;
  gl_FragData[0] = c_1;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 4 math, 1 textures
Keywords { "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "UNITY_HDR_ON" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 _ProjectionParams;
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _World2Object;
varying vec4 xlv_COLOR0;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
void main ()
{
  vec4 tmpvar_1;
  vec4 tmpvar_2;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec4 o_3;
  vec4 tmpvar_4;
  tmpvar_4 = (tmpvar_1 * 0.5);
  vec2 tmpvar_5;
  tmpvar_5.x = tmpvar_4.x;
  tmpvar_5.y = (tmpvar_4.y * _ProjectionParams.x);
  o_3.xy = (tmpvar_5 + tmpvar_4.w);
  o_3.zw = tmpvar_1.zw;
  tmpvar_2.zw = vec2(0.0, 0.0);
  tmpvar_2.xy = vec2(0.0, 0.0);
  vec4 v_6;
  v_6.x = _World2Object[0].x;
  v_6.y = _World2Object[1].x;
  v_6.z = _World2Object[2].x;
  v_6.w = _World2Object[3].x;
  vec4 v_7;
  v_7.x = _World2Object[0].y;
  v_7.y = _World2Object[1].y;
  v_7.z = _World2Object[2].y;
  v_7.w = _World2Object[3].y;
  vec4 v_8;
  v_8.x = _World2Object[0].z;
  v_8.y = _World2Object[1].z;
  v_8.z = _World2Object[2].z;
  v_8.w = _World2Object[3].z;
  vec3 tmpvar_9;
  tmpvar_9 = normalize(((
    (v_6.xyz * gl_Normal.x)
   + 
    (v_7.xyz * gl_Normal.y)
  ) + (v_8.xyz * gl_Normal.z)));
  vec4 tmpvar_10;
  tmpvar_10.w = 1.0;
  tmpvar_10.xyz = tmpvar_9;
  vec3 x2_11;
  vec3 x1_12;
  x1_12.x = dot (unity_SHAr, tmpvar_10);
  x1_12.y = dot (unity_SHAg, tmpvar_10);
  x1_12.z = dot (unity_SHAb, tmpvar_10);
  vec4 tmpvar_13;
  tmpvar_13 = (tmpvar_9.xyzz * tmpvar_9.yzzx);
  x2_11.x = dot (unity_SHBr, tmpvar_13);
  x2_11.y = dot (unity_SHBg, tmpvar_13);
  x2_11.z = dot (unity_SHBb, tmpvar_13);
  gl_Position = tmpvar_1;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD0 = o_3;
  xlv_TEXCOORD1 = tmpvar_2;
  xlv_TEXCOORD2 = ((x2_11 + (unity_SHC.xyz * 
    ((tmpvar_9.x * tmpvar_9.x) - (tmpvar_9.y * tmpvar_9.y))
  )) + x1_12);
}


#endif
#ifdef FRAGMENT
uniform sampler2D _LightBuffer;
varying vec4 xlv_COLOR0;
varying vec4 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD2;
void main ()
{
  vec4 c_1;
  vec4 light_2;
  vec4 tmpvar_3;
  tmpvar_3 = texture2DProj (_LightBuffer, xlv_TEXCOORD0);
  light_2.w = tmpvar_3.w;
  light_2.xyz = (tmpvar_3.xyz + xlv_TEXCOORD2);
  vec4 c_4;
  c_4.xyz = (xlv_COLOR0.xyz * light_2.xyz);
  c_4.w = 1.0;
  c_1.xyz = c_4.xyz;
  c_1.w = 1.0;
  gl_FragData[0] = c_1;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 8 math, 1 textures
Keywords { "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "FOG_LINEAR" "HDR_LIGHT_PREPASS_OFF" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 _ProjectionParams;
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _World2Object;
uniform vec4 unity_FogParams;
varying vec4 xlv_COLOR0;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying float xlv_TEXCOORD3;
void main ()
{
  vec4 tmpvar_1;
  vec4 tmpvar_2;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec4 o_3;
  vec4 tmpvar_4;
  tmpvar_4 = (tmpvar_1 * 0.5);
  vec2 tmpvar_5;
  tmpvar_5.x = tmpvar_4.x;
  tmpvar_5.y = (tmpvar_4.y * _ProjectionParams.x);
  o_3.xy = (tmpvar_5 + tmpvar_4.w);
  o_3.zw = tmpvar_1.zw;
  tmpvar_2.zw = vec2(0.0, 0.0);
  tmpvar_2.xy = vec2(0.0, 0.0);
  vec4 v_6;
  v_6.x = _World2Object[0].x;
  v_6.y = _World2Object[1].x;
  v_6.z = _World2Object[2].x;
  v_6.w = _World2Object[3].x;
  vec4 v_7;
  v_7.x = _World2Object[0].y;
  v_7.y = _World2Object[1].y;
  v_7.z = _World2Object[2].y;
  v_7.w = _World2Object[3].y;
  vec4 v_8;
  v_8.x = _World2Object[0].z;
  v_8.y = _World2Object[1].z;
  v_8.z = _World2Object[2].z;
  v_8.w = _World2Object[3].z;
  vec3 tmpvar_9;
  tmpvar_9 = normalize(((
    (v_6.xyz * gl_Normal.x)
   + 
    (v_7.xyz * gl_Normal.y)
  ) + (v_8.xyz * gl_Normal.z)));
  vec4 tmpvar_10;
  tmpvar_10.w = 1.0;
  tmpvar_10.xyz = tmpvar_9;
  vec3 x2_11;
  vec3 x1_12;
  x1_12.x = dot (unity_SHAr, tmpvar_10);
  x1_12.y = dot (unity_SHAg, tmpvar_10);
  x1_12.z = dot (unity_SHAb, tmpvar_10);
  vec4 tmpvar_13;
  tmpvar_13 = (tmpvar_9.xyzz * tmpvar_9.yzzx);
  x2_11.x = dot (unity_SHBr, tmpvar_13);
  x2_11.y = dot (unity_SHBg, tmpvar_13);
  x2_11.z = dot (unity_SHBb, tmpvar_13);
  gl_Position = tmpvar_1;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD0 = o_3;
  xlv_TEXCOORD1 = tmpvar_2;
  xlv_TEXCOORD2 = ((x2_11 + (unity_SHC.xyz * 
    ((tmpvar_9.x * tmpvar_9.x) - (tmpvar_9.y * tmpvar_9.y))
  )) + x1_12);
  xlv_TEXCOORD3 = ((tmpvar_1.z * unity_FogParams.z) + unity_FogParams.w);
}


#endif
#ifdef FRAGMENT
uniform vec4 unity_FogColor;
uniform sampler2D _LightBuffer;
varying vec4 xlv_COLOR0;
varying vec4 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD2;
varying float xlv_TEXCOORD3;
void main ()
{
  vec4 c_1;
  vec4 light_2;
  light_2 = -(log2(texture2DProj (_LightBuffer, xlv_TEXCOORD0)));
  light_2.xyz = (light_2.xyz + xlv_TEXCOORD2);
  vec4 c_3;
  c_3.xyz = (xlv_COLOR0.xyz * light_2.xyz);
  c_3.w = 1.0;
  c_1.xyz = mix (unity_FogColor.xyz, c_3.xyz, vec3(clamp (xlv_TEXCOORD3, 0.0, 1.0)));
  c_1.w = 1.0;
  gl_FragData[0] = c_1;
}


#endif
"
}
SubProgram "opengl " {
// Stats: 6 math, 1 textures
Keywords { "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "FOG_LINEAR" "UNITY_HDR_ON" }
"!!GLSL#version 120

#ifdef VERTEX
uniform vec4 _ProjectionParams;
uniform vec4 unity_SHAr;
uniform vec4 unity_SHAg;
uniform vec4 unity_SHAb;
uniform vec4 unity_SHBr;
uniform vec4 unity_SHBg;
uniform vec4 unity_SHBb;
uniform vec4 unity_SHC;

uniform mat4 _World2Object;
uniform vec4 unity_FogParams;
varying vec4 xlv_COLOR0;
varying vec4 xlv_TEXCOORD0;
varying vec4 xlv_TEXCOORD1;
varying vec3 xlv_TEXCOORD2;
varying float xlv_TEXCOORD3;
void main ()
{
  vec4 tmpvar_1;
  vec4 tmpvar_2;
  tmpvar_1 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec4 o_3;
  vec4 tmpvar_4;
  tmpvar_4 = (tmpvar_1 * 0.5);
  vec2 tmpvar_5;
  tmpvar_5.x = tmpvar_4.x;
  tmpvar_5.y = (tmpvar_4.y * _ProjectionParams.x);
  o_3.xy = (tmpvar_5 + tmpvar_4.w);
  o_3.zw = tmpvar_1.zw;
  tmpvar_2.zw = vec2(0.0, 0.0);
  tmpvar_2.xy = vec2(0.0, 0.0);
  vec4 v_6;
  v_6.x = _World2Object[0].x;
  v_6.y = _World2Object[1].x;
  v_6.z = _World2Object[2].x;
  v_6.w = _World2Object[3].x;
  vec4 v_7;
  v_7.x = _World2Object[0].y;
  v_7.y = _World2Object[1].y;
  v_7.z = _World2Object[2].y;
  v_7.w = _World2Object[3].y;
  vec4 v_8;
  v_8.x = _World2Object[0].z;
  v_8.y = _World2Object[1].z;
  v_8.z = _World2Object[2].z;
  v_8.w = _World2Object[3].z;
  vec3 tmpvar_9;
  tmpvar_9 = normalize(((
    (v_6.xyz * gl_Normal.x)
   + 
    (v_7.xyz * gl_Normal.y)
  ) + (v_8.xyz * gl_Normal.z)));
  vec4 tmpvar_10;
  tmpvar_10.w = 1.0;
  tmpvar_10.xyz = tmpvar_9;
  vec3 x2_11;
  vec3 x1_12;
  x1_12.x = dot (unity_SHAr, tmpvar_10);
  x1_12.y = dot (unity_SHAg, tmpvar_10);
  x1_12.z = dot (unity_SHAb, tmpvar_10);
  vec4 tmpvar_13;
  tmpvar_13 = (tmpvar_9.xyzz * tmpvar_9.yzzx);
  x2_11.x = dot (unity_SHBr, tmpvar_13);
  x2_11.y = dot (unity_SHBg, tmpvar_13);
  x2_11.z = dot (unity_SHBb, tmpvar_13);
  gl_Position = tmpvar_1;
  xlv_COLOR0 = gl_Color;
  xlv_TEXCOORD0 = o_3;
  xlv_TEXCOORD1 = tmpvar_2;
  xlv_TEXCOORD2 = ((x2_11 + (unity_SHC.xyz * 
    ((tmpvar_9.x * tmpvar_9.x) - (tmpvar_9.y * tmpvar_9.y))
  )) + x1_12);
  xlv_TEXCOORD3 = ((tmpvar_1.z * unity_FogParams.z) + unity_FogParams.w);
}


#endif
#ifdef FRAGMENT
uniform vec4 unity_FogColor;
uniform sampler2D _LightBuffer;
varying vec4 xlv_COLOR0;
varying vec4 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD2;
varying float xlv_TEXCOORD3;
void main ()
{
  vec4 c_1;
  vec4 light_2;
  vec4 tmpvar_3;
  tmpvar_3 = texture2DProj (_LightBuffer, xlv_TEXCOORD0);
  light_2.w = tmpvar_3.w;
  light_2.xyz = (tmpvar_3.xyz + xlv_TEXCOORD2);
  vec4 c_4;
  c_4.xyz = (xlv_COLOR0.xyz * light_2.xyz);
  c_4.w = 1.0;
  c_1.xyz = mix (unity_FogColor.xyz, c_4.xyz, vec3(clamp (xlv_TEXCOORD3, 0.0, 1.0)));
  c_1.w = 1.0;
  gl_FragData[0] = c_1;
}


#endif
"
}
}
Program "fp" {
SubProgram "opengl " {
Keywords { "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "HDR_LIGHT_PREPASS_OFF" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "UNITY_HDR_ON" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "FOG_LINEAR" "HDR_LIGHT_PREPASS_OFF" }
"!!GLSL"
}
SubProgram "opengl " {
Keywords { "LIGHTMAP_OFF" "DIRLIGHTMAP_OFF" "DYNAMICLIGHTMAP_OFF" "FOG_LINEAR" "UNITY_HDR_ON" }
"!!GLSL"
}
}
 }
}
Fallback "Diffuse"
}