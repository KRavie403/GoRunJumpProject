#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.IComparer`1<EffectData>
struct IComparer_1_tCB2969F0BDB903C98AB5F578E810BE172B6FF1A3;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC;
// System.Collections.Generic.List`1<EffectData>
struct List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<MaterialEffect>
struct List_1_t0F0D6829B94247528F8812716A2971B3A00B7809;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Sound>
struct Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A;
// Singleton`1<System.Object>
struct Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6;
// Singleton`1<TitleManager>
struct Singleton_1_t6B63F65B483BA968FA5697BB134D6FCA7208B9BF;
// Singleton`1<TutorialManager>
struct Singleton_1_tF5AD56B9EAB81823BF098B6B141758BFFC202E61;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// EffectData[]
struct EffectDataU5BU5D_tFF423C87FBD5E8D66ADFDE9708A3CDCA8C97AD0E;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// MaterialEffect[]
struct MaterialEffectU5BU5D_t4D21F7AAE0DBA1701C7458FB2E615955C7C5F812;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// Sound[]
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981;
// CinematicSequence/CameraSettings[]
struct CameraSettingsU5BU5D_t3D55306040009315D2C4E106A803B0EC6BA8F127;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// AnimatorController
struct AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BlockMovement
struct BlockMovement_tC23BF2B88957526EC3F1E4BE3A457A1844AA9833;
// BowlRotation
struct BowlRotation_tC28147902FCD443FFAA0D9616578B2E82BEFA452;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraMovement
struct CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022;
// CameraTarget
struct CameraTarget_t078491F9A4589091B931D7C3651E01DA95C55FEC;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
// CinematicSequence
struct CinematicSequence_tC92C443D56B66031465CE1D38FE7B054A2E03EB1;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// Comp
struct Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EffectController
struct EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B;
// EffectData
struct EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33;
// EffectDemo
struct EffectDemo_tF67F4E1FA700D4A273B93F8B8E063EE07E53B98E;
// EffectShaderPropertyStr
struct EffectShaderPropertyStr_t4AC850D65A020351DC5B22616FCBF70B7FBD0D36;
// EndPerception
struct EndPerception_tA1008EBF2B234DC579D5ADA2365FFBF52E5EB912;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FallingPlayer
struct FallingPlayer_tC9F5CA3DAA4DAB1DD2CDB75AB6992AB3555D9B33;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t3741E5378B5C1636777589A1BE1811E9E96ADF1B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// JumpPerception
struct JumpPerception_tD4A763D21429C3C526933CC7C7888DDC653E08B0;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MaterialEffect
struct MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RenderEffect
struct RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// RespawnController
struct RespawnController_t35874BA400906EE2F60120A5B4DA61D25FC00C13;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SettingsManager
struct SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// Sound
struct Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StagesManager
struct StagesManager_t7609465E614AD6A8B53AC06246E05EAD55959DEC;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TitleManager
struct TitleManager_t6030A56D57245C74D7D98F40591DF5246F1BE4CC;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TutorialAnimationController
struct TutorialAnimationController_t9F28D91FCFAD2882F08BCF3791AA3D44D7B29221;
// TutorialAudioManager
struct TutorialAudioManager_tE3656FAF37162E31BE2FCCC5B0F2E8CA67B2C4FB;
// TutorialEndPerception
struct TutorialEndPerception_tC8F6F2DD575845690116868F5A4C7FED7E5A9EB8;
// TutorialManager
struct TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF;
// TutorialPlayerMovement
struct TutorialPlayerMovement_tFD1DE5E527A7E6E1342B25C1F33D8C47CF0AC485;
// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// bl_ControllerExample
struct bl_ControllerExample_t52A5C81FB90D1B2A2A9909E8C31B06094F3D5F75;
// bl_Joystick
struct bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// AudioManager/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A;
// AudioManager/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154;
// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC;
// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842;
// CinematicSequence/CameraSettings
struct CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395;
// EndPerception/<LoadSceneAfterDelay>d__3
struct U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// TutorialEndPerception/<LoadSceneAfterDelay>d__3
struct U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498;
// bl_Joystick/<ScaleJoysctick>d__22
struct U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EffectShaderPropertyStr_t4AC850D65A020351DC5B22616FCBF70B7FBD0D36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0F0D6829B94247528F8812716A2971B3A00B7809_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7;
IL2CPP_EXTERN_C String_t* _stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA;
IL2CPP_EXTERN_C String_t* _stringLiteral17FC0954E2BA29F862AC82AAF54615D8CF0A5190;
IL2CPP_EXTERN_C String_t* _stringLiteral18C151B7B37F32A75E0B923B3DE7FED4660FD5DD;
IL2CPP_EXTERN_C String_t* _stringLiteral238279004380E1356CECB7B4258294E304F72449;
IL2CPP_EXTERN_C String_t* _stringLiteral242ED1F9FE6F6779DBD32716F054376E2DEAA902;
IL2CPP_EXTERN_C String_t* _stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204;
IL2CPP_EXTERN_C String_t* _stringLiteral2D867F5D9EE94A42D0DFCE448BBB10ED2908764B;
IL2CPP_EXTERN_C String_t* _stringLiteral380D1F79DC84820F8D11C77ADED94344AC21A1A3;
IL2CPP_EXTERN_C String_t* _stringLiteral43BE6DE4DF730C7E4796F34D0B0C340C273CB4F7;
IL2CPP_EXTERN_C String_t* _stringLiteral46C0D5008E20CE11F44B701B1E4FE55961663886;
IL2CPP_EXTERN_C String_t* _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral502CB45B72507F781287E5C292A20B4D014A8F60;
IL2CPP_EXTERN_C String_t* _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27;
IL2CPP_EXTERN_C String_t* _stringLiteral5E7713BE97C393DDDD13F75C6F8D6AA08505CAA7;
IL2CPP_EXTERN_C String_t* _stringLiteral61A6E50199E28E4C8A6E9213671635A7AE5DB712;
IL2CPP_EXTERN_C String_t* _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
IL2CPP_EXTERN_C String_t* _stringLiteral66990467EB5953083DDFEBA0944B1E35E59083B3;
IL2CPP_EXTERN_C String_t* _stringLiteral669C4C4316BB0D8800268D421965F7350B189F2D;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral70C99B61FC684B57763B10FD124783953DD77E30;
IL2CPP_EXTERN_C String_t* _stringLiteral7372459950519D86049CF0E8C9E319D6C699939C;
IL2CPP_EXTERN_C String_t* _stringLiteral75EEB85ED68C268EFCF06C5EC80C80516FB0D0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B3392F12A2719988DD9AA6DBDEB880A65BF6DAC;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral9620DD433884E3D1F553FB3CB2B95B527831E855;
IL2CPP_EXTERN_C String_t* _stringLiteralA45CCEB912E004D06B5107C2433F2D0AE1C95DA4;
IL2CPP_EXTERN_C String_t* _stringLiteralAB2DCC3593CCEB58CA32060CD89A596D12D0ECCC;
IL2CPP_EXTERN_C String_t* _stringLiteralB2D62E3F75706996C1B47FC533FBBFDE9C3C5173;
IL2CPP_EXTERN_C String_t* _stringLiteralBDA0DD09C639A029BF0C61ADF38F7CFDA6F96E03;
IL2CPP_EXTERN_C String_t* _stringLiteralC48760ED9B365E27BF7EB9FB10DA5D3DE0216713;
IL2CPP_EXTERN_C String_t* _stringLiteralC556605C14F28234659BB5A7418CFCC1B8A9DE04;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9;
IL2CPP_EXTERN_C String_t* _stringLiteralD4563D94F2AB66EDBA5B3FF9BC11A1DF2368F980;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F000A9E3A376A509D943B9D020C2F0CA2DC3FA;
IL2CPP_EXTERN_C String_t* _stringLiteralE4179DB2FDDB1F9A3EFB24065914C0BA86DAD4D7;
IL2CPP_EXTERN_C String_t* _stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3;
IL2CPP_EXTERN_C String_t* _stringLiteralF8BBDEF87EB9A06C96F80281F3E896E25F22FC3E;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioManager_OnSceneChanged_m195FB6928B1BA8853EBD522AB63FD20122EA9E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m41B5C2CED673F0B3BE439369B3A4541219535C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6D9C4C25718A54A5F4913DED9F202C8977AB9545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1167F415270FA50B88EB8C2C59F6D0C5F8AAD6A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m36CD7D85487E83CF4283FE94A4A0E66DDCF85C4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92_m64C1CCB168F8A562BBCA6C4BDA6A9068B72E01BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m133D5F9FEFF116D3EBFE22B1404702AFB6DD5AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF9F72E35C91DC3AE980ECE6DA62D4862123D35A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mA14822A8B1D091BBE5412537E612BAADB70EBBB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m9FB3B7F2491D13B7F0C0AFB2F63936A7C117E6EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1AAA393CC7D3B1753CEA4DDDF9C748F677B34AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD05614C50A730F2250D8748FFECB7EA06926C658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m481E3A9029D0DC57F50804D33F9C1DC3B6C5B267_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m82290BE0D7F06E4F4D59F3862D252917B34290FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF0B1449F295F2A3FED1A86287900FEE149625F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mD86770CD48FC638A29119FCE8C16EF6A605ACDAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mE0F8E20E803B92BF19C27E78D4665616A26C8E6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneAfterDelayU3Ed__3_System_Collections_IEnumerator_Reset_m3CE5DBD2DB3CCA8B4D7212B00770FBA38E7C28F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneAfterDelayU3Ed__3_System_Collections_IEnumerator_Reset_mC58AD716F9E2F57E82FCF27D7F438039D26CEF12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CScaleJoysctickU3Ed__22_System_Collections_IEnumerator_Reset_mB6008A1E1D535687BFA8D2309EF30027A56E4BE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CPlayBGMU3Eb__0_m6D732C60E6C3AC4A9465A4D90AF2D158C758A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CPlaySFXU3Eb__0_m3DD6BC58AA141ECCA0929DA78B90EDE396DD092F_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct CameraSettingsU5BU5D_t3D55306040009315D2C4E106A803B0EC6BA8F127;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<EffectData>
struct List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EffectDataU5BU5D_tFF423C87FBD5E8D66ADFDE9708A3CDCA8C97AD0E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<MaterialEffect>
struct List_1_t0F0D6829B94247528F8812716A2971B3A00B7809  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MaterialEffectU5BU5D_t4D21F7AAE0DBA1701C7458FB2E615955C7C5F812* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// Comp
struct Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6  : public RuntimeObject
{
};

// EffectShaderPropertyStr
struct EffectShaderPropertyStr_t4AC850D65A020351DC5B22616FCBF70B7FBD0D36  : public RuntimeObject
{
};

// Sound
struct Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0  : public RuntimeObject
{
	// System.String Sound::title
	String_t* ___title_0;
	// UnityEngine.AudioClip Sound::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// TransformExtension
struct TransformExtension_t8BCF59090362CB34B5CC5E47FDB08D9CF0FFDD21  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// bl_JoystickUtils
struct bl_JoystickUtils_tA82E6233F226A03190B1D3E3AF312B416E75EF54  : public RuntimeObject
{
};

// AudioManager/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A  : public RuntimeObject
{
	// System.String AudioManager/<>c__DisplayClass10_0::title
	String_t* ___title_0;
};

// AudioManager/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95  : public RuntimeObject
{
	// System.String AudioManager/<>c__DisplayClass11_0::title
	String_t* ___title_0;
};

// CinematicSequence/CameraSettings
struct CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395  : public RuntimeObject
{
	// Cinemachine.CinemachineVirtualCamera CinematicSequence/CameraSettings::camera
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* ___camera_0;
	// System.Single CinematicSequence/CameraSettings::duration
	float ___duration_1;
};

// EndPerception/<LoadSceneAfterDelay>d__3
struct U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C  : public RuntimeObject
{
	// System.Int32 EndPerception/<LoadSceneAfterDelay>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EndPerception/<LoadSceneAfterDelay>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// TutorialEndPerception/<LoadSceneAfterDelay>d__3
struct U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498  : public RuntimeObject
{
	// System.Int32 TutorialEndPerception/<LoadSceneAfterDelay>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TutorialEndPerception/<LoadSceneAfterDelay>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// bl_Joystick/<ScaleJoysctick>d__22
struct U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89  : public RuntimeObject
{
	// System.Int32 bl_Joystick/<ScaleJoysctick>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object bl_Joystick/<ScaleJoysctick>d__22::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// bl_Joystick bl_Joystick/<ScaleJoysctick>d__22::<>4__this
	bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* ___U3CU3E4__this_2;
	// System.Boolean bl_Joystick/<ScaleJoysctick>d__22::increase
	bool ___increase_3;
	// System.Single bl_Joystick/<ScaleJoysctick>d__22::<_time>5__2
	float ___U3C_timeU3E5__2_4;
};

// System.Collections.Generic.List`1/Enumerator<MaterialEffect>
struct Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB 
{
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;
};

// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA 
{
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// EffectData
struct EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33  : public RuntimeObject
{
	// System.Boolean EffectData::m_bFoldoutOpen
	bool ___m_bFoldoutOpen_0;
	// System.Single EffectData::m_fTimeSec
	float ___m_fTimeSec_1;
	// UnityEngine.GameObject EffectData::m_goEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_goEffect_2;
	// System.Boolean EffectData::m_bTransformFoldout
	bool ___m_bTransformFoldout_3;
	// UnityEngine.Vector3 EffectData::m_goPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_goPos_4;
	// UnityEngine.Vector3 EffectData::m_goRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_goRotation_5;
	// UnityEngine.Vector3 EffectData::m_goScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_goScale_6;
	// System.Boolean EffectData::m_bSortingFoldout
	bool ___m_bSortingFoldout_7;
	// System.Int32 EffectData::m_SortingLayerID
	int32_t ___m_SortingLayerID_8;
	// System.Int32 EffectData::m_SortingOrder
	int32_t ___m_SortingOrder_9;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE 
{
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings/OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	// UnityEngine.Camera/GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;
};
// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};

// MaterialEffect
struct MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E  : public RuntimeObject
{
	// UnityEngine.Material MaterialEffect::m_EffectMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_EffectMaterial_0;
	// System.Boolean MaterialEffect::m_EnableAlphaAnimation
	bool ___m_EnableAlphaAnimation_1;
	// System.Single MaterialEffect::m_AlphaAnimationTimeScale
	float ___m_AlphaAnimationTimeScale_2;
	// UnityEngine.AnimationCurve MaterialEffect::m_AlphaCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AlphaCurve_3;
	// UnityEngine.Texture MaterialEffect::m_MainTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_MainTexture_4;
	// UnityEngine.Texture MaterialEffect::m_MaskTexutre
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_MaskTexutre_5;
	// UnityEngine.TextureWrapMode MaterialEffect::m_MainTexWrapMode
	int32_t ___m_MainTexWrapMode_6;
	// UnityEngine.TextureWrapMode MaterialEffect::m_MaskTexWrapMode
	int32_t ___m_MaskTexWrapMode_7;
	// System.Boolean MaterialEffect::m_EnableUVScroll
	bool ___m_EnableUVScroll_8;
	// UnityEngine.Vector2 MaterialEffect::m_UVScrollMainTex
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UVScrollMainTex_9;
	// UnityEngine.Vector2 MaterialEffect::m_UVScrollCutTex
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UVScrollCutTex_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 
{
	// Cinemachine.LensSettings Cinemachine.CameraState::Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Lens_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceLookAt
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::RawPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::RawOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionDampingBypass
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	// System.Single Cinemachine.CameraState::ShotQuality
	float ___ShotQuality_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionCorrection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::OrientationCorrection
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::BlendHint
	int32_t ___BlendHint_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_pinvoke
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_com
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Predicate`1<Sound>
struct Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// Singleton`1<TitleManager>
struct Singleton_1_t6B63F65B483BA968FA5697BB134D6FCA7208B9BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Singleton`1<TutorialManager>
struct Singleton_1_tF5AD56B9EAB81823BF098B6B141758BFFC202E61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AnimatorController
struct AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator AnimatorController::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_4;
};

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Sound[] AudioManager::bgmSounds
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* ___bgmSounds_5;
	// Sound[] AudioManager::sfxSounds
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* ___sfxSounds_6;
	// UnityEngine.AudioSource AudioManager::_bgmSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____bgmSource_7;
	// UnityEngine.AudioSource AudioManager::_sfxSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____sfxSource_8;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BlockMovement
struct BlockMovement_tC23BF2B88957526EC3F1E4BE3A457A1844AA9833  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BlockMovement::_translationSpeed
	float ____translationSpeed_4;
	// UnityEngine.Vector3[] BlockMovement::directions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___directions_5;
	// System.Int32 BlockMovement::currentDirectionIndex
	int32_t ___currentDirectionIndex_6;
	// System.Single BlockMovement::distanceToMove
	float ___distanceToMove_7;
	// UnityEngine.Vector3 BlockMovement::initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPosition_8;
};

// BowlRotation
struct BowlRotation_tC28147902FCD443FFAA0D9616578B2E82BEFA452  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BowlRotation::rotationSpeed
	float ___rotationSpeed_4;
};

// CameraMovement
struct CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraMovement::_player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____player_4;
	// UnityEngine.Vector3 CameraMovement::Dir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Dir_5;
};

// CameraTarget
struct CameraTarget_t078491F9A4589091B931D7C3651E01DA95C55FEC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraTarget::m_TargetOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_TargetOffset_4;
};

// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::FollowTargetAttachment
	float ___FollowTargetAttachment_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::LookAtTargetAttachment
	float ___LookAtTargetAttachment_12;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC* ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedFollowTarget_20;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedFollowTargetVcam_21;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetGroup
	RuntimeObject* ___m_CachedFollowTargetGroup_22;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedLookAtTarget_23;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedLookAtTargetVcam_24;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetGroup
	RuntimeObject* ___m_CachedLookAtTargetGroup_25;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<FollowTargetChanged>k__BackingField
	bool ___U3CFollowTargetChangedU3Ek__BackingField_26;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetChanged>k__BackingField
	bool ___U3CLookAtTargetChangedU3Ek__BackingField_27;
};

// CinematicSequence
struct CinematicSequence_tC92C443D56B66031465CE1D38FE7B054A2E03EB1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CinematicSequence/CameraSettings[] CinematicSequence::cameraSettings
	CameraSettingsU5BU5D_t3D55306040009315D2C4E106A803B0EC6BA8F127* ___cameraSettings_4;
	// System.Int32 CinematicSequence::currentCameraIndex
	int32_t ___currentCameraIndex_5;
	// System.Single CinematicSequence::timeSinceLastSwitch
	float ___timeSinceLastSwitch_6;
};

// EffectController
struct EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 EffectController::m_nNumOfEffects
	int32_t ___m_nNumOfEffects_4;
	// System.Boolean EffectController::m_bLockNums
	bool ___m_bLockNums_5;
	// System.Collections.Generic.List`1<EffectData> EffectController::m_kEffectGenList
	List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* ___m_kEffectGenList_6;
	// System.Int32 EffectController::m_nNowIndex
	int32_t ___m_nNowIndex_7;
};

// EffectDemo
struct EffectDemo_tF67F4E1FA700D4A273B93F8B8E063EE07E53B98E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EffectDemo::m_EffectPrefabList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___m_EffectPrefabList_5;
	// System.Boolean EffectDemo::m_LookAtEffect
	bool ___m_LookAtEffect_6;
	// UnityEngine.GameObject EffectDemo::m_NowShowEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_NowShowEffect_7;
	// System.Int32 EffectDemo::m_NowIndex
	int32_t ___m_NowIndex_8;
	// System.String EffectDemo::m_NowEffectName
	String_t* ___m_NowEffectName_9;
};

// EndPerception
struct EndPerception_tA1008EBF2B234DC579D5ADA2365FFBF52E5EB912  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AnimatorController EndPerception::_animatorController
	AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* ____animatorController_4;
	// UnityEngine.GameObject EndPerception::_successParticlePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____successParticlePrefab_5;
};

// FallingPlayer
struct FallingPlayer_tC9F5CA3DAA4DAB1DD2CDB75AB6992AB3555D9B33  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// JumpPerception
struct JumpPerception_tD4A763D21429C3C526933CC7C7888DDC653E08B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AnimatorController JumpPerception::_animatorController
	AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* ____animatorController_4;
	// System.Single JumpPerception::_jumpForce
	float ____jumpForce_5;
	// UnityEngine.Rigidbody JumpPerception::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_6;
};

// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// bl_Joystick PlayerMovement::_joystick
	bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* ____joystick_4;
	// AnimatorController PlayerMovement::_animatorController
	AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* ____animatorController_5;
	// System.Single PlayerMovement::_moveSpeed
	float ____moveSpeed_6;
	// System.Single PlayerMovement::_rotateSpeed
	float ____rotateSpeed_7;
	// System.Single PlayerMovement::_jumpForce
	float ____jumpForce_8;
	// System.Single PlayerMovement::_customGravity
	float ____customGravity_9;
	// System.Single PlayerMovement::_rotationSpeed
	float ____rotationSpeed_10;
	// UnityEngine.Rigidbody PlayerMovement::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_11;
	// UnityEngine.Vector3 PlayerMovement::_moveVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____moveVector_12;
	// System.Boolean PlayerMovement::isFalling
	bool ___isFalling_13;
	// System.Boolean PlayerMovement::isJumping
	bool ___isJumping_14;
	// System.Boolean PlayerMovement::isAttached
	bool ___isAttached_15;
};

// RenderEffect
struct RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderBillBoardType RenderEffect::m_BillBoardType
	int32_t ___m_BillBoardType_4;
	// UnityEngine.Camera RenderEffect::m_ReferenceCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_ReferenceCamera_5;
	// System.Boolean RenderEffect::m_EnableBillBoard
	bool ___m_EnableBillBoard_6;
	// System.Boolean RenderEffect::m_EnableSetSortLayer
	bool ___m_EnableSetSortLayer_7;
	// UnityEngine.Renderer RenderEffect::m_Render
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_Render_8;
	// System.Collections.Generic.List`1<MaterialEffect> RenderEffect::m_MaterialEffects
	List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* ___m_MaterialEffects_9;
	// System.Single RenderEffect::m_TimeLine
	float ___m_TimeLine_10;
	// System.Int32 RenderEffect::m_SortingLayerID
	int32_t ___m_SortingLayerID_11;
	// System.Int32 RenderEffect::m_SortingOrder
	int32_t ___m_SortingOrder_12;
};

// RespawnController
struct RespawnController_t35874BA400906EE2F60120A5B4DA61D25FC00C13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform RespawnController::respawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___respawnPoint_4;
	// UnityEngine.GameObject RespawnController::_respawnParticlePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____respawnParticlePrefab_5;
	// AnimatorController RespawnController::_animatorController
	AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* ____animatorController_6;
};

// SettingsManager
struct SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SettingsManager::_pausePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____pausePanel_4;
	// UnityEngine.GameObject SettingsManager::_settings
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____settings_5;
	// UnityEngine.GameObject SettingsManager::_settingsImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____settingsImage_6;
	// System.String SettingsManager::_currentSceneName
	String_t* ____currentSceneName_7;
};

// StagesManager
struct StagesManager_t7609465E614AD6A8B53AC06246E05EAD55959DEC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TutorialAnimationController
struct TutorialAnimationController_t9F28D91FCFAD2882F08BCF3791AA3D44D7B29221  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator TutorialAnimationController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
};

// TutorialAudioManager
struct TutorialAudioManager_tE3656FAF37162E31BE2FCCC5B0F2E8CA67B2C4FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TutorialEndPerception
struct TutorialEndPerception_tC8F6F2DD575845690116868F5A4C7FED7E5A9EB8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AnimatorController TutorialEndPerception::_animatorController
	AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* ____animatorController_4;
	// UnityEngine.GameObject TutorialEndPerception::_successParticlePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____successParticlePrefab_5;
};

// TutorialPlayerMovement
struct TutorialPlayerMovement_tFD1DE5E527A7E6E1342B25C1F33D8C47CF0AC485  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// bl_Joystick TutorialPlayerMovement::_joystick
	bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* ____joystick_4;
	// AnimatorController TutorialPlayerMovement::_animatorController
	AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* ____animatorController_5;
	// System.Single TutorialPlayerMovement::_moveSpeed
	float ____moveSpeed_6;
	// System.Single TutorialPlayerMovement::_rotateSpeed
	float ____rotateSpeed_7;
	// System.Single TutorialPlayerMovement::_jumpForce
	float ____jumpForce_8;
	// System.Single TutorialPlayerMovement::_customGravity
	float ____customGravity_9;
	// System.Single TutorialPlayerMovement::_rotationSpeed
	float ____rotationSpeed_10;
	// UnityEngine.Rigidbody TutorialPlayerMovement::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_11;
	// UnityEngine.Vector3 TutorialPlayerMovement::_moveVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____moveVector_12;
	// System.Boolean TutorialPlayerMovement::isFalling
	bool ___isFalling_13;
	// System.Boolean TutorialPlayerMovement::isAttached
	bool ___isAttached_14;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image UIController::_BGMButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____BGMButtonImage_4;
	// UnityEngine.UI.Image UIController::_SFXButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____SFXButtonImage_5;
	// UnityEngine.Sprite UIController::_BGMButtonSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____BGMButtonSprite_6;
	// UnityEngine.Sprite UIController::_SFXButtonSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____SFXButtonSprite_7;
	// UnityEngine.Sprite UIController::_currentBGMButtonSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____currentBGMButtonSprite_8;
	// UnityEngine.Sprite UIController::_currentSFXButtonSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____currentSFXButtonSprite_9;
	// System.Boolean UIController::_isBGMOn
	bool ____isBGMOn_10;
	// System.Boolean UIController::_isSFXOn
	bool ____isSFXOn_11;
	// UnityEngine.UI.Slider UIController::_bgmSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____bgmSlider_12;
	// UnityEngine.UI.Slider UIController::_sfxSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____sfxSlider_13;
};

// bl_ControllerExample
struct bl_ControllerExample_t52A5C81FB90D1B2A2A9909E8C31B06094F3D5F75  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// bl_Joystick bl_ControllerExample::Joystick
	bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* ___Joystick_4;
	// System.Single bl_ControllerExample::Speed
	float ___Speed_5;
};

// bl_Joystick
struct bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single bl_Joystick::Radio
	float ___Radio_4;
	// System.Single bl_Joystick::SmoothTime
	float ___SmoothTime_5;
	// System.Single bl_Joystick::OnPressScale
	float ___OnPressScale_6;
	// UnityEngine.Color bl_Joystick::NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalColor_7;
	// UnityEngine.Color bl_Joystick::PressColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___PressColor_8;
	// System.Single bl_Joystick::Duration
	float ___Duration_9;
	// UnityEngine.RectTransform bl_Joystick::StickRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___StickRect_10;
	// UnityEngine.RectTransform bl_Joystick::CenterReference
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___CenterReference_11;
	// UnityEngine.Vector3 bl_Joystick::DeathArea
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeathArea_12;
	// UnityEngine.Vector3 bl_Joystick::currentVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentVelocity_13;
	// System.Boolean bl_Joystick::isFree
	bool ___isFree_14;
	// System.Int32 bl_Joystick::lastId
	int32_t ___lastId_15;
	// UnityEngine.UI.Image bl_Joystick::stickImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___stickImage_16;
	// UnityEngine.UI.Image bl_Joystick::backImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___backImage_17;
	// UnityEngine.Canvas bl_Joystick::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_18;
	// System.Single bl_Joystick::diff
	float ___diff_19;
	// UnityEngine.Vector3 bl_Joystick::PressScaleVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PressScaleVector_20;
};

// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50  : public CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE
{
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_LookAt
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LookAt_28;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_Follow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Follow_29;
	// Cinemachine.LensSettings Cinemachine.CinemachineVirtualCamera::m_Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___m_Lens_30;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineVirtualCamera::m_Transitions
	TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA ___m_Transitions_31;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCamera::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_32;
	// System.Boolean Cinemachine.CinemachineVirtualCamera::m_UserIsDragging
	bool ___m_UserIsDragging_36;
	// Cinemachine.CameraState Cinemachine.CinemachineVirtualCamera::m_State
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 ___m_State_37;
	// Cinemachine.CinemachineComponentBase[] Cinemachine.CinemachineVirtualCamera::m_ComponentPipeline
	CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077* ___m_ComponentPipeline_38;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_ComponentOwner
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ComponentOwner_39;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::mCachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mCachedLookAtTarget_40;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCamera::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___mCachedLookAtTargetVcam_41;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// TitleManager
struct TitleManager_t6030A56D57245C74D7D98F40591DF5246F1BE4CC  : public Singleton_1_t6B63F65B483BA968FA5697BB134D6FCA7208B9BF
{
	// UnityEngine.GameObject TitleManager::Settings
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Settings_5;
	// UnityEngine.GameObject TitleManager::SettingsImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SettingsImage_6;
	// AudioManager TitleManager::_audioManager
	AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* ____audioManager_7;
};

// TutorialManager
struct TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF  : public Singleton_1_tF5AD56B9EAB81823BF098B6B141758BFFC202E61
{
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<EffectData>
struct List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EffectDataU5BU5D_tFF423C87FBD5E8D66ADFDE9708A3CDCA8C97AD0E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<EffectData>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<MaterialEffect>
struct List_1_t0F0D6829B94247528F8812716A2971B3A00B7809_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MaterialEffectU5BU5D_t4D21F7AAE0DBA1701C7458FB2E615955C7C5F812* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<MaterialEffect>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// Comp

// Comp

// EffectShaderPropertyStr
struct EffectShaderPropertyStr_t4AC850D65A020351DC5B22616FCBF70B7FBD0D36_StaticFields
{
	// System.Int32 EffectShaderPropertyStr::Material_Color
	int32_t ___Material_Color_34;
	// System.Int32 EffectShaderPropertyStr::Material_Color_Factor
	int32_t ___Material_Color_Factor_35;
};

// EffectShaderPropertyStr

// Sound

// Sound

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// TransformExtension

// TransformExtension

// bl_JoystickUtils

// bl_JoystickUtils

// AudioManager/<>c__DisplayClass10_0

// AudioManager/<>c__DisplayClass10_0

// AudioManager/<>c__DisplayClass11_0

// AudioManager/<>c__DisplayClass11_0

// CinematicSequence/CameraSettings

// CinematicSequence/CameraSettings

// EndPerception/<LoadSceneAfterDelay>d__3

// EndPerception/<LoadSceneAfterDelay>d__3

// TutorialEndPerception/<LoadSceneAfterDelay>d__3

// TutorialEndPerception/<LoadSceneAfterDelay>d__3

// bl_Joystick/<ScaleJoysctick>d__22

// bl_Joystick/<ScaleJoysctick>d__22

// System.Collections.Generic.List`1/Enumerator<MaterialEffect>

// System.Collections.Generic.List`1/Enumerator<MaterialEffect>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// EffectData

// EffectData

// MaterialEffect

// MaterialEffect

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Touch

// UnityEngine.Touch

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.Sprite

// UnityEngine.Sprite

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Predicate`1<Sound>

// System.Predicate`1<Sound>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// Singleton`1<TitleManager>
struct Singleton_1_t6B63F65B483BA968FA5697BB134D6FCA7208B9BF_StaticFields
{
	// T Singleton`1::_inst
	TitleManager_t6030A56D57245C74D7D98F40591DF5246F1BE4CC* ____inst_4;
};

// Singleton`1<TitleManager>

// Singleton`1<TutorialManager>
struct Singleton_1_tF5AD56B9EAB81823BF098B6B141758BFFC202E61_StaticFields
{
	// T Singleton`1::_inst
	TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* ____inst_4;
};

// Singleton`1<TutorialManager>

// AnimatorController

// AnimatorController

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields
{
	// AudioManager AudioManager::instance
	AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* ___instance_4;
};

// AudioManager

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BlockMovement

// BlockMovement

// BowlRotation

// BowlRotation

// CameraMovement

// CameraMovement

// CameraTarget

// CameraTarget

// CinematicSequence

// CinematicSequence

// EffectController

// EffectController

// EffectDemo

// EffectDemo

// EndPerception

// EndPerception

// FallingPlayer

// FallingPlayer

// GameManager

// GameManager

// JumpPerception

// JumpPerception

// PlayerMovement

// PlayerMovement

// RenderEffect

// RenderEffect

// RespawnController

// RespawnController

// SettingsManager

// SettingsManager

// StagesManager

// StagesManager

// TutorialAnimationController

// TutorialAnimationController

// TutorialAudioManager

// TutorialAudioManager

// TutorialEndPerception

// TutorialEndPerception

// TutorialPlayerMovement

// TutorialPlayerMovement

// UIController

// UIController

// bl_ControllerExample

// bl_ControllerExample

// bl_Joystick

// bl_Joystick

// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_StaticFields
{
	// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate Cinemachine.CinemachineVirtualCamera::CreatePipelineOverride
	CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC* ___CreatePipelineOverride_34;
	// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate Cinemachine.CinemachineVirtualCamera::DestroyPipelineOverride
	DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842* ___DestroyPipelineOverride_35;
};

// Cinemachine.CinemachineVirtualCamera

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// TitleManager

// TitleManager

// TutorialManager

// TutorialManager

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Sound[]
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5  : public RuntimeArray
{
	ALIGN_FIELD (8) Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* m_Items[1];

	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// CinematicSequence/CameraSettings[]
struct CameraSettingsU5BU5D_t3D55306040009315D2C4E106A803B0EC6BA8F127  : public RuntimeArray
{
	ALIGN_FIELD (8) CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395* m_Items[1];

	inline CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4204C143D97E871DF2553329CFB0FBE3CD1A01F2_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___1_match, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared (Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<EffectData>::get_Item(System.Int32)
inline EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053 (List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* (*) (List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<EffectData>::get_Count()
inline int32_t List_1_get_Count_m481E3A9029D0DC57F50804D33F9C1DC3B6C5B267_inline (List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Comp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comp__ctor_m4A9D0313C2251A439E43CDB4FB6F0AA54E83F436 (Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<EffectData>::Sort(System.Collections.Generic.IComparer`1<T>)
inline void List_1_Sort_m9FB3B7F2491D13B7F0C0AFB2F63936A7C117E6EA (List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4*, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m4204C143D97E871DF2553329CFB0FBE3CD1A01F2_gshared)(__this, ___0_comparer, method);
}
// System.Void EffectController::CheckTransfromUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectController_CheckTransfromUpdate_mD1B61E362FB5734520EE49781E4AFE79276847FC (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void EffectController::UpdateEffectTransformByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectController_UpdateEffectTransformByIndex_mC5CCF35F2A7DF5767D2C4CF049E63530623EE9D9 (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, int32_t ___0_nIndex, const RuntimeMethod* method) ;
// System.Void EffectController::UPdateRenderLayerByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectController_UPdateRenderLayerByIndex_m5D51FD1EB64C1D610924DE827CF858D64A339A06 (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, int32_t ___0_nIndex, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_eulerAngles_m441C342F21FEFCED9BABED01FA516C97EA424D6E_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<RenderEffect>()
inline RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* GameObject_GetComponent_TisRenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92_m64C1CCB168F8A562BBCA6C4BDA6A9068B72E01BF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingLayerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<EffectData>::.ctor()
inline void List_1__ctor_mD05614C50A730F2250D8748FFECB7EA06926C658 (List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void EffectDemo::GenPrevEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDemo_GenPrevEffect_m5DF822BF7CA07E5C7B4CAF34BE3A6FB21A33588D (EffectDemo_tF67F4E1FA700D4A273B93F8B8E063EE07E53B98E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, const RuntimeMethod* method) ;
// System.Void EffectDemo::GenNextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDemo_GenNextEffect_m8617144F33A34D6A50E523542E0AEBF442CFB924 (EffectDemo_tF67F4E1FA700D4A273B93F8B8E063EE07E53B98E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_wrapMode_m1DE1C2813B72EDCCCEB396CFC91989358E8C3AD0 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void RenderEffect::RefreshMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect_RefreshMaterial_m16CD6F3A656EEDC9519D1A9592DE88FE50523C9A (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<MaterialEffect>::get_Count()
inline int32_t List_1_get_Count_m82290BE0D7F06E4F4D59F3862D252917B34290FA_inline (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void MaterialEffect::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialEffect__ctor_m907D8CAA2E68DF6AA133971BE878500D8B45D8BF (MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MaterialEffect>::Add(T)
inline void List_1_Add_m133D5F9FEFF116D3EBFE22B1404702AFB6DD5AF8_inline (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* __this, MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809*, MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<MaterialEffect>::get_Item(System.Int32)
inline MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* List_1_get_Item_mF0B1449F295F2A3FED1A86287900FEE149625F2F (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* (*) (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void MaterialEffect::ReInitMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialEffect_ReInitMaterial_m5E49C87439BC52481207B30EF3DA0BC7C6FB8B5D (MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MaterialEffect>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mA14822A8B1D091BBE5412537E612BAADB70EBBB1 (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void RenderEffect::UpdateRenderLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect_UpdateRenderLayer_m635F5C1B4D0B3421DAA3B94BF223CAD4BC432625 (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldUp, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MaterialEffect>::GetEnumerator()
inline Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B List_1_GetEnumerator_mF9F72E35C91DC3AE980ECE6DA62D4862123D35A9 (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B (*) (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<MaterialEffect>::Dispose()
inline void Enumerator_Dispose_m41B5C2CED673F0B3BE439369B3A4541219535C1A (Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<MaterialEffect>::get_Current()
inline MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* Enumerator_get_Current_m1167F415270FA50B88EB8C2C59F6D0C5F8AAD6A1_inline (Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B* __this, const RuntimeMethod* method)
{
	return ((  MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* (*) (Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void MaterialEffect::UpdateEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialEffect_UpdateEffect_m570F2F54C66246D9739A7F3249E753A0B63C6D58 (MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* __this, float ___0_execueTime, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<MaterialEffect>::MoveNext()
inline bool Enumerator_MoveNext_m6D9C4C25718A54A5F4913DED9F202C8977AB9545 (Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void RenderEffect::UpdateBillBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect_UpdateBillBoard_m73C5CE488CCE31F1B3F21C88BFCAF5BCF0D05B92 (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MaterialEffect>::.ctor()
inline void List_1__ctor_m1AAA393CC7D3B1753CEA4DDDF9C748F677B34AAB (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Transform TransformExtension::FindChildByRecursive(UnityEngine.Transform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TransformExtension_FindChildByRecursive_m2F00DBB75922A75791D5ABA2B55EEF422AB5D7D4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_aParent, String_t* ___1_aName, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<AudioManager>()
inline AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473 (const RuntimeMethod* method)
{
	return ((  AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<AudioManager>()
inline AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* GameObject_AddComponent_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m36CD7D85487E83CF4283FE94A4A0E66DDCF85C4C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void AudioManager::PlayBGM(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayBGM_m275E3FC06A247D389C145F105163D4627AB25EDC (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___0_title, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___0_value, const RuntimeMethod* method) ;
// System.Void AudioManager/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m92D66522F24859DE832C8C1842D19D9DD86973B0 (U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Sound>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// T System.Array::Find<Sound>(T[],System.Predicate`1<T>)
inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7 (SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* ___0_array, Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* ___1_match, const RuntimeMethod* method)
{
	return ((  Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* (*) (SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5*, Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared)(___0_array, ___1_match, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void AudioManager/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m830432EE5F70D2FC35A611BABD0087A79BF15210 (U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_mute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// AudioManager AudioManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211 (const RuntimeMethod* method) ;
// System.Void AudioManager::PlaySFX(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___0_title, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void AudioManager::ToggleBGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_ToggleBGM_m99547DB6BED0E3F1643F8398C3911DB6267146D2 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// System.Void AudioManager::ToggleSFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_ToggleSFX_m6A7E11E4920BE55F91E59EFACA43947169567C9C (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// System.Void AudioManager::BGMVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_BGMVolume_m61A139A19CC58F3D4E5858F5A3EB95CD143E3B30 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, float ___0_volume, const RuntimeMethod* method) ;
// System.Void AudioManager::SFXVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SFXVolume_m97D92878926643ECA154A03F51E51C18A1961A65 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, float ___0_volume, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, int32_t ___1_relativeTo, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void CameraMovement::Follow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Follow_m1796C10EC433556C3A5C7FD532D74880FC5735C8 (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void CinematicSequence::SwitchToCamera(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinematicSequence_SwitchToCamera_mAA4C3AED6F48015042B1B9063D7A8D267F104DCC (CinematicSequence_tC92C443D56B66031465CE1D38FE7B054A2E03EB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void CinematicSequence::EndSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinematicSequence_EndSequence_m489E47035C3CCBF33E5AC2368FEE57CAE40AC515 (CinematicSequence_tC92C443D56B66031465CE1D38FE7B054A2E03EB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LayerMask_LayerToName_mC7A5797D35F5307031F317741226727B307F34D0 (int32_t ___0_layer, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___0_layerName, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EndPerception::LoadSceneAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndPerception_LoadSceneAfterDelay_m34B0EFED80BA4216B604EFE8BD8B70C69BDE8F90 (EndPerception_tA1008EBF2B234DC579D5ADA2365FFBF52E5EB912* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void AnimatorController::PlaySuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlaySuccess_m99A47A106A40CCAA476424C764D8CAF43FFE6AED (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// System.Void EndPerception/<LoadSceneAfterDelay>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAfterDelayU3Ed__3__ctor_mCB0F5EEB26571BEAC3AD15D54A98D316EDEEE7EF (U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void AnimatorController::PlayJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayJump_m6C35CDBBD70D42B4214E3FE13AFE8DC7A080D0DE (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void PlayerMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Move_m49FF83A1018F85FA83A97516D57FE7D8331EB1C9 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single bl_Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float bl_Joystick_get_Horizontal_m95F408BB05DB3B8F060A9B5C7E39B0BB818A6010 (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) ;
// System.Single bl_Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float bl_Joystick_get_Vertical_m9A3ED04564A00D796F667688280FA5E42240D552 (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_RotateTowards_m884BB56D5A071EF6008F9354D5FF1C9A1913AF92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxRadiansDelta, float ___3_maxMagnitudeDelta, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// System.Void AnimatorController::PlayFall1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayFall1_m254BC5D99AE7046A82DD429CA9A94BE025674836 (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) ;
// System.Void AnimatorController::PlayRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayRun_m3FF02C4AEB04968F33EB805C8DBB0F331CBE59FD (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) ;
// System.Void AnimatorController::PlayIdle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayIdle_m9F870E698D12E5118BAEB2943B1E45E1CD398605 (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rigidbody::get_mass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody_get_mass_m09DDDDC437499B83B3BD0D77C134BFDC3E667054 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, const RuntimeMethod* method) ;
// System.Void RespawnController::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnController_Respawn_m6D365CB8033C59EB9C574D5E32EE33A4D1175ECA (RespawnController_t35874BA400906EE2F60120A5B4DA61D25FC00C13* __this, const RuntimeMethod* method) ;
// System.Void AnimatorController::PlayFall2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayFall2_mBF6A3E0D8C669191C2F23A0CF261FB86B1ED24A9 (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) ;
// System.Void AnimatorController::PlayFall3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayFall3_m09170DFC693856EE763261CC40579DD55640140B (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) ;
// System.Void AnimatorController::PlayRespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayRespawn_m998510683B2446C8AD5661C0C75760D0CB65B24B (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) ;
// System.Void TutorialPlayerMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialPlayerMovement_Move_mA196260AFBCE51D59C3F8970DAA87462A9C988A2 (TutorialPlayerMovement_tFD1DE5E527A7E6E1342B25C1F33D8C47CF0AC485* __this, const RuntimeMethod* method) ;
// System.Void AnimatorController::PlaySlide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlaySlide_m9881674FE32A0C1EA0BEE538D0FAAFA31514E870 (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void Singleton`1<TitleManager>::.ctor()
inline void Singleton_1__ctor_mE0F8E20E803B92BF19C27E78D4665616A26C8E6D (Singleton_1_t6B63F65B483BA968FA5697BB134D6FCA7208B9BF* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t6B63F65B483BA968FA5697BB134D6FCA7208B9BF*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// System.Collections.IEnumerator TutorialEndPerception::LoadSceneAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TutorialEndPerception_LoadSceneAfterDelay_mD7230FC3E84C5DDF7E0F5A1517AEC20B01B43496 (TutorialEndPerception_tC8F6F2DD575845690116868F5A4C7FED7E5A9EB8* __this, const RuntimeMethod* method) ;
// System.Void TutorialEndPerception/<LoadSceneAfterDelay>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAfterDelayU3Ed__3__ctor_m9A7B5D3BD9B1A491D60B7E3FD753723A37E0DDD2 (U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Singleton`1<TutorialManager>::.ctor()
inline void Singleton_1__ctor_mD86770CD48FC638A29119FCE8C16EF6A605ACDAB (Singleton_1_tF5AD56B9EAB81823BF098B6B141758BFFC202E61* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tF5AD56B9EAB81823BF098B6B141758BFFC202E61*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single bl_Joystick::get_smoothTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float bl_Joystick_get_smoothTime_m806C92B9C229CDCA8B5AECA1BB9F9A7C95C775EB (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator bl_Joystick::ScaleJoysctick(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bl_Joystick_ScaleJoysctick_mE6A3C9B856E4E5F0E545F71D175C47D8AD3DDD8F (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, bool ___0_increase, const RuntimeMethod* method) ;
// System.Void bl_Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bl_Joystick_OnDrag_mCE61CD1EA65E9F404D9BF3A3EF5EBE8C93EE8DFF (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) ;
// System.Int32 bl_Joystick::get_GetTouchID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bl_Joystick_get_GetTouchID_m587BFA3442E073664B5DFB5AD6175B2C54A0A2B8 (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 bl_JoystickUtils::TouchPosition(UnityEngine.Canvas,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 bl_JoystickUtils_TouchPosition_mC808A638B32EDAE88F382A79C1042BB75242B28B (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___0__Canvas, int32_t ___1_touchID, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single bl_Joystick::get_radio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float bl_Joystick_get_radio_m37956085EF6C0BC7F169238743B236608999A5FF (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void bl_Joystick/<ScaleJoysctick>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleJoysctickU3Ed__22__ctor_mBE3E81536C29F175BB0FC0A7B4F678D6CDAEBBDF (U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___2_cam, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_localPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraTarget::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTarget_LateUpdate_mC1BF13EC0CA0E20CCACAE192AD4914D508752C79 (CameraTarget_t078491F9A4589091B931D7C3651E01DA95C55FEC* __this, const RuntimeMethod* method) 
{
	{
		// transform.LookAt (m_TargetOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_TargetOffset_4;
		NullCheck(L_0);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CameraTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTarget__ctor_mE5497C8889636F2EAE80CB7152D605ADF15B6624 (CameraTarget_t078491F9A4589091B931D7C3651E01DA95C55FEC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EffectData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectData__ctor_mB8DA7EBEC217DE7ECE71FE64CBDA287E669E613B (EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* __this, const RuntimeMethod* method) 
{
	{
		// public bool m_bFoldoutOpen = true;
		__this->___m_bFoldoutOpen_0 = (bool)1;
		// public bool m_bTransformFoldout = true;
		__this->___m_bTransformFoldout_3 = (bool)1;
		// public Vector3 m_goPos = new Vector3 (0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___m_goPos_4 = L_0;
		// public Vector3 m_goRotation = new Vector3 (0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___m_goRotation_5 = L_1;
		// public Vector3 m_goScale = new Vector3 (1, 1, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___m_goScale_6 = L_2;
		// public bool m_bSortingFoldout = true;
		__this->___m_bSortingFoldout_7 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EffectController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectController_Awake_m67098030EB5D19F1ADC230C866ADBAFD45DB4550 (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m9FB3B7F2491D13B7F0C0AFB2F63936A7C117E6EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m481E3A9029D0DC57F50804D33F9C1DC3B6C5B267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242ED1F9FE6F6779DBD32716F054376E2DEAA902);
		s_Il2CppMethodInitialized = true;
	}
	Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < m_kEffectGenList.Count; i++) {
		V_1 = 0;
		goto IL_0024;
	}

IL_0004:
	{
		// Invoke ("GenEffect", m_kEffectGenList [i].m_fTimeSec);
		List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* L_0 = __this->___m_kEffectGenList_6;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_2;
		L_2 = List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053(L_0, L_1, List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053_RuntimeMethod_var);
		NullCheck(L_2);
		float L_3 = L_2->___m_fTimeSec_1;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral242ED1F9FE6F6779DBD32716F054376E2DEAA902, L_3, NULL);
		// for (int i = 0; i < m_kEffectGenList.Count; i++) {
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0024:
	{
		// for (int i = 0; i < m_kEffectGenList.Count; i++) {
		int32_t L_5 = V_1;
		List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* L_6 = __this->___m_kEffectGenList_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m481E3A9029D0DC57F50804D33F9C1DC3B6C5B267_inline(L_6, List_1_get_Count_m481E3A9029D0DC57F50804D33F9C1DC3B6C5B267_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// Comp comparer = new Comp ();            ///< ??Comparer.
		Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6* L_8 = (Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6*)il2cpp_codegen_object_new(Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Comp__ctor_m4A9D0313C2251A439E43CDB4FB6F0AA54E83F436(L_8, NULL);
		V_0 = L_8;
		// m_kEffectGenList.Sort (comparer);        ///< ?????.
		List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* L_9 = __this->___m_kEffectGenList_6;
		Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6* L_10 = V_0;
		NullCheck(L_9);
		List_1_Sort_m9FB3B7F2491D13B7F0C0AFB2F63936A7C117E6EA(L_9, L_10, List_1_Sort_m9FB3B7F2491D13B7F0C0AFB2F63936A7C117E6EA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EffectController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectController_Update_m8270770B46A802D193B21FD854B99901A6019551 (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, const RuntimeMethod* method) 
{
	{
		// CheckTransfromUpdate ();
		EffectController_CheckTransfromUpdate_mD1B61E362FB5734520EE49781E4AFE79276847FC(__this, NULL);
		// }
		return;
	}
}
// System.Void EffectController::GenEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectController_GenEffect_m66FB9D941D66E52BB852305F1F1EFEC47E366E77 (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* V_0 = NULL;
	{
		// EffectData effectData = m_kEffectGenList[m_nNowIndex];
		List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* L_0 = __this->___m_kEffectGenList_6;
		int32_t L_1 = __this->___m_nNowIndex_7;
		NullCheck(L_0);
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_2;
		L_2 = List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053(L_0, L_1, List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053_RuntimeMethod_var);
		V_0 = L_2;
		// if (effectData == null)
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_3 = V_0;
		if (L_3)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// if(effectData.m_goEffect != null) {
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_4 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___m_goEffect_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0068;
		}
	}
	{
		// GameObject go = Instantiate (effectData.m_goEffect);
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_7 = V_0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___m_goEffect_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// go.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_11, L_12, NULL);
		// go.name = m_nNowIndex.ToString ();    ///< ???.
		int32_t* L_13 = (&__this->___m_nNowIndex_7);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		NullCheck(L_10);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_10, L_14, NULL);
		// UpdateEffectTransformByIndex (m_nNowIndex);
		int32_t L_15 = __this->___m_nNowIndex_7;
		EffectController_UpdateEffectTransformByIndex_mC5CCF35F2A7DF5767D2C4CF049E63530623EE9D9(__this, L_15, NULL);
		// UPdateRenderLayerByIndex (m_nNowIndex);
		int32_t L_16 = __this->___m_nNowIndex_7;
		EffectController_UPdateRenderLayerByIndex_m5D51FD1EB64C1D610924DE827CF858D64A339A06(__this, L_16, NULL);
	}

IL_0068:
	{
		// m_nNowIndex++;
		int32_t L_17 = __this->___m_nNowIndex_7;
		__this->___m_nNowIndex_7 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		// }
		return;
	}
}
// System.Void EffectController::CheckTransfromUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectController_CheckTransfromUpdate_mD1B61E362FB5734520EE49781E4AFE79276847FC (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	int32_t V_2 = 0;
	EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* V_3 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	{
		// foreach (Transform tf in transform) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ba:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_5;
					if (!L_3)
					{
						goto IL_00cd;
					}
				}
				{
					RuntimeObject* L_4 = V_5;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_00cd:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ad_1;
			}

IL_0011_1:
			{
				// foreach (Transform tf in transform) {
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// int nIndex = int.Parse (tf.name);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
				int32_t L_9;
				L_9 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_8, NULL);
				V_2 = L_9;
				// EffectData effectData = m_kEffectGenList[nIndex];
				List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* L_10 = __this->___m_kEffectGenList_6;
				int32_t L_11 = V_2;
				NullCheck(L_10);
				EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_12;
				L_12 = List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053(L_10, L_11, List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053_RuntimeMethod_var);
				V_3 = L_12;
				// if (effectData == null)
				EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_13 = V_3;
				if (L_13)
				{
					goto IL_003e_1;
				}
			}
			{
				// return;
				goto IL_00ce;
			}

IL_003e_1:
			{
				// if (tf.position != effectData.m_goPos)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_1;
				NullCheck(L_14);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
				EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_16 = V_3;
				NullCheck(L_16);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16->___m_goPos_4;
				bool L_18;
				L_18 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_15, L_17, NULL);
				if (!L_18)
				{
					goto IL_005d_1;
				}
			}
			{
				// effectData.m_goPos = tf.position;
				EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_19 = V_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_1;
				NullCheck(L_20);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
				L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
				NullCheck(L_19);
				L_19->___m_goPos_4 = L_21;
			}

IL_005d_1:
			{
				// if (tf.localRotation.eulerAngles != effectData.m_goRotation)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_1;
				NullCheck(L_22);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
				L_23 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_22, NULL);
				V_4 = L_23;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_4), NULL);
				EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_25 = V_3;
				NullCheck(L_25);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = L_25->___m_goRotation_5;
				bool L_27;
				L_27 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_24, L_26, NULL);
				if (!L_27)
				{
					goto IL_008e_1;
				}
			}
			{
				// effectData.m_goRotation = tf.localRotation.eulerAngles;
				EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_28 = V_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_1;
				NullCheck(L_29);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
				L_30 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_29, NULL);
				V_4 = L_30;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
				L_31 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_4), NULL);
				NullCheck(L_28);
				L_28->___m_goRotation_5 = L_31;
			}

IL_008e_1:
			{
				// if (tf.localScale != effectData.m_goScale)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_1;
				NullCheck(L_32);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
				L_33 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_32, NULL);
				EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_34 = V_3;
				NullCheck(L_34);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = L_34->___m_goScale_6;
				bool L_36;
				L_36 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_33, L_35, NULL);
				if (!L_36)
				{
					goto IL_00ad_1;
				}
			}
			{
				// effectData.m_goScale = tf.localScale;
				EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_37 = V_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = V_1;
				NullCheck(L_38);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
				L_39 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_38, NULL);
				NullCheck(L_37);
				L_37->___m_goScale_6 = L_39;
			}

IL_00ad_1:
			{
				// foreach (Transform tf in transform) {
				RuntimeObject* L_40 = V_0;
				NullCheck(L_40);
				bool L_41;
				L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_40);
				if (L_41)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_00ce;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void EffectController::UpdateEffectTransformByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectController_UpdateEffectTransformByIndex_mC5CCF35F2A7DF5767D2C4CF049E63530623EE9D9 (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, int32_t ___0_nIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* V_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Transform tf = this.transform.Find (nIndex.ToString());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_nIndex), NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, L_1, NULL);
		V_0 = L_2;
		// if (tf == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// EffectData effectData = m_kEffectGenList[nIndex];
		List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* L_5 = __this->___m_kEffectGenList_6;
		int32_t L_6 = ___0_nIndex;
		NullCheck(L_5);
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_7;
		L_7 = List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053(L_5, L_6, List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053_RuntimeMethod_var);
		V_1 = L_7;
		// if (effectData == null)
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_8 = V_1;
		if (L_8)
		{
			goto IL_002e;
		}
	}
	{
		// return;
		return;
	}

IL_002e:
	{
		// tf.position = effectData.m_goPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_0;
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_10 = V_1;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___m_goPos_4;
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_11, NULL);
		// Quaternion effectObjRotation = new Quaternion ();
		il2cpp_codegen_initobj((&V_2), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		// effectObjRotation.eulerAngles = effectData.m_goRotation;
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_12 = V_1;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___m_goRotation_5;
		Quaternion_set_eulerAngles_m441C342F21FEFCED9BABED01FA516C97EA424D6E_inline((&V_2), L_13, NULL);
		// tf.localRotation = effectObjRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_2;
		NullCheck(L_14);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_14, L_15, NULL);
		// tf.localScale = effectData.m_goScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_0;
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_17 = V_1;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17->___m_goScale_6;
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_18, NULL);
		// }
		return;
	}
}
// UnityEngine.ParticleSystem EffectController::CheckHasParticleSystem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* EffectController_CheckHasParticleSystem_m765D2219D89AF1E9FE7DA9ECD1DB92600F11E799 (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, int32_t ___0_nIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// Transform tf = this.transform.Find (nIndex.ToString());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_nIndex), NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, L_1, NULL);
		V_0 = L_2;
		// if (tf == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// return null;
		return (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL;
	}

IL_001e:
	{
		// ParticleSystem particleSystem = tf.gameObject.GetComponent<ParticleSystem> ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7;
		L_7 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_6, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		// return particleSystem;
		return L_7;
	}
}
// RenderEffect EffectController::CheckHasRenderEffectScript(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* EffectController_CheckHasRenderEffectScript_mB33D79E74D707439C2BEC4C58753AD7DDE1D49A4 (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, int32_t ___0_nIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92_m64C1CCB168F8A562BBCA6C4BDA6A9068B72E01BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// Transform tf = this.transform.Find (nIndex.ToString());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_nIndex), NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, L_1, NULL);
		V_0 = L_2;
		// if (tf == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// return null;
		return (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92*)NULL;
	}

IL_001e:
	{
		// RenderEffect renderEffect = tf.gameObject.GetComponent<RenderEffect> ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* L_7;
		L_7 = GameObject_GetComponent_TisRenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92_m64C1CCB168F8A562BBCA6C4BDA6A9068B72E01BF(L_6, GameObject_GetComponent_TisRenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92_m64C1CCB168F8A562BBCA6C4BDA6A9068B72E01BF_RuntimeMethod_var);
		// return renderEffect;
		return L_7;
	}
}
// System.Void EffectController::UPdateRenderLayerByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectController_UPdateRenderLayerByIndex_m5D51FD1EB64C1D610924DE827CF858D64A339A06 (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, int32_t ___0_nIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* V_1 = NULL;
	{
		// Transform tf = this.transform.Find (nIndex.ToString());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_nIndex), NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, L_1, NULL);
		V_0 = L_2;
		// if (tf == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// EffectData effectData = m_kEffectGenList[nIndex];
		List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* L_5 = __this->___m_kEffectGenList_6;
		int32_t L_6 = ___0_nIndex;
		NullCheck(L_5);
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_7;
		L_7 = List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053(L_5, L_6, List_1_get_Item_m975119211743B99548AE42D32D975FBBC700F053_RuntimeMethod_var);
		V_1 = L_7;
		// if (effectData == null)
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_8 = V_1;
		if (L_8)
		{
			goto IL_002e;
		}
	}
	{
		// return;
		return;
	}

IL_002e:
	{
		// Renderer render = tf.gameObject.GetComponent<Renderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11;
		L_11 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_10, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		// render.sortingLayerID = effectData.m_SortingLayerID;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = L_11;
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___m_SortingLayerID_8;
		NullCheck(L_12);
		Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49(L_12, L_14, NULL);
		// render.sortingOrder = effectData.m_SortingOrder;
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->___m_SortingOrder_9;
		NullCheck(L_12);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_12, L_16, NULL);
		// }
		return;
	}
}
// System.Void EffectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectController__ctor_m17616001669E21653E3D798F794E065E642193DB (EffectController_t2BBD596DAB3F63965317EBB0688437C3605CDF3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD05614C50A730F2250D8748FFECB7EA06926C658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<EffectData> m_kEffectGenList = new List<EffectData>();        ///< ??????.
		List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4* L_0 = (List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4*)il2cpp_codegen_object_new(List_1_t5CE2BB98C939D3F5C3C1ED32034B87570C54AEE4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD05614C50A730F2250D8748FFECB7EA06926C658(L_0, List_1__ctor_mD05614C50A730F2250D8748FFECB7EA06926C658_RuntimeMethod_var);
		__this->___m_kEffectGenList_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_kEffectGenList_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Comp::Compare(EffectData,EffectData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comp_Compare_mE73C4C7BF62EDE5DA758B783C6E2858885BF6755 (Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6* __this, EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* ___0_x, EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* ___1_y, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (x == null) {
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_0 = ___0_x;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (y == null)
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_1 = ___1_y;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0008:
	{
		// return 1;
		return 1;
	}

IL_000a:
	{
		// if (y == null) {
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_2 = ___1_y;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000f:
	{
		// float fDiff = x.m_fTimeSec.CompareTo (y.m_fTimeSec);
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_3 = ___0_x;
		NullCheck(L_3);
		float* L_4 = (&L_3->___m_fTimeSec_1);
		EffectData_t6AAAD6E8A14E2A8F15B0E3EC836975813F0C7A33* L_5 = ___1_y;
		NullCheck(L_5);
		float L_6 = L_5->___m_fTimeSec_1;
		int32_t L_7;
		L_7 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_4, L_6, NULL);
		V_0 = ((float)L_7);
		// if (fDiff > 0)
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_002c:
	{
		// else if (fDiff < 0)
		float L_9 = V_0;
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0036:
	{
		// return 0;
		return 0;
	}
}
// System.Void Comp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comp__ctor_m4A9D0313C2251A439E43CDB4FB6F0AA54E83F436 (Comp_tE6A2BE45FCBDA49DAC14CC4A4C368E14C60356B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EffectDemo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDemo_Awake_m56A0B9DE89F172A57D648A2D023365E9040D405F (EffectDemo_tF67F4E1FA700D4A273B93F8B8E063EE07E53B98E* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying == false)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// m_NowIndex = 1;
		__this->___m_NowIndex_8 = 1;
		// GenPrevEffect ();
		EffectDemo_GenPrevEffect_m5DF822BF7CA07E5C7B4CAF34BE3A6FB21A33588D(__this, NULL);
		// }
		return;
	}
}
// System.Void EffectDemo::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDemo_OnDestroy_m486A3A04BDBB0CE8679E7742FF660D980371AE06 (EffectDemo_tF67F4E1FA700D4A273B93F8B8E063EE07E53B98E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Object.DestroyImmediate (m_NowShowEffect);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_NowShowEffect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_0, NULL);
		// }
		return;
	}
}
// System.Void EffectDemo::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDemo_LateUpdate_m230AFF276B1B77DCB84C267DE2894ADE8AE6245E (EffectDemo_tF67F4E1FA700D4A273B93F8B8E063EE07E53B98E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying == false)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (m_LookAtEffect && m_NowShowEffect) {
		bool L_1 = __this->___m_LookAtEffect_6;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_NowShowEffect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// transform.LookAt (m_NowShowEffect.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___m_NowShowEffect_7;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		NullCheck(L_4);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_4, L_7, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void EffectDemo::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDemo_OnGUI_m4F33D3D762676405B59880ABD0120BBDB9FF144F (EffectDemo_tF67F4E1FA700D4A273B93F8B8E063EE07E53B98E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8BBDEF87EB9A06C96F80281F3E896E25F22FC3E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying == false)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (GUI.Button (new Rect (0, 25, 80, 50), "Prev")) {
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_1), (0.0f), (25.0f), (80.0f), (50.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B(L_1, _stringLiteralF8BBDEF87EB9A06C96F80281F3E896E25F22FC3E, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// GenPrevEffect ();
		EffectDemo_GenPrevEffect_m5DF822BF7CA07E5C7B4CAF34BE3A6FB21A33588D(__this, NULL);
	}

IL_0033:
	{
		// if (GUI.Button (new Rect (90, 25, 80, 50), "Next")) {
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), (90.0f), (25.0f), (80.0f), (50.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B(L_3, _stringLiteral5A1278AB54EFEBBD1E0E03AB2677F22D39311C27, NULL);
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		// GenNextEffect ();
		EffectDemo_GenNextEffect_m8617144F33A34D6A50E523542E0AEBF442CFB924(__this, NULL);
	}

IL_005e:
	{
		// GUI.Label (new Rect (5, 0, 350, 50), m_NowEffectName);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		memset((&L_5), 0, sizeof(L_5));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_5), (5.0f), (0.0f), (350.0f), (50.0f), /*hidden argument*/NULL);
		String_t* L_6 = __this->___m_NowEffectName_9;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void EffectDemo::GenPrevEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDemo_GenPrevEffect_m5DF822BF7CA07E5C7B4CAF34BE3A6FB21A33588D (EffectDemo_tF67F4E1FA700D4A273B93F8B8E063EE07E53B98E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NowIndex--;
		int32_t L_0 = __this->___m_NowIndex_8;
		__this->___m_NowIndex_8 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (m_NowIndex < 0) {
		int32_t L_1 = __this->___m_NowIndex_8;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		// m_NowIndex = 0;
		__this->___m_NowIndex_8 = 0;
		// return;
		return;
	}

IL_001f:
	{
		// if (m_NowShowEffect != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_NowShowEffect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Object.Destroy (m_NowShowEffect);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_NowShowEffect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0038:
	{
		// m_NowShowEffect =  Instantiate(m_EffectPrefabList [m_NowIndex]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___m_EffectPrefabList_5;
		int32_t L_6 = __this->___m_NowIndex_8;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___m_NowShowEffect_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NowShowEffect_7), (void*)L_8);
		// m_NowEffectName = m_NowShowEffect.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___m_NowShowEffect_7;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		__this->___m_NowEffectName_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NowEffectName_9), (void*)L_10);
		// }
		return;
	}
}
// System.Void EffectDemo::GenNextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDemo_GenNextEffect_m8617144F33A34D6A50E523542E0AEBF442CFB924 (EffectDemo_tF67F4E1FA700D4A273B93F8B8E063EE07E53B98E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NowIndex++;
		int32_t L_0 = __this->___m_NowIndex_8;
		__this->___m_NowIndex_8 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (m_NowIndex >= m_EffectPrefabList.Count) {
		int32_t L_1 = __this->___m_NowIndex_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___m_EffectPrefabList_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0035;
		}
	}
	{
		// m_NowIndex = m_EffectPrefabList.Count - 1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___m_EffectPrefabList_5;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_4, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		__this->___m_NowIndex_8 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		// return;
		return;
	}

IL_0035:
	{
		// if (m_NowShowEffect != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_NowShowEffect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// Object.Destroy (m_NowShowEffect);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___m_NowShowEffect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_004e:
	{
		// m_NowShowEffect =  Instantiate(m_EffectPrefabList [m_NowIndex]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___m_EffectPrefabList_5;
		int32_t L_10 = __this->___m_NowIndex_8;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___m_NowShowEffect_7 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NowShowEffect_7), (void*)L_12);
		// m_NowEffectName = m_NowShowEffect.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_NowShowEffect_7;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		__this->___m_NowEffectName_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NowEffectName_9), (void*)L_14);
		// }
		return;
	}
}
// System.Void EffectDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDemo__ctor_m6CFD5A58CEC268FEE194AF10AA14D8542D1FC686 (EffectDemo_tF67F4E1FA700D4A273B93F8B8E063EE07E53B98E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> m_EffectPrefabList = new List<GameObject> ();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___m_EffectPrefabList_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EffectPrefabList_5), (void*)L_0);
		// public bool m_LookAtEffect = true;
		__this->___m_LookAtEffect_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EffectShaderPropertyStr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectShaderPropertyStr__ctor_m78D72570ABF740DEBD279DF1B12E535E8D5DB7BA (EffectShaderPropertyStr_t4AC850D65A020351DC5B22616FCBF70B7FBD0D36* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void EffectShaderPropertyStr::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectShaderPropertyStr__cctor_m50A7D7953E673BAF658899363440F30F5B509053 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EffectShaderPropertyStr_t4AC850D65A020351DC5B22616FCBF70B7FBD0D36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9620DD433884E3D1F553FB3CB2B95B527831E855);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int Material_Color = Shader.PropertyToID (EffectShaderPropertyStr.ColorStr);
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, NULL);
		((EffectShaderPropertyStr_t4AC850D65A020351DC5B22616FCBF70B7FBD0D36_StaticFields*)il2cpp_codegen_static_fields_for(EffectShaderPropertyStr_t4AC850D65A020351DC5B22616FCBF70B7FBD0D36_il2cpp_TypeInfo_var))->___Material_Color_34 = L_0;
		// public static readonly int Material_Color_Factor = Shader.PropertyToID (EffectShaderPropertyStr.ColorFactor);
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral9620DD433884E3D1F553FB3CB2B95B527831E855, NULL);
		((EffectShaderPropertyStr_t4AC850D65A020351DC5B22616FCBF70B7FBD0D36_StaticFields*)il2cpp_codegen_static_fields_for(EffectShaderPropertyStr_t4AC850D65A020351DC5B22616FCBF70B7FBD0D36_il2cpp_TypeInfo_var))->___Material_Color_Factor_35 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MaterialEffect::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialEffect__ctor_m907D8CAA2E68DF6AA133971BE878500D8B45D8BF (MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float m_AlphaAnimationTimeScale = 1.0f;
		__this->___m_AlphaAnimationTimeScale_2 = (1.0f);
		// public AnimationCurve m_AlphaCurve = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_0, NULL);
		__this->___m_AlphaCurve_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AlphaCurve_3), (void*)L_0);
		// public MaterialEffect(Material material)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialEffect::ReInitMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialEffect_ReInitMaterial_m5E49C87439BC52481207B30EF3DA0BC7C6FB8B5D (MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4179DB2FDDB1F9A3EFB24065914C0BA86DAD4D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (material == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// m_EffectMaterial = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___0_material;
		__this->___m_EffectMaterial_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EffectMaterial_0), (void*)L_2);
		// if(material.HasProperty(EffectShaderPropertyStr.MainTexStr))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___0_material;
		NullCheck(L_3);
		bool L_4;
		L_4 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_3, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// m_MainTexture = material.GetTexture(EffectShaderPropertyStr.MainTexStr);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___0_material;
		NullCheck(L_5);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6;
		L_6 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_5, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, NULL);
		__this->___m_MainTexture_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MainTexture_4), (void*)L_6);
	}

IL_002f:
	{
		// if (material.HasProperty(EffectShaderPropertyStr.CutTexStr))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___0_material;
		NullCheck(L_7);
		bool L_8;
		L_8 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_7, _stringLiteralE4179DB2FDDB1F9A3EFB24065914C0BA86DAD4D7, NULL);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// m_MaskTexutre = material.GetTexture(EffectShaderPropertyStr.CutTexStr);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___0_material;
		NullCheck(L_9);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_10;
		L_10 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_9, _stringLiteralE4179DB2FDDB1F9A3EFB24065914C0BA86DAD4D7, NULL);
		__this->___m_MaskTexutre_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MaskTexutre_5), (void*)L_10);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void MaterialEffect::UpdateEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialEffect_UpdateEffect_m570F2F54C66246D9739A7F3249E753A0B63C6D58 (MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* __this, float ___0_execueTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4179DB2FDDB1F9A3EFB24065914C0BA86DAD4D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_MainTexture != null && m_MainTexWrapMode != m_MainTexture.wrapMode)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___m_MainTexture_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = __this->___m_MainTexWrapMode_6;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = __this->___m_MainTexture_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Texture_get_wrapMode_m1DE1C2813B72EDCCCEB396CFC91989358E8C3AD0(L_3, NULL);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		// m_MainTexture.wrapMode = m_MainTexWrapMode;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = __this->___m_MainTexture_4;
		int32_t L_6 = __this->___m_MainTexWrapMode_6;
		NullCheck(L_5);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_5, L_6, NULL);
	}

IL_0032:
	{
		// if (m_MaskTexutre != null && m_MaskTexWrapMode != m_MaskTexutre.wrapMode)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = __this->___m_MaskTexutre_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_9 = __this->___m_MaskTexWrapMode_7;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_10 = __this->___m_MaskTexutre_5;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Texture_get_wrapMode_m1DE1C2813B72EDCCCEB396CFC91989358E8C3AD0(L_10, NULL);
		if ((((int32_t)L_9) == ((int32_t)L_11)))
		{
			goto IL_0064;
		}
	}
	{
		// m_MaskTexutre.wrapMode = m_MaskTexWrapMode;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12 = __this->___m_MaskTexutre_5;
		int32_t L_13 = __this->___m_MaskTexWrapMode_7;
		NullCheck(L_12);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_12, L_13, NULL);
	}

IL_0064:
	{
		// if (m_EnableUVScroll) {
		bool L_14 = __this->___m_EnableUVScroll_8;
		if (!L_14)
		{
			goto IL_00be;
		}
	}
	{
		// if(m_MainTexture)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_15 = __this->___m_MainTexture_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0095;
		}
	}
	{
		// m_EffectMaterial.SetTextureOffset (EffectShaderPropertyStr.MainTexStr, m_UVScrollMainTex * execueTime);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___m_EffectMaterial_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___m_UVScrollMainTex_9;
		float L_19 = ___0_execueTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_18, L_19, NULL);
		NullCheck(L_17);
		Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1(L_17, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_20, NULL);
	}

IL_0095:
	{
		// if(m_MaskTexutre)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_21 = __this->___m_MaskTexutre_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_21, NULL);
		if (!L_22)
		{
			goto IL_00be;
		}
	}
	{
		// m_EffectMaterial.SetTextureOffset (EffectShaderPropertyStr.CutTexStr, m_UVScrollCutTex * execueTime);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___m_EffectMaterial_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = __this->___m_UVScrollCutTex_10;
		float L_25 = ___0_execueTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_24, L_25, NULL);
		NullCheck(L_23);
		Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1(L_23, _stringLiteralE4179DB2FDDB1F9A3EFB24065914C0BA86DAD4D7, L_26, NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void MaterialEffect::SetAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialEffect_SetAlpha_m72B9308516B7A88F3D7277446A25B0B368F6FE4C (MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* __this, float ___0_value, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color color = m_EffectMaterial.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_EffectMaterial_0;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_0, NULL);
		V_0 = L_1;
		// color.a = value;
		float L_2 = ___0_value;
		(&V_0)->___a_3 = L_2;
		// m_EffectMaterial.color = color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___m_EffectMaterial_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_3, L_4, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RenderEffect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect_Awake_mF119F57FA52C8CF51850E206074FB2072B9335C1 (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ReferenceCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___m_ReferenceCamera_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReferenceCamera_5), (void*)L_0);
		// m_Render = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___m_Render_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Render_8), (void*)L_1);
		// if (m_Render == null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->___m_Render_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// return;
		return;
	}
}
// System.Void RenderEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect_OnEnable_mA31DFB23AE2BF72F8BE15EDF107DB3DF291684AA (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, const RuntimeMethod* method) 
{
	{
		// RefreshMaterial();
		RenderEffect_RefreshMaterial_m16CD6F3A656EEDC9519D1A9592DE88FE50523C9A(__this, NULL);
		// }
		return;
	}
}
// System.Void RenderEffect::UpdateRenderLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect_UpdateRenderLayer_m635F5C1B4D0B3421DAA3B94BF223CAD4BC432625 (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, const RuntimeMethod* method) 
{
	{
		// if(m_EnableSetSortLayer)
		bool L_0 = __this->___m_EnableSetSortLayer_7;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// m_Render.sortingLayerID = m_SortingLayerID;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___m_Render_8;
		int32_t L_2 = __this->___m_SortingLayerID_11;
		NullCheck(L_1);
		Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49(L_1, L_2, NULL);
		// m_Render.sortingOrder = m_SortingOrder;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->___m_Render_8;
		int32_t L_4 = __this->___m_SortingOrder_12;
		NullCheck(L_3);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_3, L_4, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void RenderEffect::RefreshMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect_RefreshMaterial_m16CD6F3A656EEDC9519D1A9592DE88FE50523C9A (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m133D5F9FEFF116D3EBFE22B1404702AFB6DD5AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mA14822A8B1D091BBE5412537E612BAADB70EBBB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82290BE0D7F06E4F4D59F3862D252917B34290FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF0B1449F295F2A3FED1A86287900FEE149625F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (m_Render == null) {
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___m_Render_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// m_Render = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___m_Render_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Render_8), (void*)L_2);
		// if(m_Render == null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->___m_Render_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// int i = 0;
		V_0 = 0;
		// for(i = 0; i < m_Render.sharedMaterials.Length; i++)
		V_0 = 0;
		goto IL_0080;
	}

IL_002f:
	{
		// if (m_MaterialEffects.Count <= i)
		List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* L_5 = __this->___m_MaterialEffects_9;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m82290BE0D7F06E4F4D59F3862D252917B34290FA_inline(L_5, List_1_get_Count_m82290BE0D7F06E4F4D59F3862D252917B34290FA_RuntimeMethod_var);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_005e;
		}
	}
	{
		// MaterialEffect matEffect = new MaterialEffect(m_Render.sharedMaterials[i]);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = __this->___m_Render_8;
		NullCheck(L_8);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_9;
		L_9 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_8, NULL);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* L_13 = (MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E*)il2cpp_codegen_object_new(MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		MaterialEffect__ctor_m907D8CAA2E68DF6AA133971BE878500D8B45D8BF(L_13, L_12, NULL);
		V_1 = L_13;
		// m_MaterialEffects.Add(matEffect);
		List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* L_14 = __this->___m_MaterialEffects_9;
		MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* L_15 = V_1;
		NullCheck(L_14);
		List_1_Add_m133D5F9FEFF116D3EBFE22B1404702AFB6DD5AF8_inline(L_14, L_15, List_1_Add_m133D5F9FEFF116D3EBFE22B1404702AFB6DD5AF8_RuntimeMethod_var);
		goto IL_007c;
	}

IL_005e:
	{
		// m_MaterialEffects[i].ReInitMaterial(m_Render.sharedMaterials[i]);
		List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* L_16 = __this->___m_MaterialEffects_9;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* L_18;
		L_18 = List_1_get_Item_mF0B1449F295F2A3FED1A86287900FEE149625F2F(L_16, L_17, List_1_get_Item_mF0B1449F295F2A3FED1A86287900FEE149625F2F_RuntimeMethod_var);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_19 = __this->___m_Render_8;
		NullCheck(L_19);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_20;
		L_20 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_19, NULL);
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		MaterialEffect_ReInitMaterial_m5E49C87439BC52481207B30EF3DA0BC7C6FB8B5D(L_18, L_23, NULL);
	}

IL_007c:
	{
		// for(i = 0; i < m_Render.sharedMaterials.Length; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0080:
	{
		// for(i = 0; i < m_Render.sharedMaterials.Length; i++)
		int32_t L_25 = V_0;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_26 = __this->___m_Render_8;
		NullCheck(L_26);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_27;
		L_27 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_26, NULL);
		NullCheck(L_27);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		// for (int j = m_MaterialEffects.Count - 1; i <= j; j--)
		List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* L_28 = __this->___m_MaterialEffects_9;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m82290BE0D7F06E4F4D59F3862D252917B34290FA_inline(L_28, List_1_get_Count_m82290BE0D7F06E4F4D59F3862D252917B34290FA_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
		goto IL_00b0;
	}

IL_00a0:
	{
		// m_MaterialEffects.RemoveAt(j);
		List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* L_30 = __this->___m_MaterialEffects_9;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		List_1_RemoveAt_mA14822A8B1D091BBE5412537E612BAADB70EBBB1(L_30, L_31, List_1_RemoveAt_mA14822A8B1D091BBE5412537E612BAADB70EBBB1_RuntimeMethod_var);
		// for (int j = m_MaterialEffects.Count - 1; i <= j; j--)
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
	}

IL_00b0:
	{
		// for (int j = m_MaterialEffects.Count - 1; i <= j; j--)
		int32_t L_33 = V_0;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) <= ((int32_t)L_34)))
		{
			goto IL_00a0;
		}
	}
	{
		// UpdateRenderLayer();
		RenderEffect_UpdateRenderLayer_m635F5C1B4D0B3421DAA3B94BF223CAD4BC432625(__this, NULL);
		// }
		return;
	}
}
// System.Void RenderEffect::UpdateBillBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect_UpdateBillBoard_m73C5CE488CCE31F1B3F21C88BFCAF5BCF0D05B92 (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (m_EnableBillBoard == false)
		bool L_0 = __this->___m_EnableBillBoard_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_ReferenceCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___m_ReferenceCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// m_ReferenceCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___m_ReferenceCamera_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReferenceCamera_5), (void*)L_3);
	}

IL_0022:
	{
		// if(m_BillBoardType == RenderBillBoardType.Normal)
		int32_t L_4 = __this->___m_BillBoardType_4;
		if (L_4)
		{
			goto IL_007e;
		}
	}
	{
		// Vector3 targetPos = transform.position + m_ReferenceCamera.transform.rotation * Vector3.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___m_ReferenceCamera_5;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_11, NULL);
		V_0 = L_12;
		// Vector3 targetOrientation = m_ReferenceCamera.transform.rotation * Vector3.up;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___m_ReferenceCamera_5;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_15, L_16, NULL);
		V_1 = L_17;
		// transform.LookAt(targetPos, targetOrientation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		NullCheck(L_18);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_18, L_19, L_20, NULL);
		return;
	}

IL_007e:
	{
		// else if (m_BillBoardType == RenderBillBoardType.Vertical)
		int32_t L_21 = __this->___m_BillBoardType_4;
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_00bb;
		}
	}
	{
		// var v = m_ReferenceCamera.transform.forward;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = __this->___m_ReferenceCamera_5;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_23, NULL);
		V_2 = L_24;
		// v.y = 0;
		(&V_2)->___y_3 = (0.0f);
		// transform.rotation = Quaternion.LookRotation(v, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_26, L_27, NULL);
		NullCheck(L_25);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_25, L_28, NULL);
		return;
	}

IL_00bb:
	{
		// else if(m_BillBoardType == RenderBillBoardType.Horizontal)
		int32_t L_29 = __this->___m_BillBoardType_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_0150;
		}
	}
	{
		// Vector3 targetPos = transform.position + m_ReferenceCamera.transform.rotation * Vector3.down;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = __this->___m_ReferenceCamera_5;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		NullCheck(L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_34, L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_36, NULL);
		V_3 = L_37;
		// Vector3 targetOrientation = m_ReferenceCamera.transform.rotation * Vector3.up;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = __this->___m_ReferenceCamera_5;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		NullCheck(L_39);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_40, L_41, NULL);
		V_4 = L_42;
		// transform.LookAt(targetPos, targetOrientation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_4;
		NullCheck(L_43);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_43, L_44, L_45, NULL);
		// Vector3 rotation = transform.rotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_46);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_46, NULL);
		V_6 = L_47;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_6), NULL);
		V_5 = L_48;
		// rotation.x = 90.0f;
		(&V_5)->___x_2 = (90.0f);
		// transform.rotation = Quaternion.Euler(rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_50, NULL);
		NullCheck(L_49);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_49, L_51, NULL);
	}

IL_0150:
	{
		// }
		return;
	}
}
// System.Void RenderEffect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect_Update_mD70E38837584E76E1E011A671E39FB163A9745ED (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m41B5C2CED673F0B3BE439369B3A4541219535C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6D9C4C25718A54A5F4913DED9F202C8977AB9545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1167F415270FA50B88EB8C2C59F6D0C5F8AAD6A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF9F72E35C91DC3AE980ECE6DA62D4862123D35A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_TimeLine += Time.deltaTime;
		float L_0 = __this->___m_TimeLine_10;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___m_TimeLine_10 = ((float)il2cpp_codegen_add(L_0, L_1));
		// foreach(MaterialEffect matEffect in m_MaterialEffects)
		List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* L_2 = __this->___m_MaterialEffects_9;
		NullCheck(L_2);
		Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B L_3;
		L_3 = List_1_GetEnumerator_mF9F72E35C91DC3AE980ECE6DA62D4862123D35A9(L_2, List_1_GetEnumerator_mF9F72E35C91DC3AE980ECE6DA62D4862123D35A9_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m41B5C2CED673F0B3BE439369B3A4541219535C1A((&V_0), Enumerator_Dispose_m41B5C2CED673F0B3BE439369B3A4541219535C1A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_0020_1:
			{
				// foreach(MaterialEffect matEffect in m_MaterialEffects)
				MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* L_4;
				L_4 = Enumerator_get_Current_m1167F415270FA50B88EB8C2C59F6D0C5F8AAD6A1_inline((&V_0), Enumerator_get_Current_m1167F415270FA50B88EB8C2C59F6D0C5F8AAD6A1_RuntimeMethod_var);
				// matEffect.UpdateEffect(m_TimeLine);
				float L_5 = __this->___m_TimeLine_10;
				NullCheck(L_4);
				MaterialEffect_UpdateEffect_m570F2F54C66246D9739A7F3249E753A0B63C6D58(L_4, L_5, NULL);
			}

IL_0032_1:
			{
				// foreach(MaterialEffect matEffect in m_MaterialEffects)
				bool L_6;
				L_6 = Enumerator_MoveNext_m6D9C4C25718A54A5F4913DED9F202C8977AB9545((&V_0), Enumerator_MoveNext_m6D9C4C25718A54A5F4913DED9F202C8977AB9545_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_004b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void RenderEffect::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect_LateUpdate_m153255A04799B81D3EB7EE22C0B6B29E8957FBA6 (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, const RuntimeMethod* method) 
{
	{
		// UpdateBillBoard();
		RenderEffect_UpdateBillBoard_m73C5CE488CCE31F1B3F21C88BFCAF5BCF0D05B92(__this, NULL);
		// }
		return;
	}
}
// System.Void RenderEffect::Sim(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect_Sim_mA62B279879DF49D8140B0714CBB455291C652041 (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, float ___0_timer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m41B5C2CED673F0B3BE439369B3A4541219535C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6D9C4C25718A54A5F4913DED9F202C8977AB9545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1167F415270FA50B88EB8C2C59F6D0C5F8AAD6A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF9F72E35C91DC3AE980ECE6DA62D4862123D35A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UpdateBillBoard ();
		RenderEffect_UpdateBillBoard_m73C5CE488CCE31F1B3F21C88BFCAF5BCF0D05B92(__this, NULL);
		// foreach(MaterialEffect matEffect in m_MaterialEffects)
		List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* L_0 = __this->___m_MaterialEffects_9;
		NullCheck(L_0);
		Enumerator_tC9258D8DEF01891DA4AE15FA25DE493089445C2B L_1;
		L_1 = List_1_GetEnumerator_mF9F72E35C91DC3AE980ECE6DA62D4862123D35A9(L_0, List_1_GetEnumerator_mF9F72E35C91DC3AE980ECE6DA62D4862123D35A9_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m41B5C2CED673F0B3BE439369B3A4541219535C1A((&V_0), Enumerator_Dispose_m41B5C2CED673F0B3BE439369B3A4541219535C1A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0014_1:
			{
				// foreach(MaterialEffect matEffect in m_MaterialEffects)
				MaterialEffect_tDDF16ED09F855732C8533D89F7D58B326AC6426E* L_2;
				L_2 = Enumerator_get_Current_m1167F415270FA50B88EB8C2C59F6D0C5F8AAD6A1_inline((&V_0), Enumerator_get_Current_m1167F415270FA50B88EB8C2C59F6D0C5F8AAD6A1_RuntimeMethod_var);
				// matEffect.UpdateEffect(timer);
				float L_3 = ___0_timer;
				NullCheck(L_2);
				MaterialEffect_UpdateEffect_m570F2F54C66246D9739A7F3249E753A0B63C6D58(L_2, L_3, NULL);
			}

IL_0021_1:
			{
				// foreach(MaterialEffect matEffect in m_MaterialEffects)
				bool L_4;
				L_4 = Enumerator_MoveNext_m6D9C4C25718A54A5F4913DED9F202C8977AB9545((&V_0), Enumerator_MoveNext_m6D9C4C25718A54A5F4913DED9F202C8977AB9545_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void RenderEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEffect__ctor_mF8148D67539B1CA823C70837E3DDEA9EB6565B9E (RenderEffect_t51080C1A3124C7CBCAA12E8B6418DED80D9ADB92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1AAA393CC7D3B1753CEA4DDDF9C748F677B34AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0F0D6829B94247528F8812716A2971B3A00B7809_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool m_EnableSetSortLayer = true;
		__this->___m_EnableSetSortLayer_7 = (bool)1;
		// public List<MaterialEffect> m_MaterialEffects = new List<MaterialEffect>();
		List_1_t0F0D6829B94247528F8812716A2971B3A00B7809* L_0 = (List_1_t0F0D6829B94247528F8812716A2971B3A00B7809*)il2cpp_codegen_object_new(List_1_t0F0D6829B94247528F8812716A2971B3A00B7809_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1AAA393CC7D3B1753CEA4DDDF9C748F677B34AAB(L_0, List_1__ctor_m1AAA393CC7D3B1753CEA4DDDF9C748F677B34AAB_RuntimeMethod_var);
		__this->___m_MaterialEffects_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MaterialEffects_9), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform TransformExtension::FindChildByRecursive(UnityEngine.Transform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TransformExtension_FindChildByRecursive_m2F00DBB75922A75791D5ABA2B55EEF422AB5D7D4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_aParent, String_t* ___1_aName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var result = aParent.Find(aName);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_aParent;
		String_t* L_1 = ___1_aName;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, L_1, NULL);
		V_0 = L_2;
		// if (result != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		// return result;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		return L_5;
	}

IL_0013:
	{
		// foreach (Transform child in aParent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_aParent;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_6, NULL);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_9 = V_3;
					if (!L_9)
					{
						goto IL_0055;
					}
				}
				{
					RuntimeObject* L_10 = V_3;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0055:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_001c_1:
			{
				// foreach (Transform child in aParent)
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				// result = child.FindChildByRecursive(aName);
				String_t* L_13 = ___1_aName;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
				L_14 = TransformExtension_FindChildByRecursive_m2F00DBB75922A75791D5ABA2B55EEF422AB5D7D4(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_12, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_13, NULL);
				V_0 = L_14;
				// if (result != null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_16;
				L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_16)
				{
					goto IL_003b_1;
				}
			}
			{
				// return result;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
				V_2 = L_17;
				goto IL_0058;
			}

IL_003b_1:
			{
				// foreach (Transform child in aParent)
				RuntimeObject* L_18 = V_1;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// return null;
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}

IL_0058:
	{
		// }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_2;
		return L_20;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// AudioManager AudioManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m36CD7D85487E83CF4283FE94A4A0E66DDCF85C4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB2DCC3593CCEB58CA32060CD89A596D12D0ECCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// instance = FindObjectOfType<AudioManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_2;
		L_2 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m5A9F650F57395B32FB586DAD88B4B08515145473_RuntimeMethod_var);
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_2);
		// if (instance == null)
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_3 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// GameObject audioManager = new GameObject("AudioManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_5, _stringLiteralAB2DCC3593CCEB58CA32060CD89A596D12D0ECCC, NULL);
		// instance = audioManager.AddComponent<AudioManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5;
		NullCheck(L_6);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_7;
		L_7 = GameObject_AddComponent_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m36CD7D85487E83CF4283FE94A4A0E66DDCF85C4C(L_6, GameObject_AddComponent_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_m36CD7D85487E83CF4283FE94A4A0E66DDCF85C4C_RuntimeMethod_var);
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_7);
		// DontDestroyOnLoad(audioManager);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
	}

IL_003e:
	{
		// return instance;
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_8 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		return L_8;
	}
}
// System.Void AudioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Awake_m8138BCED4D692C83C95626A1A09AB46EA5205569 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// instance = this;
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::OnSceneChanged(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_OnSceneChanged_m195FB6928B1BA8853EBD522AB63FD20122EA9E2F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17FC0954E2BA29F862AC82AAF54615D8CF0A5190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA45CCEB912E004D06B5107C2433F2D0AE1C95DA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2D62E3F75706996C1B47FC533FBBFDE9C3C5173);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string sceneName = scene.name;
		String_t* L_0;
		L_0 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&___0_scene), NULL);
		V_0 = L_0;
		// if ($"{sceneName}BGM" != null)
		String_t* L_1 = V_0;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralB2D62E3F75706996C1B47FC533FBBFDE9C3C5173, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// PlayBGM($"{sceneName}BGM");
		String_t* L_3 = V_0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralB2D62E3F75706996C1B47FC533FBBFDE9C3C5173, NULL);
		AudioManager_PlayBGM_m275E3FC06A247D389C145F105163D4627AB25EDC(__this, L_4, NULL);
		return;
	}

IL_0027:
	{
		// Debug.LogWarning("BGM for scene " + sceneName + " not found.");
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA45CCEB912E004D06B5107C2433F2D0AE1C95DA4, L_5, _stringLiteral17FC0954E2BA29F862AC82AAF54615D8CF0A5190, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_6, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Start_m3C0FEAF19F58B6D28A9E6D815B3AAF94FEA21B69 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_OnSceneChanged_m195FB6928B1BA8853EBD522AB63FD20122EA9E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4563D94F2AB66EDBA5B3FF9BC11A1DF2368F980);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneChanged;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)AudioManager_OnSceneChanged_m195FB6928B1BA8853EBD522AB63FD20122EA9E2F_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_0, NULL);
		// PlayBGM("TitleSceneBGM");
		AudioManager_PlayBGM_m275E3FC06A247D389C145F105163D4627AB25EDC(__this, _stringLiteralD4563D94F2AB66EDBA5B3FF9BC11A1DF2368F980, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::PlayBGM(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayBGM_m275E3FC06A247D389C145F105163D4627AB25EDC (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CPlayBGMU3Eb__0_m6D732C60E6C3AC4A9465A4D90AF2D158C758A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral238279004380E1356CECB7B4258294E304F72449);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A* V_0 = NULL;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A* L_0 = (U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_m92D66522F24859DE832C8C1842D19D9DD86973B0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A* L_1 = V_0;
		String_t* L_2 = ___0_title;
		NullCheck(L_1);
		L_1->___title_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___title_0), (void*)L_2);
		// Sound s = Array.Find(bgmSounds, x => x.title == title);
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_3 = __this->___bgmSounds_5;
		U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A* L_4 = V_0;
		Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* L_5 = (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*)il2cpp_codegen_object_new(Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CPlayBGMU3Eb__0_m6D732C60E6C3AC4A9465A4D90AF2D158C758A805_RuntimeMethod_var), NULL);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_6;
		L_6 = Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7(L_3, L_5, Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var);
		V_1 = L_6;
		// if(s == null)
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_7 = V_1;
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.Log("Sound Not Found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral238279004380E1356CECB7B4258294E304F72449, NULL);
		return;
	}

IL_0033:
	{
		// _bgmSource.clip = s.clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->____bgmSource_7;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_9 = V_1;
		NullCheck(L_9);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = L_9->___clip_1;
		NullCheck(L_8);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_8, L_10, NULL);
		// _bgmSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->____bgmSource_7;
		NullCheck(L_11);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::PlaySFX(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CPlaySFXU3Eb__0_m3DD6BC58AA141ECCA0929DA78B90EDE396DD092F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral238279004380E1356CECB7B4258294E304F72449);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95* V_0 = NULL;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95* L_0 = (U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass11_0__ctor_m830432EE5F70D2FC35A611BABD0087A79BF15210(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95* L_1 = V_0;
		String_t* L_2 = ___0_title;
		NullCheck(L_1);
		L_1->___title_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___title_0), (void*)L_2);
		// Sound s = Array.Find(sfxSounds, x => x.title == title);
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_3 = __this->___sfxSounds_6;
		U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95* L_4 = V_0;
		Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* L_5 = (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*)il2cpp_codegen_object_new(Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CPlaySFXU3Eb__0_m3DD6BC58AA141ECCA0929DA78B90EDE396DD092F_RuntimeMethod_var), NULL);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_6;
		L_6 = Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7(L_3, L_5, Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var);
		V_1 = L_6;
		// if (s == null)
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_7 = V_1;
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.Log("Sound Not Found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral238279004380E1356CECB7B4258294E304F72449, NULL);
		return;
	}

IL_0033:
	{
		// _sfxSource.PlayOneShot(s.clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->____sfxSource_8;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_9 = V_1;
		NullCheck(L_9);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = L_9->___clip_1;
		NullCheck(L_8);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::ToggleBGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_ToggleBGM_m99547DB6BED0E3F1643F8398C3911DB6267146D2 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// _bgmSource.mute = !_bgmSource.mute;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____bgmSource_7;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->____bgmSource_7;
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD(L_1, NULL);
		NullCheck(L_0);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void AudioManager::ToggleSFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_ToggleSFX_m6A7E11E4920BE55F91E59EFACA43947169567C9C (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// _sfxSource.mute = !_sfxSource.mute;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____sfxSource_8;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->____sfxSource_8;
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD(L_1, NULL);
		NullCheck(L_0);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void AudioManager::BGMVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_BGMVolume_m61A139A19CC58F3D4E5858F5A3EB95CD143E3B30 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, float ___0_volume, const RuntimeMethod* method) 
{
	{
		// _bgmSource.volume = volume * 0.5f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____bgmSource_7;
		float L_1 = ___0_volume;
		NullCheck(L_0);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_0, ((float)il2cpp_codegen_multiply(L_1, (0.5f))), NULL);
		// }
		return;
	}
}
// System.Void AudioManager::SFXVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SFXVolume_m97D92878926643ECA154A03F51E51C18A1961A65 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, float ___0_volume, const RuntimeMethod* method) 
{
	{
		// _sfxSource.volume = volume * 0.5f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____sfxSource_8;
		float L_1 = ___0_volume;
		NullCheck(L_0);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_0, ((float)il2cpp_codegen_multiply(L_1, (0.5f))), NULL);
		// }
		return;
	}
}
// System.Void AudioManager::Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Click_mB45AFEB8AD0F08C9F3550DB70841E5160BCFCC64 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioManager.Instance.PlaySFX("Click");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0;
		L_0 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_0);
		AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1(L_0, _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::StartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StartButton_mE9A8FD5AD60D7B88F846E46E01B160FC7B9D260A (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioManager.Instance.PlaySFX("Start");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0;
		L_0 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_0);
		AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1(L_0, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::StopMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StopMusic_m7506515A806EC57D11E36A18925EE6A494D0F3F7 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// _bgmSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____bgmSource_7;
		NullCheck(L_0);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_mA793A9DF6B975D03690B7C953972EFE41AE4D5E6 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioManager/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m92D66522F24859DE832C8C1842D19D9DD86973B0 (U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass10_0::<PlayBGM>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CPlayBGMU3Eb__0_m6D732C60E6C3AC4A9465A4D90AF2D158C758A805 (U3CU3Ec__DisplayClass10_0_t5207D0B7987369C90DC0347FBF076CDAAD3C339A* __this, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* ___0_x, const RuntimeMethod* method) 
{
	{
		// Sound s = Array.Find(bgmSounds, x => x.title == title);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_0 = ___0_x;
		NullCheck(L_0);
		String_t* L_1 = L_0->___title_0;
		String_t* L_2 = __this->___title_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioManager/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m830432EE5F70D2FC35A611BABD0087A79BF15210 (U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass11_0::<PlaySFX>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass11_0_U3CPlaySFXU3Eb__0_m3DD6BC58AA141ECCA0929DA78B90EDE396DD092F (U3CU3Ec__DisplayClass11_0_t9FB5EBAE91E7D98B9929AC6AA9C31EBBFC340E95* __this, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* ___0_x, const RuntimeMethod* method) 
{
	{
		// Sound s = Array.Find(sfxSounds, x => x.title == title);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_0 = ___0_x;
		NullCheck(L_0);
		String_t* L_1 = L_0->___title_0;
		String_t* L_2 = __this->___title_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sound__ctor_m5DD7C9F71B98D5670BBDD05F6D6FCDF43DC9EA8F (Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialAudioManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialAudioManager_Start_m500CEC8534BA6DA35D1613931A8FFDDB089AA55C (TutorialAudioManager_tE3656FAF37162E31BE2FCCC5B0F2E8CA67B2C4FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3392F12A2719988DD9AA6DBDEB880A65BF6DAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("PlayHelloSFX", 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral7B3392F12A2719988DD9AA6DBDEB880A65BF6DAC, (0.5f), NULL);
		// }
		return;
	}
}
// System.Void TutorialAudioManager::PlayHelloSFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialAudioManager_PlayHelloSFX_m1EF2F8A86BCA5FDF1919FDAEF7AC4DABC552E226 (TutorialAudioManager_tE3656FAF37162E31BE2FCCC5B0F2E8CA67B2C4FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioManager.Instance.PlaySFX("Hello");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0;
		L_0 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_0);
		AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1(L_0, _stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9, NULL);
		// }
		return;
	}
}
// System.Void TutorialAudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialAudioManager__ctor_m7DA9085CEE716FB359A0197944F495258B3D64D9 (TutorialAudioManager_tE3656FAF37162E31BE2FCCC5B0F2E8CA67B2C4FB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIController::ToggleBGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ToggleBGM_m68D33D545BDFB2C5C8CB6A892E3F270CEF9AD617 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// AudioManager.Instance.ToggleBGM();
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0;
		L_0 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_0);
		AudioManager_ToggleBGM_m99547DB6BED0E3F1643F8398C3911DB6267146D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIController::ToggleSFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ToggleSFX_mD0501E9103266B791D43982AA19CB816FD2CFEF1 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// AudioManager.Instance.ToggleSFX();
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0;
		L_0 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_0);
		AudioManager_ToggleSFX_m6A7E11E4920BE55F91E59EFACA43947169567C9C(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIController::BGMVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_BGMVolume_mEDAAE1A3CDC7E73737BCC31545908D2294E5C2A4 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, float ___0_volume, const RuntimeMethod* method) 
{
	{
		// AudioManager.Instance.BGMVolume(_bgmSlider.value);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0;
		L_0 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->____bgmSlider_12;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		NullCheck(L_0);
		AudioManager_BGMVolume_m61A139A19CC58F3D4E5858F5A3EB95CD143E3B30(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void UIController::SFXVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SFXVolume_mEBE42A3A2683036895048D247E87EFE4AD5CFC49 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, float ___0_volume, const RuntimeMethod* method) 
{
	{
		// AudioManager.Instance.SFXVolume(_sfxSlider.value);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0;
		L_0 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->____sfxSlider_13;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		NullCheck(L_0);
		AudioManager_SFXVolume_m97D92878926643ECA154A03F51E51C18A1961A65(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void UIController::BGMButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_BGMButtonClick_m54B705D339704F2F21C8BD7018A49C0A367D4A5D (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// if (_isBGMOn)
		bool L_0 = __this->____isBGMOn_10;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// _BGMButtonImage.sprite = _BGMButtonSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->____BGMButtonImage_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->____BGMButtonSprite_6;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		// _isBGMOn = false;
		__this->____isBGMOn_10 = (bool)0;
		return;
	}

IL_0021:
	{
		// _BGMButtonImage.sprite = _currentBGMButtonSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->____BGMButtonImage_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->____currentBGMButtonSprite_8;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		// _isBGMOn = true;
		__this->____isBGMOn_10 = (bool)1;
		// }
		return;
	}
}
// System.Void UIController::SFXButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SFXButtonClick_m1EB0BE4CC75C7E49A00EA4D2DD8065D8AB7E7080 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// if (_isSFXOn)
		bool L_0 = __this->____isSFXOn_11;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// _SFXButtonImage.sprite = _SFXButtonSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->____SFXButtonImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->____SFXButtonSprite_7;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		// _isSFXOn = false;
		__this->____isSFXOn_11 = (bool)0;
		return;
	}

IL_0021:
	{
		// _SFXButtonImage.sprite = _currentSFXButtonSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->____SFXButtonImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->____currentSFXButtonSprite_9;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		// _isSFXOn = true;
		__this->____isSFXOn_11 = (bool)1;
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_mFF218DBC8CCEFE36AAC295D2376501658CD8B7A2 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// private bool _isBGMOn = true, _isSFXOn = true;
		__this->____isBGMOn_10 = (bool)1;
		// private bool _isBGMOn = true, _isSFXOn = true;
		__this->____isSFXOn_11 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BlockMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockMovement_Update_m56694086F343A46717C3E77895023DDC5989CDBD (BlockMovement_tC23BF2B88957526EC3F1E4BE3A457A1844AA9833* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float distanceThisFrame = _translationSpeed * Time.deltaTime;
		float L_0 = __this->____translationSpeed_4;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// transform.Translate(directions[currentDirectionIndex] * distanceThisFrame);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___directions_5;
		int32_t L_4 = __this->___currentDirectionIndex_6;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		NullCheck(L_2);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_2, L_8, NULL);
		// distanceToMove -= distanceThisFrame;
		float L_9 = __this->___distanceToMove_7;
		float L_10 = V_0;
		__this->___distanceToMove_7 = ((float)il2cpp_codegen_subtract(L_9, L_10));
		// if (distanceToMove <= 0f)
		float L_11 = __this->___distanceToMove_7;
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		// currentDirectionIndex = (currentDirectionIndex + 1) % directions.Length;
		int32_t L_12 = __this->___currentDirectionIndex_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = __this->___directions_5;
		NullCheck(L_13);
		__this->___currentDirectionIndex_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_12, 1))%((int32_t)(((RuntimeArray*)L_13)->max_length))));
		// distanceToMove = 50f;
		__this->___distanceToMove_7 = (50.0f);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void BlockMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockMovement__ctor_m3BB8F589875FCB8BD2A7BC2EADF7E2FDDD7FEC9C (BlockMovement_tC23BF2B88957526EC3F1E4BE3A457A1844AA9833* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float _translationSpeed = 10f;
		__this->____translationSpeed_4 = (10.0f);
		// private Vector3[] directions = { Vector3.left, Vector3.down, Vector3.right, Vector3.up };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		__this->___directions_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___directions_5), (void*)L_7);
		// private float distanceToMove = 50f;
		__this->___distanceToMove_7 = (50.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BowlRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowlRotation_Update_mB345B4091D06F876FCC74DDDA0D9F55B45E53322 (BowlRotation_tC28147902FCD443FFAA0D9616578B2E82BEFA452* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.up * rotationSpeed * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_2 = __this->___rotationSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_0, L_5, 0, NULL);
		// }
		return;
	}
}
// System.Void BowlRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowlRotation__ctor_mF79C15ED0098B904A753E0783369C5C199A2DF99 (BowlRotation_tC28147902FCD443FFAA0D9616578B2E82BEFA452* __this, const RuntimeMethod* method) 
{
	{
		// public float rotationSpeed = 50f;
		__this->___rotationSpeed_4 = (50.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Awake_mE903647E3CB4D388DF353F137A6383DB539F9154 (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, const RuntimeMethod* method) 
{
	{
		// Dir = transform.position - _player.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____player_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		__this->___Dir_5 = L_4;
		// }
		return;
	}
}
// System.Void CameraMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Update_m42273F0005E91309F6A375EB990391D92F6727FE (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, const RuntimeMethod* method) 
{
	{
		// Follow();
		CameraMovement_Follow_m1796C10EC433556C3A5C7FD532D74880FC5735C8(__this, NULL);
		// }
		return;
	}
}
// System.Void CameraMovement::Follow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Follow_m1796C10EC433556C3A5C7FD532D74880FC5735C8 (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = _player.position + Dir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____player_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___Dir_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void CameraMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement__ctor_m89EBDC0905F17D37C7604387BED054FDCCADAFD3 (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 Dir = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___Dir_5 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CinematicSequence::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinematicSequence_Start_mB5EDA128D67F9EB69C0822772798063A2A28C06C (CinematicSequence_tC92C443D56B66031465CE1D38FE7B054A2E03EB1* __this, const RuntimeMethod* method) 
{
	{
		// SwitchToCamera(currentCameraIndex);
		int32_t L_0 = __this->___currentCameraIndex_5;
		CinematicSequence_SwitchToCamera_mAA4C3AED6F48015042B1B9063D7A8D267F104DCC(__this, L_0, NULL);
		// timeSinceLastSwitch = Time.time;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___timeSinceLastSwitch_6 = L_1;
		// }
		return;
	}
}
// System.Void CinematicSequence::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinematicSequence_Update_m7B32B7131BBB4722506DA78ABD0B47648715EA2A (CinematicSequence_tC92C443D56B66031465CE1D38FE7B054A2E03EB1* __this, const RuntimeMethod* method) 
{
	{
		// if (currentCameraIndex < cameraSettings.Length)
		int32_t L_0 = __this->___currentCameraIndex_5;
		CameraSettingsU5BU5D_t3D55306040009315D2C4E106A803B0EC6BA8F127* L_1 = __this->___cameraSettings_4;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0056;
		}
	}
	{
		// if (Time.time - timeSinceLastSwitch >= cameraSettings[currentCameraIndex].duration)
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___timeSinceLastSwitch_6;
		CameraSettingsU5BU5D_t3D55306040009315D2C4E106A803B0EC6BA8F127* L_4 = __this->___cameraSettings_4;
		int32_t L_5 = __this->___currentCameraIndex_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		float L_8 = L_7->___duration_1;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_2, L_3))) >= ((float)L_8))))
		{
			goto IL_005c;
		}
	}
	{
		// timeSinceLastSwitch = Time.time;
		float L_9;
		L_9 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___timeSinceLastSwitch_6 = L_9;
		// currentCameraIndex++;
		int32_t L_10 = __this->___currentCameraIndex_5;
		__this->___currentCameraIndex_5 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// SwitchToCamera(currentCameraIndex);
		int32_t L_11 = __this->___currentCameraIndex_5;
		CinematicSequence_SwitchToCamera_mAA4C3AED6F48015042B1B9063D7A8D267F104DCC(__this, L_11, NULL);
		return;
	}

IL_0056:
	{
		// EndSequence();
		CinematicSequence_EndSequence_m489E47035C3CCBF33E5AC2368FEE57CAE40AC515(__this, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void CinematicSequence::SwitchToCamera(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinematicSequence_SwitchToCamera_mAA4C3AED6F48015042B1B9063D7A8D267F104DCC (CinematicSequence_tC92C443D56B66031465CE1D38FE7B054A2E03EB1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (index < cameraSettings.Length)
		int32_t L_0 = ___0_index;
		CameraSettingsU5BU5D_t3D55306040009315D2C4E106A803B0EC6BA8F127* L_1 = __this->___cameraSettings_4;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		// CinemachineVirtualCamera newCamera = cameraSettings[index].camera;
		CameraSettingsU5BU5D_t3D55306040009315D2C4E106A803B0EC6BA8F127* L_2 = __this->___cameraSettings_4;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_6 = L_5->___camera_0;
		// for (int i = 0; i < cameraSettings.Length; i++)
		V_0 = 0;
		goto IL_003c;
	}

IL_001d:
	{
		// cameraSettings[i].camera.gameObject.SetActive(i == index);
		CameraSettingsU5BU5D_t3D55306040009315D2C4E106A803B0EC6BA8F127* L_7 = __this->___cameraSettings_4;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_11 = L_10->___camera_0;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		int32_t L_13 = V_0;
		int32_t L_14 = ___0_index;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0), NULL);
		// for (int i = 0; i < cameraSettings.Length; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003c:
	{
		// for (int i = 0; i < cameraSettings.Length; i++)
		int32_t L_16 = V_0;
		CameraSettingsU5BU5D_t3D55306040009315D2C4E106A803B0EC6BA8F127* L_17 = __this->___cameraSettings_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_001d;
		}
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void CinematicSequence::EndSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinematicSequence_EndSequence_m489E47035C3CCBF33E5AC2368FEE57CAE40AC515 (CinematicSequence_tC92C443D56B66031465CE1D38FE7B054A2E03EB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA0DD09C639A029BF0C61ADF38F7CFDA6F96E03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Cinematic sequence completed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBDA0DD09C639A029BF0C61ADF38F7CFDA6F96E03, NULL);
		// }
		return;
	}
}
// System.Void CinematicSequence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinematicSequence__ctor_mEC4560AAFF10D95C40A8A4456B761010843F1623 (CinematicSequence_tC92C443D56B66031465CE1D38FE7B054A2E03EB1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CinematicSequence/CameraSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSettings__ctor_m98A73E9732AA7498EAABF613DA3462DE6F710668 (CameraSettings_tB386209D4B94629A53461D19B7CB737BF23EF395* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EndPerception::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndPerception_OnCollisionEnter_mE287BBB2E37B995FA548DA5D91C963940D5C0F6A (EndPerception_tA1008EBF2B234DC579D5ADA2365FFBF52E5EB912* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70C99B61FC684B57763B10FD124783953DD77E30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC48760ED9B365E27BF7EB9FB10DA5D3DE0216713);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collided with: " + collision.gameObject.name + ", Layer: " + LayerMask.LayerToName(collision.gameObject.layer));
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___0_collision;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_4, NULL);
		String_t* L_6;
		L_6 = LayerMask_LayerToName_mC7A5797D35F5307031F317741226727B307F34D0(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral70C99B61FC684B57763B10FD124783953DD77E30, L_2, _stringLiteralC48760ED9B365E27BF7EB9FB10DA5D3DE0216713, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// if (collision.gameObject.layer == LayerMask.NameToLayer("Player"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___0_collision;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_9, NULL);
		int32_t L_11;
		L_11 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_00a6;
		}
	}
	{
		// StartCoroutine(LoadSceneAfterDelay());
		RuntimeObject* L_12;
		L_12 = EndPerception_LoadSceneAfterDelay_m34B0EFED80BA4216B604EFE8BD8B70C69BDE8F90(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
		// _animatorController.PlaySuccess();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_14 = __this->____animatorController_4;
		NullCheck(L_14);
		AnimatorController_PlaySuccess_m99A47A106A40CCAA476424C764D8CAF43FFE6AED(L_14, NULL);
		// AudioManager.Instance.PlaySFX("Success");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_15;
		L_15 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_15);
		AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1(L_15, _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890, NULL);
		// GameObject particleInstance = Instantiate(_successParticlePrefab, transform.position + Vector3.up * 10f, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->____successParticlePrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (10.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_16, L_21, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(particleInstance, 2f);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_23, (2.0f), NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator EndPerception::LoadSceneAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndPerception_LoadSceneAfterDelay_m34B0EFED80BA4216B604EFE8BD8B70C69BDE8F90 (EndPerception_tA1008EBF2B234DC579D5ADA2365FFBF52E5EB912* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C* L_0 = (U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C*)il2cpp_codegen_object_new(U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadSceneAfterDelayU3Ed__3__ctor_mCB0F5EEB26571BEAC3AD15D54A98D316EDEEE7EF(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void EndPerception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndPerception__ctor_m63130039340A04F8F554CD8E46564CF8D7413D74 (EndPerception_tA1008EBF2B234DC579D5ADA2365FFBF52E5EB912* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EndPerception/<LoadSceneAfterDelay>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAfterDelayU3Ed__3__ctor_mCB0F5EEB26571BEAC3AD15D54A98D316EDEEE7EF (U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EndPerception/<LoadSceneAfterDelay>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAfterDelayU3Ed__3_System_IDisposable_Dispose_m33A375AF352E023DC3B2134B2B4FC2409D194A56 (U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EndPerception/<LoadSceneAfterDelay>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneAfterDelayU3Ed__3_MoveNext_m4B9CAA3EDFE552CCC1A472C436DEA726B65C17DF (U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18C151B7B37F32A75E0B923B3DE7FED4660FD5DD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(4f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (4.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene("StagesScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral18C151B7B37F32A75E0B923B3DE7FED4660FD5DD, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EndPerception/<LoadSceneAfterDelay>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneAfterDelayU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0CA2FE5EFFBCE5B9AAA46230EA385B77FD62439C (U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EndPerception/<LoadSceneAfterDelay>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAfterDelayU3Ed__3_System_Collections_IEnumerator_Reset_mC58AD716F9E2F57E82FCF27D7F438039D26CEF12 (U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneAfterDelayU3Ed__3_System_Collections_IEnumerator_Reset_mC58AD716F9E2F57E82FCF27D7F438039D26CEF12_RuntimeMethod_var)));
	}
}
// System.Object EndPerception/<LoadSceneAfterDelay>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneAfterDelayU3Ed__3_System_Collections_IEnumerator_get_Current_mD99F44D2294595FCB49AFF79103A719BA2537ADB (U3CLoadSceneAfterDelayU3Ed__3_t47DC02C76A8465F56AA599ABEBDD9C337E9D422C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JumpPerception::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpPerception_Awake_m2AAF19491EC841E01AFD54771C4EE43A2080BAAA (JumpPerception_tD4A763D21429C3C526933CC7C7888DDC653E08B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rigidbody_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_6), (void*)L_0);
		// _rigidbody.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->____rigidbody_6;
		NullCheck(L_1);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void JumpPerception::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpPerception_OnCollisionEnter_mE58B2C2ED69BC1A51B38FCD284EB18899F68B00C (JumpPerception_tD4A763D21429C3C526933CC7C7888DDC653E08B0* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70C99B61FC684B57763B10FD124783953DD77E30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC48760ED9B365E27BF7EB9FB10DA5D3DE0216713);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collided with: " + collision.gameObject.name + ", Layer: " + LayerMask.LayerToName(collision.gameObject.layer));
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___0_collision;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_4, NULL);
		String_t* L_6;
		L_6 = LayerMask_LayerToName_mC7A5797D35F5307031F317741226727B307F34D0(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral70C99B61FC684B57763B10FD124783953DD77E30, L_2, _stringLiteralC48760ED9B365E27BF7EB9FB10DA5D3DE0216713, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// if (collision.gameObject.layer == LayerMask.NameToLayer("Jump"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___0_collision;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_9, NULL);
		int32_t L_11;
		L_11 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0086;
		}
	}
	{
		// _animatorController.PlayJump();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_12 = __this->____animatorController_4;
		NullCheck(L_12);
		AnimatorController_PlayJump_m6C35CDBBD70D42B4214E3FE13AFE8DC7A080D0DE(L_12, NULL);
		// _rigidbody.AddForce(Vector3.up * _jumpForce * 1.7f, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->____rigidbody_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_15 = __this->____jumpForce_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, (1.70000005f), NULL);
		NullCheck(L_13);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_13, L_17, 1, NULL);
		// AudioManager.Instance.PlaySFX("Jump");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_18;
		L_18 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_18);
		AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1(L_18, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void JumpPerception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpPerception__ctor_mB596C2C338DDBC795F07B045E3BD72DFB28B1BFC (JumpPerception_tD4A763D21429C3C526933CC7C7888DDC653E08B0* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _jumpForce = 50f;
		__this->____jumpForce_5 = (50.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnimatorController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_Awake_m87679DAA40A581BC1503449DD5213EF00354418D (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____animator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AnimatorController::PlayIdle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayIdle_m9F870E698D12E5118BAEB2943B1E45E1CD398605 (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43BE6DE4DF730C7E4796F34D0B0C340C273CB4F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("IsSliding", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral43BE6DE4DF730C7E4796F34D0B0C340C273CB4F7, (bool)0, NULL);
		// _animator.SetBool("IsRunning", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->____animator_4;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA, (bool)0, NULL);
		// _animator.SetBool("IsAir", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->____animator_4;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AnimatorController::PlayFall1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayFall1_m254BC5D99AE7046A82DD429CA9A94BE025674836 (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("IsAir", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AnimatorController::PlayFall2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayFall2_mBF6A3E0D8C669191C2F23A0CF261FB86B1ED24A9 (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7372459950519D86049CF0E8C9E319D6C699939C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("StillFalling", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral7372459950519D86049CF0E8C9E319D6C699939C, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AnimatorController::PlayFall3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayFall3_m09170DFC693856EE763261CC40579DD55640140B (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75EEB85ED68C268EFCF06C5EC80C80516FB0D0F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("IsFalling", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral75EEB85ED68C268EFCF06C5EC80C80516FB0D0F4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AnimatorController::PlayRespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayRespawn_m998510683B2446C8AD5661C0C75760D0CB65B24B (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D867F5D9EE94A42D0DFCE448BBB10ED2908764B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43BE6DE4DF730C7E4796F34D0B0C340C273CB4F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7372459950519D86049CF0E8C9E319D6C699939C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75EEB85ED68C268EFCF06C5EC80C80516FB0D0F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("IsAir", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204, (bool)0, NULL);
		// _animator.SetBool("IsSliding", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->____animator_4;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral43BE6DE4DF730C7E4796F34D0B0C340C273CB4F7, (bool)0, NULL);
		// _animator.SetBool("IsFalling", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->____animator_4;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral75EEB85ED68C268EFCF06C5EC80C80516FB0D0F4, (bool)0, NULL);
		// _animator.SetBool("StillFalling", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____animator_4;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteral7372459950519D86049CF0E8C9E319D6C699939C, (bool)0, NULL);
		// _animator.SetTrigger("Respawn");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->____animator_4;
		NullCheck(L_4);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_4, _stringLiteral2D867F5D9EE94A42D0DFCE448BBB10ED2908764B, NULL);
		// }
		return;
	}
}
// System.Void AnimatorController::PlayRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayRun_m3FF02C4AEB04968F33EB805C8DBB0F331CBE59FD (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43BE6DE4DF730C7E4796F34D0B0C340C273CB4F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("IsAir", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204, (bool)0, NULL);
		// _animator.SetBool("IsSliding", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->____animator_4;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral43BE6DE4DF730C7E4796F34D0B0C340C273CB4F7, (bool)0, NULL);
		// _animator.SetBool("IsRunning", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->____animator_4;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AnimatorController::PlayJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayJump_m6C35CDBBD70D42B4214E3FE13AFE8DC7A080D0DE (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("IsAir", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204, (bool)1, NULL);
		// _animator.SetTrigger("Jump");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->____animator_4;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		// }
		return;
	}
}
// System.Void AnimatorController::PlaySlide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlaySlide_m9881674FE32A0C1EA0BEE538D0FAAFA31514E870 (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43BE6DE4DF730C7E4796F34D0B0C340C273CB4F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("IsAir", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral24F552D997B08AE233D083D568F30E6A8C1AE204, (bool)0, NULL);
		// _animator.SetBool("IsRunning", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->____animator_4;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA, (bool)0, NULL);
		// _animator.SetBool("IsSliding", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->____animator_4;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral43BE6DE4DF730C7E4796F34D0B0C340C273CB4F7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AnimatorController::PlaySuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlaySuccess_m99A47A106A40CCAA476424C764D8CAF43FFE6AED (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetTrigger("Success");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_4;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890, NULL);
		// }
		return;
	}
}
// System.Void AnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController__ctor_mD32DADD624A72482898ACCCEDA3BCED23F942EDC (AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FallingPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingPlayer_Start_mC13AA3EB78B17FEFFD42BCE6DE855C6F2BAE54AF (FallingPlayer_tC9F5CA3DAA4DAB1DD2CDB75AB6992AB3555D9B33* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FallingPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingPlayer_Update_mCAAAB8E49066A9CDF29FBD895FFAE97A68F2C31E (FallingPlayer_tC9F5CA3DAA4DAB1DD2CDB75AB6992AB3555D9B33* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FallingPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingPlayer__ctor_m0C1167FB77918FE01C36DFDD21423CDFD136A08A (FallingPlayer_tC9F5CA3DAA4DAB1DD2CDB75AB6992AB3555D9B33* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Awake_m7E8376225AEB5B44C88D56C73B36BD3E3F09CC1F (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rigidbody_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_11), (void*)L_0);
		// _rigidbody.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->____rigidbody_11;
		NullCheck(L_1);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_m5BB6CE35AF68EE00CFEB4BA5EBA17E10667551D3 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		PlayerMovement_Move_m49FF83A1018F85FA83A97516D57FE7D8331EB1C9(__this, NULL);
		// if (isAttached)
		bool L_0 = __this->___isAttached_15;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// transform.parent.Rotate(Vector3.up * _rotationSpeed * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_4 = __this->____rotationSpeed_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		NullCheck(L_2);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_2, L_7, 0, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Move_m49FF83A1018F85FA83A97516D57FE7D8331EB1C9 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _moveVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->____moveVector_12 = L_0;
		// _moveVector.x = _joystick.Horizontal * _moveSpeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->____moveVector_12);
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_2 = __this->____joystick_4;
		NullCheck(L_2);
		float L_3;
		L_3 = bl_Joystick_get_Horizontal_m95F408BB05DB3B8F060A9B5C7E39B0BB818A6010(L_2, NULL);
		float L_4 = __this->____moveSpeed_6;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		L_1->___x_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// _moveVector.z = _joystick.Vertical * _moveSpeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->____moveVector_12);
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_7 = __this->____joystick_4;
		NullCheck(L_7);
		float L_8;
		L_8 = bl_Joystick_get_Vertical_m9A3ED04564A00D796F667688280FA5E42240D552(L_7, NULL);
		float L_9 = __this->____moveSpeed_6;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		L_6->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), L_10));
		// isFalling = _rigidbody.velocity.y < -1f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->____rigidbody_11;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_11, NULL);
		float L_13 = L_12.___y_3;
		__this->___isFalling_13 = (bool)((((float)L_13) < ((float)(-1.0f)))? 1 : 0);
		// if (_joystick.Horizontal != 0 || _joystick.Vertical != 0)
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_14 = __this->____joystick_4;
		NullCheck(L_14);
		float L_15;
		L_15 = bl_Joystick_get_Horizontal_m95F408BB05DB3B8F060A9B5C7E39B0BB818A6010(L_14, NULL);
		if ((!(((float)L_15) == ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_16 = __this->____joystick_4;
		NullCheck(L_16);
		float L_17;
		L_17 = bl_Joystick_get_Vertical_m9A3ED04564A00D796F667688280FA5E42240D552(L_16, NULL);
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_0104;
		}
	}

IL_0092:
	{
		// Vector3 direction = Vector3.RotateTowards(transform.forward, _moveVector, _rotateSpeed * Time.deltaTime, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->____moveVector_12;
		float L_21 = __this->____rotateSpeed_7;
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_RotateTowards_m884BB56D5A071EF6008F9354D5FF1C9A1913AF92(L_19, L_20, ((float)il2cpp_codegen_multiply(L_21, L_22)), (0.0f), NULL);
		V_0 = L_23;
		// transform.rotation = Quaternion.LookRotation(direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_25, NULL);
		NullCheck(L_24);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_24, L_26, NULL);
		// if (transform.position.y > 1.6f && isFalling)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___y_3;
		if ((!(((float)L_29) > ((float)(1.60000002f)))))
		{
			goto IL_00f7;
		}
	}
	{
		bool L_30 = __this->___isFalling_13;
		if (!L_30)
		{
			goto IL_00f7;
		}
	}
	{
		// _animatorController.PlayFall1();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_31 = __this->____animatorController_5;
		NullCheck(L_31);
		AnimatorController_PlayFall1_m254BC5D99AE7046A82DD429CA9A94BE025674836(L_31, NULL);
		goto IL_015f;
	}

IL_00f7:
	{
		// _animatorController.PlayRun();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_32 = __this->____animatorController_5;
		NullCheck(L_32);
		AnimatorController_PlayRun_m3FF02C4AEB04968F33EB805C8DBB0F331CBE59FD(L_32, NULL);
		goto IL_015f;
	}

IL_0104:
	{
		// else if(_joystick.Horizontal == 0 && _joystick.Vertical == 0)
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_33 = __this->____joystick_4;
		NullCheck(L_33);
		float L_34;
		L_34 = bl_Joystick_get_Horizontal_m95F408BB05DB3B8F060A9B5C7E39B0BB818A6010(L_33, NULL);
		if ((!(((float)L_34) == ((float)(0.0f)))))
		{
			goto IL_015f;
		}
	}
	{
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_35 = __this->____joystick_4;
		NullCheck(L_35);
		float L_36;
		L_36 = bl_Joystick_get_Vertical_m9A3ED04564A00D796F667688280FA5E42240D552(L_35, NULL);
		if ((!(((float)L_36) == ((float)(0.0f)))))
		{
			goto IL_015f;
		}
	}
	{
		// if (transform.position.y > 1.6f && isFalling)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___y_3;
		if ((!(((float)L_39) > ((float)(1.60000002f)))))
		{
			goto IL_0154;
		}
	}
	{
		bool L_40 = __this->___isFalling_13;
		if (!L_40)
		{
			goto IL_0154;
		}
	}
	{
		// _animatorController.PlayFall1();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_41 = __this->____animatorController_5;
		NullCheck(L_41);
		AnimatorController_PlayFall1_m254BC5D99AE7046A82DD429CA9A94BE025674836(L_41, NULL);
		goto IL_015f;
	}

IL_0154:
	{
		// _animatorController.PlayIdle();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_42 = __this->____animatorController_5;
		NullCheck(L_42);
		AnimatorController_PlayIdle_m9F870E698D12E5118BAEB2943B1E45E1CD398605(L_42, NULL);
	}

IL_015f:
	{
		// _rigidbody.MovePosition(_rigidbody.position + _moveVector);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_43 = __this->____rigidbody_11;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_44 = __this->____rigidbody_11;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->____moveVector_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_45, L_46, NULL);
		NullCheck(L_43);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_43, L_47, NULL);
		// _rigidbody.AddForce(Vector3.down * _customGravity * _rigidbody.mass);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_48 = __this->____rigidbody_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_50 = __this->____customGravity_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_49, L_50, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_52 = __this->____rigidbody_11;
		NullCheck(L_52);
		float L_53;
		L_53 = Rigidbody_get_mass_m09DDDDC437499B83B3BD0D77C134BFDC3E667054(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_51, L_53, NULL);
		NullCheck(L_48);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_48, L_54, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Jump_mCA26EA1D2892C47F04966998153F3FD4FFBCEB43 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isJumping)
		bool L_0 = __this->___isJumping_14;
		if (L_0)
		{
			goto IL_0045;
		}
	}
	{
		// _animatorController.PlayJump();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_1 = __this->____animatorController_5;
		NullCheck(L_1);
		AnimatorController_PlayJump_m6C35CDBBD70D42B4214E3FE13AFE8DC7A080D0DE(L_1, NULL);
		// _rigidbody.AddForce(Vector3.up * _jumpForce, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->____rigidbody_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_4 = __this->____jumpForce_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_2);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_2, L_5, 1, NULL);
		// isJumping = true;
		__this->___isJumping_14 = (bool)1;
		// AudioManager.Instance.PlaySFX("Jump");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_6;
		L_6 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_6);
		AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1(L_6, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_OnCollisionEnter_mAAFB6F5903794BA3187ECB9FC66873150638925B (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70C99B61FC684B57763B10FD124783953DD77E30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC48760ED9B365E27BF7EB9FB10DA5D3DE0216713);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC556605C14F28234659BB5A7418CFCC1B8A9DE04);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collided with: " + collision.gameObject.name + ", Layer: " + LayerMask.LayerToName(collision.gameObject.layer));
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___0_collision;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_4, NULL);
		String_t* L_6;
		L_6 = LayerMask_LayerToName_mC7A5797D35F5307031F317741226727B307F34D0(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral70C99B61FC684B57763B10FD124783953DD77E30, L_2, _stringLiteralC48760ED9B365E27BF7EB9FB10DA5D3DE0216713, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// if (collision.gameObject.layer == LayerMask.NameToLayer("Ground") ||
		//     collision.gameObject.layer == LayerMask.NameToLayer("EndPoint"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___0_collision;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_9, NULL);
		int32_t L_11;
		L_11 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, NULL);
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			goto IL_005d;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_12 = ___0_collision;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_12, NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_13, NULL);
		int32_t L_15;
		L_15 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralC556605C14F28234659BB5A7418CFCC1B8A9DE04, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0064;
		}
	}

IL_005d:
	{
		// isJumping = false;
		__this->___isJumping_14 = (bool)0;
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_OnTriggerEnter_m419B787A522A16E2686924E7CA6EFB8C30A90342 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61A6E50199E28E4C8A6E9213671635A7AE5DB712);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == LayerMask.NameToLayer("Bowl"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral61A6E50199E28E4C8A6E9213671635A7AE5DB712, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002f;
		}
	}
	{
		// isAttached = true;
		__this->___isAttached_15 = (bool)1;
		// transform.parent = collision.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___0_collision;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_4);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_4, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mB37559C5B0638161878D20E00B7C672FC38BBBAA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _jumpForce = 50f;
		__this->____jumpForce_8 = (50.0f);
		// [SerializeField] private float _customGravity = 50f;
		__this->____customGravity_9 = (50.0f);
		// [SerializeField] private float _rotationSpeed = 50f;
		__this->____rotationSpeed_10 = (50.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RespawnController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnController_Update_m50E796A6AA1F190D490A2D09DCD6BB49CE74CE0F (RespawnController_t35874BA400906EE2F60120A5B4DA61D25FC00C13* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.position.y < -300f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) < ((float)(-300.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// Respawn();
		RespawnController_Respawn_m6D365CB8033C59EB9C574D5E32EE33A4D1175ECA(__this, NULL);
		return;
	}

IL_001e:
	{
		// else if (transform.position.y < -80f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		if ((!(((float)L_5) < ((float)(-80.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// _animatorController.PlayFall2();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_6 = __this->____animatorController_6;
		NullCheck(L_6);
		AnimatorController_PlayFall2_mBF6A3E0D8C669191C2F23A0CF261FB86B1ED24A9(L_6, NULL);
		return;
	}

IL_0041:
	{
		// else if (transform.position.y < 0f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		// _animatorController.PlayFall3();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_10 = __this->____animatorController_6;
		NullCheck(L_10);
		AnimatorController_PlayFall3_m09170DFC693856EE763261CC40579DD55640140B(L_10, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void RespawnController::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnController_Respawn_m6D365CB8033C59EB9C574D5E32EE33A4D1175ECA (RespawnController_t35874BA400906EE2F60120A5B4DA61D25FC00C13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D867F5D9EE94A42D0DFCE448BBB10ED2908764B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = respawnPoint.position + Vector3.up * 0.06f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___respawnPoint_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0599999987f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_4, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// _animatorController.PlayRespawn();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_6 = __this->____animatorController_6;
		NullCheck(L_6);
		AnimatorController_PlayRespawn_m998510683B2446C8AD5661C0C75760D0CB65B24B(L_6, NULL);
		// AudioManager.Instance.PlaySFX("Respawn");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_7;
		L_7 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_7);
		AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1(L_7, _stringLiteral2D867F5D9EE94A42D0DFCE448BBB10ED2908764B, NULL);
		// GameObject particleInstance = Instantiate(_respawnParticlePrefab, transform.position + Vector3.up * 1.4f, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->____respawnParticlePrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, (1.39999998f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_8, L_13, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(particleInstance, 2f);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_15, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void RespawnController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnController__ctor_mDA62F008B06CEA41C9E577B64E4C61A833AB4439 (RespawnController_t35874BA400906EE2F60120A5B4DA61D25FC00C13* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialPlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialPlayerMovement_Awake_mCACC0F064FFE254718FAFBB32DC9611D0C07FFCC (TutorialPlayerMovement_tFD1DE5E527A7E6E1342B25C1F33D8C47CF0AC485* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rigidbody_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_11), (void*)L_0);
		// _rigidbody.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->____rigidbody_11;
		NullCheck(L_1);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TutorialPlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialPlayerMovement_Update_m6C0B14BE3CE6E5E004ADC82808EF73E3E678F7AB (TutorialPlayerMovement_tFD1DE5E527A7E6E1342B25C1F33D8C47CF0AC485* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		TutorialPlayerMovement_Move_mA196260AFBCE51D59C3F8970DAA87462A9C988A2(__this, NULL);
		// if (isAttached)
		bool L_0 = __this->___isAttached_14;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// transform.parent.Rotate(Vector3.up * _rotationSpeed * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_4 = __this->____rotationSpeed_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		NullCheck(L_2);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_2, L_7, 0, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void TutorialPlayerMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialPlayerMovement_Move_mA196260AFBCE51D59C3F8970DAA87462A9C988A2 (TutorialPlayerMovement_tFD1DE5E527A7E6E1342B25C1F33D8C47CF0AC485* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _moveVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->____moveVector_12 = L_0;
		// _moveVector.x = _joystick.Horizontal * _moveSpeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->____moveVector_12);
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_2 = __this->____joystick_4;
		NullCheck(L_2);
		float L_3;
		L_3 = bl_Joystick_get_Horizontal_m95F408BB05DB3B8F060A9B5C7E39B0BB818A6010(L_2, NULL);
		float L_4 = __this->____moveSpeed_6;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		L_1->___x_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// _moveVector.z = _joystick.Vertical * _moveSpeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->____moveVector_12);
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_7 = __this->____joystick_4;
		NullCheck(L_7);
		float L_8;
		L_8 = bl_Joystick_get_Vertical_m9A3ED04564A00D796F667688280FA5E42240D552(L_7, NULL);
		float L_9 = __this->____moveSpeed_6;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		L_6->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), L_10));
		// isFalling = _rigidbody.velocity.y < -1f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->____rigidbody_11;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_11, NULL);
		float L_13 = L_12.___y_3;
		__this->___isFalling_13 = (bool)((((float)L_13) < ((float)(-1.0f)))? 1 : 0);
		// if (_joystick.Horizontal != 0 || _joystick.Vertical != 0)
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_14 = __this->____joystick_4;
		NullCheck(L_14);
		float L_15;
		L_15 = bl_Joystick_get_Horizontal_m95F408BB05DB3B8F060A9B5C7E39B0BB818A6010(L_14, NULL);
		if ((!(((float)L_15) == ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_16 = __this->____joystick_4;
		NullCheck(L_16);
		float L_17;
		L_17 = bl_Joystick_get_Vertical_m9A3ED04564A00D796F667688280FA5E42240D552(L_16, NULL);
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_0145;
		}
	}

IL_0095:
	{
		// Vector3 direction = Vector3.RotateTowards(transform.forward, _moveVector, _rotateSpeed * Time.deltaTime, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->____moveVector_12;
		float L_21 = __this->____rotateSpeed_7;
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_RotateTowards_m884BB56D5A071EF6008F9354D5FF1C9A1913AF92(L_19, L_20, ((float)il2cpp_codegen_multiply(L_21, L_22)), (0.0f), NULL);
		V_0 = L_23;
		// transform.rotation = Quaternion.LookRotation(direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_25, NULL);
		NullCheck(L_24);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_24, L_26, NULL);
		// if (transform.position.y > 0 && isFalling)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___y_3;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_00fd;
		}
	}
	{
		bool L_30 = __this->___isFalling_13;
		if (!L_30)
		{
			goto IL_00fd;
		}
	}
	{
		// _animatorController.PlayFall1();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_31 = __this->____animatorController_5;
		NullCheck(L_31);
		AnimatorController_PlayFall1_m254BC5D99AE7046A82DD429CA9A94BE025674836(L_31, NULL);
		goto IL_01a0;
	}

IL_00fd:
	{
		// else if (transform.position.z >= 245f && transform.position.z < 287f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		float L_34 = L_33.___z_4;
		if ((!(((float)L_34) >= ((float)(245.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		float L_37 = L_36.___z_4;
		if ((!(((float)L_37) < ((float)(287.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		// _animatorController.PlaySlide();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_38 = __this->____animatorController_5;
		NullCheck(L_38);
		AnimatorController_PlaySlide_m9881674FE32A0C1EA0BEE538D0FAAFA31514E870(L_38, NULL);
		goto IL_01a0;
	}

IL_0138:
	{
		// _animatorController.PlayRun();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_39 = __this->____animatorController_5;
		NullCheck(L_39);
		AnimatorController_PlayRun_m3FF02C4AEB04968F33EB805C8DBB0F331CBE59FD(L_39, NULL);
		goto IL_01a0;
	}

IL_0145:
	{
		// else if(_joystick.Horizontal == 0 && _joystick.Vertical == 0)
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_40 = __this->____joystick_4;
		NullCheck(L_40);
		float L_41;
		L_41 = bl_Joystick_get_Horizontal_m95F408BB05DB3B8F060A9B5C7E39B0BB818A6010(L_40, NULL);
		if ((!(((float)L_41) == ((float)(0.0f)))))
		{
			goto IL_01a0;
		}
	}
	{
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_42 = __this->____joystick_4;
		NullCheck(L_42);
		float L_43;
		L_43 = bl_Joystick_get_Vertical_m9A3ED04564A00D796F667688280FA5E42240D552(L_42, NULL);
		if ((!(((float)L_43) == ((float)(0.0f)))))
		{
			goto IL_01a0;
		}
	}
	{
		// if (transform.position.y > 0 && isFalling)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		float L_46 = L_45.___y_3;
		if ((!(((float)L_46) > ((float)(0.0f)))))
		{
			goto IL_0195;
		}
	}
	{
		bool L_47 = __this->___isFalling_13;
		if (!L_47)
		{
			goto IL_0195;
		}
	}
	{
		// _animatorController.PlayFall1();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_48 = __this->____animatorController_5;
		NullCheck(L_48);
		AnimatorController_PlayFall1_m254BC5D99AE7046A82DD429CA9A94BE025674836(L_48, NULL);
		goto IL_01a0;
	}

IL_0195:
	{
		// _animatorController.PlayIdle();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_49 = __this->____animatorController_5;
		NullCheck(L_49);
		AnimatorController_PlayIdle_m9F870E698D12E5118BAEB2943B1E45E1CD398605(L_49, NULL);
	}

IL_01a0:
	{
		// _rigidbody.MovePosition(_rigidbody.position + _moveVector);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_50 = __this->____rigidbody_11;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_51 = __this->____rigidbody_11;
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = __this->____moveVector_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_53, NULL);
		NullCheck(L_50);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_50, L_54, NULL);
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_55;
		L_55 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_55)
		{
			goto IL_0200;
		}
	}
	{
		// _animatorController.PlayJump();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_56 = __this->____animatorController_5;
		NullCheck(L_56);
		AnimatorController_PlayJump_m6C35CDBBD70D42B4214E3FE13AFE8DC7A080D0DE(L_56, NULL);
		// _rigidbody.AddForce(Vector3.up * _jumpForce, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_57 = __this->____rigidbody_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_59 = __this->____jumpForce_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_58, L_59, NULL);
		NullCheck(L_57);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_57, L_60, 1, NULL);
		// AudioManager.Instance.PlaySFX("Jump");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_61;
		L_61 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_61);
		AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1(L_61, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
	}

IL_0200:
	{
		// _rigidbody.AddForce(Vector3.down * _customGravity * _rigidbody.mass);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_62 = __this->____rigidbody_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_64 = __this->____customGravity_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_63, L_64, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_66 = __this->____rigidbody_11;
		NullCheck(L_66);
		float L_67;
		L_67 = Rigidbody_get_mass_m09DDDDC437499B83B3BD0D77C134BFDC3E667054(L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_65, L_67, NULL);
		NullCheck(L_62);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_62, L_68, NULL);
		// }
		return;
	}
}
// System.Void TutorialPlayerMovement::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialPlayerMovement_Jump_m097C359C66EC477428CC28DBC010142348D70EC5 (TutorialPlayerMovement_tFD1DE5E527A7E6E1342B25C1F33D8C47CF0AC485* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animatorController.PlayJump();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_0 = __this->____animatorController_5;
		NullCheck(L_0);
		AnimatorController_PlayJump_m6C35CDBBD70D42B4214E3FE13AFE8DC7A080D0DE(L_0, NULL);
		// _rigidbody.AddForce(Vector3.up * _jumpForce, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->____rigidbody_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_3 = __this->____jumpForce_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_1, L_4, 1, NULL);
		// AudioManager.Instance.PlaySFX("Jump");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_5;
		L_5 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_5);
		AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1(L_5, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		// }
		return;
	}
}
// System.Void TutorialPlayerMovement::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialPlayerMovement_OnTriggerEnter_m44870048C94BF8CA55167AA518CDD0B348C7DF72 (TutorialPlayerMovement_tFD1DE5E527A7E6E1342B25C1F33D8C47CF0AC485* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61A6E50199E28E4C8A6E9213671635A7AE5DB712);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == LayerMask.NameToLayer("Bowl"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral61A6E50199E28E4C8A6E9213671635A7AE5DB712, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002f;
		}
	}
	{
		// isAttached = true;
		__this->___isAttached_14 = (bool)1;
		// transform.parent = collision.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___0_collision;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_4);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_4, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void TutorialPlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialPlayerMovement__ctor_mF304663FC3C63925B0F5CC8662AE988184BB4656 (TutorialPlayerMovement_tFD1DE5E527A7E6E1342B25C1F33D8C47CF0AC485* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _jumpForce = 50f;
		__this->____jumpForce_8 = (50.0f);
		// [SerializeField] private float _customGravity = 50f;
		__this->____customGravity_9 = (50.0f);
		// [SerializeField] private float _rotationSpeed = 50f;
		__this->____rotationSpeed_10 = (50.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SettingsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_Start_mCB2940703E340E9B826D2A92F76DAB09F8B7B487 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _currentSceneName = SceneManager.GetActiveScene().name;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		__this->____currentSceneName_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentSceneName_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void SettingsManager::ClickPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_ClickPause_m2566D86BC3CA0FC1AA430F9C5E7B571362F47615 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// _pausePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____pausePanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SettingsManager::ClickPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_ClickPlay_m72575DEF84365BABD128D3DD6D8E245611D22E7A (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// _pausePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____pausePanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SettingsManager::ClickRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_ClickRestart_mA380E78CF250CE07DC1E80F224B288103DDBAC70 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(_currentSceneName);
		String_t* L_0 = __this->____currentSceneName_7;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void SettingsManager::ClickSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_ClickSettings_mF78CF2D26D93479DAE5CA555F4705C196408116F (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	{
		// _settingsImage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____settingsImage_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// _settings.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____settings_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SettingsManager::ClickCloseSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_ClickCloseSettings_mDDA5DE288E198CC8933B65B59D874199B521D5BE (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	{
		// _settingsImage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____settingsImage_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _settings.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____settings_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SettingsManager::ClickHome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_ClickHome_mE30B7322370E8DC2320382C7D133BAB20492332C (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18C151B7B37F32A75E0B923B3DE7FED4660FD5DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("StagesScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral18C151B7B37F32A75E0B923B3DE7FED4660FD5DD, NULL);
		// }
		return;
	}
}
// System.Void SettingsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager__ctor_m3F050F09698FD9788C28F8F171CA891F45BC4D10 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StagesManager::ClickTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StagesManager_ClickTutorial_m7973032EC461F11024CDACB5E4495CB7A42258D5 (StagesManager_t7609465E614AD6A8B53AC06246E05EAD55959DEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66990467EB5953083DDFEBA0944B1E35E59083B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TutorialScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral66990467EB5953083DDFEBA0944B1E35E59083B3, NULL);
		// }
		return;
	}
}
// System.Void StagesManager::ClickChallenge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StagesManager_ClickChallenge_m8E06EC4061821A99CA528636EEC86CC98DD9E117 (StagesManager_t7609465E614AD6A8B53AC06246E05EAD55959DEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral380D1F79DC84820F8D11C77ADED94344AC21A1A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ChallengeScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral380D1F79DC84820F8D11C77ADED94344AC21A1A3, NULL);
		// }
		return;
	}
}
// System.Void StagesManager::ClickStage1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StagesManager_ClickStage1_mF0ED528AC5C617BD36B66129C66B835CC6F3A87A (StagesManager_t7609465E614AD6A8B53AC06246E05EAD55959DEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E7713BE97C393DDDD13F75C6F8D6AA08505CAA7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Stage1Scene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral5E7713BE97C393DDDD13F75C6F8D6AA08505CAA7, NULL);
		// }
		return;
	}
}
// System.Void StagesManager::ClickStage2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StagesManager_ClickStage2_mD32348BE9E80CF0B2F78D22BEA1C8A435A8B5FEE (StagesManager_t7609465E614AD6A8B53AC06246E05EAD55959DEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral669C4C4316BB0D8800268D421965F7350B189F2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Stage2Scene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral669C4C4316BB0D8800268D421965F7350B189F2D, NULL);
		// }
		return;
	}
}
// System.Void StagesManager::ClickBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StagesManager_ClickBack_m3D8B36265A8843DFDD0F8472E2FD0F48518D776D (StagesManager_t7609465E614AD6A8B53AC06246E05EAD55959DEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TitleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3, NULL);
		// }
		return;
	}
}
// System.Void StagesManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StagesManager__ctor_mE2338BBA938C41F296E53303ABDDE8704C5C7EDD (StagesManager_t7609465E614AD6A8B53AC06246E05EAD55959DEC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TitleManager::OpenSettingsMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_OpenSettingsMenu_mFE499A1C0C6572F95A9A1AFE84DD1C74761D5956 (TitleManager_t6030A56D57245C74D7D98F40591DF5246F1BE4CC* __this, const RuntimeMethod* method) 
{
	{
		// SettingsImage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___SettingsImage_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Settings.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Settings_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TitleManager::CloseSettingsMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_CloseSettingsMenu_mD124441F16E0E771B482D30A50B6050B955E9540 (TitleManager_t6030A56D57245C74D7D98F40591DF5246F1BE4CC* __this, const RuntimeMethod* method) 
{
	{
		// SettingsImage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___SettingsImage_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Settings.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Settings_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TitleManager::OpenStartMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_OpenStartMenu_m4DD0EE242400951A9136154D464586EA9A0E24DB (TitleManager_t6030A56D57245C74D7D98F40591DF5246F1BE4CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66990467EB5953083DDFEBA0944B1E35E59083B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TutorialScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral66990467EB5953083DDFEBA0944B1E35E59083B3, NULL);
		// }
		return;
	}
}
// System.Void TitleManager::QuitStartMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_QuitStartMenu_m4CAF04BA41D9647CDED5D392C5423118849EC4C6 (TitleManager_t6030A56D57245C74D7D98F40591DF5246F1BE4CC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TitleManager::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_ExitGame_mA0AEF5D7DF93A1521790B94C36CCC4D6AEA0BCA2 (TitleManager_t6030A56D57245C74D7D98F40591DF5246F1BE4CC* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void TitleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager__ctor_m08406351E7FEB77F80D0A3A7F3FCC58D5CAAE237 (TitleManager_t6030A56D57245C74D7D98F40591DF5246F1BE4CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mE0F8E20E803B92BF19C27E78D4665616A26C8E6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_mE0F8E20E803B92BF19C27E78D4665616A26C8E6D(__this, Singleton_1__ctor_mE0F8E20E803B92BF19C27E78D4665616A26C8E6D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialAnimationController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialAnimationController_Start_mE8916E81CD6549269F2F44B9B0CE602B4AA6531F (TutorialAnimationController_t9F28D91FCFAD2882F08BCF3791AA3D44D7B29221* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void TutorialAnimationController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialAnimationController_Update_mE9707F1E90F7329B2663CE13D22D01AB0C5E99E5 (TutorialAnimationController_t9F28D91FCFAD2882F08BCF3791AA3D44D7B29221* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F000A9E3A376A509D943B9D020C2F0CA2DC3FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Space)) // ????? ??????? ??? ?????? ??????? ?????
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// animator.SetTrigger("RestartAnimation");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_4;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteralD5F000A9E3A376A509D943B9D020C2F0CA2DC3FA, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void TutorialAnimationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialAnimationController__ctor_m581B94A068C7C217A1EA676CEF96250A8578AC8C (TutorialAnimationController_t9F28D91FCFAD2882F08BCF3791AA3D44D7B29221* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialEndPerception::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEndPerception_OnCollisionEnter_mB2BF1A8E92E781142B40D9880419463D97588628 (TutorialEndPerception_tC8F6F2DD575845690116868F5A4C7FED7E5A9EB8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70C99B61FC684B57763B10FD124783953DD77E30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC48760ED9B365E27BF7EB9FB10DA5D3DE0216713);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collided with: " + collision.gameObject.name + ", Layer: " + LayerMask.LayerToName(collision.gameObject.layer));
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___0_collision;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_4, NULL);
		String_t* L_6;
		L_6 = LayerMask_LayerToName_mC7A5797D35F5307031F317741226727B307F34D0(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral70C99B61FC684B57763B10FD124783953DD77E30, L_2, _stringLiteralC48760ED9B365E27BF7EB9FB10DA5D3DE0216713, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// if (collision.gameObject.layer == LayerMask.NameToLayer("Player"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___0_collision;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_9, NULL);
		int32_t L_11;
		L_11 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_00a6;
		}
	}
	{
		// StartCoroutine(LoadSceneAfterDelay());
		RuntimeObject* L_12;
		L_12 = TutorialEndPerception_LoadSceneAfterDelay_mD7230FC3E84C5DDF7E0F5A1517AEC20B01B43496(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
		// _animatorController.PlaySuccess();
		AnimatorController_t3A9B47076CC3443FA4553F0D53FBD6462B84D9D8* L_14 = __this->____animatorController_4;
		NullCheck(L_14);
		AnimatorController_PlaySuccess_m99A47A106A40CCAA476424C764D8CAF43FFE6AED(L_14, NULL);
		// AudioManager.Instance.PlaySFX("Success");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_15;
		L_15 = AudioManager_get_Instance_mE470515848AEDD204D9C8CF0F50D6A9785890211(NULL);
		NullCheck(L_15);
		AudioManager_PlaySFX_m828B51360D3E40D1FD4BEF9E8F22FB9B343F96B1(L_15, _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890, NULL);
		// GameObject particleInstance = Instantiate(_successParticlePrefab, transform.position + Vector3.up * 10f, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->____successParticlePrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (10.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_16, L_21, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(particleInstance, 2f);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_23, (2.0f), NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TutorialEndPerception::LoadSceneAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TutorialEndPerception_LoadSceneAfterDelay_mD7230FC3E84C5DDF7E0F5A1517AEC20B01B43496 (TutorialEndPerception_tC8F6F2DD575845690116868F5A4C7FED7E5A9EB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498* L_0 = (U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498*)il2cpp_codegen_object_new(U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadSceneAfterDelayU3Ed__3__ctor_m9A7B5D3BD9B1A491D60B7E3FD753723A37E0DDD2(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void TutorialEndPerception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEndPerception__ctor_m3028E28045AA42D990F0692B191D1AD3A302AE2E (TutorialEndPerception_tC8F6F2DD575845690116868F5A4C7FED7E5A9EB8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialEndPerception/<LoadSceneAfterDelay>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAfterDelayU3Ed__3__ctor_m9A7B5D3BD9B1A491D60B7E3FD753723A37E0DDD2 (U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TutorialEndPerception/<LoadSceneAfterDelay>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAfterDelayU3Ed__3_System_IDisposable_Dispose_m34809EDD65641042F924FC4BFC0006C8B4C12D16 (U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TutorialEndPerception/<LoadSceneAfterDelay>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneAfterDelayU3Ed__3_MoveNext_mA408FF1C69BFBD5188841BFFED1F21BE91BA16BB (U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18C151B7B37F32A75E0B923B3DE7FED4660FD5DD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(4f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (4.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene("StagesScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral18C151B7B37F32A75E0B923B3DE7FED4660FD5DD, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TutorialEndPerception/<LoadSceneAfterDelay>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneAfterDelayU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m744C6C9032F6884F0A646E868E0CED6BF85CA17B (U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TutorialEndPerception/<LoadSceneAfterDelay>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAfterDelayU3Ed__3_System_Collections_IEnumerator_Reset_m3CE5DBD2DB3CCA8B4D7212B00770FBA38E7C28F7 (U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneAfterDelayU3Ed__3_System_Collections_IEnumerator_Reset_m3CE5DBD2DB3CCA8B4D7212B00770FBA38E7C28F7_RuntimeMethod_var)));
	}
}
// System.Object TutorialEndPerception/<LoadSceneAfterDelay>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneAfterDelayU3Ed__3_System_Collections_IEnumerator_get_Current_m135B67AAF061F780C7DC472FC38696C00B3BE39D (U3CLoadSceneAfterDelayU3Ed__3_t11153F752ECB0D84F70460A7296E3819B9A02498* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialManager::ClickSkip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialManager_ClickSkip_mCE9BD1E6CE4B8FD66BBC0FEB76D18FF05C2FBA56 (TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18C151B7B37F32A75E0B923B3DE7FED4660FD5DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("StagesScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral18C151B7B37F32A75E0B923B3DE7FED4660FD5DD, NULL);
		// }
		return;
	}
}
// System.Void TutorialManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialManager__ctor_m5DF15FACAE927F11F4CD3E6162A8FEE01B406E16 (TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mD86770CD48FC638A29119FCE8C16EF6A605ACDAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_mD86770CD48FC638A29119FCE8C16EF6A605ACDAB(__this, Singleton_1__ctor_mD86770CD48FC638A29119FCE8C16EF6A605ACDAB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void bl_Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bl_Joystick_Start_m0BE97D987CBB009B2EEFC6B6AAE3CC1AA1512A84 (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46C0D5008E20CE11F44B701B1E4FE55961663886);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral502CB45B72507F781287E5C292A20B4D014A8F60);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (StickRect == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___StickRect_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogError("Please add the stick for joystick work!.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral502CB45B72507F781287E5C292A20B4D014A8F60, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0020:
	{
		// if (transform.root.GetComponent<Canvas>() != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_2, NULL);
		NullCheck(L_3);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4;
		L_4 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(L_3, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		// m_Canvas = transform.root.GetComponent<Canvas>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_6, NULL);
		NullCheck(L_7);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_8;
		L_8 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(L_7, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___m_Canvas_18 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Canvas_18), (void*)L_8);
		goto IL_0092;
	}

IL_0050:
	{
		// else if (transform.root.GetComponentInChildren<Canvas>() != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_9, NULL);
		NullCheck(L_10);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11;
		L_11 = Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18(L_10, Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		// m_Canvas = transform.root.GetComponentInChildren<Canvas>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_13, NULL);
		NullCheck(L_14);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_15;
		L_15 = Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18(L_14, Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var);
		__this->___m_Canvas_18 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Canvas_18), (void*)L_15);
		goto IL_0092;
	}

IL_0080:
	{
		// Debug.LogError("Required at lest one canvas for joystick work.!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral46C0D5008E20CE11F44B701B1E4FE55961663886, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0092:
	{
		// DeathArea = CenterReference.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___CenterReference_11;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		__this->___DeathArea_12 = L_17;
		// diff = CenterReference.position.magnitude;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___CenterReference_11;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		V_0 = L_19;
		float L_20;
		L_20 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		__this->___diff_19 = L_20;
		// PressScaleVector = new Vector3(OnPressScale, OnPressScale, OnPressScale);
		float L_21 = __this->___OnPressScale_6;
		float L_22 = __this->___OnPressScale_6;
		float L_23 = __this->___OnPressScale_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_21, L_22, L_23, /*hidden argument*/NULL);
		__this->___PressScaleVector_20 = L_24;
		// if (GetComponent<Image>() != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25;
		L_25 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_0134;
		}
	}
	{
		// backImage = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27;
		L_27 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___backImage_17 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backImage_17), (void*)L_27);
		// stickImage = StickRect.GetComponent<Image>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28 = __this->___StickRect_10;
		NullCheck(L_28);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29;
		L_29 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_28, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___stickImage_16 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stickImage_16), (void*)L_29);
		// backImage.CrossFadeColor(NormalColor, 0.1f, true, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_30 = __this->___backImage_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = __this->___NormalColor_7;
		NullCheck(L_30);
		VirtualActionInvoker4< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, float, bool, bool >::Invoke(47 /* System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean) */, L_30, L_31, (0.100000001f), (bool)1, (bool)1);
		// stickImage.CrossFadeColor(NormalColor, 0.1f, true, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = __this->___stickImage_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = __this->___NormalColor_7;
		NullCheck(L_32);
		VirtualActionInvoker4< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, float, bool, bool >::Invoke(47 /* System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean) */, L_32, L_33, (0.100000001f), (bool)1, (bool)1);
	}

IL_0134:
	{
		// }
		return;
	}
}
// System.Void bl_Joystick::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bl_Joystick_Update_m12CBE6C7E6AD5FEE3BC8FC6C8E1A8AF49B1E74A7 (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) 
{
	{
		// DeathArea = CenterReference.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___CenterReference_11;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___DeathArea_12 = L_1;
		// if (!isFree)
		bool L_2 = __this->___isFree_14;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// StickRect.position = Vector3.SmoothDamp(StickRect.position, DeathArea, ref currentVelocity, smoothTime);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___StickRect_10;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___StickRect_10;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___DeathArea_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___currentVelocity_13);
		float L_8;
		L_8 = bl_Joystick_get_smoothTime_m806C92B9C229CDCA8B5AECA1BB9F9A7C95C775EB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_5, L_6, L_7, L_8, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_9, NULL);
		// if (Vector3.Distance(StickRect.position, DeathArea) < .1f)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___StickRect_10;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___DeathArea_12;
		float L_13;
		L_13 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_11, L_12, NULL);
		if ((!(((float)L_13) < ((float)(0.100000001f)))))
		{
			goto IL_007c;
		}
	}
	{
		// isFree = false;
		__this->___isFree_14 = (bool)0;
		// StickRect.position = DeathArea;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___StickRect_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___DeathArea_12;
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void bl_Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bl_Joystick_OnPointerDown_m5CD28A859E69D14CE7A0C764BB2C37BCE0810B1E (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lastId == -2)
		int32_t L_0 = __this->___lastId_15;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0071;
		}
	}
	{
		// lastId = data.pointerId;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_data;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_1, NULL);
		__this->___lastId_15 = L_2;
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(ScaleJoysctick(true));
		RuntimeObject* L_3;
		L_3 = bl_Joystick_ScaleJoysctick_mE6A3C9B856E4E5F0E545F71D175C47D8AD3DDD8F(__this, (bool)1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// OnDrag(data);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___0_data;
		bl_Joystick_OnDrag_mCE61CD1EA65E9F404D9BF3A3EF5EBE8C93EE8DFF(__this, L_5, NULL);
		// if (backImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___backImage_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// backImage.CrossFadeColor(PressColor, Duration, true, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___backImage_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___PressColor_8;
		float L_10 = __this->___Duration_9;
		NullCheck(L_8);
		VirtualActionInvoker4< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, float, bool, bool >::Invoke(47 /* System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean) */, L_8, L_9, L_10, (bool)1, (bool)1);
		// stickImage.CrossFadeColor(PressColor, Duration, true, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___stickImage_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___PressColor_8;
		float L_13 = __this->___Duration_9;
		NullCheck(L_11);
		VirtualActionInvoker4< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, float, bool, bool >::Invoke(47 /* System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean) */, L_11, L_12, L_13, (bool)1, (bool)1);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void bl_Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bl_Joystick_OnDrag_mCE61CD1EA65E9F404D9BF3A3EF5EBE8C93EE8DFF (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (data.pointerId == lastId)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_0, NULL);
		int32_t L_2 = __this->___lastId_15;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0087;
		}
	}
	{
		// isFree = false;
		__this->___isFree_14 = (bool)0;
		// Vector3 position = bl_JoystickUtils.TouchPosition(m_Canvas,GetTouchID);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___m_Canvas_18;
		int32_t L_4;
		L_4 = bl_Joystick_get_GetTouchID_m587BFA3442E073664B5DFB5AD6175B2C54A0A2B8(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = bl_JoystickUtils_TouchPosition_mC808A638B32EDAE88F382A79C1042BB75242B28B(L_3, L_4, NULL);
		V_0 = L_5;
		// if (Vector2.Distance(DeathArea, position) < radio)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___DeathArea_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		float L_10;
		L_10 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_7, L_9, NULL);
		float L_11;
		L_11 = bl_Joystick_get_radio_m37956085EF6C0BC7F169238743B236608999A5FF(__this, NULL);
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		// StickRect.position = position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___StickRect_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
		return;
	}

IL_0052:
	{
		// StickRect.position = DeathArea + (position - DeathArea).normalized * radio;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___StickRect_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___DeathArea_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___DeathArea_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_17, NULL);
		V_1 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		float L_20;
		L_20 = bl_Joystick_get_radio_m37956085EF6C0BC7F169238743B236608999A5FF(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_21, NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_22, NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void bl_Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bl_Joystick_OnPointerUp_m29FD5FB5A5140BB62D0934CDCDD7FB02B2AD6B8D (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isFree = true;
		__this->___isFree_14 = (bool)1;
		// currentVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___currentVelocity_13 = L_0;
		// if (data.pointerId == lastId)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_data;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_1, NULL);
		int32_t L_3 = __this->___lastId_15;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_007c;
		}
	}
	{
		// lastId = -2;
		__this->___lastId_15 = ((int32_t)-2);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(ScaleJoysctick(false));
		RuntimeObject* L_4;
		L_4 = bl_Joystick_ScaleJoysctick_mE6A3C9B856E4E5F0E545F71D175C47D8AD3DDD8F(__this, (bool)0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// if (backImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___backImage_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_007c;
		}
	}
	{
		// backImage.CrossFadeColor(NormalColor, Duration, true, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___backImage_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___NormalColor_7;
		float L_10 = __this->___Duration_9;
		NullCheck(L_8);
		VirtualActionInvoker4< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, float, bool, bool >::Invoke(47 /* System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean) */, L_8, L_9, L_10, (bool)1, (bool)1);
		// stickImage.CrossFadeColor(NormalColor, Duration, true, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___stickImage_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___NormalColor_7;
		float L_13 = __this->___Duration_9;
		NullCheck(L_11);
		VirtualActionInvoker4< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, float, bool, bool >::Invoke(47 /* System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean) */, L_11, L_12, L_13, (bool)1, (bool)1);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator bl_Joystick::ScaleJoysctick(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bl_Joystick_ScaleJoysctick_mE6A3C9B856E4E5F0E545F71D175C47D8AD3DDD8F (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, bool ___0_increase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89* L_0 = (U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89*)il2cpp_codegen_object_new(U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CScaleJoysctickU3Ed__22__ctor_mBE3E81536C29F175BB0FC0A7B4F678D6CDAEBBDF(L_0, 0, NULL);
		U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89* L_2 = L_1;
		bool L_3 = ___0_increase;
		NullCheck(L_2);
		L_2->___increase_3 = L_3;
		return L_2;
	}
}
// System.Int32 bl_Joystick::get_GetTouchID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bl_Joystick_get_GetTouchID_m587BFA3442E073664B5DFB5AD6175B2C54A0A2B8 (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Input.touches.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		// if (Input.touches[i].fingerId == lastId)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_0;
		L_0 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		int32_t L_3 = __this->___lastId_15;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_001e;
		}
	}
	{
		// return i;
		int32_t L_4 = V_0;
		return L_4;
	}

IL_001e:
	{
		// for (int i = 0; i < Input.touches.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < Input.touches.Length; i++)
		int32_t L_6 = V_0;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_7;
		L_7 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return -1;
		return (-1);
	}
}
// System.Single bl_Joystick::get_radio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float bl_Joystick_get_radio_m37956085EF6C0BC7F169238743B236608999A5FF (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private float radio { get { return (Radio * 5 + Mathf.Abs((diff - CenterReference.position.magnitude))); } }
		float L_0 = __this->___Radio_4;
		float L_1 = __this->___diff_19;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___CenterReference_11;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_5;
		L_5 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_4)));
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, (5.0f))), L_5));
	}
}
// System.Single bl_Joystick::get_smoothTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float bl_Joystick_get_smoothTime_m806C92B9C229CDCA8B5AECA1BB9F9A7C95C775EB (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) 
{
	{
		// private float smoothTime { get { return (1 - (SmoothTime)); } }
		float L_0 = __this->___SmoothTime_5;
		return ((float)il2cpp_codegen_subtract((1.0f), L_0));
	}
}
// System.Single bl_Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float bl_Joystick_get_Horizontal_m95F408BB05DB3B8F060A9B5C7E39B0BB818A6010 (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) 
{
	{
		// return (StickRect.position.x - DeathArea.x) / Radio;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___StickRect_10;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___DeathArea_12);
		float L_4 = L_3->___x_2;
		float L_5 = __this->___Radio_4;
		return ((float)(((float)il2cpp_codegen_subtract(L_2, L_4))/L_5));
	}
}
// System.Single bl_Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float bl_Joystick_get_Vertical_m9A3ED04564A00D796F667688280FA5E42240D552 (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) 
{
	{
		// return (StickRect.position.y - DeathArea.y) / Radio;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___StickRect_10;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___DeathArea_12);
		float L_4 = L_3->___y_3;
		float L_5 = __this->___Radio_4;
		return ((float)(((float)il2cpp_codegen_subtract(L_2, L_4))/L_5));
	}
}
// System.Void bl_Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bl_Joystick__ctor_m699C022DE3C44B5578B6B6A58D4BAC535A614AD8 (bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField, Range(1, 15)]private float Radio = 5;//the ratio of the circumference of the joystick
		__this->___Radio_4 = (5.0f);
		// [SerializeField, Range(0.01f, 1)]private float SmoothTime = 0.5f;//return to default position speed
		__this->___SmoothTime_5 = (0.5f);
		// [SerializeField, Range(0.5f, 4)] private float OnPressScale = 1.5f;//return to default position speed
		__this->___OnPressScale_6 = (1.5f);
		// public Color NormalColor = new Color(1, 1, 1, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___NormalColor_7 = L_0;
		// public Color PressColor = new Color(1, 1, 1, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___PressColor_8 = L_1;
		// [SerializeField, Range(0.1f, 5)]private float Duration = 1;
		__this->___Duration_9 = (1.0f);
		// private int lastId = -2;
		__this->___lastId_15 = ((int32_t)-2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void bl_Joystick/<ScaleJoysctick>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleJoysctickU3Ed__22__ctor_mBE3E81536C29F175BB0FC0A7B4F678D6CDAEBBDF (U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void bl_Joystick/<ScaleJoysctick>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleJoysctickU3Ed__22_System_IDisposable_Dispose_mDC12AA147BC9C94501032A559CB8F85A82C4F594 (U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean bl_Joystick/<ScaleJoysctick>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CScaleJoysctickU3Ed__22_MoveNext_mB2EDFE05281F2A779C3B180B448B5DD28D3EC9CF (U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00bc;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float _time = 0;
		__this->___U3C_timeU3E5__2_4 = (0.0f);
		goto IL_00c3;
	}

IL_0031:
	{
		// Vector3 v = StickRect.localScale;
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_4 = V_1;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = L_4->___StickRect_10;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		V_2 = L_6;
		// if (increase)
		bool L_7 = __this->___increase_3;
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// v = Vector3.Lerp(StickRect.localScale, PressScaleVector, (_time / Duration));
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_8 = V_1;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = L_8->___StickRect_10;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_11 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->___PressScaleVector_20;
		float L_13 = __this->___U3C_timeU3E5__2_4;
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->___Duration_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_10, L_12, ((float)(L_13/L_15)), NULL);
		V_2 = L_16;
		goto IL_008e;
	}

IL_006b:
	{
		// v = Vector3.Lerp(StickRect.localScale, Vector3.one, (_time / Duration));
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_17 = V_1;
		NullCheck(L_17);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = L_17->___StickRect_10;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_21 = __this->___U3C_timeU3E5__2_4;
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->___Duration_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_19, L_20, ((float)(L_21/L_23)), NULL);
		V_2 = L_24;
	}

IL_008e:
	{
		// StickRect.localScale = v;
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_25 = V_1;
		NullCheck(L_25);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = L_25->___StickRect_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		NullCheck(L_26);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_26, L_27, NULL);
		// _time += Time.deltaTime;
		float L_28 = __this->___U3C_timeU3E5__2_4;
		float L_29;
		L_29 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3C_timeU3E5__2_4 = ((float)il2cpp_codegen_add(L_28, L_29));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00bc:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c3:
	{
		// while (_time < Duration)
		float L_30 = __this->___U3C_timeU3E5__2_4;
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_31 = V_1;
		NullCheck(L_31);
		float L_32 = L_31->___Duration_9;
		if ((((float)L_30) < ((float)L_32)))
		{
			goto IL_0031;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object bl_Joystick/<ScaleJoysctick>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CScaleJoysctickU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD5A192712CF9225874DA0249BD337AFB8C692599 (U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void bl_Joystick/<ScaleJoysctick>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleJoysctickU3Ed__22_System_Collections_IEnumerator_Reset_mB6008A1E1D535687BFA8D2309EF30027A56E4BE2 (U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CScaleJoysctickU3Ed__22_System_Collections_IEnumerator_Reset_mB6008A1E1D535687BFA8D2309EF30027A56E4BE2_RuntimeMethod_var)));
	}
}
// System.Object bl_Joystick/<ScaleJoysctick>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CScaleJoysctickU3Ed__22_System_Collections_IEnumerator_get_Current_m64DA4A16796281491644FC5FE547085F4AB55D96 (U3CScaleJoysctickU3Ed__22_t1108C5264828CCBC34B8E5CCE0D4A9C5D52E7F89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 bl_JoystickUtils::TouchPosition(UnityEngine.Canvas,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 bl_JoystickUtils_TouchPosition_mC808A638B32EDAE88F382A79C1042BB75242B28B (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___0__Canvas, int32_t ___1_touchID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 Return = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// if (_Canvas.renderMode == RenderMode.ScreenSpaceOverlay)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = ___0__Canvas;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_1, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Return = Input.GetTouch(touchID).position;
		int32_t L_3 = ___1_touchID;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_3, NULL);
		V_1 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		V_0 = L_6;
		goto IL_0078;
	}

IL_0024:
	{
		// else if (_Canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = ___0__Canvas;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0078;
		}
	}
	{
		// Vector2 tempVector = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_2 = L_9;
		// Vector3 pos = Input.GetTouch(touchID).position;
		int32_t L_10 = ___1_touchID;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_11;
		L_11 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_10, NULL);
		V_1 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_12, NULL);
		V_3 = L_13;
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(_Canvas.transform as RectTransform, pos, _Canvas.worldCamera, out tempVector);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_14 = ___0__Canvas;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_16, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_18 = ___0__Canvas;
		NullCheck(L_18);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19;
		L_19 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_15, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_17, L_19, (&V_2), NULL);
		// Return = _Canvas.transform.TransformPoint(tempVector);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_21 = ___0__Canvas;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_23, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_22, L_24, NULL);
		V_0 = L_25;
	}

IL_0078:
	{
		// return Return;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		return L_26;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void bl_ControllerExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bl_ControllerExample_Update_mAB69EE2D9FFE2CD5133BB397DB9E7D7E1BB27762 (bl_ControllerExample_t52A5C81FB90D1B2A2A9909E8C31B06094F3D5F75* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float v = Joystick.Vertical; //get the vertical value of joystick
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_0 = __this->___Joystick_4;
		NullCheck(L_0);
		float L_1;
		L_1 = bl_Joystick_get_Vertical_m9A3ED04564A00D796F667688280FA5E42240D552(L_0, NULL);
		V_0 = L_1;
		// float h = Joystick.Horizontal;//get the horizontal value of joystick
		bl_Joystick_tA756B7465187816107BAA0D10B3C30349521A5EC* L_2 = __this->___Joystick_4;
		NullCheck(L_2);
		float L_3;
		L_3 = bl_Joystick_get_Horizontal_m95F408BB05DB3B8F060A9B5C7E39B0BB818A6010(L_2, NULL);
		// Vector3 translate = (new Vector3(h, 0, v) * Time.deltaTime) * Speed;
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_3, (0.0f), L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		float L_8 = __this->___Speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		V_1 = L_9;
		// transform.Translate(translate);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		NullCheck(L_10);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void bl_ControllerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bl_ControllerExample__ctor_mBDBB518E7172E7566B7F246D5F2934B49F61748C (bl_ControllerExample_t52A5C81FB90D1B2A2A9909E8C31B06094F3D5F75* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField]private float Speed = 5;
		__this->___Speed_5 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_eulerAngles_m441C342F21FEFCED9BABED01FA516C97EA424D6E_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_current;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = __this->___U3CpointerIdU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
