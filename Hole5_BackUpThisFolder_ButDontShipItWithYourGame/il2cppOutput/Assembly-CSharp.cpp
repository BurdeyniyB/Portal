#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<GoogleMobileAds.Api.AdError>
struct Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6;
// System.Action`1<GoogleMobileAds.Api.AdValue>
struct Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<GoogleMobileAds.Api.LoadAdError>
struct Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t6D103D50D92EED8806671DABC525008F7D560A68;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`2<GoogleMobileAds.Common.IAdapterResponseInfoClient,GoogleMobileAds.Api.AdapterResponseInfo>
struct Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158;
// AdsManager
struct AdsManager_tE059594BE435B356831188671B794CDE032FC41B;
// BannerAds
struct BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443;
// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChangeGroundMesh
struct ChangeGroundMesh_t3E2B7503104563801D0A6BE705E527085ACF3BE1;
// ChangeHoleBorderColor
struct ChangeHoleBorderColor_t3C436959098B0238252A0B496BF460FDA3393C72;
// ChangeScale
struct ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Conditions
struct Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CreateNewPositionHole
struct CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49;
// Data
struct Data_tD68044ADE8612868F3B424B065920F50C65B5CCE;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EndGame
struct EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9;
// GoogleMobileAds.Common.IResponseInfoClient
struct IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7;
// IgnoreColision
struct IgnoreColision_tAE708B79CA84B211FB0E41CD4F349CB6D040DE8F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC;
// InterstitialAds
struct InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9;
// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530;
// LevelProgressLine
struct LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62;
// LoadDataWhenGameStart
struct LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53;
// LoadDatasWhenOpenGame
struct LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Move
struct Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// NumberLevel
struct NumberLevel_t27C83AEFC8A0EDFA491CCBF50294DBB0C7DEF205;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Observer
struct Observer_t2C5AFCFC4BDF9C51E37E3F7FAD6BF3604A5088B9;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// GoogleMobileAds.Api.ResponseInfo
struct ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SaveDataWhenGameEnd
struct SaveDataWhenGameEnd_t40D069F4A2732500529C8CCAD38D4BE00F656484;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ChangeScale/<ScaleHole>d__1
struct U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t6D103D50D92EED8806671DABC525008F7D560A68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral027C67395C6507BCC9C3F4269CB5D6FDF7357739;
IL2CPP_EXTERN_C String_t* _stringLiteral091939ACB0213BB67BF94AD0C261A085D44CB510;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0CE85C39D1F4D463541F9ED12AC92DE4F5542A;
IL2CPP_EXTERN_C String_t* _stringLiteral0B7CE99D5EB5F62D56EDDACF9E28350F288F6A50;
IL2CPP_EXTERN_C String_t* _stringLiteral33E5D39263984CD00116814ABC8E813040242800;
IL2CPP_EXTERN_C String_t* _stringLiteral4CE930388BF0D0721CC71424D0AF03B46FB38DFE;
IL2CPP_EXTERN_C String_t* _stringLiteral514F0CB4E2F0E8A761F646FAAB7A3E38AFF2CF07;
IL2CPP_EXTERN_C String_t* _stringLiteral56BDB588530347401E7E69440F76A4874882A647;
IL2CPP_EXTERN_C String_t* _stringLiteral640E5F98AA18EC00659A81B9247FF2E9EED4D056;
IL2CPP_EXTERN_C String_t* _stringLiteral75B9B6A1F49656E849820E5AF440ACF56500DCD1;
IL2CPP_EXTERN_C String_t* _stringLiteral7FC8CE8324612820255B09F1869668EF9B28E8A2;
IL2CPP_EXTERN_C String_t* _stringLiteral805F8EDE8BE2B229B802E974A0543E2DE9BB8127;
IL2CPP_EXTERN_C String_t* _stringLiteralBA839AA9B952F20BBBB5E83609055E3B6BB000F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8;
IL2CPP_EXTERN_C String_t* _stringLiteralD3C1E2FD3BD5029EB501F48DC562DC6FC1429FF6;
IL2CPP_EXTERN_C String_t* _stringLiteralD9025D26B517F216E26CC106AFA5202B0185FE31;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC59B9685B377529C8AF2AC42C79D1717CE1417E;
IL2CPP_EXTERN_C String_t* _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
IL2CPP_EXTERN_C String_t* _stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralE92B0ACB76744F9274A0F7B1D50997CB14BA2C0C;
IL2CPP_EXTERN_C String_t* _stringLiteralFE38257974BF0F70BDFA8A13D0A3625109F80CDC;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAds_U3CCallBannerU3Eb__2_0_mD58B8DCA46CA1392CFD0DC60BF815E0095F46F68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangeGroundMesh_ChangeMesh_mFC8AFDC19F271D3EEC0DA61D760DEE567E854BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangeHoleBorderColor_ChangeFalledBorder_m1FD877AA44141207197B13743E0850A8D0893E07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EndGame_CallWhenEnd_mC3CF9BCDBFF3AB741157A75513A04E00CBA187F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAds_U3CCallInterstitialU3Eb__2_0_mAF04BDB88E712EEE335CBC02FABC0CFDD2FFDD0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAds_U3CLoadInterstitialAdU3Eb__3_0_mDF02844E01D2682A0C7EA60E9651E6386E3292FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_SetScenePath_mD913298B272E9281DBD2F38DF0764E4B37D95C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelProgressLine_ChangeFalledBorder_m36C722969F5A3AF7FE3B9B8E986BB34E4F943D2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NumberLevel_ChangeText_m1B7B2D2E03591FEE2C3A08083A33995558A327D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Observer_ChangeFalledBorder_m1BEEA0E4817DC03665DB1DF3CD604883B028A200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Observer_ChangeFalledBorder_m9C5F3611DBCBF4926904FFD143AF10DEB8281430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Observer_ScaleHole_m39D3DC1A33271BEEA21E44F61E3DA0FA1FDBD8E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SaveDataWhenGameEnd_SaveData_m710E5714AD9601A03D4C0E6582890482FB4091B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CScaleHoleU3Ed__1_System_Collections_IEnumerator_Reset_m83BEDE1978224B35DD94079EDB2D2895EAE13DF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

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

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE  : public RuntimeObject
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::_client
	RuntimeObject* ____client_0;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::Keywords
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___Keywords_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::Extras
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Extras_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::MediationExtras
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___MediationExtras_4;
};

// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::_type
	int32_t ____type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::_orientation
	int32_t ____orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::_width
	int32_t ____width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::_height
	int32_t ____height_3;
};

// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB  : public RuntimeObject
{
	// System.Action GoogleMobileAds.Api.BannerView::OnBannerAdLoaded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnBannerAdLoaded_0;
	// System.Action`1<GoogleMobileAds.Api.LoadAdError> GoogleMobileAds.Api.BannerView::OnBannerAdLoadFailed
	Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* ___OnBannerAdLoadFailed_1;
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.BannerView::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_2;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_3;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_4;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_5;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_6;
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::_client
	RuntimeObject* ____client_7;
};

// CreateNewPositionHole
struct CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49  : public RuntimeObject
{
};

// Data
struct Data_tD68044ADE8612868F3B424B065920F50C65B5CCE  : public RuntimeObject
{
};

// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.InterstitialAd::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_0;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_1;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_2;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_3;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_4;
	// System.Action`1<GoogleMobileAds.Api.AdError> GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentFailed
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___OnAdFullScreenContentFailed_5;
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::_client
	RuntimeObject* ____client_6;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::_canShowAd
	bool ____canShowAd_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// GoogleMobileAds.Api.ResponseInfo
struct ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0  : public RuntimeObject
{
	// GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Api.ResponseInfo::_client
	RuntimeObject* ____client_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
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

// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62  : public AdError_tA3BF7518349885A73447524367693A096B3DD1AE
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::_client
	RuntimeObject* ____client_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// ChangeScale/<ScaleHole>d__1
struct U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A  : public RuntimeObject
{
	// System.Int32 ChangeScale/<ScaleHole>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ChangeScale/<ScaleHole>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single ChangeScale/<ScaleHole>d__1::_deltaChangeScale
	float ____deltaChangeScale_2;
	// ChangeScale ChangeScale/<ScaleHole>d__1::<>4__this
	ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95* ___U3CU3E4__this_3;
	// UnityEngine.Vector3 ChangeScale/<ScaleHole>d__1::<StartScale>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CStartScaleU3E5__2_4;
	// UnityEngine.Vector3 ChangeScale/<ScaleHole>d__1::<EndScale>5__3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CEndScaleU3E5__3_5;
	// System.Single ChangeScale/<ScaleHole>d__1::<time>5__4
	float ___U3CtimeU3E5__4_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t6D103D50D92EED8806671DABC525008F7D560A68  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AdsManager
struct AdsManager_tE059594BE435B356831188671B794CDE032FC41B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BannerAds AdsManager::_bannerAds
	BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* ____bannerAds_4;
	// InterstitialAds AdsManager::_interstitialAds
	InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* ____interstitialAds_5;
	// Data AdsManager::_data
	Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* ____data_6;
};

// BannerAds
struct BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String BannerAds::_adUnitId
	String_t* ____adUnitId_4;
	// GoogleMobileAds.Api.BannerView BannerAds::_bannerView
	BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* ____bannerView_5;
};

// ChangeGroundMesh
struct ChangeGroundMesh_t3E2B7503104563801D0A6BE705E527085ACF3BE1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Move ChangeGroundMesh::_move
	Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* ____move_4;
	// UnityEngine.PolygonCollider2D ChangeGroundMesh::_hole2DCollider
	PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* ____hole2DCollider_5;
	// UnityEngine.PolygonCollider2D ChangeGroundMesh::_ground2DCollider
	PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* ____ground2DCollider_6;
	// UnityEngine.MeshCollider ChangeGroundMesh::_generatedMeshCollider
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ____generatedMeshCollider_7;
	// System.Single ChangeGroundMesh::initialScale
	float ___initialScale_8;
	// UnityEngine.Mesh ChangeGroundMesh::GeneratedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___GeneratedMesh_9;
};

// ChangeHoleBorderColor
struct ChangeHoleBorderColor_t3C436959098B0238252A0B496BF460FDA3393C72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image ChangeHoleBorderColor::_borderGreen
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____borderGreen_4;
};

// ChangeScale
struct ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ChangeScale::_timeOfChangeScale
	float ____timeOfChangeScale_4;
};

// Conditions
struct Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<System.Single> Conditions::OnChangeFalledBorder
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___OnChangeFalledBorder_4;
	// System.Action`1<System.Single> Conditions::OnChangeScale
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___OnChangeScale_5;
	// System.Int32 Conditions::_needCountObstacles
	int32_t ____needCountObstacles_6;
	// System.Single Conditions::_deltaChangeScale
	float ____deltaChangeScale_7;
	// System.Int32 Conditions::_countCollisionObstacleKilled
	int32_t ____countCollisionObstacleKilled_8;
};

// EndGame
struct EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<System.String> EndGame::SetNameScene
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___SetNameScene_4;
	// LevelProgressLine EndGame::_levelProgressLine
	LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* ____levelProgressLine_5;
	// UnityEngine.GameObject EndGame::_endPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____endPanel_6;
	// System.String EndGame::_loadScenePath
	String_t* ____loadScenePath_7;
};

// IgnoreColision
struct IgnoreColision_tAE708B79CA84B211FB0E41CD4F349CB6D040DE8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshCollider IgnoreColision::_generatedMeshCollider
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ____generatedMeshCollider_4;
	// UnityEngine.Collider IgnoreColision::_groundCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____groundCollider_5;
};

// InterstitialAds
struct InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String InterstitialAds::_adUnitId
	String_t* ____adUnitId_4;
	// GoogleMobileAds.Api.InterstitialAd InterstitialAds::interstitialAd
	InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* ___interstitialAd_5;
};

// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EndGame LevelManager::_endGame
	EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* ____endGame_4;
	// System.String LevelManager::_scenePath
	String_t* ____scenePath_5;
};

// LevelProgressLine
struct LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action LevelProgressLine::EndGame
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EndGame_4;
	// UnityEngine.Transform LevelProgressLine::_obstacleParentObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____obstacleParentObject_5;
	// UnityEngine.UI.Image LevelProgressLine::_borderRed
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____borderRed_6;
	// System.Int32 LevelProgressLine::_childOnStart
	int32_t ____childOnStart_7;
	// System.Int32 LevelProgressLine::_child
	int32_t ____child_8;
};

// LoadDataWhenGameStart
struct LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<System.Int32> LoadDataWhenGameStart::SetNumber
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___SetNumber_4;
	// Data LoadDataWhenGameStart::_data
	Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* ____data_5;
	// System.Int32 LoadDataWhenGameStart::_number
	int32_t ____number_6;
};

// LoadDatasWhenOpenGame
struct LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Data LoadDatasWhenOpenGame::_data
	Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* ____data_4;
	// System.String LoadDatasWhenOpenGame::_name
	String_t* ____name_5;
};

// Move
struct Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action Move::MoveCompleted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MoveCompleted_4;
	// UnityEngine.Collider Move::_groundCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____groundCollider_5;
	// System.Single Move::speed
	float ___speed_6;
	// System.Single Move::_distanceFactorX
	float ____distanceFactorX_7;
	// System.Single Move::_distanceFactorZ
	float ____distanceFactorZ_8;
	// CreateNewPositionHole Move::_createNewPositionHole
	CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49* ____createNewPositionHole_9;
	// System.Single Move::_startPositionX
	float ____startPositionX_10;
	// System.Single Move::_startPositionZ
	float ____startPositionZ_11;
	// UnityEngine.Vector3 Move::_raycastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____raycastPosition_12;
};

// NumberLevel
struct NumberLevel_t27C83AEFC8A0EDFA491CCBF50294DBB0C7DEF205  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LoadDataWhenGameStart NumberLevel::_gameStart
	LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* ____gameStart_4;
	// UnityEngine.UI.Text NumberLevel::_numberLeft
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____numberLeft_5;
	// UnityEngine.UI.Text NumberLevel::_numberRight
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____numberRight_6;
};

// Observer
struct Observer_t2C5AFCFC4BDF9C51E37E3F7FAD6BF3604A5088B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Conditions Observer::_conditions
	Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* ____conditions_4;
	// ChangeScale Observer::_changeScale
	ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95* ____changeScale_5;
	// ChangeHoleBorderColor Observer::_changeHoleBorderColor
	ChangeHoleBorderColor_t3C436959098B0238252A0B496BF460FDA3393C72* ____changeHoleBorderColor_6;
	// LevelProgressLine Observer::_levelProgressLine
	LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* ____levelProgressLine_7;
};

// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// SaveDataWhenGameEnd
struct SaveDataWhenGameEnd_t40D069F4A2732500529C8CCAD38D4BE00F656484  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Data SaveDataWhenGameEnd::_data
	Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* ____data_4;
	// EndGame SaveDataWhenGameEnd::_endGame
	EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* ____endGame_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.HashSet`1<System.String>

// System.Collections.Generic.HashSet`1<System.String>

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Api.AdRequest

// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields
{
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;
};

// GoogleMobileAds.Api.AdSize

// GoogleMobileAds.Api.BannerView

// GoogleMobileAds.Api.BannerView

// CreateNewPositionHole

// CreateNewPositionHole

// Data

// Data

// GoogleMobileAds.Api.InitializationStatus

// GoogleMobileAds.Api.InitializationStatus

// GoogleMobileAds.Api.InterstitialAd

// GoogleMobileAds.Api.InterstitialAd

// GoogleMobileAds.Api.ResponseInfo
struct ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_StaticFields
{
	// System.Func`2<GoogleMobileAds.Common.IAdapterResponseInfoClient,GoogleMobileAds.Api.AdapterResponseInfo> GoogleMobileAds.Api.ResponseInfo::<>f__am$cache0
	Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A* ___U3CU3Ef__amU24cache0_1;
};

// GoogleMobileAds.Api.ResponseInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Readme/Section

// Readme/Section

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// GoogleMobileAds.Api.LoadAdError

// GoogleMobileAds.Api.LoadAdError

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

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// ChangeScale/<ScaleHole>d__1

// ChangeScale/<ScaleHole>d__1

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>

// System.Action`1<System.Int32>

// System.Action`1<System.Int32>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.Single>

// System.Action`1<System.Single>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>

// System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>

// System.Action

// System.Action

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotImplementedException

// System.NotImplementedException

// System.NotSupportedException

// System.NotSupportedException

// Readme

// Readme

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MeshCollider

// UnityEngine.MeshCollider

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AdsManager

// AdsManager

// BannerAds

// BannerAds

// ChangeGroundMesh

// ChangeGroundMesh

// ChangeHoleBorderColor

// ChangeHoleBorderColor

// ChangeScale

// ChangeScale

// Conditions

// Conditions

// EndGame

// EndGame

// IgnoreColision

// IgnoreColision

// InterstitialAds

// InterstitialAds

// LevelManager

// LevelManager

// LevelProgressLine

// LevelProgressLine

// LoadDataWhenGameStart

// LoadDataWhenGameStart

// LoadDatasWhenOpenGame

// LoadDatasWhenOpenGame

// Move

// Move

// NumberLevel

// NumberLevel

// Observer

// Observer

// UnityEngine.PolygonCollider2D

// UnityEngine.PolygonCollider2D

// SaveDataWhenGameEnd

// SaveDataWhenGameEnd

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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Void AdsManager::CallBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_CallBanner_m785C5B6B714355D70D432DD287B517BF86CAED11 (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, const RuntimeMethod* method) ;
// System.Void AdsManager::Callinterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_Callinterstitial_m24063F9062F9C5F66FAD873C9D3B33EB40435CB4 (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, const RuntimeMethod* method) ;
// System.Void BannerAds::CallBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAds_CallBanner_mD9D10756B2D0514A1A8FEDD921B3AEEBBFE01051 (BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* __this, const RuntimeMethod* method) ;
// System.Int32 Data::GetCountLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Data_GetCountLose_mDAD112911D4A8009C81D4C0A441A34F624C002AA (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) ;
// System.Void Data::SetCountLose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data_SetCountLose_mC4ED1CD30175D73DA39EE770DC1DC1E4C7CC4EA8 (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.Void InterstitialAds::CallInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_CallInterstitial_m41AFDA28182AA53F44D23736C2F722137FC7F30E (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) ;
// System.Void Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_mAD0738081D5922E1E6C75A516F6564FBB8468214 (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___0_initCompleteAction, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void BannerAds::DestroyAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAds_DestroyAd_mFE82797F8433C5725C3598B1A19ECCE1A20E7CB1 (BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, String_t* ___0_adUnitId, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___1_adSize, int32_t ___2_position, const RuntimeMethod* method) ;
// System.Void BannerAds::CreateBannerView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAds_CreateBannerView_m282915BE4B0730097787AB87A083105D67C051CB (BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRequest__ctor_mC05DE470CAF8233EFC60787797696650D6CCC3AC (AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___0_request, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void BannerAds::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAds_LoadAd_m523F8ADC518DE71A315E97B940C03EF3AE9BB168 (BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mEBCBF2FC848DA79D39227A5344136BFA0FF2A65C (Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6D103D50D92EED8806671DABC525008F7D560A68*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Load(System.String,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Load_m7582DD601991C297C7E7E61BBE53B639466A73A1 (String_t* ___0_adUnitId, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___1_request, Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* ___2_adLoadCallback, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void InterstitialAds::LoadInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_LoadInterstitialAd_mB588263A24550F87B65921C8B68F2E1B8A5CD6C4 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) ;
// System.Void InterstitialAds::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_ShowAd_mEB24E644FC8AF6D01A93E02DC8BD02FCDE91D490 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.ResponseInfo GoogleMobileAds.Api.InterstitialAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* InterstitialAd_GetResponseInfo_m6F3CB969DB9E63C2DAA0E759CC83D52D31E07171 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void Conditions::CaltulateProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions_CaltulateProgress_mBD770983D95C1C3E1654B09754F9B9657EAEFC3E (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___0_obj, method);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void LoadDatasWhenOpenGame::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDatasWhenOpenGame_LoadData_mC7C35860D46B083FFF09BAE6CA26B06A2EFA9CCC (LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A* __this, const RuntimeMethod* method) ;
// System.Void LoadDatasWhenOpenGame::CheckData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDatasWhenOpenGame_CheckData_m13C5BF53E6C9574BE93244415011E2BA4E4394AF (LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A* __this, const RuntimeMethod* method) ;
// System.Void LoadDatasWhenOpenGame::SendData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDatasWhenOpenGame_SendData_m8D5825F828FBC28258576177B8DDE389C132F7B4 (LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A* __this, const RuntimeMethod* method) ;
// System.Void LoadDatasWhenOpenGame::LoadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDatasWhenOpenGame_LoadLevel_m134838EE95808A9E1FF326141E1C0DFBDEA19B39 (LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A* __this, const RuntimeMethod* method) ;
// System.String Data::GetSceneName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Data_GetSceneName_m67A806E705F619CE089D531B6CDD6F4112F0BF7D (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Data::SetSceneName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data_SetSceneName_mF269A4F90F98C61996F687249C520665C3DAB8FB (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void LoadDataWhenGameStart::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart_LoadData_mE76E01BBA4DC1ADB148ED4C7FEA5756C928777E4 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, const RuntimeMethod* method) ;
// System.Void LoadDataWhenGameStart::CheckData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart_CheckData_m21956FC477F0380919DF795AB974991C3D85CDC6 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, const RuntimeMethod* method) ;
// System.Void LoadDataWhenGameStart::SendData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart_SendData_m5C62ADB2D5C5C59CB5F43B7F964C3C4C634E2484 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, const RuntimeMethod* method) ;
// System.Int32 Data::GetNumberLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Data_GetNumberLevel_mDF3C576C13187FD9EA60B5588DB1D412675A75C7 (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) ;
// System.Void Data::SetNumberLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data_SetNumberLevel_mA85A158DD8D668F8899C23860E31B0589D40469E (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, int32_t ___0_number, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void EndGame::add_SetNameScene(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_add_SetNameScene_m530C4B4431A35E701A0909FF4318B949A2FB8749 (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) ;
// System.Void EndGame::remove_SetNameScene(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_remove_SetNameScene_m194C29955E9DB5CC1B783B1AD353EB1727A1EAD0 (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void LevelProgressLine::add_EndGame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelProgressLine_add_EndGame_m7FB5044256A348C0C00C3A2527329417803FA4B4 (LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void LevelProgressLine::remove_EndGame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelProgressLine_remove_EndGame_mA90ACC1FFEE53B28A53AF0FE973833C11628ABD0 (LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void EndGame::ActivePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_ActivePanel_m91F3CE70CD659E16FAC1E636078E957B4501D22D (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) ;
// System.Void EndGame::SendData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_SendData_m8BA2C3E327E2234B914EACA9AF802F42FDA039CC (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void Move::add_MoveCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_add_MoveCompleted_m7C04F16243B564149890C95810FB2A4E94ED456B (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void Move::remove_MoveCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_remove_MoveCompleted_m771129FF9D633B3C0493961C8B3E48FF87BDC29B (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Transform::get_hasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void ChangeGroundMesh::MakeHole2D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeGroundMesh_MakeHole2D_m840167B219B13BCB9BEB56BFBABA7104FA3A554F (ChangeGroundMesh_t3E2B7503104563801D0A6BE705E527085ACF3BE1* __this, const RuntimeMethod* method) ;
// System.Void ChangeGroundMesh::Make3DMeshCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeGroundMesh_Make3DMeshCollider_m853096CD45751E1E3EDD78D9F9CD76E301E8F94A (ChangeGroundMesh_t3E2B7503104563801D0A6BE705E527085ACF3BE1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] UnityEngine.PolygonCollider2D::GetPath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* PolygonCollider2D_GetPath_mE9D53D83FBB110EAC748BA535A1659C262B50F50 (PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.PolygonCollider2D::set_pathCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonCollider2D_set_pathCount_m088370F58AC70DE6D28029AB0F2443D6A9B87721 (PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PolygonCollider2D::SetPath(System.Int32,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonCollider2D_SetPath_mDF03B6FDAE81E25C985F9BA6D372D949A6D9A1C1 (PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* __this, int32_t ___0_index, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___1_points, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.Collider2D::CreateMesh(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Collider2D_CreateMesh_m3652DA9D992D70C69586B2CF76CC1B294434D487 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, bool ___0_useBodyPosition, bool ___1_useBodyRotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void Move::MoveObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_MoveObject_m8F61CA3A86ABEA82625872AA02AC9C9FBC7DC30A (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.RaycastResult::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastResult_get_isValid_m69957B97C041A9E3FAF4ECA82BB8099C9FA171CE (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Move::GetDeltaPositionX(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Move_GetDeltaPositionX_m4FD1FCB9786E6EFFAAB99837C70E832CA3E33CB6 (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_raycastPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_deltaPosition, float ___2_deltaTwoPosX, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Move::GetDeltaPositionZ(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Move_GetDeltaPositionZ_mD09C2E4ADABBCECED4CECEDF922832616EC55E86 (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_raycastPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_deltaPosition, float ___2_deltaTwoPosZ, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CreateNewPositionHole::GetDeltaPositionX(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CreateNewPositionHole_GetDeltaPositionX_mF92410E605B9351C6209DD7CB00E79E2365008D2 (CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_raycastPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_deltaPosition, float ___2_deltaTwoPosX, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CreateNewPositionHole::GetDeltaPositionZ(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CreateNewPositionHole_GetDeltaPositionZ_m92A4B6A2AF826F02AB9CEBA238181222E379B201 (CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_raycastPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_deltaPosition, float ___2_deltaTwoPosZ, const RuntimeMethod* method) ;
// System.Void CreateNewPositionHole::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateNewPositionHole__ctor_m878BA1089399EEE333136314B9EBAB6BC0657528 (CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49* __this, const RuntimeMethod* method) ;
// System.Void ChangeScale/<ScaleHole>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleHoleU3Ed__1__ctor_m6B47D806AF257EAFA1288550A5F96F566B20FE32 (U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void IgnoreColision::FindAllGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreColision_FindAllGameObject_mC8E6CFC4C9D037212466945F2D8EB5BDB53DF3B7 (IgnoreColision_tAE708B79CA84B211FB0E41CD4F349CB6D040DE8F* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___0_layerName, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_IgnoreCollision_mA8E5C54299FC47921E41BF864C7C2214621595D6 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider1, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___1_collider2, bool ___2_ignore, const RuntimeMethod* method) ;
// System.Void LevelManager::SaveCountLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SaveCountLose_mB3FF011327950CD52FB22228076EF5FF5EC4752D (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859 (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Conditions::add_OnChangeFalledBorder(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions_add_OnChangeFalledBorder_mA33BEF6E0DCADCA7A195F04B28CD21B4237A65B4 (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) ;
// System.Void Conditions::add_OnChangeScale(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions_add_OnChangeScale_mE77F32F727B75527CF21A777BA07988A4B09CE7A (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) ;
// System.Void Conditions::remove_OnChangeFalledBorder(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions_remove_OnChangeFalledBorder_m1919EA90C3C6404F58C5AA19882D1492D108BB42 (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) ;
// System.Void Conditions::remove_OnChangeScale(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions_remove_OnChangeScale_m97E3C6860D332E3EEBD3936853563F3339EFBF9B (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) ;
// System.Void ChangeHoleBorderColor::ChangeFalledBorder(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeHoleBorderColor_ChangeFalledBorder_mC504F8C9636C1FC9F21578ED7BC13E68033F2DB9 (ChangeHoleBorderColor_t3C436959098B0238252A0B496BF460FDA3393C72* __this, float ___0_amount, const RuntimeMethod* method) ;
// System.Void LevelProgressLine::ChangeFalledBorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelProgressLine_ChangeFalledBorder_m223D2D9B7382A77113D24E2C3C5BF15F11E7363A (LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ChangeScale::ScaleHole(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChangeScale_ScaleHole_m147B0C93F138F85864D25DB10E8198EFE05872CC (ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95* __this, float ___0__deltaChangeScale, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void LoadDataWhenGameStart::add_SetNumber(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart_add_SetNumber_m258D3CF509FE9BE382F431DD807C6A47EABD9D52 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) ;
// System.Void LoadDataWhenGameStart::remove_SetNumber(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart_remove_SetNumber_mDC27A0BD3C5F8E854D7390FCCD96D7E969253F69 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// System.Void AdsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_Start_m00CAFF84B03355B41A941006E80DB2F1D49E3EF3 (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, const RuntimeMethod* method) 
{
	{
		// CallBanner();
		AdsManager_CallBanner_m785C5B6B714355D70D432DD287B517BF86CAED11(__this, NULL);
		// Callinterstitial();
		AdsManager_Callinterstitial_m24063F9062F9C5F66FAD873C9D3B33EB40435CB4(__this, NULL);
		// }
		return;
	}
}
// System.Void AdsManager::CallBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_CallBanner_m785C5B6B714355D70D432DD287B517BF86CAED11 (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, const RuntimeMethod* method) 
{
	{
		// _bannerAds.CallBanner();
		BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* L_0 = __this->____bannerAds_4;
		NullCheck(L_0);
		BannerAds_CallBanner_mD9D10756B2D0514A1A8FEDD921B3AEEBBFE01051(L_0, NULL);
		// }
		return;
	}
}
// System.Void AdsManager::Callinterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_Callinterstitial_m24063F9062F9C5F66FAD873C9D3B33EB40435CB4 (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int count = _data.GetCountLose();
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = __this->____data_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Data_GetCountLose_mDAD112911D4A8009C81D4C0A441A34F624C002AA(L_0, NULL);
		V_0 = L_1;
		// if(count % 1 == 0 && count != 0)
		int32_t L_2 = V_0;
		if (((int32_t)(L_2%1)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// _data.SetCountLose(0);
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_4 = __this->____data_6;
		NullCheck(L_4);
		Data_SetCountLose_mC4ED1CD30175D73DA39EE770DC1DC1E4C7CC4EA8(L_4, 0, NULL);
		// _interstitialAds.CallInterstitial();
		InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* L_5 = __this->____interstitialAds_5;
		NullCheck(L_5);
		InterstitialAds_CallInterstitial_m41AFDA28182AA53F44D23736C2F722137FC7F30E(L_5, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void AdsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager__ctor_m6A4EB92F72E9B7F28CC4E62F87F54F89CBAD6B3C (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Data _data = new Data();
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE*)il2cpp_codegen_object_new(Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Data__ctor_mAD0738081D5922E1E6C75A516F6564FBB8468214(L_0, NULL);
		__this->____data_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_6), (void*)L_0);
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
// System.Void BannerAds::CallBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAds_CallBanner_mD9D10756B2D0514A1A8FEDD921B3AEEBBFE01051 (BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAds_U3CCallBannerU3Eb__2_0_mD58B8DCA46CA1392CFD0DC60BF815E0095F46F68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MobileAds.Initialize((InitializationStatus initStatus) =>
		// {
		//     // This callback is called once the MobileAds SDK is initialized.
		//     Debug.Log("Initialize succesfull");
		//     CreateBannerView();
		//     LoadAd();
		// });
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_0 = (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*)il2cpp_codegen_object_new(Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC(L_0, __this, (intptr_t)((void*)BannerAds_U3CCallBannerU3Eb__2_0_mD58B8DCA46CA1392CFD0DC60BF815E0095F46F68_RuntimeMethod_var), NULL);
		MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD(L_0, NULL);
		// }
		return;
	}
}
// System.Void BannerAds::CreateBannerView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAds_CreateBannerView_m282915BE4B0730097787AB87A083105D67C051CB (BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC59B9685B377529C8AF2AC42C79D1717CE1417E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Creating banner view");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDC59B9685B377529C8AF2AC42C79D1717CE1417E, NULL);
		// if (_bannerView != null)
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_0 = __this->____bannerView_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyAd();
		BannerAds_DestroyAd_mFE82797F8433C5725C3598B1A19ECCE1A20E7CB1(__this, NULL);
	}

IL_0018:
	{
		// _bannerView = new BannerView(_adUnitId, AdSize.Banner, AdPosition.Top);
		String_t* L_1 = __this->____adUnitId_4;
		il2cpp_codegen_runtime_class_init_inline(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var);
		AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* L_2 = ((AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var))->___Banner_4;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_3 = (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB*)il2cpp_codegen_object_new(BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC(L_3, L_1, L_2, 0, NULL);
		__this->____bannerView_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bannerView_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void BannerAds::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAds_LoadAd_m523F8ADC518DE71A315E97B940C03EF3AE9BB168 (BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B7CE99D5EB5F62D56EDDACF9E28350F288F6A50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CE930388BF0D0721CC71424D0AF03B46FB38DFE);
		s_Il2CppMethodInitialized = true;
	}
	AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* V_0 = NULL;
	{
		// if (_bannerView == null)
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_0 = __this->____bannerView_5;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// CreateBannerView();
		BannerAds_CreateBannerView_m282915BE4B0730097787AB87A083105D67C051CB(__this, NULL);
	}

IL_000e:
	{
		// var adRequest = new AdRequest();
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_1 = (AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D*)il2cpp_codegen_object_new(AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AdRequest__ctor_mC05DE470CAF8233EFC60787797696650D6CCC3AC(L_1, NULL);
		V_0 = L_1;
		// adRequest.Keywords.Add("unity-admob-sample");
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_2 = V_0;
		NullCheck(L_2);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = L_2->___Keywords_2;
		NullCheck(L_3);
		bool L_4;
		L_4 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_3, _stringLiteral4CE930388BF0D0721CC71424D0AF03B46FB38DFE, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		// Debug.Log("Loading banner ad.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0B7CE99D5EB5F62D56EDDACF9E28350F288F6A50, NULL);
		// _bannerView.LoadAd(adRequest);
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_5 = __this->____bannerView_5;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_6 = V_0;
		NullCheck(L_5);
		BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void BannerAds::DestroyAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAds_DestroyAd_mFE82797F8433C5725C3598B1A19ECCE1A20E7CB1 (BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C1E2FD3BD5029EB501F48DC562DC6FC1429FF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_bannerView != null)
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_0 = __this->____bannerView_5;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// Debug.Log("Destroying banner ad.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD3C1E2FD3BD5029EB501F48DC562DC6FC1429FF6, NULL);
		// _bannerView.Destroy();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_1 = __this->____bannerView_5;
		NullCheck(L_1);
		BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01(L_1, NULL);
		// _bannerView = null;
		__this->____bannerView_5 = (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bannerView_5), (void*)(BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB*)NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void BannerAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAds__ctor_mEB57921520C50C3AB313D267FAEF5C09951E59B5 (BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _adUnitId = "ca-app-pub-3940256099942544/6300978111";
		__this->____adUnitId_4 = _stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_4), (void*)_stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void BannerAds::<CallBanner>b__2_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAds_U3CCallBannerU3Eb__2_0_mD58B8DCA46CA1392CFD0DC60BF815E0095F46F68 (BannerAds_t3D93BE6D1D8F32F7F51356224F5DB9966AAC3443* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___0_initStatus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral027C67395C6507BCC9C3F4269CB5D6FDF7357739);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Initialize succesfull");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral027C67395C6507BCC9C3F4269CB5D6FDF7357739, NULL);
		// CreateBannerView();
		BannerAds_CreateBannerView_m282915BE4B0730097787AB87A083105D67C051CB(__this, NULL);
		// LoadAd();
		BannerAds_LoadAd_m523F8ADC518DE71A315E97B940C03EF3AE9BB168(__this, NULL);
		// });
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
// System.Void InterstitialAds::CallInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_CallInterstitial_m41AFDA28182AA53F44D23736C2F722137FC7F30E (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAds_U3CCallInterstitialU3Eb__2_0_mAF04BDB88E712EEE335CBC02FABC0CFDD2FFDD0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MobileAds.Initialize((InitializationStatus initStatus) =>
		// {
		//     // This callback is called once the MobileAds SDK is initialized.
		//     Debug.Log("Initialize succesfull");
		//     LoadInterstitialAd();
		//     ShowAd();
		// });
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_0 = (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*)il2cpp_codegen_object_new(Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC(L_0, __this, (intptr_t)((void*)InterstitialAds_U3CCallInterstitialU3Eb__2_0_mAF04BDB88E712EEE335CBC02FABC0CFDD2FFDD0E_RuntimeMethod_var), NULL);
		MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD(L_0, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::LoadInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_LoadInterstitialAd_mB588263A24550F87B65921C8B68F2E1B8A5CD6C4 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t6D103D50D92EED8806671DABC525008F7D560A68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAds_U3CLoadInterstitialAdU3Eb__3_0_mDF02844E01D2682A0C7EA60E9651E6386E3292FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CE930388BF0D0721CC71424D0AF03B46FB38DFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE92B0ACB76744F9274A0F7B1D50997CB14BA2C0C);
		s_Il2CppMethodInitialized = true;
	}
	AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* V_0 = NULL;
	{
		// if (interstitialAd != null)
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_0 = __this->___interstitialAd_5;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// interstitialAd.Destroy();
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_1 = __this->___interstitialAd_5;
		NullCheck(L_1);
		InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778(L_1, NULL);
		// interstitialAd = null;
		__this->___interstitialAd_5 = (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialAd_5), (void*)(InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)NULL);
	}

IL_001a:
	{
		// Debug.Log("Loading the interstitial ad.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE92B0ACB76744F9274A0F7B1D50997CB14BA2C0C, NULL);
		// var adRequest = new AdRequest();
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_2 = (AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D*)il2cpp_codegen_object_new(AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdRequest__ctor_mC05DE470CAF8233EFC60787797696650D6CCC3AC(L_2, NULL);
		V_0 = L_2;
		// adRequest.Keywords.Add("unity-admob-sample");
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_3 = V_0;
		NullCheck(L_3);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_4 = L_3->___Keywords_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_4, _stringLiteral4CE930388BF0D0721CC71424D0AF03B46FB38DFE, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		// InterstitialAd.Load(_adUnitId, adRequest,
		//     (InterstitialAd ad, LoadAdError error) =>
		//     {
		//         // if error is not null, the load request failed.
		//         if (error != null || ad == null)
		//         {
		//             Debug.LogError("interstitial ad failed to load an ad " +
		//                            "with error : " + error);
		//             return;
		//         }
		// 
		//         Debug.Log("Interstitial ad loaded with response : "
		//                   + ad.GetResponseInfo());
		// 
		//         interstitialAd = ad;
		//     });
		String_t* L_6 = __this->____adUnitId_4;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_7 = V_0;
		Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* L_8 = (Action_2_t6D103D50D92EED8806671DABC525008F7D560A68*)il2cpp_codegen_object_new(Action_2_t6D103D50D92EED8806671DABC525008F7D560A68_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_2__ctor_mEBCBF2FC848DA79D39227A5344136BFA0FF2A65C(L_8, __this, (intptr_t)((void*)InterstitialAds_U3CLoadInterstitialAdU3Eb__3_0_mDF02844E01D2682A0C7EA60E9651E6386E3292FE_RuntimeMethod_var), NULL);
		InterstitialAd_Load_m7582DD601991C297C7E7E61BBE53B639466A73A1(L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_ShowAd_mEB24E644FC8AF6D01A93E02DC8BD02FCDE91D490 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA839AA9B952F20BBBB5E83609055E3B6BB000F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE38257974BF0F70BDFA8A13D0A3625109F80CDC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interstitialAd != null && interstitialAd.CanShowAd())
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_0 = __this->___interstitialAd_5;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_1 = __this->___interstitialAd_5;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E(L_1, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.Log("Showing interstitial ad.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFE38257974BF0F70BDFA8A13D0A3625109F80CDC, NULL);
		// interstitialAd.Show();
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_3 = __this->___interstitialAd_5;
		NullCheck(L_3);
		InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB(L_3, NULL);
		return;
	}

IL_002b:
	{
		// Debug.LogError("Interstitial ad is not ready yet.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralBA839AA9B952F20BBBB5E83609055E3B6BB000F8, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds__ctor_mD9070CCFDDB37CADB08E2150095A562C8C7D16D4 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _adUnitId = "ca-app-pub-3940256099942544/1033173712";
		__this->____adUnitId_4 = _stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_4), (void*)_stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void InterstitialAds::<CallInterstitial>b__2_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_U3CCallInterstitialU3Eb__2_0_mAF04BDB88E712EEE335CBC02FABC0CFDD2FFDD0E (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___0_initStatus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral027C67395C6507BCC9C3F4269CB5D6FDF7357739);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Initialize succesfull");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral027C67395C6507BCC9C3F4269CB5D6FDF7357739, NULL);
		// LoadInterstitialAd();
		InterstitialAds_LoadInterstitialAd_mB588263A24550F87B65921C8B68F2E1B8A5CD6C4(__this, NULL);
		// ShowAd();
		InterstitialAds_ShowAd_mEB24E644FC8AF6D01A93E02DC8BD02FCDE91D490(__this, NULL);
		// });
		return;
	}
}
// System.Void InterstitialAds::<LoadInterstitialAd>b__3_0(GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_U3CLoadInterstitialAdU3Eb__3_0_mDF02844E01D2682A0C7EA60E9651E6386E3292FE (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* ___0_ad, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___1_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56BDB588530347401E7E69440F76A4874882A647);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FC8CE8324612820255B09F1869668EF9B28E8A2);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	{
		// if (error != null || ad == null)
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = ___1_error;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_1 = ___0_ad;
		if (L_1)
		{
			goto IL_0023;
		}
	}

IL_0006:
	{
		// Debug.LogError("interstitial ad failed to load an ad " +
		//                "with error : " + error);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = ___1_error;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = _stringLiteral56BDB588530347401E7E69440F76A4874882A647;
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = _stringLiteral56BDB588530347401E7E69440F76A4874882A647;
			goto IL_0013;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B4_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_4;
		G_B5_1 = G_B4_1;
	}

IL_0018:
	{
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B5_1, G_B5_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// Debug.Log("Interstitial ad loaded with response : "
		//           + ad.GetResponseInfo());
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_6 = ___0_ad;
		NullCheck(L_6);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_7;
		L_7 = InterstitialAd_GetResponseInfo_m6F3CB969DB9E63C2DAA0E759CC83D52D31E07171(L_6, NULL);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_8 = L_7;
		G_B7_0 = L_8;
		G_B7_1 = _stringLiteral7FC8CE8324612820255B09F1869668EF9B28E8A2;
		if (L_8)
		{
			G_B8_0 = L_8;
			G_B8_1 = _stringLiteral7FC8CE8324612820255B09F1869668EF9B28E8A2;
			goto IL_0035;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_003a;
	}

IL_0035:
	{
		NullCheck(G_B8_0);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_1;
	}

IL_003a:
	{
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B9_1, G_B9_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// interstitialAd = ad;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_11 = ___0_ad;
		__this->___interstitialAd_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialAd_5), (void*)L_11);
		// });
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
// System.Void Conditions::add_OnChangeFalledBorder(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions_add_OnChangeFalledBorder_mA33BEF6E0DCADCA7A195F04B28CD21B4237A65B4 (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___OnChangeFalledBorder_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A** L_5 = (&__this->___OnChangeFalledBorder_4);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Conditions::remove_OnChangeFalledBorder(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions_remove_OnChangeFalledBorder_m1919EA90C3C6404F58C5AA19882D1492D108BB42 (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___OnChangeFalledBorder_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A** L_5 = (&__this->___OnChangeFalledBorder_4);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Conditions::add_OnChangeScale(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions_add_OnChangeScale_mE77F32F727B75527CF21A777BA07988A4B09CE7A (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___OnChangeScale_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A** L_5 = (&__this->___OnChangeScale_5);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Conditions::remove_OnChangeScale(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions_remove_OnChangeScale_m97E3C6860D332E3EEBD3936853563F3339EFBF9B (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___OnChangeScale_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A** L_5 = (&__this->___OnChangeScale_5);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Conditions::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions_OnCollisionEnter_m40312D98AEF10E451DFE09CCD8872045D5C22FE5 (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(collision.gameObject);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// CaltulateProgress();
		Conditions_CaltulateProgress_mBD770983D95C1C3E1654B09754F9B9657EAEFC3E(__this, NULL);
		// }
		return;
	}
}
// System.Void Conditions::CaltulateProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions_CaltulateProgress_mBD770983D95C1C3E1654B09754F9B9657EAEFC3E (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, const RuntimeMethod* method) 
{
	{
		// _countCollisionObstacleKilled++;
		int32_t L_0 = __this->____countCollisionObstacleKilled_8;
		__this->____countCollisionObstacleKilled_8 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(_countCollisionObstacleKilled % _needCountObstacles == 0)
		int32_t L_1 = __this->____countCollisionObstacleKilled_8;
		int32_t L_2 = __this->____needCountObstacles_6;
		if (((int32_t)(L_1%L_2)))
		{
			goto IL_0035;
		}
	}
	{
		// _countCollisionObstacleKilled = 0;
		__this->____countCollisionObstacleKilled_8 = 0;
		// OnChangeScale.Invoke(_deltaChangeScale);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = __this->___OnChangeScale_5;
		float L_4 = __this->____deltaChangeScale_7;
		NullCheck(L_3);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_3, L_4, NULL);
	}

IL_0035:
	{
		// OnChangeFalledBorder.Invoke((float)_countCollisionObstacleKilled / (float)_needCountObstacles);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_5 = __this->___OnChangeFalledBorder_4;
		int32_t L_6 = __this->____countCollisionObstacleKilled_8;
		int32_t L_7 = __this->____needCountObstacles_6;
		NullCheck(L_5);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_5, ((float)(((float)L_6)/((float)L_7))), NULL);
		// }
		return;
	}
}
// System.Void Conditions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conditions__ctor_mCF3DF0BBEAB44B2E2EFFBEC124F22B9112CC38D9 (Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* __this, const RuntimeMethod* method) 
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
// System.String Data::GetSceneName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Data_GetSceneName_m67A806E705F619CE089D531B6CDD6F4112F0BF7D (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral805F8EDE8BE2B229B802E974A0543E2DE9BB8127);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string name = PlayerPrefs.GetString("SceneName");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral805F8EDE8BE2B229B802E974A0543E2DE9BB8127, NULL);
		// return name;
		return L_0;
	}
}
// System.Int32 Data::GetNumberLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Data_GetNumberLevel_mDF3C576C13187FD9EA60B5588DB1D412675A75C7 (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral091939ACB0213BB67BF94AD0C261A085D44CB510);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int number = PlayerPrefs.GetInt("NumberLevel");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral091939ACB0213BB67BF94AD0C261A085D44CB510, NULL);
		// return number;
		return L_0;
	}
}
// System.Int32 Data::GetCountLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Data_GetCountLose_mDAD112911D4A8009C81D4C0A441A34F624C002AA (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral640E5F98AA18EC00659A81B9247FF2E9EED4D056);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int count = PlayerPrefs.GetInt("CountLose");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral640E5F98AA18EC00659A81B9247FF2E9EED4D056, NULL);
		// return count;
		return L_0;
	}
}
// System.Void Data::SetSceneName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data_SetSceneName_mF269A4F90F98C61996F687249C520665C3DAB8FB (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral805F8EDE8BE2B229B802E974A0543E2DE9BB8127);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("SceneName", name);
		String_t* L_0 = ___0_name;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral805F8EDE8BE2B229B802E974A0543E2DE9BB8127, L_0, NULL);
		// }
		return;
	}
}
// System.Void Data::SetNumberLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data_SetNumberLevel_mA85A158DD8D668F8899C23860E31B0589D40469E (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, int32_t ___0_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral091939ACB0213BB67BF94AD0C261A085D44CB510);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("NumberLevel", number);
		int32_t L_0 = ___0_number;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral091939ACB0213BB67BF94AD0C261A085D44CB510, L_0, NULL);
		// }
		return;
	}
}
// System.Void Data::SetCountLose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data_SetCountLose_mC4ED1CD30175D73DA39EE770DC1DC1E4C7CC4EA8 (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral640E5F98AA18EC00659A81B9247FF2E9EED4D056);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("CountLose", count);
		int32_t L_0 = ___0_count;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral640E5F98AA18EC00659A81B9247FF2E9EED4D056, L_0, NULL);
		// }
		return;
	}
}
// System.Void Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_mAD0738081D5922E1E6C75A516F6564FBB8468214 (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) 
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
// System.Void LoadDatasWhenOpenGame::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDatasWhenOpenGame_Awake_m9554658C96A394F5F8715FC77D0148A0E301FB58 (LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A* __this, const RuntimeMethod* method) 
{
	{
		// LoadData();
		LoadDatasWhenOpenGame_LoadData_mC7C35860D46B083FFF09BAE6CA26B06A2EFA9CCC(__this, NULL);
		// CheckData();
		LoadDatasWhenOpenGame_CheckData_m13C5BF53E6C9574BE93244415011E2BA4E4394AF(__this, NULL);
		// SendData();
		LoadDatasWhenOpenGame_SendData_m8D5825F828FBC28258576177B8DDE389C132F7B4(__this, NULL);
		// LoadLevel();
		LoadDatasWhenOpenGame_LoadLevel_m134838EE95808A9E1FF326141E1C0DFBDEA19B39(__this, NULL);
		// }
		return;
	}
}
// System.Void LoadDatasWhenOpenGame::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDatasWhenOpenGame_LoadData_mC7C35860D46B083FFF09BAE6CA26B06A2EFA9CCC (LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A* __this, const RuntimeMethod* method) 
{
	{
		// _name = _data.GetSceneName();
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = __this->____data_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Data_GetSceneName_m67A806E705F619CE089D531B6CDD6F4112F0BF7D(L_0, NULL);
		__this->____name_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void LoadDatasWhenOpenGame::CheckData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDatasWhenOpenGame_CheckData_m13C5BF53E6C9574BE93244415011E2BA4E4394AF (LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_name == "")
		String_t* L_0 = __this->____name_5;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// _name = "1";
		__this->____name_5 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_5), (void*)_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void LoadDatasWhenOpenGame::SendData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDatasWhenOpenGame_SendData_m8D5825F828FBC28258576177B8DDE389C132F7B4 (LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A* __this, const RuntimeMethod* method) 
{
	{
		// _data.SetSceneName(_name);
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = __this->____data_4;
		String_t* L_1 = __this->____name_5;
		NullCheck(L_0);
		Data_SetSceneName_mF269A4F90F98C61996F687249C520665C3DAB8FB(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LoadDatasWhenOpenGame::LoadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDatasWhenOpenGame_LoadLevel_m134838EE95808A9E1FF326141E1C0DFBDEA19B39 (LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(_name);
		String_t* L_0 = __this->____name_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void LoadDatasWhenOpenGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDatasWhenOpenGame__ctor_m6DC83D55F03CC97D949CB4BB983F90FB4EEE82F0 (LoadDatasWhenOpenGame_tCA9CD4BCB863F68A673AE15CE9C375A539A1374A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Data _data = new Data();
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE*)il2cpp_codegen_object_new(Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Data__ctor_mAD0738081D5922E1E6C75A516F6564FBB8468214(L_0, NULL);
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
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
// System.Void LoadDataWhenGameStart::add_SetNumber(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart_add_SetNumber_m258D3CF509FE9BE382F431DD807C6A47EABD9D52 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SetNumber_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404** L_5 = (&__this->___SetNumber_4);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LoadDataWhenGameStart::remove_SetNumber(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart_remove_SetNumber_mDC27A0BD3C5F8E854D7390FCCD96D7E969253F69 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SetNumber_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404** L_5 = (&__this->___SetNumber_4);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LoadDataWhenGameStart::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart_Awake_mD0D1484739CB256F8C3DA1C696CFDEADFE6BD8E2 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, const RuntimeMethod* method) 
{
	{
		// LoadData();
		LoadDataWhenGameStart_LoadData_mE76E01BBA4DC1ADB148ED4C7FEA5756C928777E4(__this, NULL);
		// CheckData();
		LoadDataWhenGameStart_CheckData_m21956FC477F0380919DF795AB974991C3D85CDC6(__this, NULL);
		// SendData();
		LoadDataWhenGameStart_SendData_m5C62ADB2D5C5C59CB5F43B7F964C3C4C634E2484(__this, NULL);
		// }
		return;
	}
}
// System.Void LoadDataWhenGameStart::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart_LoadData_mE76E01BBA4DC1ADB148ED4C7FEA5756C928777E4 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, const RuntimeMethod* method) 
{
	{
		// _number = _data.GetNumberLevel();
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = __this->____data_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Data_GetNumberLevel_mDF3C576C13187FD9EA60B5588DB1D412675A75C7(L_0, NULL);
		__this->____number_6 = L_1;
		// }
		return;
	}
}
// System.Void LoadDataWhenGameStart::CheckData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart_CheckData_m21956FC477F0380919DF795AB974991C3D85CDC6 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, const RuntimeMethod* method) 
{
	{
		// if (_number == 0)
		int32_t L_0 = __this->____number_6;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// _number = 1;
		__this->____number_6 = 1;
		// _data.SetNumberLevel(_number);
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_1 = __this->____data_5;
		int32_t L_2 = __this->____number_6;
		NullCheck(L_1);
		Data_SetNumberLevel_mA85A158DD8D668F8899C23860E31B0589D40469E(L_1, L_2, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void LoadDataWhenGameStart::SendData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart_SendData_m5C62ADB2D5C5C59CB5F43B7F964C3C4C634E2484 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, const RuntimeMethod* method) 
{
	{
		// SetNumber.Invoke(_number);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SetNumber_4;
		int32_t L_1 = __this->____number_6;
		NullCheck(L_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LoadDataWhenGameStart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDataWhenGameStart__ctor_mF90EB0F52B3E0949BB090C9271764D64AE7E1D87 (LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Data _data = new Data();
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE*)il2cpp_codegen_object_new(Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Data__ctor_mAD0738081D5922E1E6C75A516F6564FBB8468214(L_0, NULL);
		__this->____data_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_5), (void*)L_0);
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
// System.Void SaveDataWhenGameEnd::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveDataWhenGameEnd_OnEnable_m7FCBA0012C64E608AF23CABCCC2BB484EA4045E6 (SaveDataWhenGameEnd_t40D069F4A2732500529C8CCAD38D4BE00F656484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveDataWhenGameEnd_SaveData_m710E5714AD9601A03D4C0E6582890482FB4091B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _endGame.SetNameScene += SaveData;
		EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* L_0 = __this->____endGame_5;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, __this, (intptr_t)((void*)SaveDataWhenGameEnd_SaveData_m710E5714AD9601A03D4C0E6582890482FB4091B5_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		EndGame_add_SetNameScene_m530C4B4431A35E701A0909FF4318B949A2FB8749(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SaveDataWhenGameEnd::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveDataWhenGameEnd_OnDisable_mE50FD41507A6790B14FCF52805BC233B64D3F2D3 (SaveDataWhenGameEnd_t40D069F4A2732500529C8CCAD38D4BE00F656484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveDataWhenGameEnd_SaveData_m710E5714AD9601A03D4C0E6582890482FB4091B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _endGame.SetNameScene -= SaveData;
		EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* L_0 = __this->____endGame_5;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, __this, (intptr_t)((void*)SaveDataWhenGameEnd_SaveData_m710E5714AD9601A03D4C0E6582890482FB4091B5_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		EndGame_remove_SetNameScene_m194C29955E9DB5CC1B783B1AD353EB1727A1EAD0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SaveDataWhenGameEnd::SaveData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveDataWhenGameEnd_SaveData_m710E5714AD9601A03D4C0E6582890482FB4091B5 (SaveDataWhenGameEnd_t40D069F4A2732500529C8CCAD38D4BE00F656484* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75B9B6A1F49656E849820E5AF440ACF56500DCD1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _data.SetSceneName(name);
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = __this->____data_4;
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		Data_SetSceneName_mF269A4F90F98C61996F687249C520665C3DAB8FB(L_0, L_1, NULL);
		// int number = _data.GetNumberLevel();
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_2 = __this->____data_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Data_GetNumberLevel_mDF3C576C13187FD9EA60B5588DB1D412675A75C7(L_2, NULL);
		V_0 = L_3;
		// _data.SetNumberLevel(++number);
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_4 = __this->____data_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		V_0 = L_6;
		NullCheck(L_4);
		Data_SetNumberLevel_mA85A158DD8D668F8899C23860E31B0589D40469E(L_4, L_6, NULL);
		// Debug.Log($"Data save: name - {name}, number - {number}");
		String_t* L_7 = ___0_name;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral75B9B6A1F49656E849820E5AF440ACF56500DCD1, L_7, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void SaveDataWhenGameEnd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveDataWhenGameEnd__ctor_m1BD9F5B4B7ECF8A2A5CD012CBCF80E33B06F2E7A (SaveDataWhenGameEnd_t40D069F4A2732500529C8CCAD38D4BE00F656484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Data _data = new Data();
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE*)il2cpp_codegen_object_new(Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Data__ctor_mAD0738081D5922E1E6C75A516F6564FBB8468214(L_0, NULL);
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
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
// System.Void EndGame::add_SetNameScene(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_add_SetNameScene_m530C4B4431A35E701A0909FF4318B949A2FB8749 (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___SetNameScene_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___SetNameScene_4);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EndGame::remove_SetNameScene(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_remove_SetNameScene_m194C29955E9DB5CC1B783B1AD353EB1727A1EAD0 (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___SetNameScene_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___SetNameScene_4);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EndGame::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_OnEnable_mDBB9878E7BE08757B4D7CF9BA7B00D5A05C09BF5 (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndGame_CallWhenEnd_mC3CF9BCDBFF3AB741157A75513A04E00CBA187F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _levelProgressLine.EndGame += CallWhenEnd;
		LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* L_0 = __this->____levelProgressLine_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)EndGame_CallWhenEnd_mC3CF9BCDBFF3AB741157A75513A04E00CBA187F5_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		LevelProgressLine_add_EndGame_m7FB5044256A348C0C00C3A2527329417803FA4B4(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void EndGame::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_OnDisable_mD92F078ACF9E50AC176A1329DC4F95DDE3E1D4A6 (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndGame_CallWhenEnd_mC3CF9BCDBFF3AB741157A75513A04E00CBA187F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _levelProgressLine.EndGame -= CallWhenEnd;
		LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* L_0 = __this->____levelProgressLine_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)EndGame_CallWhenEnd_mC3CF9BCDBFF3AB741157A75513A04E00CBA187F5_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		LevelProgressLine_remove_EndGame_mA90ACC1FFEE53B28A53AF0FE973833C11628ABD0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void EndGame::CallWhenEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_CallWhenEnd_mC3CF9BCDBFF3AB741157A75513A04E00CBA187F5 (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) 
{
	{
		// ActivePanel();
		EndGame_ActivePanel_m91F3CE70CD659E16FAC1E636078E957B4501D22D(__this, NULL);
		// SendData();
		EndGame_SendData_m8BA2C3E327E2234B914EACA9AF802F42FDA039CC(__this, NULL);
		// }
		return;
	}
}
// System.Void EndGame::ActivePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_ActivePanel_m91F3CE70CD659E16FAC1E636078E957B4501D22D (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) 
{
	{
		// _endPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____endPanel_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void EndGame::SendData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_SendData_m8BA2C3E327E2234B914EACA9AF802F42FDA039CC (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) 
{
	{
		// SetNameScene.Invoke(_loadScenePath);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___SetNameScene_4;
		String_t* L_1 = __this->____loadScenePath_7;
		NullCheck(L_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void EndGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame__ctor_m9CE969697AF96C58116DBE45A0D8C4E36FECD3E4 (EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* __this, const RuntimeMethod* method) 
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
// System.Void ChangeGroundMesh::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeGroundMesh_OnEnable_m21AABBFCBDEB7D38D872A1F8DF497F3ED8608A24 (ChangeGroundMesh_t3E2B7503104563801D0A6BE705E527085ACF3BE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeGroundMesh_ChangeMesh_mFC8AFDC19F271D3EEC0DA61D760DEE567E854BEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _move.MoveCompleted += ChangeMesh;
		Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* L_0 = __this->____move_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ChangeGroundMesh_ChangeMesh_mFC8AFDC19F271D3EEC0DA61D760DEE567E854BEE_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Move_add_MoveCompleted_m7C04F16243B564149890C95810FB2A4E94ED456B(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ChangeGroundMesh::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeGroundMesh_OnDisable_m63D439DCAA072A04BC6009D0C628477359899D9B (ChangeGroundMesh_t3E2B7503104563801D0A6BE705E527085ACF3BE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeGroundMesh_ChangeMesh_mFC8AFDC19F271D3EEC0DA61D760DEE567E854BEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _move.MoveCompleted -= ChangeMesh;
		Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* L_0 = __this->____move_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ChangeGroundMesh_ChangeMesh_mFC8AFDC19F271D3EEC0DA61D760DEE567E854BEE_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Move_remove_MoveCompleted_m771129FF9D633B3C0493961C8B3E48FF87BDC29B(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ChangeGroundMesh::ChangeMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeGroundMesh_ChangeMesh_mFC8AFDC19F271D3EEC0DA61D760DEE567E854BEE (ChangeGroundMesh_t3E2B7503104563801D0A6BE705E527085ACF3BE1* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.hasChanged)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_0, NULL);
		if (!L_1)
		{
			goto IL_0085;
		}
	}
	{
		// transform.hasChanged = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(L_2, (bool)0, NULL);
		// _hole2DCollider.transform.position = new Vector2(transform.position.x, transform.position.z);
		PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* L_3 = __this->____hole2DCollider_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_7, L_10, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_11, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_12, NULL);
		// _hole2DCollider.transform.localScale = transform.localScale * initialScale;
		PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* L_13 = __this->____hole2DCollider_5;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_15, NULL);
		float L_17 = __this->___initialScale_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_18, NULL);
		// MakeHole2D();
		ChangeGroundMesh_MakeHole2D_m840167B219B13BCB9BEB56BFBABA7104FA3A554F(__this, NULL);
		// Make3DMeshCollider();
		ChangeGroundMesh_Make3DMeshCollider_m853096CD45751E1E3EDD78D9F9CD76E301E8F94A(__this, NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void ChangeGroundMesh::MakeHole2D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeGroundMesh_MakeHole2D_m840167B219B13BCB9BEB56BFBABA7104FA3A554F (ChangeGroundMesh_t3E2B7503104563801D0A6BE705E527085ACF3BE1* __this, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Vector2[] PointPosition = _hole2DCollider.GetPath(0);
		PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* L_0 = __this->____hole2DCollider_5;
		NullCheck(L_0);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1;
		L_1 = PolygonCollider2D_GetPath_mE9D53D83FBB110EAC748BA535A1659C262B50F50(L_0, 0, NULL);
		V_0 = L_1;
		// for (int i = 0; i < PointPosition.Length; i++)
		V_1 = 0;
		goto IL_003d;
	}

IL_0011:
	{
		// PointPosition[i] = _hole2DCollider.transform.TransformPoint(PointPosition[i]);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = V_0;
		int32_t L_3 = V_1;
		PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* L_4 = __this->____hole2DCollider_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_9, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_5, L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_11, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_12);
		// for (int i = 0; i < PointPosition.Length; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < PointPosition.Length; i++)
		int32_t L_14 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// _ground2DCollider.pathCount = 2;
		PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* L_16 = __this->____ground2DCollider_6;
		NullCheck(L_16);
		PolygonCollider2D_set_pathCount_m088370F58AC70DE6D28029AB0F2443D6A9B87721(L_16, 2, NULL);
		// _ground2DCollider.SetPath(1, PointPosition);
		PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* L_17 = __this->____ground2DCollider_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = V_0;
		NullCheck(L_17);
		PolygonCollider2D_SetPath_mDF03B6FDAE81E25C985F9BA6D372D949A6D9A1C1(L_17, 1, L_18, NULL);
		// }
		return;
	}
}
// System.Void ChangeGroundMesh::Make3DMeshCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeGroundMesh_Make3DMeshCollider_m853096CD45751E1E3EDD78D9F9CD76E301E8F94A (ChangeGroundMesh_t3E2B7503104563801D0A6BE705E527085ACF3BE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GeneratedMesh) { Destroy(GeneratedMesh); }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___GeneratedMesh_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!GeneratedMesh) { Destroy(GeneratedMesh); }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___GeneratedMesh_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0018:
	{
		// GeneratedMesh = _ground2DCollider.CreateMesh(true, true);
		PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* L_3 = __this->____ground2DCollider_6;
		NullCheck(L_3);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4;
		L_4 = Collider2D_CreateMesh_m3652DA9D992D70C69586B2CF76CC1B294434D487(L_3, (bool)1, (bool)1, NULL);
		__this->___GeneratedMesh_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GeneratedMesh_9), (void*)L_4);
		// _generatedMeshCollider.sharedMesh = GeneratedMesh;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_5 = __this->____generatedMeshCollider_7;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = __this->___GeneratedMesh_9;
		NullCheck(L_5);
		MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void ChangeGroundMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeGroundMesh__ctor_m2FC2BCB4253FCBFCC348256081FD31F26515F235 (ChangeGroundMesh_t3E2B7503104563801D0A6BE705E527085ACF3BE1* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float initialScale = 0.5f;
		__this->___initialScale_8 = (0.5f);
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
// System.Void ChangeHoleBorderColor::ChangeFalledBorder(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeHoleBorderColor_ChangeFalledBorder_mC504F8C9636C1FC9F21578ED7BC13E68033F2DB9 (ChangeHoleBorderColor_t3C436959098B0238252A0B496BF460FDA3393C72* __this, float ___0_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0CE85C39D1F4D463541F9ED12AC92DE4F5542A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("amount = " + amount);
		String_t* L_0;
		L_0 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_amount), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0B0CE85C39D1F4D463541F9ED12AC92DE4F5542A, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// _borderGreen.fillAmount = amount;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->____borderGreen_4;
		float L_3 = ___0_amount;
		NullCheck(L_2);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ChangeHoleBorderColor::ChangeFalledBorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeHoleBorderColor_ChangeFalledBorder_m1FD877AA44141207197B13743E0850A8D0893E07 (ChangeHoleBorderColor_t3C436959098B0238252A0B496BF460FDA3393C72* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChangeHoleBorderColor_ChangeFalledBorder_m1FD877AA44141207197B13743E0850A8D0893E07_RuntimeMethod_var)));
	}
}
// System.Void ChangeHoleBorderColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeHoleBorderColor__ctor_m1B40853C44F7D73881E7620F153AFABE02065951 (ChangeHoleBorderColor_t3C436959098B0238252A0B496BF460FDA3393C72* __this, const RuntimeMethod* method) 
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
// UnityEngine.Vector3 CreateNewPositionHole::GetDeltaPositionX(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CreateNewPositionHole_GetDeltaPositionX_mF92410E605B9351C6209DD7CB00E79E2365008D2 (CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_raycastPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_deltaPosition, float ___2_deltaTwoPosX, const RuntimeMethod* method) 
{
	{
		// if (Mathf.Abs(raycastPosition.x) > Mathf.Abs(deltaTwoPosX))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_raycastPosition;
		float L_1 = L_0.___x_2;
		float L_2;
		L_2 = fabsf(L_1);
		float L_3 = ___2_deltaTwoPosX;
		float L_4;
		L_4 = fabsf(L_3);
		if ((!(((float)L_2) > ((float)L_4))))
		{
			goto IL_0049;
		}
	}
	{
		// if (raycastPosition.x >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_raycastPosition;
		float L_6 = L_5.___x_2;
		if ((!(((float)L_6) >= ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		// deltaPosition = new Vector3(deltaTwoPosX, 0f, deltaPosition.z);
		float L_7 = ___2_deltaTwoPosX;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_deltaPosition;
		float L_9 = L_8.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&___1_deltaPosition), L_7, (0.0f), L_9, NULL);
		goto IL_0049;
	}

IL_0035:
	{
		// deltaPosition = new Vector3(-deltaTwoPosX, 0f, deltaPosition.z);
		float L_10 = ___2_deltaTwoPosX;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_deltaPosition;
		float L_12 = L_11.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&___1_deltaPosition), ((-L_10)), (0.0f), L_12, NULL);
	}

IL_0049:
	{
		// return deltaPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_deltaPosition;
		return L_13;
	}
}
// UnityEngine.Vector3 CreateNewPositionHole::GetDeltaPositionZ(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CreateNewPositionHole_GetDeltaPositionZ_m92A4B6A2AF826F02AB9CEBA238181222E379B201 (CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_raycastPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_deltaPosition, float ___2_deltaTwoPosZ, const RuntimeMethod* method) 
{
	{
		// if (Mathf.Abs(raycastPosition.z) > Mathf.Abs(deltaTwoPosZ))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_raycastPosition;
		float L_1 = L_0.___z_4;
		float L_2;
		L_2 = fabsf(L_1);
		float L_3 = ___2_deltaTwoPosZ;
		float L_4;
		L_4 = fabsf(L_3);
		if ((!(((float)L_2) > ((float)L_4))))
		{
			goto IL_0049;
		}
	}
	{
		// if (raycastPosition.z >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_raycastPosition;
		float L_6 = L_5.___z_4;
		if ((!(((float)L_6) >= ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		// deltaPosition = new Vector3(deltaPosition.x, 0f, deltaTwoPosZ);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_deltaPosition;
		float L_8 = L_7.___x_2;
		float L_9 = ___2_deltaTwoPosZ;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&___1_deltaPosition), L_8, (0.0f), L_9, NULL);
		goto IL_0049;
	}

IL_0035:
	{
		// deltaPosition = new Vector3(deltaPosition.x, 0f, -deltaTwoPosZ);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_deltaPosition;
		float L_11 = L_10.___x_2;
		float L_12 = ___2_deltaTwoPosZ;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&___1_deltaPosition), L_11, (0.0f), ((-L_12)), NULL);
	}

IL_0049:
	{
		// return deltaPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_deltaPosition;
		return L_13;
	}
}
// System.Void CreateNewPositionHole::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateNewPositionHole__ctor_m878BA1089399EEE333136314B9EBAB6BC0657528 (CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49* __this, const RuntimeMethod* method) 
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
// System.Void Move::add_MoveCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_add_MoveCompleted_m7C04F16243B564149890C95810FB2A4E94ED456B (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___MoveCompleted_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___MoveCompleted_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Move::remove_MoveCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_remove_MoveCompleted_m771129FF9D633B3C0493961C8B3E48FF87BDC29B (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___MoveCompleted_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___MoveCompleted_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Move::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_Start_mE30888A3AEA16959603B218AE8DF258387F55F8E (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, const RuntimeMethod* method) 
{
	{
		// _startPositionX = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->____startPositionX_10 = L_2;
		// _startPositionZ = transform.localScale.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		float L_5 = L_4.___z_4;
		__this->____startPositionZ_11 = L_5;
		// }
		return;
	}
}
// System.Void Move::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_Update_mA8230EF12ABFDB1275E464746004DD9E8DCBB444 (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, const RuntimeMethod* method) 
{
	{
		// MoveObject();
		Move_MoveObject_m8F61CA3A86ABEA82625872AA02AC9C9FBC7DC30A(__this, NULL);
		// }
		return;
	}
}
// System.Void Move::MoveObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_MoveObject_m8F61CA3A86ABEA82625872AA02AC9C9FBC7DC30A (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, const RuntimeMethod* method) 
{
	{
		// if (_raycastPosition != null && transform.position != _raycastPosition)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____raycastPosition_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____raycastPosition_12;
		bool L_4;
		L_4 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		// transform.position = Vector3.Lerp(transform.position, _raycastPosition, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->____raycastPosition_12;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_10 = __this->___speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_7, L_8, ((float)il2cpp_codegen_multiply(L_9, L_10)), NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_11, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Move::CalculateTrajectory(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_CalculateTrajectory_m57164677405FFE264483EB033E30DA2468506E7C (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___0_myEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// if (((PointerEventData)myEvent).pointerCurrentRaycast.isValid)
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___0_myEvent;
		NullCheck(((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var)));
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_1;
		L_1 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = RaycastResult_get_isValid_m69957B97C041A9E3FAF4ECA82BB8099C9FA171CE((&V_0), NULL);
		if (!L_2)
		{
			goto IL_0185;
		}
	}
	{
		// Vector3 raycastPosition = ((PointerEventData)myEvent).pointerCurrentRaycast.worldPosition;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_3 = ___0_myEvent;
		NullCheck(((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_3, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var)));
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_4;
		L_4 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_3, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___worldPosition_9;
		V_1 = L_5;
		// Vector3 deltaPosition = raycastPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		V_2 = L_6;
		// float deltaTwoPosX = (_groundCollider.gameObject.transform.localScale.x - transform.localScale.x) / 2f + (transform.localScale.x - _startPositionX) / (transform.localScale.x + _startPositionX) - (transform.localScale.x - _startPositionX) / (transform.localScale.x + _startPositionX) * _distanceFactorX;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = __this->____groundCollider_5;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = L_10.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_12, NULL);
		float L_14 = L_13.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_15, NULL);
		float L_17 = L_16.___x_2;
		float L_18 = __this->____startPositionX_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_19, NULL);
		float L_21 = L_20.___x_2;
		float L_22 = __this->____startPositionX_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_23, NULL);
		float L_25 = L_24.___x_2;
		float L_26 = __this->____startPositionX_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_27, NULL);
		float L_29 = L_28.___x_2;
		float L_30 = __this->____startPositionX_10;
		float L_31 = __this->____distanceFactorX_7;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_subtract(L_11, L_14))/(2.0f))), ((float)(((float)il2cpp_codegen_subtract(L_17, L_18))/((float)il2cpp_codegen_add(L_21, L_22)))))), ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_25, L_26))/((float)il2cpp_codegen_add(L_29, L_30)))), L_31))));
		// float deltaTwoPosZ = (_groundCollider.gameObject.transform.localScale.z - transform.localScale.z) / 2f + (transform.localScale.z - _startPositionZ) / (transform.localScale.z + _startPositionZ) - (transform.localScale.z - _startPositionZ) / (transform.localScale.z + _startPositionZ) * _distanceFactorZ;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_32 = __this->____groundCollider_5;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_34, NULL);
		float L_36 = L_35.___z_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_37, NULL);
		float L_39 = L_38.___z_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_40, NULL);
		float L_42 = L_41.___z_4;
		float L_43 = __this->____startPositionZ_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_44, NULL);
		float L_46 = L_45.___z_4;
		float L_47 = __this->____startPositionZ_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_48, NULL);
		float L_50 = L_49.___z_4;
		float L_51 = __this->____startPositionZ_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_52, NULL);
		float L_54 = L_53.___z_4;
		float L_55 = __this->____startPositionZ_11;
		float L_56 = __this->____distanceFactorZ_8;
		V_4 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_subtract(L_36, L_39))/(2.0f))), ((float)(((float)il2cpp_codegen_subtract(L_42, L_43))/((float)il2cpp_codegen_add(L_46, L_47)))))), ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_50, L_51))/((float)il2cpp_codegen_add(L_54, L_55)))), L_56))));
		// deltaPosition = GetDeltaPositionX(raycastPosition, deltaPosition, deltaTwoPosX);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_2;
		float L_59 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Move_GetDeltaPositionX_m4FD1FCB9786E6EFFAAB99837C70E832CA3E33CB6(__this, L_57, L_58, L_59, NULL);
		V_2 = L_60;
		// deltaPosition = GetDeltaPositionZ(raycastPosition, deltaPosition, deltaTwoPosZ);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_2;
		float L_63 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Move_GetDeltaPositionZ_mD09C2E4ADABBCECED4CECEDF922832616EC55E86(__this, L_61, L_62, L_63, NULL);
		V_2 = L_64;
		// _raycastPosition = deltaPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_2;
		__this->____raycastPosition_12 = L_65;
		// MoveCompleted.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_66 = __this->___MoveCompleted_4;
		NullCheck(L_66);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_66, NULL);
	}

IL_0185:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Move::GetDeltaPositionX(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Move_GetDeltaPositionX_m4FD1FCB9786E6EFFAAB99837C70E832CA3E33CB6 (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_raycastPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_deltaPosition, float ___2_deltaTwoPosX, const RuntimeMethod* method) 
{
	{
		// return deltaPosition = _createNewPositionHole.GetDeltaPositionX(raycastPosition, deltaPosition, deltaTwoPosX);
		CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49* L_0 = __this->____createNewPositionHole_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_raycastPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_deltaPosition;
		float L_3 = ___2_deltaTwoPosX;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = CreateNewPositionHole_GetDeltaPositionX_mF92410E605B9351C6209DD7CB00E79E2365008D2(L_0, L_1, L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		___1_deltaPosition = L_5;
		return L_5;
	}
}
// UnityEngine.Vector3 Move::GetDeltaPositionZ(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Move_GetDeltaPositionZ_mD09C2E4ADABBCECED4CECEDF922832616EC55E86 (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_raycastPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_deltaPosition, float ___2_deltaTwoPosZ, const RuntimeMethod* method) 
{
	{
		// return deltaPosition = _createNewPositionHole.GetDeltaPositionZ(raycastPosition, deltaPosition, deltaTwoPosZ);
		CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49* L_0 = __this->____createNewPositionHole_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_raycastPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_deltaPosition;
		float L_3 = ___2_deltaTwoPosZ;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = CreateNewPositionHole_GetDeltaPositionZ_m92A4B6A2AF826F02AB9CEBA238181222E379B201(L_0, L_1, L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		___1_deltaPosition = L_5;
		return L_5;
	}
}
// System.Void Move::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move__ctor_mB2C06FD84ADF53D6C062FD9230344443C0ACF7A1 (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float speed = 1;
		__this->___speed_6 = (1.0f);
		// [Range(0.1f, 0.5f)][SerializeField] private float _distanceFactorX = 0.4f;
		__this->____distanceFactorX_7 = (0.400000006f);
		// [Range(0.1f, 0.5f)][SerializeField] private float _distanceFactorZ = 0.2f;
		__this->____distanceFactorZ_8 = (0.200000003f);
		// private CreateNewPositionHole _createNewPositionHole = new CreateNewPositionHole();
		CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49* L_0 = (CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49*)il2cpp_codegen_object_new(CreateNewPositionHole_tF3497670BE2C227CADC2206118D6696AA52FEB49_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CreateNewPositionHole__ctor_m878BA1089399EEE333136314B9EBAB6BC0657528(L_0, NULL);
		__this->____createNewPositionHole_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____createNewPositionHole_9), (void*)L_0);
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
// System.Collections.IEnumerator ChangeScale::ScaleHole(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChangeScale_ScaleHole_m147B0C93F138F85864D25DB10E8198EFE05872CC (ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95* __this, float ___0__deltaChangeScale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A* L_0 = (U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A*)il2cpp_codegen_object_new(U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CScaleHoleU3Ed__1__ctor_m6B47D806AF257EAFA1288550A5F96F566B20FE32(L_0, 0, NULL);
		U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A* L_2 = L_1;
		float L_3 = ___0__deltaChangeScale;
		NullCheck(L_2);
		L_2->____deltaChangeScale_2 = L_3;
		return L_2;
	}
}
// System.Void ChangeScale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScale__ctor_m1DE9B12471CE9DF4A20150DD404DCD1AF8A5080D (ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95* __this, const RuntimeMethod* method) 
{
	{
		// private float _timeOfChangeScale = 0.4f;
		__this->____timeOfChangeScale_4 = (0.400000006f);
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
// System.Void ChangeScale/<ScaleHole>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleHoleU3Ed__1__ctor_m6B47D806AF257EAFA1288550A5F96F566B20FE32 (U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ChangeScale/<ScaleHole>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleHoleU3Ed__1_System_IDisposable_Dispose_m5D22C075456FEF07BC73000A2B97198B669169A9 (U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ChangeScale/<ScaleHole>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CScaleHoleU3Ed__1_MoveNext_mF17744E351130F1A73EABE2E7EA5765AA8FC9088 (U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9025D26B517F216E26CC106AFA5202B0185FE31);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_00d1;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("_deltaChangeScale = " + _deltaChangeScale);
		float* L_4 = (&__this->____deltaChangeScale_2);
		String_t* L_5;
		L_5 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD9025D26B517F216E26CC106AFA5202B0185FE31, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// Vector3 StartScale = transform.localScale;
		ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_8, NULL);
		__this->___U3CStartScaleU3E5__2_4 = L_9;
		// Vector3 EndScale = new Vector3(StartScale.x * _deltaChangeScale, 1, StartScale.z * _deltaChangeScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___U3CStartScaleU3E5__2_4);
		float L_11 = L_10->___x_2;
		float L_12 = __this->____deltaChangeScale_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___U3CStartScaleU3E5__2_4);
		float L_14 = L_13->___z_4;
		float L_15 = __this->____deltaChangeScale_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), ((float)il2cpp_codegen_multiply(L_11, L_12)), (1.0f), ((float)il2cpp_codegen_multiply(L_14, L_15)), /*hidden argument*/NULL);
		__this->___U3CEndScaleU3E5__3_5 = L_16;
		// float time = 0;
		__this->___U3CtimeU3E5__4_6 = (0.0f);
		goto IL_00d8;
	}

IL_008d:
	{
		// time += Time.deltaTime;
		float L_17 = __this->___U3CtimeU3E5__4_6;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__4_6 = ((float)il2cpp_codegen_add(L_17, L_18));
		// transform.localScale = Vector3.Lerp(StartScale, EndScale, time);
		ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95* L_19 = V_1;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___U3CStartScaleU3E5__2_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___U3CEndScaleU3E5__3_5;
		float L_23 = __this->___U3CtimeU3E5__4_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_21, L_22, L_23, NULL);
		NullCheck(L_20);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_20, L_24, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d1:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00d8:
	{
		// while (time <= _timeOfChangeScale)
		float L_25 = __this->___U3CtimeU3E5__4_6;
		ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95* L_26 = V_1;
		NullCheck(L_26);
		float L_27 = L_26->____timeOfChangeScale_4;
		if ((((float)L_25) <= ((float)L_27)))
		{
			goto IL_008d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ChangeScale/<ScaleHole>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CScaleHoleU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED1A41F20D29FFA4D0E2735786771CDBADFE5E50 (U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ChangeScale/<ScaleHole>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleHoleU3Ed__1_System_Collections_IEnumerator_Reset_m83BEDE1978224B35DD94079EDB2D2895EAE13DF0 (U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CScaleHoleU3Ed__1_System_Collections_IEnumerator_Reset_m83BEDE1978224B35DD94079EDB2D2895EAE13DF0_RuntimeMethod_var)));
	}
}
// System.Object ChangeScale/<ScaleHole>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CScaleHoleU3Ed__1_System_Collections_IEnumerator_get_Current_mE31CCEA0E5AA625EAEC3AE160773E9D965C0EB6E (U3CScaleHoleU3Ed__1_tDFBEDDE99210B4B6843C9484EC98856354649D9A* __this, const RuntimeMethod* method) 
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
// System.Void IgnoreColision::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreColision_Start_m187ADD7FB99771250DC01EEA071F5E2EF457EF8A (IgnoreColision_tAE708B79CA84B211FB0E41CD4F349CB6D040DE8F* __this, const RuntimeMethod* method) 
{
	{
		// FindAllGameObject();
		IgnoreColision_FindAllGameObject_mC8E6CFC4C9D037212466945F2D8EB5BDB53DF3B7(__this, NULL);
		// }
		return;
	}
}
// System.Void IgnoreColision::FindAllGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreColision_FindAllGameObject_mC8E6CFC4C9D037212466945F2D8EB5BDB53DF3B7 (IgnoreColision_tAE708B79CA84B211FB0E41CD4F349CB6D040DE8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// GameObject[] AllGOs = FindObjectsOfType(typeof(GameObject)) as GameObject[];
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A(L_1, NULL);
		// foreach (GameObject go in AllGOs)
		V_0 = ((GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)IsInst((RuntimeObject*)L_2, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0045;
	}

IL_0019:
	{
		// foreach (GameObject go in AllGOs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (go.layer == LayerMask.NameToLayer("Obstacle"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_7, NULL);
		int32_t L_9;
		L_9 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0041;
		}
	}
	{
		// Physics.IgnoreCollision(go.GetComponent<Collider>(), _generatedMeshCollider, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		NullCheck(L_10);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11;
		L_11 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_10, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_12 = __this->____generatedMeshCollider_4;
		Physics_IgnoreCollision_mA8E5C54299FC47921E41BF864C7C2214621595D6(L_11, L_12, (bool)1, NULL);
	}

IL_0041:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0045:
	{
		// foreach (GameObject go in AllGOs)
		int32_t L_14 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void IgnoreColision::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreColision_OnTriggerEnter_m7F061CC09F4ED980216F5C663E0B47B223016F42 (IgnoreColision_tAE708B79CA84B211FB0E41CD4F349CB6D040DE8F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	{
		// Physics.IgnoreCollision(other, _groundCollider, true);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = __this->____groundCollider_5;
		Physics_IgnoreCollision_mA8E5C54299FC47921E41BF864C7C2214621595D6(L_0, L_1, (bool)1, NULL);
		// Physics.IgnoreCollision(other, _generatedMeshCollider, false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___0_other;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_3 = __this->____generatedMeshCollider_4;
		Physics_IgnoreCollision_mA8E5C54299FC47921E41BF864C7C2214621595D6(L_2, L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void IgnoreColision::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreColision_OnTriggerExit_m45D2B3D1FA511EE714E14C86B96C2B0C87CF68E7 (IgnoreColision_tAE708B79CA84B211FB0E41CD4F349CB6D040DE8F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	{
		// Physics.IgnoreCollision(other, _groundCollider, false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = __this->____groundCollider_5;
		Physics_IgnoreCollision_mA8E5C54299FC47921E41BF864C7C2214621595D6(L_0, L_1, (bool)0, NULL);
		// Physics.IgnoreCollision(other, _generatedMeshCollider, true);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___0_other;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_3 = __this->____generatedMeshCollider_4;
		Physics_IgnoreCollision_mA8E5C54299FC47921E41BF864C7C2214621595D6(L_2, L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void IgnoreColision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreColision__ctor_m5B3D2170677DA91FD31EA62312D4C46388EF486F (IgnoreColision_tAE708B79CA84B211FB0E41CD4F349CB6D040DE8F* __this, const RuntimeMethod* method) 
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
// System.Void LevelManager::LoadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_LoadLevel_m29E841FAF5817330BE37C6F7503A5E41B1C66215 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(_scenePath);
		String_t* L_0 = __this->____scenePath_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Restart_mBB2B970618E38B95ABAAEB4E1CA23EB5E1C02851 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveCountLose();
		LevelManager_SaveCountLose_mB3FF011327950CD52FB22228076EF5FF5EC4752D(__this, NULL);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_OnEnable_m2822B28E1CACDD507598DA89171E862B85C3E9CB (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_SetScenePath_mD913298B272E9281DBD2F38DF0764E4B37D95C29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _endGame.SetNameScene += SetScenePath;
		EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* L_0 = __this->____endGame_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, __this, (intptr_t)((void*)LevelManager_SetScenePath_mD913298B272E9281DBD2F38DF0764E4B37D95C29_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		EndGame_add_SetNameScene_m530C4B4431A35E701A0909FF4318B949A2FB8749(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_OnDisable_m91E921A2C26A738EE99B3F3DE525590136EBB55C (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_SetScenePath_mD913298B272E9281DBD2F38DF0764E4B37D95C29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _endGame.SetNameScene -= SetScenePath;
		EndGame_t7602A3BA5036B65A0732B6129F28D06B04519C06* L_0 = __this->____endGame_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, __this, (intptr_t)((void*)LevelManager_SetScenePath_mD913298B272E9281DBD2F38DF0764E4B37D95C29_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		EndGame_remove_SetNameScene_m194C29955E9DB5CC1B783B1AD353EB1727A1EAD0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::SetScenePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SetScenePath_mD913298B272E9281DBD2F38DF0764E4B37D95C29 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// _scenePath = name;
		String_t* L_0 = ___0_name;
		__this->____scenePath_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scenePath_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void LevelManager::SaveCountLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SaveCountLose_mB3FF011327950CD52FB22228076EF5FF5EC4752D (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral514F0CB4E2F0E8A761F646FAAB7A3E38AFF2CF07);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Data _data = new Data();
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE*)il2cpp_codegen_object_new(Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Data__ctor_mAD0738081D5922E1E6C75A516F6564FBB8468214(L_0, NULL);
		// int count = _data.GetCountLose();
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Data_GetCountLose_mDAD112911D4A8009C81D4C0A441A34F624C002AA(L_1, NULL);
		V_0 = L_2;
		// _data.SetCountLose(++count);
		int32_t L_3 = V_0;
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		V_0 = L_4;
		NullCheck(L_1);
		Data_SetCountLose_mC4ED1CD30175D73DA39EE770DC1DC1E4C7CC4EA8(L_1, L_4, NULL);
		// Debug.Log("Save Count Lose");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral514F0CB4E2F0E8A761F646FAAB7A3E38AFF2CF07, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_m97F35AC08C296B73BD7D85FFB593A7BEA61B3F92 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
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
// System.Void Observer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_OnEnable_mAC99AF16DD85522B1C23E6A4B964F4C9E4AC2BD9 (Observer_t2C5AFCFC4BDF9C51E37E3F7FAD6BF3604A5088B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Observer_ChangeFalledBorder_m9C5F3611DBCBF4926904FFD143AF10DEB8281430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Observer_ScaleHole_m39D3DC1A33271BEEA21E44F61E3DA0FA1FDBD8E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _conditions.OnChangeFalledBorder += ChangeFalledBorder;
		Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* L_0 = __this->____conditions_4;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_1, __this, (intptr_t)((void*)Observer_ChangeFalledBorder_m9C5F3611DBCBF4926904FFD143AF10DEB8281430_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Conditions_add_OnChangeFalledBorder_mA33BEF6E0DCADCA7A195F04B28CD21B4237A65B4(L_0, L_1, NULL);
		// _conditions.OnChangeScale += ScaleHole;
		Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* L_2 = __this->____conditions_4;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_3, __this, (intptr_t)((void*)Observer_ScaleHole_m39D3DC1A33271BEEA21E44F61E3DA0FA1FDBD8E8_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Conditions_add_OnChangeScale_mE77F32F727B75527CF21A777BA07988A4B09CE7A(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Observer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_OnDisable_m204305F1AC5634BAA0B4EA859457AF6D96963D0C (Observer_t2C5AFCFC4BDF9C51E37E3F7FAD6BF3604A5088B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Observer_ChangeFalledBorder_m9C5F3611DBCBF4926904FFD143AF10DEB8281430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Observer_ScaleHole_m39D3DC1A33271BEEA21E44F61E3DA0FA1FDBD8E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _conditions.OnChangeFalledBorder -= ChangeFalledBorder;
		Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* L_0 = __this->____conditions_4;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_1, __this, (intptr_t)((void*)Observer_ChangeFalledBorder_m9C5F3611DBCBF4926904FFD143AF10DEB8281430_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Conditions_remove_OnChangeFalledBorder_m1919EA90C3C6404F58C5AA19882D1492D108BB42(L_0, L_1, NULL);
		// _conditions.OnChangeScale -= ScaleHole;
		Conditions_t058CA0853AEDF47BB615CA4CC190469CF9A61E34* L_2 = __this->____conditions_4;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_3, __this, (intptr_t)((void*)Observer_ScaleHole_m39D3DC1A33271BEEA21E44F61E3DA0FA1FDBD8E8_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Conditions_remove_OnChangeScale_m97E3C6860D332E3EEBD3936853563F3339EFBF9B(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Observer::ChangeFalledBorder(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_ChangeFalledBorder_m9C5F3611DBCBF4926904FFD143AF10DEB8281430 (Observer_t2C5AFCFC4BDF9C51E37E3F7FAD6BF3604A5088B9* __this, float ___0_amount, const RuntimeMethod* method) 
{
	{
		// _changeHoleBorderColor.ChangeFalledBorder(amount);
		ChangeHoleBorderColor_t3C436959098B0238252A0B496BF460FDA3393C72* L_0 = __this->____changeHoleBorderColor_6;
		float L_1 = ___0_amount;
		NullCheck(L_0);
		ChangeHoleBorderColor_ChangeFalledBorder_mC504F8C9636C1FC9F21578ED7BC13E68033F2DB9(L_0, L_1, NULL);
		// _levelProgressLine.ChangeFalledBorder();
		LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* L_2 = __this->____levelProgressLine_7;
		NullCheck(L_2);
		LevelProgressLine_ChangeFalledBorder_m223D2D9B7382A77113D24E2C3C5BF15F11E7363A(L_2, NULL);
		// }
		return;
	}
}
// System.Void Observer::ScaleHole(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_ScaleHole_m39D3DC1A33271BEEA21E44F61E3DA0FA1FDBD8E8 (Observer_t2C5AFCFC4BDF9C51E37E3F7FAD6BF3604A5088B9* __this, float ___0__deltaChangeScale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9025D26B517F216E26CC106AFA5202B0185FE31);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("_deltaChangeScale = " + _deltaChangeScale);
		String_t* L_0;
		L_0 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0__deltaChangeScale), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD9025D26B517F216E26CC106AFA5202B0185FE31, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// StartCoroutine(_changeScale.ScaleHole(_deltaChangeScale));
		ChangeScale_tBEFE53B6AF55EAA7F2F4BDAF9F12EA34E1BCBF95* L_2 = __this->____changeScale_5;
		float L_3 = ___0__deltaChangeScale;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = ChangeScale_ScaleHole_m147B0C93F138F85864D25DB10E8198EFE05872CC(L_2, L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Observer::ChangeFalledBorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_ChangeFalledBorder_m1BEEA0E4817DC03665DB1DF3CD604883B028A200 (Observer_t2C5AFCFC4BDF9C51E37E3F7FAD6BF3604A5088B9* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Observer_ChangeFalledBorder_m1BEEA0E4817DC03665DB1DF3CD604883B028A200_RuntimeMethod_var)));
	}
}
// System.Void Observer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer__ctor_m4DBACE2645EC7E1B3C2F2750BAB34A659C89970C (Observer_t2C5AFCFC4BDF9C51E37E3F7FAD6BF3604A5088B9* __this, const RuntimeMethod* method) 
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
// System.Void LevelProgressLine::add_EndGame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelProgressLine_add_EndGame_m7FB5044256A348C0C00C3A2527329417803FA4B4 (LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___EndGame_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___EndGame_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LevelProgressLine::remove_EndGame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelProgressLine_remove_EndGame_mA90ACC1FFEE53B28A53AF0FE973833C11628ABD0 (LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___EndGame_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___EndGame_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LevelProgressLine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelProgressLine_Start_mC77B0DB55754ED50688B7F54198CDF95B1B66DCC (LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* __this, const RuntimeMethod* method) 
{
	{
		// _childOnStart = _obstacleParentObject.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____obstacleParentObject_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		__this->____childOnStart_7 = L_1;
		// _child = _childOnStart;
		int32_t L_2 = __this->____childOnStart_7;
		__this->____child_8 = L_2;
		// }
		return;
	}
}
// System.Void LevelProgressLine::ChangeFalledBorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelProgressLine_ChangeFalledBorder_m223D2D9B7382A77113D24E2C3C5BF15F11E7363A (LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* __this, const RuntimeMethod* method) 
{
	{
		// _child--;
		int32_t L_0 = __this->____child_8;
		__this->____child_8 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// _borderRed.fillAmount = 1 - (float)_child / (float)_childOnStart;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->____borderRed_6;
		int32_t L_2 = __this->____child_8;
		int32_t L_3 = __this->____childOnStart_7;
		NullCheck(L_1);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_1, ((float)il2cpp_codegen_subtract((1.0f), ((float)(((float)L_2)/((float)L_3))))), NULL);
		// if (_child == 0) { EndGame.Invoke(); }
		int32_t L_4 = __this->____child_8;
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		// if (_child == 0) { EndGame.Invoke(); }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___EndGame_4;
		NullCheck(L_5);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void LevelProgressLine::ChangeFalledBorder(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelProgressLine_ChangeFalledBorder_m36C722969F5A3AF7FE3B9B8E986BB34E4F943D2F (LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* __this, float ___0_amount, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LevelProgressLine_ChangeFalledBorder_m36C722969F5A3AF7FE3B9B8E986BB34E4F943D2F_RuntimeMethod_var)));
	}
}
// System.Void LevelProgressLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelProgressLine__ctor_m96E75560F9B6F243D7CB2DD83B0F1EDEAF611672 (LevelProgressLine_t738C06DC7F462D99F270821B04D4A13DB78BD269* __this, const RuntimeMethod* method) 
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
// System.Void NumberLevel::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberLevel_OnEnable_mAA28B32CEEBCBB2FFE33C061386F6F069C2FB884 (NumberLevel_t27C83AEFC8A0EDFA491CCBF50294DBB0C7DEF205* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberLevel_ChangeText_m1B7B2D2E03591FEE2C3A08083A33995558A327D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameStart.SetNumber += ChangeText;
		LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* L_0 = __this->____gameStart_4;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_1, __this, (intptr_t)((void*)NumberLevel_ChangeText_m1B7B2D2E03591FEE2C3A08083A33995558A327D0_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		LoadDataWhenGameStart_add_SetNumber_m258D3CF509FE9BE382F431DD807C6A47EABD9D52(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void NumberLevel::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberLevel_OnDisable_m2564EB75AAF06CC607B47F577BEC7D37B340027E (NumberLevel_t27C83AEFC8A0EDFA491CCBF50294DBB0C7DEF205* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberLevel_ChangeText_m1B7B2D2E03591FEE2C3A08083A33995558A327D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameStart.SetNumber -= ChangeText;
		LoadDataWhenGameStart_tE7F82D78A20B0837CF811A532CBF5F00A86A9D53* L_0 = __this->____gameStart_4;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_1, __this, (intptr_t)((void*)NumberLevel_ChangeText_m1B7B2D2E03591FEE2C3A08083A33995558A327D0_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		LoadDataWhenGameStart_remove_SetNumber_mDC27A0BD3C5F8E854D7390FCCD96D7E969253F69(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void NumberLevel::ChangeText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberLevel_ChangeText_m1B7B2D2E03591FEE2C3A08083A33995558A327D0 (NumberLevel_t27C83AEFC8A0EDFA491CCBF50294DBB0C7DEF205* __this, int32_t ___0_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33E5D39263984CD00116814ABC8E813040242800);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("number " + number);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_number), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral33E5D39263984CD00116814ABC8E813040242800, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// _numberLeft.text = number.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____numberLeft_5;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_number), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// _numberRight.text = (number + 1).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____numberRight_6;
		int32_t L_5 = ___0_number;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void NumberLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberLevel__ctor_mEF76B6061D9544A3234720147A43CE9BDC438D3A (NumberLevel_t27C83AEFC8A0EDFA491CCBF50294DBB0C7DEF205* __this, const RuntimeMethod* method) 
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = __this->___U3CpointerCurrentRaycastU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
