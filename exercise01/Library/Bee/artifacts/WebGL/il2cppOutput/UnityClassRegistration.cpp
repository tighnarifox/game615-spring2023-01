extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 53 non stripped classes
	//0. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//1. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//2. Camera
	RegisterUnityClass<Camera>("Core");
	//3. Component
	RegisterUnityClass<Unity::Component>("Core");
	//4. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//5. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//6. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//7. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//8. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//9. GameManager
	RegisterUnityClass<GameManager>("Core");
	//10. GameObject
	RegisterUnityClass<GameObject>("Core");
	//11. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//12. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//13. InputManager
	RegisterUnityClass<InputManager>("Core");
	//14. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//15. Light
	RegisterUnityClass<Light>("Core");
	//16. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//17. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//18. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//19. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//20. Material
	RegisterUnityClass<Material>("Core");
	//21. Mesh
	RegisterUnityClass<Mesh>("Core");
	//22. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//23. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//24. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//25. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//26. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//27. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//28. Object
	//Skipping Object
	//29. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//30. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//31. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//32. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//33. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//34. Renderer
	RegisterUnityClass<Renderer>("Core");
	//35. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//36. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//37. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//38. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//39. Shader
	RegisterUnityClass<Shader>("Core");
	//40. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//41. Sprite
	RegisterUnityClass<Sprite>("Core");
	//42. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//43. TagManager
	RegisterUnityClass<TagManager>("Core");
	//44. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//45. Texture
	RegisterUnityClass<Texture>("Core");
	//46. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//47. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//48. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//49. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//50. Transform
	RegisterUnityClass<Transform>("Core");
	//51. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//52. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");

}
