struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 92 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//4. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//7. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//8. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//9. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//10. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//11. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//12. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//13. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//14. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//15. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//16. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//17. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//18. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//19. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//20. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//21. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//22. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//23. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//24. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//25. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//26. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//27. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//28. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//29. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//30. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//31. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//32. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//33. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//34. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//35. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//36. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//37. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//38. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//39. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//40. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//41. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//42. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//43. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//44. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//45. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//46. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//47. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//48. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//49. ParticleAnimator
	void RegisterClass_ParticleAnimator();
	RegisterClass_ParticleAnimator();

	//50. EllipsoidParticleEmitter
	void RegisterClass_EllipsoidParticleEmitter();
	RegisterClass_EllipsoidParticleEmitter();

	//51. ParticleEmitter
	void RegisterClass_ParticleEmitter();
	RegisterClass_ParticleEmitter();

	//52. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//53. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//54. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//55. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//56. HingeJoint
	void RegisterClass_HingeJoint();
	RegisterClass_HingeJoint();

	//57. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//58. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//59. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//60. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//61. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//62. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//63. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//64. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//65. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//66. Halo
	void RegisterClass_Halo();
	RegisterClass_Halo();

	//67. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//68. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//69. ConfigurableJoint
	void RegisterClass_ConfigurableJoint();
	RegisterClass_ConfigurableJoint();

	//70. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//71. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//72. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//73. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//74. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//75. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//76. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//77. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//78. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//79. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//80. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//81. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//82. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//83. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//84. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//85. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//86. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//87. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//88. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//89. NetworkManager
	//Skipping NetworkManager

	//90. MasterServerInterface
	//Skipping MasterServerInterface

	//91. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
