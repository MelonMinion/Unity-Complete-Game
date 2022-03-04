#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RuleTile/TilingRule>
struct List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Display[]
struct DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// UnityEngine.RuleTile/TilingRule[]
struct TilingRuleU5BU5D_t4E58EB6838571C37DC3F06642649C76D29ED5118;
// UnityEngine.RuleTile/TilingRule/Neighbor[]
struct NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BasicCameraFollow
struct BasicCameraFollow_t56A110F74E07977201241B1E99197AD12F243E4F;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraManager
struct CameraManager_tEE6F72F29DC61B985F2829E8E0C1EE3BA2AB9E0E;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// CustomCanvasScaler
struct CustomCanvasScaler_t8D4C81AA5A88F3CE23347F88A9B07A46A1D9C495;
// UnityEngine.Display
struct Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Hero
struct Hero_t23AE63B6FC54E98B922DAD08F07840C752E303A9;
// HeroMover
struct HeroMover_t1198B493A35F2BCD82D062D5A39BB07EAB6D31BF;
// UnityEngine.Tilemaps.ITilemap
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.U2D.PixelPerfectCamera
struct PixelPerfectCamera_t7B0849F4AB5E6399719BE7C3B330BCBBA3AAF7A9;
// UnityEngine.U2D.PixelPerfectCameraInternal
struct PixelPerfectCameraInternal_t3A785975106C548143FC2C057233A72DC250FEFE;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.RuleTile
struct RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Tilemaps.TileBase
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68;
// UnityEngine.RuleTile/TilingRule
struct TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5;

IL2CPP_EXTERN_C RuntimeClass* Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral9139DDE869609F3F98593B4818D5FA71F2740765;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764;
IL2CPP_EXTERN_C String_t* _stringLiteralDD71F6CB47CB5EC0CF5ABF2655838494F00BAD85;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFC2331B6F2401D1F75427CFD4B250F75BAD17980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m294BD9CABB86CF23F72E0A98A2B6D3D39D3DB7D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m27106005658F6347E51AE00D342A2AE3B299A195_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5BE5245D4A54309D1912F9CB6730B3B6E8189B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC1CB6BB1D951F23F85395FA1B9B312D61B82A8E9_RuntimeMethod_var;

struct DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4B289ACF70A8EDF2122B517360E37DD5EC727F5E 
{
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.RuleTile/TilingRule>
struct List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TilingRuleU5BU5D_t4E58EB6838571C37DC3F06642649C76D29ED5118* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TilingRuleU5BU5D_t4E58EB6838571C37DC3F06642649C76D29ED5118* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// UnityEngine.RuleTile/TilingRule
struct TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5  : public RuntimeObject
{
	// UnityEngine.RuleTile/TilingRule/Neighbor[] UnityEngine.RuleTile/TilingRule::m_Neighbors
	NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3* ___m_Neighbors_0;
	// UnityEngine.Sprite[] UnityEngine.RuleTile/TilingRule::m_Sprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_Sprites_1;
	// System.Single UnityEngine.RuleTile/TilingRule::m_AnimationSpeed
	float ___m_AnimationSpeed_2;
	// System.Single UnityEngine.RuleTile/TilingRule::m_PerlinScale
	float ___m_PerlinScale_3;
	// UnityEngine.RuleTile/TilingRule/Transform UnityEngine.RuleTile/TilingRule::m_RuleTransform
	int32_t ___m_RuleTransform_4;
	// UnityEngine.RuleTile/TilingRule/OutputSprite UnityEngine.RuleTile/TilingRule::m_Output
	int32_t ___m_Output_5;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.RuleTile/TilingRule::m_ColliderType
	int32_t ___m_ColliderType_6;
	// UnityEngine.RuleTile/TilingRule/Transform UnityEngine.RuleTile/TilingRule::m_RandomTransform
	int32_t ___m_RandomTransform_7;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.RuleTile/TilingRule>
struct Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* ____current_3;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>
struct NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 
{
	// UnityEngine.Sprite[] UnityEngine.Tilemaps.TileAnimationData::m_AnimatedSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites_0;
	// System.Single UnityEngine.Tilemaps.TileAnimationData::m_AnimationSpeed
	float ___m_AnimationSpeed_1;
	// System.Single UnityEngine.Tilemaps.TileAnimationData::m_AnimationStartTime
	float ___m_AnimationStartTime_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke
{
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites_0;
	float ___m_AnimationSpeed_1;
	float ___m_AnimationStartTime_2;
};
// Native definition for COM marshalling of UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com
{
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites_0;
	float ___m_AnimationSpeed_1;
	float ___m_AnimationStartTime_2;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
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

// UnityEngine.Display
struct Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	intptr_t ___nativeDisplay_0;
};

struct Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_StaticFields
{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68* ___onDisplaysUpdated_3;
};

// UnityEngine.Tilemaps.ITilemap
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164  : public RuntimeObject
{
	// UnityEngine.Tilemaps.Tilemap UnityEngine.Tilemaps.ITilemap::m_Tilemap
	Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___m_Tilemap_1;
	// System.Boolean UnityEngine.Tilemaps.ITilemap::m_AddToList
	bool ___m_AddToList_2;
	// System.Int32 UnityEngine.Tilemaps.ITilemap::m_RefreshCount
	int32_t ___m_RefreshCount_3;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3Int> UnityEngine.Tilemaps.ITilemap::m_RefreshPos
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___m_RefreshPos_4;
};

struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields
{
	// UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::s_Instance
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___s_Instance_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Tilemaps.TileData
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F 
{
	// System.Int32 UnityEngine.Tilemaps.TileData::m_Sprite
	int32_t ___m_Sprite_0;
	// UnityEngine.Color UnityEngine.Tilemaps.TileData::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_1;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.TileData::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_2;
	// System.Int32 UnityEngine.Tilemaps.TileData::m_GameObject
	int32_t ___m_GameObject_3;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.TileData::m_Flags
	int32_t ___m_Flags_4;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.TileData::m_ColliderType
	int32_t ___m_ColliderType_5;
};

struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields
{
	// UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileData::Default
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___Default_6;
};

// UnityEngine.RuleTile/TilingRule/Neighbor
struct Neighbor_tCF4E84EB4F0452221E63C4A8C9834924C780FDF1 
{
	// System.Int32 UnityEngine.RuleTile/TilingRule/Neighbor::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Tilemaps.TileBase
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
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

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

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

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RuleTile
struct RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD  : public TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9
{
	// UnityEngine.Sprite UnityEngine.RuleTile::m_DefaultSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DefaultSprite_4;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.RuleTile::m_DefaultColliderType
	int32_t ___m_DefaultColliderType_5;
	// System.Collections.Generic.List`1<UnityEngine.RuleTile/TilingRule> UnityEngine.RuleTile::m_TilingRules
	List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE* ___m_TilingRules_6;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BasicCameraFollow
struct BasicCameraFollow_t56A110F74E07977201241B1E99197AD12F243E4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BasicCameraFollow::followTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___followTarget_4;
	// UnityEngine.Vector3 BasicCameraFollow::targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_5;
	// System.Single BasicCameraFollow::moveSpeed
	float ___moveSpeed_6;
};

// CameraManager
struct CameraManager_tEE6F72F29DC61B985F2829E8E0C1EE3BA2AB9E0E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera CameraManager::ordinaryCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___ordinaryCamera_4;
	// UnityEngine.U2D.PixelPerfectCamera CameraManager::pixelPerfectCamera
	PixelPerfectCamera_t7B0849F4AB5E6399719BE7C3B330BCBBA3AAF7A9* ___pixelPerfectCamera_5;
	// System.Boolean CameraManager::isPixelPerfect
	bool ___isPixelPerfect_6;
};

// Hero
struct Hero_t23AE63B6FC54E98B922DAD08F07840C752E303A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Hero::m_MoveSpeed
	float ___m_MoveSpeed_4;
	// UnityEngine.Animator Hero::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
	// UnityEngine.Rigidbody2D Hero::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_6;
	// Hero/PlayerState Hero::playerState
	int32_t ___playerState_7;
	// UnityEngine.Vector2 Hero::lookFacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lookFacing_8;
	// UnityEngine.Vector2 Hero::respawnPoint
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___respawnPoint_9;
	// UnityEngine.AudioSource Hero::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_10;
	// System.Single Hero::dashCooldown
	float ___dashCooldown_11;
	// System.Boolean Hero::dead
	bool ___dead_12;
};

// HeroMover
struct HeroMover_t1198B493A35F2BCD82D062D5A39BB07EAB6D31BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single HeroMover::Amplitude
	float ___Amplitude_4;
	// System.Single HeroMover::Frequency
	float ___Frequency_5;
	// UnityEngine.Vector3 HeroMover::origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin_6;
	// System.Single HeroMover::offset
	float ___offset_7;
};

// UnityEngine.U2D.PixelPerfectCamera
struct PixelPerfectCamera_t7B0849F4AB5E6399719BE7C3B330BCBBA3AAF7A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityEngine.U2D.PixelPerfectCamera::m_AssetsPPU
	int32_t ___m_AssetsPPU_4;
	// System.Int32 UnityEngine.U2D.PixelPerfectCamera::m_RefResolutionX
	int32_t ___m_RefResolutionX_5;
	// System.Int32 UnityEngine.U2D.PixelPerfectCamera::m_RefResolutionY
	int32_t ___m_RefResolutionY_6;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_UpscaleRT
	bool ___m_UpscaleRT_7;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_PixelSnapping
	bool ___m_PixelSnapping_8;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_CropFrameX
	bool ___m_CropFrameX_9;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_CropFrameY
	bool ___m_CropFrameY_10;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_StretchFill
	bool ___m_StretchFill_11;
	// UnityEngine.Camera UnityEngine.U2D.PixelPerfectCamera::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_12;
	// UnityEngine.U2D.PixelPerfectCameraInternal UnityEngine.U2D.PixelPerfectCamera::m_Internal
	PixelPerfectCameraInternal_t3A785975106C548143FC2C057233A72DC250FEFE* ___m_Internal_13;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_CinemachineCompatibilityMode
	bool ___m_CinemachineCompatibilityMode_14;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
};

// CustomCanvasScaler
struct CustomCanvasScaler_t8D4C81AA5A88F3CE23347F88A9B07A46A1D9C495  : public CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B
{
	// UnityEngine.Canvas CustomCanvasScaler::m_RootCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_RootCanvas_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Display[]
struct DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F  : public RuntimeArray
{
	ALIGN_FIELD (8) Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* m_Items[1];

	inline Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RuleTile/TilingRule/Neighbor[]
struct NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.CanvasScaler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasScaler_OnEnable_m9F50E6AF109CE6227FD9E523B0698925B89D29F8 (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Canvas::get_targetDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_targetDisplay_m2F2FCEA6885820E659F2F520991828DE54CCB6BF (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Display::get_renderingWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Display_get_renderingWidth_mD23656E7A8270AF79B0EF4124959B3E18BEDF0C7 (Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Display::get_renderingHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Display_get_renderingHeight_m0627691B7B2D7037A856597E43BFDF1F0CC2B0B8 (Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m5AD7CD5F4DCE823F0D89CFFD817934769D73B2B7_inline (float ___f0, float ___p1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.CanvasScaler::SetScaleFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasScaler_SetScaleFactor_m195FFD8019696523653CA6CB1B8531ECE4020636 (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, float ___scaleFactor0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.CanvasScaler::SetReferencePixelsPerUnit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasScaler_SetReferencePixelsPerUnit_m77B9E51B468EC9750355687AA6E25564D60BE9B5 (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, float ___referencePixelsPerUnit0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.CanvasScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasScaler__ctor_m0D60150B065E8CFBCB4BC324F364A0FF08762493 (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.Vector3Int::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_get_left_m7CD84E5D4DD738D6D9DC0725F321AD0F180CCC1D_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3Int::op_Implicit(UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.Vector3Int::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_get_right_mFCA804B530E1E6465DBFDCD11967D7B12D0CB74C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.Vector3Int::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_get_up_m47FB322FA0AB726D36223263AF0A8D2FBE367EED_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.Vector3Int::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_get_down_mD546C0ADBF5E55DD1845EE917CC8DCE430587AED_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mDEF1E073986286F6EFA1552A5D0E1A0F6CBF4500_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B (String_t* ___layerName0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m6B89CCCAF549D1917B95F663E007382899E66BA7 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit2D::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mDA1E9E9B78D7A59256072CF9B3608DD53DD5A9CC_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, const RuntimeMethod* method) ;
// System.Void CameraManager::ValidateCameras(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_ValidateCameras_m9847CEACD5752BF2A99649A9DCC543B5412946FE (CameraManager_tEE6F72F29DC61B985F2829E8E0C1EE3BA2AB9E0E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RuleTile/TilingRule>::GetEnumerator()
inline Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74 List_1_GetEnumerator_m5BE5245D4A54309D1912F9CB6730B3B6E8189B8E (List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74 (*) (List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.RuleTile/TilingRule>::Dispose()
inline void Enumerator_Dispose_mFC2331B6F2401D1F75427CFD4B250F75BAD17980 (Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.RuleTile/TilingRule>::get_Current()
inline TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* Enumerator_get_Current_m27106005658F6347E51AE00D342A2AE3B299A195_inline (Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74* __this, const RuntimeMethod* method)
{
	return ((  TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* (*) (Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.RuleTile::RuleMatches(UnityEngine.RuleTile/TilingRule,UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuleTile_RuleMatches_m3E71FC312965E255C3555D640610BC99DE879E8B (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* ___rule0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position1, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap2, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___transform3, const RuntimeMethod* method) ;
// System.Single UnityEngine.RuleTile::GetPerlinValue(UnityEngine.Vector3Int,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RuleTile_GetPerlinValue_m4C046DD42C7BF9737DA66A9AE8324E02978EAB1C (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, float ___scale1, float ___offset2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.RuleTile::ApplyRandomTransform(UnityEngine.RuleTile/TilingRule/Transform,UnityEngine.Matrix4x4,System.Single,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 RuleTile_ApplyRandomTransform_m8D752FB204701C8F61618EB8E57CC46DE77818C3 (int32_t ___type0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___original1, float ___perlinScale2, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.RuleTile/TilingRule>::MoveNext()
inline bool Enumerator_MoveNext_m294BD9CABB86CF23F72E0A98A2B6D3D39D3DB7D3 (Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4 (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileAnimationData::set_animatedSprites(UnityEngine.Sprite[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileAnimationData_set_animatedSprites_m315FE8DAB5071E1FA594AEA74B1B66BBF6A5C3E1 (TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* __this, SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileAnimationData::set_animationSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileAnimationData_set_animationSpeed_mE1DB382A9D7F0385D70248A93B998405890D4611 (TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RuleTile/TilingRule>::get_Count()
inline int32_t List_1_get_Count_mC1CB6BB1D951F23F85395FA1B9B312D61B82A8E9_inline (List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.Vector3Int::op_Addition(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_op_Addition_m7B25A163958DEC7B64323710764439A8322905AF_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___a0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_RefreshTile_m7302220B588658247D635871B92DBFF7708E2224 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RuleTile::RuleMatches(UnityEngine.RuleTile/TilingRule,UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuleTile_RuleMatches_m23F063F6544EAA5BC9494A9B3D93ACB7658D66D9 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* ___rule0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position1, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap2, int32_t ___angle3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RuleTile::RuleMatches(UnityEngine.RuleTile/TilingRule,UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuleTile_RuleMatches_mA621C756E65B0168D9C9583D0D348614133E1F59 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* ___rule0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position1, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap2, bool ___mirrorX3, bool ___mirrorY4, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.RuleTile::GetRotatedPos(UnityEngine.Vector3Int,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 RuleTile_GetRotatedPos_mDAF2BF54583500406C2526B197424CF927AE27E3 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___original0, int32_t ___rotation1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RuleTile::GetIndexOfOffset(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuleTile_GetIndexOfOffset_m36FB23ECFD507359D42F2D2AE03896930EB50C69 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___offset0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.RuleTile::GetMirroredPos(UnityEngine.Vector3Int,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 RuleTile_GetMirroredPos_mEA0235713C7D465A9AEE35696459238DA15257A6 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___original0, bool ___mirrorX1, bool ___mirrorY2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase__ctor_mBFD0A0ACF9DB1F08783B9F3F35D4E61C9205D4A2 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m00DE509EBC0F78461570ED4F104B3010EB203FD1 (double ___a0, double ___newBase1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void CustomCanvasScaler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomCanvasScaler_OnEnable_mB6C98D414B10A8BB2005F7E10A1E9971A7FBF7E9 (CustomCanvasScaler_t8D4C81AA5A88F3CE23347F88A9B07A46A1D9C495* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RootCanvas = GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___m_RootCanvas_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RootCanvas_19), (void*)L_0);
		// base.OnEnable();
		CanvasScaler_OnEnable_m9F50E6AF109CE6227FD9E523B0698925B89D29F8(__this, NULL);
		// }
		return;
	}
}
// System.Void CustomCanvasScaler::HandleScaleWithScreenSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomCanvasScaler_HandleScaleWithScreenSize_mEF0FDFEFB14CED94E8A5951E0642E96D08EC1878 (CustomCanvasScaler_t8D4C81AA5A88F3CE23347F88A9B07A46A1D9C495* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* V_3 = NULL;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// if (m_RootCanvas.worldCamera != null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___m_RootCanvas_19;
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// screenSize = new Vector2(m_RootCanvas.worldCamera.pixelWidth, m_RootCanvas.worldCamera.pixelHeight);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___m_RootCanvas_19;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_4, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = __this->___m_RootCanvas_19;
		NullCheck(L_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_7, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)L_5), ((float)L_8), NULL);
		goto IL_0051;
	}

IL_003e:
	{
		// screenSize = new Vector2(Screen.width, Screen.height);
		int32_t L_9;
		L_9 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_10;
		L_10 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)L_9), ((float)L_10), NULL);
	}

IL_0051:
	{
		// int displayIndex = m_RootCanvas.targetDisplay;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11 = __this->___m_RootCanvas_19;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Canvas_get_targetDisplay_m2F2FCEA6885820E659F2F520991828DE54CCB6BF(L_11, NULL);
		V_1 = L_12;
		// if (displayIndex > 0 && displayIndex < Display.displays.Length)
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var);
		DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F* L_15 = ((Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_StaticFields*)il2cpp_codegen_static_fields_for(Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var))->___displays_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0088;
		}
	}
	{
		// Display disp = Display.displays[displayIndex];
		il2cpp_codegen_runtime_class_init_inline(Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var);
		DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F* L_16 = ((Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_StaticFields*)il2cpp_codegen_static_fields_for(Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var))->___displays_1;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		// screenSize = new Vector2(disp.renderingWidth, disp.renderingHeight);
		Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Display_get_renderingWidth_mD23656E7A8270AF79B0EF4124959B3E18BEDF0C7(L_20, NULL);
		Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Display_get_renderingHeight_m0627691B7B2D7037A856597E43BFDF1F0CC2B0B8(L_22, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)L_21), ((float)L_23), NULL);
	}

IL_0088:
	{
		// float scaleFactor = 0;
		V_2 = (0.0f);
		// switch (m_ScreenMatchMode)
		int32_t L_24 = ((CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B*)__this)->___m_ScreenMatchMode_8;
		V_4 = L_24;
		int32_t L_25 = V_4;
		switch (L_25)
		{
			case 0:
			{
				goto IL_00ae;
			}
			case 1:
			{
				goto IL_0106;
			}
			case 2:
			{
				goto IL_0132;
			}
		}
	}
	{
		goto IL_015c;
	}

IL_00ae:
	{
		// float logWidth = Mathf.Log(screenSize.x / m_ReferenceResolution.x, kLogBase);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_0;
		float L_27 = L_26.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&((CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B*)__this)->___m_ReferenceResolution_7);
		float L_29 = L_28->___x_0;
		float L_30;
		L_30 = Mathf_Log_m5AD7CD5F4DCE823F0D89CFFD817934769D73B2B7_inline(((float)(L_27/L_29)), (2.0f), NULL);
		// float logHeight = Mathf.Log(screenSize.y / m_ReferenceResolution.y, kLogBase);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_0;
		float L_32 = L_31.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&((CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B*)__this)->___m_ReferenceResolution_7);
		float L_34 = L_33->___y_1;
		float L_35;
		L_35 = Mathf_Log_m5AD7CD5F4DCE823F0D89CFFD817934769D73B2B7_inline(((float)(L_32/L_34)), (2.0f), NULL);
		V_5 = L_35;
		// float logWeightedAverage = Mathf.Lerp(logWidth, logHeight, m_MatchWidthOrHeight);
		float L_36 = V_5;
		float L_37 = ((CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B*)__this)->___m_MatchWidthOrHeight_9;
		float L_38;
		L_38 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_30, L_36, L_37, NULL);
		V_6 = L_38;
		// scaleFactor = Mathf.Pow(kLogBase, logWeightedAverage);
		float L_39 = V_6;
		float L_40;
		L_40 = powf((2.0f), L_39);
		V_2 = L_40;
		// break;
		goto IL_015c;
	}

IL_0106:
	{
		// scaleFactor = Mathf.Min(screenSize.x / m_ReferenceResolution.x, screenSize.y / m_ReferenceResolution.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_0;
		float L_42 = L_41.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&((CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B*)__this)->___m_ReferenceResolution_7);
		float L_44 = L_43->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_0;
		float L_46 = L_45.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_47 = (&((CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B*)__this)->___m_ReferenceResolution_7);
		float L_48 = L_47->___y_1;
		float L_49;
		L_49 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(((float)(L_42/L_44)), ((float)(L_46/L_48)), NULL);
		V_2 = L_49;
		// break;
		goto IL_015c;
	}

IL_0132:
	{
		// scaleFactor = Mathf.Max(screenSize.x / m_ReferenceResolution.x, screenSize.y / m_ReferenceResolution.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = V_0;
		float L_51 = L_50.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_52 = (&((CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B*)__this)->___m_ReferenceResolution_7);
		float L_53 = L_52->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_0;
		float L_55 = L_54.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_56 = (&((CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B*)__this)->___m_ReferenceResolution_7);
		float L_57 = L_56->___y_1;
		float L_58;
		L_58 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)(L_51/L_53)), ((float)(L_55/L_57)), NULL);
		V_2 = L_58;
	}

IL_015c:
	{
		// SetScaleFactor(scaleFactor);
		float L_59 = V_2;
		CanvasScaler_SetScaleFactor_m195FFD8019696523653CA6CB1B8531ECE4020636(__this, L_59, NULL);
		// SetReferencePixelsPerUnit(m_ReferencePixelsPerUnit);
		float L_60 = ((CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B*)__this)->___m_ReferencePixelsPerUnit_5;
		CanvasScaler_SetReferencePixelsPerUnit_m77B9E51B468EC9750355687AA6E25564D60BE9B5(__this, L_60, NULL);
		// }
		return;
	}
}
// System.Void CustomCanvasScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomCanvasScaler__ctor_m3FD4635A82FD5949078743157B1537DF2295B1EB (CustomCanvasScaler_t8D4C81AA5A88F3CE23347F88A9B07A46A1D9C495* __this, const RuntimeMethod* method) 
{
	{
		CanvasScaler__ctor_m0D60150B065E8CFBCB4BC324F364A0FF08762493(__this, NULL);
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
// System.Void Hero::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Start_m54FCA87FBB8D2380C1FCCD82A8E00B253215C824 (Hero_t23AE63B6FC54E98B922DAD08F07840C752E303A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD71F6CB47CB5EC0CF5ABF2655838494F00BAD85);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_6), (void*)L_0);
		// animator.SetBool("alive", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_5;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteralDD71F6CB47CB5EC0CF5ABF2655838494F00BAD85, (bool)1, NULL);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_10), (void*)L_2);
		// }
		return;
	}
}
// System.Void Hero::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Update_mCDD0AC705ACAD253F8FFB1CC4C386256EE5A8459 (Hero_t23AE63B6FC54E98B922DAD08F07840C752E303A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9139DDE869609F3F98593B4818D5FA71F2740765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B13_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B14_1 = NULL;
	{
		// if(playerState == PlayerState.Dead) {
		int32_t L_0 = __this->___playerState_7;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// rb.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rb_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_1);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_1, L_2, NULL);
		// return;
		return;
	}

IL_001a:
	{
		// Vector3 tryMove = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_0 = L_3;
		// if (Input.GetKey(KeyCode.LeftArrow))
		bool L_4;
		L_4 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)276), NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// tryMove += Vector3Int.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6;
		L_6 = Vector3Int_get_left_m7CD84E5D4DD738D6D9DC0725F321AD0F180CCC1D_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_7, NULL);
		V_0 = L_8;
	}

IL_003d:
	{
		// if (Input.GetKey(KeyCode.RightArrow))
		bool L_9;
		L_9 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)275), NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// tryMove += Vector3Int.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_11;
		L_11 = Vector3Int_get_right_mFCA804B530E1E6465DBFDCD11967D7B12D0CB74C_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_10, L_12, NULL);
		V_0 = L_13;
	}

IL_005a:
	{
		// if (Input.GetKey(KeyCode.UpArrow))
		bool L_14;
		L_14 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)273), NULL);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		// tryMove += Vector3Int.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_16;
		L_16 = Vector3Int_get_up_m47FB322FA0AB726D36223263AF0A8D2FBE367EED_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_17, NULL);
		V_0 = L_18;
	}

IL_0077:
	{
		// if (Input.GetKey(KeyCode.DownArrow))
		bool L_19;
		L_19 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)274), NULL);
		if (!L_19)
		{
			goto IL_0094;
		}
	}
	{
		// tryMove += Vector3Int.down;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_21;
		L_21 = Vector3Int_get_down_mD546C0ADBF5E55DD1845EE917CC8DCE430587AED_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_22, NULL);
		V_0 = L_23;
	}

IL_0094:
	{
		// rb.velocity = Vector3.ClampMagnitude(tryMove, 1f) * m_MoveSpeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_24 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_ClampMagnitude_mDEF1E073986286F6EFA1552A5D0E1A0F6CBF4500_inline(L_25, (1.0f), NULL);
		float L_27 = __this->___m_MoveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_26, L_27, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_28, NULL);
		NullCheck(L_24);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_24, L_29, NULL);
		// animator.SetBool("moving", tryMove.magnitude > 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = __this->___animator_5;
		float L_31;
		L_31 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		NullCheck(L_30);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_30, _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764, (bool)((((float)L_31) > ((float)(0.0f)))? 1 : 0), NULL);
		// if (Mathf.Abs(tryMove.x) > 0) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		float L_33 = L_32.___x_2;
		float L_34;
		L_34 = fabsf(L_33);
		if ((!(((float)L_34) > ((float)(0.0f)))))
		{
			goto IL_0131;
		}
	}
	{
		// animator.transform.localScale = tryMove.x < 0f ? new Vector3(-1f, 1f, 1f) : new Vector3(1f, 1f, 1f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_35 = __this->___animator_5;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_0;
		float L_38 = L_37.___x_2;
		G_B12_0 = L_36;
		if ((((float)L_38) < ((float)(0.0f))))
		{
			G_B13_0 = L_36;
			goto IL_0118;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B14_0 = L_39;
		G_B14_1 = G_B12_0;
		goto IL_012c;
	}

IL_0118:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B14_0 = L_40;
		G_B14_1 = G_B13_0;
	}

IL_012c:
	{
		NullCheck(G_B14_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(G_B14_1, G_B14_0, NULL);
	}

IL_0131:
	{
		// if(tryMove.magnitude > 0f) {
		float L_41;
		L_41 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_41) > ((float)(0.0f)))))
		{
			goto IL_014b;
		}
	}
	{
		// lookFacing = tryMove;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_42, NULL);
		__this->___lookFacing_8 = L_43;
	}

IL_014b:
	{
		// dashCooldown = Mathf.MoveTowards(dashCooldown, 0f, Time.deltaTime);
		float L_44 = __this->___dashCooldown_11;
		float L_45;
		L_45 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_46;
		L_46 = Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline(L_44, (0.0f), L_45, NULL);
		__this->___dashCooldown_11 = L_46;
		// if (Input.GetButtonDown("Jump")) {
		bool L_47;
		L_47 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_47)
		{
			goto IL_0252;
		}
	}
	{
		// if(dashCooldown <= 0f && tryMove.magnitude > 0) {
		float L_48 = __this->___dashCooldown_11;
		if ((!(((float)L_48) <= ((float)(0.0f)))))
		{
			goto IL_0252;
		}
	}
	{
		float L_49;
		L_49 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_49) > ((float)(0.0f)))))
		{
			goto IL_0252;
		}
	}
	{
		// var hit = Physics2D.Raycast(transform.position + Vector3.up * .5f, tryMove.normalized, 3.5f, 1 << LayerMask.NameToLayer("Wall"));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_52, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_51, L_53, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_56, NULL);
		int32_t L_58;
		L_58 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_59;
		L_59 = Physics2D_Raycast_m6B89CCCAF549D1917B95F663E007382899E66BA7(L_55, L_57, (3.5f), ((int32_t)(1<<((int32_t)(L_58&((int32_t)31))))), NULL);
		V_1 = L_59;
		// float distance = 3f;
		V_2 = (3.0f);
		// if(hit.collider != null) {
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_60;
		L_60 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_60, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_61)
		{
			goto IL_0203;
		}
	}
	{
		// distance = hit.distance - .5f;
		float L_62;
		L_62 = RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613((&V_1), NULL);
		V_2 = ((float)il2cpp_codegen_subtract(L_62, (0.5f)));
	}

IL_0203:
	{
		// transform.position = rb.position + Vector2.ClampMagnitude(tryMove, 1f) * distance;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_64 = __this->___rb_6;
		NullCheck(L_64);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67;
		L_67 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_66, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68;
		L_68 = Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline(L_67, (1.0f), NULL);
		float L_69 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		L_70 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_68, L_69, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_65, L_70, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_71, NULL);
		NullCheck(L_63);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_63, L_72, NULL);
		// if (audioSource != null) audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_73 = __this->___audioSource_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_73, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_74)
		{
			goto IL_0252;
		}
	}
	{
		// if (audioSource != null) audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_75 = __this->___audioSource_10;
		NullCheck(L_75);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_75, NULL);
	}

IL_0252:
	{
		// animator.SetBool("dash_ready", dashCooldown <= 0f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_76 = __this->___animator_5;
		float L_77 = __this->___dashCooldown_11;
		NullCheck(L_76);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_76, _stringLiteral9139DDE869609F3F98593B4818D5FA71F2740765, (bool)((((int32_t)((!(((float)L_77) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Hero::LevelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_LevelComplete_mD5B8CA9A3684C1B01635D5DFB4F458817A2CBD0C (Hero_t23AE63B6FC54E98B922DAD08F07840C752E303A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Void Hero::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero__ctor_mC6CDC89390E1FB717C118D299CD3A42DF5583122 (Hero_t23AE63B6FC54E98B922DAD08F07840C752E303A9* __this, const RuntimeMethod* method) 
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
// System.Void BasicCameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicCameraFollow_Update_m38DA6E1013BC9344A3F9C3BB1B36D315BD270387 (BasicCameraFollow_t56A110F74E07977201241B1E99197AD12F243E4F* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// targetPos = new Vector3(followTarget.transform.position.x, followTarget.transform.position.y, transform.position.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___followTarget_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___followTarget_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_3, L_7, L_10, /*hidden argument*/NULL);
		__this->___targetPos_5 = L_11;
		// Vector3 velocity = targetPos - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___targetPos_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_12, L_14, NULL);
		V_0 = L_15;
		// transform.position = Vector3.SmoothDamp (transform.position, targetPos, ref velocity, 1.0f, moveSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___targetPos_5;
		float L_20 = __this->___moveSpeed_6;
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_SmoothDamp_mDA1E9E9B78D7A59256072CF9B3608DD53DD5A9CC_inline(L_18, L_19, (&V_0), (1.0f), ((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_22, NULL);
		// }
		return;
	}
}
// System.Void BasicCameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicCameraFollow__ctor_m6180DBE70EAC7251FDBD27CD397484F11B487624 (BasicCameraFollow_t56A110F74E07977201241B1E99197AD12F243E4F* __this, const RuntimeMethod* method) 
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
// System.Void CameraManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_Awake_m02A46CC0FBBB43B1216F90D62044A178899D3D84 (CameraManager_tEE6F72F29DC61B985F2829E8E0C1EE3BA2AB9E0E* __this, const RuntimeMethod* method) 
{
	{
		// isPixelPerfect = false;
		__this->___isPixelPerfect_6 = (bool)0;
		// ValidateCameras(isPixelPerfect);
		bool L_0 = __this->___isPixelPerfect_6;
		CameraManager_ValidateCameras_m9847CEACD5752BF2A99649A9DCC543B5412946FE(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void CameraManager::TogglePixelPerfect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_TogglePixelPerfect_m7FD7E51D34A7CBB5A0B209EBA992EF017757425F (CameraManager_tEE6F72F29DC61B985F2829E8E0C1EE3BA2AB9E0E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// isPixelPerfect = value;
		bool L_0 = ___value0;
		__this->___isPixelPerfect_6 = L_0;
		// ValidateCameras(isPixelPerfect);
		bool L_1 = __this->___isPixelPerfect_6;
		CameraManager_ValidateCameras_m9847CEACD5752BF2A99649A9DCC543B5412946FE(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void CameraManager::ValidateCameras(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_ValidateCameras_m9847CEACD5752BF2A99649A9DCC543B5412946FE (CameraManager_tEE6F72F29DC61B985F2829E8E0C1EE3BA2AB9E0E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// ordinaryCamera.gameObject.SetActive(false);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___ordinaryCamera_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// pixelPerfectCamera.gameObject.SetActive(true);
		PixelPerfectCamera_t7B0849F4AB5E6399719BE7C3B330BCBBA3AAF7A9* L_3 = __this->___pixelPerfectCamera_5;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		return;
	}

IL_0026:
	{
		// ordinaryCamera.gameObject.SetActive(true);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___ordinaryCamera_4;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// pixelPerfectCamera.gameObject.SetActive(false);
		PixelPerfectCamera_t7B0849F4AB5E6399719BE7C3B330BCBBA3AAF7A9* L_7 = __this->___pixelPerfectCamera_5;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CameraManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager__ctor_m7D095B25DCA00C737AFBE8EBE4FEBFF808FC839C (CameraManager_tEE6F72F29DC61B985F2829E8E0C1EE3BA2AB9E0E* __this, const RuntimeMethod* method) 
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
// System.Void HeroMover::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroMover_Start_m9550476943452051C77AB76A209FCAA31AD57BF1 (HeroMover_t1198B493A35F2BCD82D062D5A39BB07EAB6D31BF* __this, const RuntimeMethod* method) 
{
	{
		// origin = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___origin_6 = L_1;
		// }
		return;
	}
}
// System.Void HeroMover::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroMover_Update_mE3CF239EB4861158BE7B4A3C960A953E88BE70F8 (HeroMover_t1198B493A35F2BCD82D062D5A39BB07EAB6D31BF* __this, const RuntimeMethod* method) 
{
	{
		// offset = Mathf.Sin(Time.time * Frequency * 4.0f) * Amplitude;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_1 = __this->___Frequency_5;
		float L_2;
		L_2 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), (4.0f))));
		float L_3 = __this->___Amplitude_4;
		__this->___offset_7 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		// transform.position = origin + Vector3.right * offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___origin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		float L_7 = __this->___offset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_8, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_9, NULL);
		// }
		return;
	}
}
// System.Void HeroMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroMover__ctor_mB8838105915DF850D31370681E8334F7995C1579 (HeroMover_t1198B493A35F2BCD82D062D5A39BB07EAB6D31BF* __this, const RuntimeMethod* method) 
{
	{
		// public float Amplitude = 1.0f;
		__this->___Amplitude_4 = (1.0f);
		// public float Frequency = 1.0f;
		__this->___Frequency_5 = (1.0f);
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
// System.Void UnityEngine.RuleTile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleTile_GetTileData_mC8EFF56BBE17123852FB1313284A179956DC98B9 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tileMap1, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___tileData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC2331B6F2401D1F75427CFD4B250F75BAD17980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m294BD9CABB86CF23F72E0A98A2B6D3D39D3DB7D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m27106005658F6347E51AE00D342A2AE3B299A195_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5BE5245D4A54309D1912F9CB6730B3B6E8189B8E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* V_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// tileData.sprite = m_DefaultSprite;
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_0 = ___tileData2;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___m_DefaultSprite_4;
		TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94(L_0, L_1, NULL);
		// tileData.colliderType = m_DefaultColliderType;
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_2 = ___tileData2;
		int32_t L_3 = __this->___m_DefaultColliderType_5;
		TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96(L_2, L_3, NULL);
		// tileData.flags = TileFlags.LockTransform;
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_4 = ___tileData2;
		TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30(L_4, 2, NULL);
		// tileData.transform = Matrix4x4.identity;
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_5 = ___tileData2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F(L_5, L_6, NULL);
		// foreach (TilingRule rule in m_TilingRules)
		List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE* L_7 = __this->___m_TilingRules_6;
		NullCheck(L_7);
		Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74 L_8;
		L_8 = List_1_GetEnumerator_m5BE5245D4A54309D1912F9CB6730B3B6E8189B8E(L_7, List_1_GetEnumerator_m5BE5245D4A54309D1912F9CB6730B3B6E8189B8E_RuntimeMethod_var);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0104:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC2331B6F2401D1F75427CFD4B250F75BAD17980((&V_0), Enumerator_Dispose_mFC2331B6F2401D1F75427CFD4B250F75BAD17980_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f6_1;
			}

IL_003b_1:
			{
				// foreach (TilingRule rule in m_TilingRules)
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_9;
				L_9 = Enumerator_get_Current_m27106005658F6347E51AE00D342A2AE3B299A195_inline((&V_0), Enumerator_get_Current_m27106005658F6347E51AE00D342A2AE3B299A195_RuntimeMethod_var);
				V_1 = L_9;
				// Matrix4x4 transform = Matrix4x4.identity;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
				L_10 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
				V_2 = L_10;
				// if (RuleMatches(rule, position, tileMap, ref transform))
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_11 = V_1;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_12 = ___position0;
				ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_13 = ___tileMap1;
				bool L_14;
				L_14 = RuleTile_RuleMatches_m3E71FC312965E255C3555D640610BC99DE879E8B(__this, L_11, L_12, L_13, (&V_2), NULL);
				if (!L_14)
				{
					goto IL_00f6_1;
				}
			}
			{
				// switch (rule.m_Output)
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_15 = V_1;
				NullCheck(L_15);
				int32_t L_16 = L_15->___m_Output_5;
				V_4 = L_16;
				int32_t L_17 = V_4;
				switch (L_17)
				{
					case 0:
					{
						goto IL_0076_1;
					}
					case 1:
					{
						goto IL_0086_1;
					}
					case 2:
					{
						goto IL_0076_1;
					}
				}
			}
			{
				goto IL_00e1_1;
			}

IL_0076_1:
			{
				// tileData.sprite = rule.m_Sprites[0];
				TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_18 = ___tileData2;
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_19 = V_1;
				NullCheck(L_19);
				SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_20 = L_19->___m_Sprites_1;
				NullCheck(L_20);
				int32_t L_21 = 0;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
				TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94(L_18, L_22, NULL);
				// break;
				goto IL_00e1_1;
			}

IL_0086_1:
			{
				// int index = Mathf.Clamp(Mathf.FloorToInt(GetPerlinValue(position, rule.m_PerlinScale, 100000f) * rule.m_Sprites.Length), 0, rule.m_Sprites.Length - 1);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_23 = ___position0;
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_24 = V_1;
				NullCheck(L_24);
				float L_25 = L_24->___m_PerlinScale_3;
				float L_26;
				L_26 = RuleTile_GetPerlinValue_m4C046DD42C7BF9737DA66A9AE8324E02978EAB1C(L_23, L_25, (100000.0f), NULL);
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_27 = V_1;
				NullCheck(L_27);
				SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_28 = L_27->___m_Sprites_1;
				NullCheck(L_28);
				int32_t L_29;
				L_29 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(L_26, ((float)((int32_t)(((RuntimeArray*)L_28)->max_length))))), NULL);
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_30 = V_1;
				NullCheck(L_30);
				SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_31 = L_30->___m_Sprites_1;
				NullCheck(L_31);
				int32_t L_32;
				L_32 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_29, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1)), NULL);
				V_3 = L_32;
				// tileData.sprite = rule.m_Sprites[index];
				TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_33 = ___tileData2;
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_34 = V_1;
				NullCheck(L_34);
				SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_35 = L_34->___m_Sprites_1;
				int32_t L_36 = V_3;
				NullCheck(L_35);
				int32_t L_37 = L_36;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
				TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94(L_33, L_38, NULL);
				// if (rule.m_RandomTransform != TilingRule.Transform.Fixed)
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_39 = V_1;
				NullCheck(L_39);
				int32_t L_40 = L_39->___m_RandomTransform_7;
				if (!L_40)
				{
					goto IL_00e1_1;
				}
			}
			{
				// transform = ApplyRandomTransform(rule.m_RandomTransform, transform, rule.m_PerlinScale, position);
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_41 = V_1;
				NullCheck(L_41);
				int32_t L_42 = L_41->___m_RandomTransform_7;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_43 = V_2;
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_44 = V_1;
				NullCheck(L_44);
				float L_45 = L_44->___m_PerlinScale_3;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_46 = ___position0;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_47;
				L_47 = RuleTile_ApplyRandomTransform_m8D752FB204701C8F61618EB8E57CC46DE77818C3(L_42, L_43, L_45, L_46, NULL);
				V_2 = L_47;
			}

IL_00e1_1:
			{
				// tileData.transform = transform;
				TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_48 = ___tileData2;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_49 = V_2;
				TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F(L_48, L_49, NULL);
				// tileData.colliderType = rule.m_ColliderType;
				TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_50 = ___tileData2;
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_51 = V_1;
				NullCheck(L_51);
				int32_t L_52 = L_51->___m_ColliderType_6;
				TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96(L_50, L_52, NULL);
				// break;
				goto IL_0112;
			}

IL_00f6_1:
			{
				// foreach (TilingRule rule in m_TilingRules)
				bool L_53;
				L_53 = Enumerator_MoveNext_m294BD9CABB86CF23F72E0A98A2B6D3D39D3DB7D3((&V_0), Enumerator_MoveNext_m294BD9CABB86CF23F72E0A98A2B6D3D39D3DB7D3_RuntimeMethod_var);
				if (L_53)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_0112;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0112:
	{
		// }
		return;
	}
}
// System.Single UnityEngine.RuleTile::GetPerlinValue(UnityEngine.Vector3Int,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RuleTile_GetPerlinValue_m4C046DD42C7BF9737DA66A9AE8324E02978EAB1C (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, float ___scale1, float ___offset2, const RuntimeMethod* method) 
{
	{
		// return Mathf.PerlinNoise((position.x + offset) * scale, (position.y + offset) * scale);
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___position0), NULL);
		float L_1 = ___offset2;
		float L_2 = ___scale1;
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___position0), NULL);
		float L_4 = ___offset2;
		float L_5 = ___scale1;
		float L_6;
		L_6 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)L_0), L_1)), L_2)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)L_3), L_4)), L_5)), NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.RuleTile::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuleTile_GetTileAnimationData_mDCDC82CDAF8375572FD604429156CD2148FD99E5 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap1, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* ___tileAnimationData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC2331B6F2401D1F75427CFD4B250F75BAD17980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m294BD9CABB86CF23F72E0A98A2B6D3D39D3DB7D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m27106005658F6347E51AE00D342A2AE3B299A195_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5BE5245D4A54309D1912F9CB6730B3B6E8189B8E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* V_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// foreach (TilingRule rule in m_TilingRules)
		List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE* L_0 = __this->___m_TilingRules_6;
		NullCheck(L_0);
		Enumerator_tA4C93ED206FF438008E8B8C721FD40ADEDBAEC74 L_1;
		L_1 = List_1_GetEnumerator_m5BE5245D4A54309D1912F9CB6730B3B6E8189B8E(L_0, List_1_GetEnumerator_m5BE5245D4A54309D1912F9CB6730B3B6E8189B8E_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC2331B6F2401D1F75427CFD4B250F75BAD17980((&V_0), Enumerator_Dispose_mFC2331B6F2401D1F75427CFD4B250F75BAD17980_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004e_1;
			}

IL_000e_1:
			{
				// foreach (TilingRule rule in m_TilingRules)
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_2;
				L_2 = Enumerator_get_Current_m27106005658F6347E51AE00D342A2AE3B299A195_inline((&V_0), Enumerator_get_Current_m27106005658F6347E51AE00D342A2AE3B299A195_RuntimeMethod_var);
				V_1 = L_2;
				// Matrix4x4 transform = Matrix4x4.identity;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
				L_3 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
				V_2 = L_3;
				// if (RuleMatches(rule, position, tilemap, ref transform) && rule.m_Output == TilingRule.OutputSprite.Animation)
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_4 = V_1;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = ___position0;
				ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_6 = ___tilemap1;
				bool L_7;
				L_7 = RuleTile_RuleMatches_m3E71FC312965E255C3555D640610BC99DE879E8B(__this, L_4, L_5, L_6, (&V_2), NULL);
				if (!L_7)
				{
					goto IL_004e_1;
				}
			}
			{
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_8 = V_1;
				NullCheck(L_8);
				int32_t L_9 = L_8->___m_Output_5;
				if ((!(((uint32_t)L_9) == ((uint32_t)2))))
				{
					goto IL_004e_1;
				}
			}
			{
				// tileAnimationData.animatedSprites = rule.m_Sprites;
				TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* L_10 = ___tileAnimationData2;
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_11 = V_1;
				NullCheck(L_11);
				SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_12 = L_11->___m_Sprites_1;
				TileAnimationData_set_animatedSprites_m315FE8DAB5071E1FA594AEA74B1B66BBF6A5C3E1(L_10, L_12, NULL);
				// tileAnimationData.animationSpeed = rule.m_AnimationSpeed;
				TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* L_13 = ___tileAnimationData2;
				TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_14 = V_1;
				NullCheck(L_14);
				float L_15 = L_14->___m_AnimationSpeed_2;
				TileAnimationData_set_animationSpeed_mE1DB382A9D7F0385D70248A93B998405890D4611(L_13, L_15, NULL);
				// return true;
				V_3 = (bool)1;
				goto IL_0069;
			}

IL_004e_1:
			{
				// foreach (TilingRule rule in m_TilingRules)
				bool L_16;
				L_16 = Enumerator_MoveNext_m294BD9CABB86CF23F72E0A98A2B6D3D39D3DB7D3((&V_0), Enumerator_MoveNext_m294BD9CABB86CF23F72E0A98A2B6D3D39D3DB7D3_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		// return false;
		return (bool)0;
	}

IL_0069:
	{
		// }
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Void UnityEngine.RuleTile::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleTile_RefreshTile_m63E21D4E1CA300CFF1663A047E8F9E28A1968F1D (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___location0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tileMap1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC1CB6BB1D951F23F85395FA1B9B312D61B82A8E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_TilingRules != null && m_TilingRules.Count > 0)
		List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE* L_0 = __this->___m_TilingRules_6;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		List_1_tDC62BDE473D867946B44A71C26C7329AA8B8ADEE* L_1 = __this->___m_TilingRules_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mC1CB6BB1D951F23F85395FA1B9B312D61B82A8E9_inline(L_1, List_1_get_Count_mC1CB6BB1D951F23F85395FA1B9B312D61B82A8E9_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		// for (int y = -1; y <= 1; y++)
		V_0 = (-1);
		goto IL_003f;
	}

IL_001a:
	{
		// for (int x = -1; x <= 1; x++)
		V_1 = (-1);
		goto IL_0037;
	}

IL_001e:
	{
		// base.RefreshTile(location + new Vector3Int(x, y, 0), tileMap);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_3 = ___location0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_6), L_4, L_5, 0, /*hidden argument*/NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7;
		L_7 = Vector3Int_op_Addition_m7B25A163958DEC7B64323710764439A8322905AF_inline(L_3, L_6, NULL);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_8 = ___tileMap1;
		TileBase_RefreshTile_m7302220B588658247D635871B92DBFF7708E2224(__this, L_7, L_8, NULL);
		// for (int x = -1; x <= 1; x++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int x = -1; x <= 1; x++)
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		// for (int y = -1; y <= 1; y++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		// for (int y = -1; y <= 1; y++)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_0044:
	{
		// base.RefreshTile(location, tileMap);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_13 = ___location0;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_14 = ___tileMap1;
		TileBase_RefreshTile_m7302220B588658247D635871B92DBFF7708E2224(__this, L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.RuleTile::RuleMatches(UnityEngine.RuleTile/TilingRule,UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuleTile_RuleMatches_m3E71FC312965E255C3555D640610BC99DE879E8B (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* ___rule0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position1, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap2, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___transform3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		// for (int angle = 0; angle <= (rule.m_RuleTransform == TilingRule.Transform.Rotated ? 270 : 0); angle += 90)
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		// if (RuleMatches(rule, position, tilemap, angle))
		TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_0 = ___rule0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___position1;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_2 = ___tilemap2;
		int32_t L_3 = V_0;
		bool L_4;
		L_4 = RuleTile_RuleMatches_m23F063F6544EAA5BC9494A9B3D93ACB7658D66D9(__this, L_0, L_1, L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// transform = Matrix4x4.TRS(Vector3.zero, Quaternion.Euler(0f, 0f, -angle), Vector3.one);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_5 = ___transform3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		int32_t L_7 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), ((float)((-L_7))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_6, L_8, L_9, NULL);
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_5 = L_10;
		// return true;
		return (bool)1;
	}

IL_003a:
	{
		// for (int angle = 0; angle <= (rule.m_RuleTransform == TilingRule.Transform.Rotated ? 270 : 0); angle += 90)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)90)));
	}

IL_003f:
	{
		// for (int angle = 0; angle <= (rule.m_RuleTransform == TilingRule.Transform.Rotated ? 270 : 0); angle += 90)
		int32_t L_12 = V_0;
		TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_13 = ___rule0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___m_RuleTransform_4;
		G_B5_0 = L_12;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			G_B6_0 = L_12;
			goto IL_004c;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_0051;
	}

IL_004c:
	{
		G_B7_0 = ((int32_t)270);
		G_B7_1 = G_B6_0;
	}

IL_0051:
	{
		if ((((int32_t)G_B7_1) <= ((int32_t)G_B7_0)))
		{
			goto IL_0004;
		}
	}
	{
		// if ((rule.m_RuleTransform == TilingRule.Transform.MirrorX) && RuleMatches(rule, position, tilemap, true, false))
		TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_15 = ___rule0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___m_RuleTransform_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_0095;
		}
	}
	{
		TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_17 = ___rule0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_18 = ___position1;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_19 = ___tilemap2;
		bool L_20;
		L_20 = RuleTile_RuleMatches_mA621C756E65B0168D9C9583D0D348614133E1F59(__this, L_17, L_18, L_19, (bool)1, (bool)0, NULL);
		if (!L_20)
		{
			goto IL_0095;
		}
	}
	{
		// transform = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, new Vector3(-1f, 1f, 1f));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_21 = ___transform3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_25;
		L_25 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_22, L_23, L_24, NULL);
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_21 = L_25;
		// return true;
		return (bool)1;
	}

IL_0095:
	{
		// if ((rule.m_RuleTransform == TilingRule.Transform.MirrorY) && RuleMatches(rule, position, tilemap, false, true))
		TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_26 = ___rule0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___m_RuleTransform_4;
		if ((!(((uint32_t)L_27) == ((uint32_t)3))))
		{
			goto IL_00d7;
		}
	}
	{
		TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_28 = ___rule0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_29 = ___position1;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_30 = ___tilemap2;
		bool L_31;
		L_31 = RuleTile_RuleMatches_mA621C756E65B0168D9C9583D0D348614133E1F59(__this, L_28, L_29, L_30, (bool)0, (bool)1, NULL);
		if (!L_31)
		{
			goto IL_00d7;
		}
	}
	{
		// transform = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, new Vector3(1f, -1f, 1f));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_32 = ___transform3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), (1.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_36;
		L_36 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_33, L_34, L_35, NULL);
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_32 = L_36;
		// return true;
		return (bool)1;
	}

IL_00d7:
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.RuleTile::ApplyRandomTransform(UnityEngine.RuleTile/TilingRule/Transform,UnityEngine.Matrix4x4,System.Single,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 RuleTile_ApplyRandomTransform_m8D752FB204701C8F61618EB8E57CC46DE77818C3 (int32_t ___type0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___original1, float ___perlinScale2, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B4_2;
	memset((&G_B4_2), 0, sizeof(G_B4_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	float G_B5_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_2;
	memset((&G_B5_2), 0, sizeof(G_B5_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B5_3;
	memset((&G_B5_3), 0, sizeof(G_B5_3));
	float G_B8_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_2;
	memset((&G_B8_2), 0, sizeof(G_B8_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B8_3;
	memset((&G_B8_3), 0, sizeof(G_B8_3));
	float G_B7_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B7_3;
	memset((&G_B7_3), 0, sizeof(G_B7_3));
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B9_2;
	memset((&G_B9_2), 0, sizeof(G_B9_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_3;
	memset((&G_B9_3), 0, sizeof(G_B9_3));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B9_4;
	memset((&G_B9_4), 0, sizeof(G_B9_4));
	{
		// float perlin = GetPerlinValue(position, perlinScale, 200000f);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position3;
		float L_1 = ___perlinScale2;
		float L_2;
		L_2 = RuleTile_GetPerlinValue_m4C046DD42C7BF9737DA66A9AE8324E02978EAB1C(L_0, L_1, (200000.0f), NULL);
		V_0 = L_2;
		int32_t L_3 = ___type0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_00a2;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_0064;
			}
		}
	}
	{
		goto IL_00db;
	}

IL_0026:
	{
		// return original * Matrix4x4.TRS(Vector3.zero, Quaternion.identity, new Vector3(perlin < 0.5 ? 1f : -1f, 1f, 1f));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___original1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		float L_7 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = L_5;
		G_B3_2 = L_4;
		if ((((double)((double)L_7)) < ((double)(0.5))))
		{
			G_B4_0 = L_6;
			G_B4_1 = L_5;
			G_B4_2 = L_4;
			goto IL_0045;
		}
	}
	{
		G_B5_0 = (-1.0f);
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_004a;
	}

IL_0045:
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_004a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), G_B5_0, (1.0f), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(G_B5_2, G_B5_1, L_8, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(G_B5_3, L_9, NULL);
		return L_10;
	}

IL_0064:
	{
		// return original * Matrix4x4.TRS(Vector3.zero, Quaternion.identity, new Vector3(1f, perlin < 0.5 ? 1f : -1f, 1f));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11 = ___original1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		float L_14 = V_0;
		G_B7_0 = (1.0f);
		G_B7_1 = L_13;
		G_B7_2 = L_12;
		G_B7_3 = L_11;
		if ((((double)((double)L_14)) < ((double)(0.5))))
		{
			G_B8_0 = (1.0f);
			G_B8_1 = L_13;
			G_B8_2 = L_12;
			G_B8_3 = L_11;
			goto IL_0088;
		}
	}
	{
		G_B9_0 = (-1.0f);
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		goto IL_008d;
	}

IL_0088:
	{
		G_B9_0 = (1.0f);
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
	}

IL_008d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), G_B9_1, G_B9_0, (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16;
		L_16 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(G_B9_3, G_B9_2, L_15, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17;
		L_17 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(G_B9_4, L_16, NULL);
		return L_17;
	}

IL_00a2:
	{
		// int angle = Mathf.Clamp(Mathf.FloorToInt(perlin * 4), 0, 3) * 90;
		float L_18 = V_0;
		int32_t L_19;
		L_19 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(L_18, (4.0f))), NULL);
		int32_t L_20;
		L_20 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_19, 0, 3, NULL);
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)90)));
		// return Matrix4x4.TRS(Vector3.zero, Quaternion.Euler(0f, 0f, -angle), Vector3.one);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		int32_t L_22 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), ((float)((-L_22))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_25;
		L_25 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_21, L_23, L_24, NULL);
		return L_25;
	}

IL_00db:
	{
		// return original;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = ___original1;
		return L_26;
	}
}
// System.Boolean UnityEngine.RuleTile::RuleMatches(UnityEngine.RuleTile/TilingRule,UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuleTile_RuleMatches_m23F063F6544EAA5BC9494A9B3D93ACB7658D66D9 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* ___rule0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position1, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap2, int32_t ___angle3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_5 = NULL;
	{
		// for (int y = -1; y <= 1; y++)
		V_0 = (-1);
		goto IL_0074;
	}

IL_0004:
	{
		// for (int x = -1; x <= 1; x++)
		V_1 = (-1);
		goto IL_006c;
	}

IL_0008:
	{
		// if (x != 0 || y != 0)
		int32_t L_0 = V_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0068;
		}
	}

IL_000e:
	{
		// Vector3Int offset = new Vector3Int(x, y, 0);
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&V_2), L_2, L_3, 0, NULL);
		// Vector3Int rotated = GetRotatedPos(offset, angle);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_4 = V_2;
		int32_t L_5 = ___angle3;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6;
		L_6 = RuleTile_GetRotatedPos_mDAF2BF54583500406C2526B197424CF927AE27E3(__this, L_4, L_5, NULL);
		V_3 = L_6;
		// int index = GetIndexOfOffset(rotated);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = V_3;
		int32_t L_8;
		L_8 = RuleTile_GetIndexOfOffset_m36FB23ECFD507359D42F2D2AE03896930EB50C69(__this, L_7, NULL);
		V_4 = L_8;
		// TileBase tile = tilemap.GetTile(position + offset);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_9 = ___tilemap2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_10 = ___position1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_11 = V_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_12;
		L_12 = Vector3Int_op_Addition_m7B25A163958DEC7B64323710764439A8322905AF_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_13;
		L_13 = VirtualFuncInvoker1< TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(4 /* UnityEngine.Tilemaps.TileBase UnityEngine.Tilemaps.ITilemap::GetTile(UnityEngine.Vector3Int) */, L_9, L_12);
		V_5 = L_13;
		// if (rule.m_Neighbors[index] == TilingRule.Neighbor.This && tile != this || rule.m_Neighbors[index] == TilingRule.Neighbor.NotThis && tile == this)
		TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_14 = ___rule0;
		NullCheck(L_14);
		NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3* L_15 = L_14->___m_Neighbors_0;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (int32_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_19 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_19, __this, NULL);
		if (L_20)
		{
			goto IL_0066;
		}
	}

IL_0050:
	{
		TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_21 = ___rule0;
		NullCheck(L_21);
		NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3* L_22 = L_21->___m_Neighbors_0;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (int32_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_0068;
		}
	}
	{
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_26 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_26, __this, NULL);
		if (!L_27)
		{
			goto IL_0068;
		}
	}

IL_0066:
	{
		// return false;
		return (bool)0;
	}

IL_0068:
	{
		// for (int x = -1; x <= 1; x++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_006c:
	{
		// for (int x = -1; x <= 1; x++)
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) <= ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int y = -1; y <= 1; y++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0074:
	{
		// for (int y = -1; y <= 1; y++)
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) <= ((int32_t)1)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.RuleTile::RuleMatches(UnityEngine.RuleTile/TilingRule,UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuleTile_RuleMatches_mA621C756E65B0168D9C9583D0D348614133E1F59 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* ___rule0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position1, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap2, bool ___mirrorX3, bool ___mirrorY4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_5 = NULL;
	{
		// for (int y = -1; y <= 1; y++)
		V_0 = (-1);
		goto IL_0076;
	}

IL_0004:
	{
		// for (int x = -1; x <= 1; x++)
		V_1 = (-1);
		goto IL_006e;
	}

IL_0008:
	{
		// if (x != 0 || y != 0)
		int32_t L_0 = V_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_006a;
		}
	}

IL_000e:
	{
		// Vector3Int offset = new Vector3Int(x, y, 0);
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&V_2), L_2, L_3, 0, NULL);
		// Vector3Int mirrored = GetMirroredPos(offset, mirrorX, mirrorY);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_4 = V_2;
		bool L_5 = ___mirrorX3;
		bool L_6 = ___mirrorY4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7;
		L_7 = RuleTile_GetMirroredPos_mEA0235713C7D465A9AEE35696459238DA15257A6(__this, L_4, L_5, L_6, NULL);
		V_3 = L_7;
		// int index = GetIndexOfOffset(mirrored);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_8 = V_3;
		int32_t L_9;
		L_9 = RuleTile_GetIndexOfOffset_m36FB23ECFD507359D42F2D2AE03896930EB50C69(__this, L_8, NULL);
		V_4 = L_9;
		// TileBase tile = tilemap.GetTile(position + offset);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_10 = ___tilemap2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_11 = ___position1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_12 = V_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_13;
		L_13 = Vector3Int_op_Addition_m7B25A163958DEC7B64323710764439A8322905AF_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_14;
		L_14 = VirtualFuncInvoker1< TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(4 /* UnityEngine.Tilemaps.TileBase UnityEngine.Tilemaps.ITilemap::GetTile(UnityEngine.Vector3Int) */, L_10, L_13);
		V_5 = L_14;
		// if (rule.m_Neighbors[index] == TilingRule.Neighbor.This && tile != this || rule.m_Neighbors[index] == TilingRule.Neighbor.NotThis && tile == this)
		TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_15 = ___rule0;
		NullCheck(L_15);
		NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3* L_16 = L_15->___m_Neighbors_0;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (int32_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_0052;
		}
	}
	{
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_20 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, __this, NULL);
		if (L_21)
		{
			goto IL_0068;
		}
	}

IL_0052:
	{
		TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* L_22 = ___rule0;
		NullCheck(L_22);
		NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3* L_23 = L_22->___m_Neighbors_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (int32_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_006a;
		}
	}
	{
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_27 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_27, __this, NULL);
		if (!L_28)
		{
			goto IL_006a;
		}
	}

IL_0068:
	{
		// return false;
		return (bool)0;
	}

IL_006a:
	{
		// for (int x = -1; x <= 1; x++)
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_006e:
	{
		// for (int x = -1; x <= 1; x++)
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) <= ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int y = -1; y <= 1; y++)
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0076:
	{
		// for (int y = -1; y <= 1; y++)
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) <= ((int32_t)1)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 UnityEngine.RuleTile::GetIndexOfOffset(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuleTile_GetIndexOfOffset_m36FB23ECFD507359D42F2D2AE03896930EB50C69 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___offset0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int result = offset.x + 1 + (-offset.y + 1) * 3;
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___offset0), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___offset0), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, 1)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((-L_1)), 1)), 3))));
		// if (result >= 4)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)4)))
		{
			goto IL_001f;
		}
	}
	{
		// result--;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
	}

IL_001f:
	{
		// return result;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3Int UnityEngine.RuleTile::GetRotatedPos(UnityEngine.Vector3Int,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 RuleTile_GetRotatedPos_mDAF2BF54583500406C2526B197424CF927AE27E3 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___original0, int32_t ___rotation1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___rotation1;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)90))))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___rotation1;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___rotation1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)90))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0078;
	}

IL_000f:
	{
		int32_t L_3 = ___rotation1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)180))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_4 = ___rotation1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)270))))
		{
			goto IL_005c;
		}
	}
	{
		goto IL_0078;
	}

IL_0021:
	{
		// return original;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = ___original0;
		return L_5;
	}

IL_0023:
	{
		// return new Vector3Int(-original.y, original.x, original.z);
		int32_t L_6;
		L_6 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___original0), NULL);
		int32_t L_7;
		L_7 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___original0), NULL);
		int32_t L_8;
		L_8 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___original0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_9), ((-L_6)), L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_003f:
	{
		// return new Vector3Int(-original.x, -original.y, original.z);
		int32_t L_10;
		L_10 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___original0), NULL);
		int32_t L_11;
		L_11 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___original0), NULL);
		int32_t L_12;
		L_12 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___original0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_13), ((-L_10)), ((-L_11)), L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_005c:
	{
		// return new Vector3Int(original.y, -original.x, original.z);
		int32_t L_14;
		L_14 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___original0), NULL);
		int32_t L_15;
		L_15 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___original0), NULL);
		int32_t L_16;
		L_16 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___original0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_17), L_14, ((-L_15)), L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_0078:
	{
		// return original;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_18 = ___original0;
		return L_18;
	}
}
// UnityEngine.Vector3Int UnityEngine.RuleTile::GetMirroredPos(UnityEngine.Vector3Int,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 RuleTile_GetMirroredPos_mEA0235713C7D465A9AEE35696459238DA15257A6 (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___original0, bool ___mirrorX1, bool ___mirrorY2, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B6_2 = 0;
	{
		// return new Vector3Int(original.x * (mirrorX ? -1 : 1), original.y * (mirrorY ? -1 : 1), original.z);
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___original0), NULL);
		bool L_1 = ___mirrorX1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___original0), NULL);
		bool L_3 = ___mirrorY2;
		G_B4_0 = L_2;
		G_B4_1 = ((int32_t)il2cpp_codegen_multiply(G_B3_1, G_B3_0));
		if (L_3)
		{
			G_B5_0 = L_2;
			G_B5_1 = ((int32_t)il2cpp_codegen_multiply(G_B3_1, G_B3_0));
			goto IL_001c;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_001d;
	}

IL_001c:
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___original0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_5), G_B6_2, ((int32_t)il2cpp_codegen_multiply(G_B6_1, G_B6_0)), L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.RuleTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleTile__ctor_mBC6D3F2596C4EEDC487FD29EECC91E92D96BBE6B (RuleTile_tD7FA2DD2DCD2E0147E3929D25111B1D4A54AD6DD* __this, const RuntimeMethod* method) 
{
	{
		// public Tile.ColliderType m_DefaultColliderType = Tile.ColliderType.Sprite;
		__this->___m_DefaultColliderType_5 = 1;
		TileBase__ctor_mBFD0A0ACF9DB1F08783B9F3F35D4E61C9205D4A2(__this, NULL);
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
// System.Void UnityEngine.RuleTile/TilingRule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilingRule__ctor_mA17ACE7060667AD3C36C42FA0DFA5BCF2092D4AD (TilingRule_t79992A55CC6266F5DF74C64448A4E7538D1598A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public TilingRule()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Output = OutputSprite.Single;
		__this->___m_Output_5 = 0;
		// m_Neighbors = new Neighbor[8];
		NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3* L_0 = (NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3*)(NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3*)SZArrayNew(NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___m_Neighbors_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Neighbors_0), (void*)L_0);
		// m_Sprites = new Sprite[1];
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1 = (SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)SZArrayNew(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___m_Sprites_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Sprites_1), (void*)L_1);
		// m_AnimationSpeed = 1f;
		__this->___m_AnimationSpeed_2 = (1.0f);
		// m_PerlinScale = 0.5f;
		__this->___m_PerlinScale_3 = (0.5f);
		// m_ColliderType = Tile.ColliderType.Sprite;
		__this->___m_ColliderType_6 = 1;
		// for(int i=0; i<m_Neighbors.Length; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_0046:
	{
		// m_Neighbors[i] = Neighbor.DontCare;
		NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3* L_2 = __this->___m_Neighbors_0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)0);
		// for(int i=0; i<m_Neighbors.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0053:
	{
		// for(int i=0; i<m_Neighbors.Length; i++)
		int32_t L_5 = V_0;
		NeighborU5BU5D_tDFBAC44FF80881AC7A7D254998A76E4B67B897F3* L_6 = __this->___m_Neighbors_0;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0046;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m5AD7CD5F4DCE823F0D89CFFD817934769D73B2B7_inline (float ___f0, float ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___f0;
		float L_1 = ___p1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Log_m00DE509EBC0F78461570ED4F104B3010EB203FD1(((double)L_0), ((double)L_1), NULL);
		V_0 = ((float)L_2);
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_get_left_m7CD84E5D4DD738D6D9DC0725F321AD0F180CCC1D_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var))->___s_Left_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___v0), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___v0), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___v0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), ((float)L_0), ((float)L_1), ((float)L_2), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_get_right_mFCA804B530E1E6465DBFDCD11967D7B12D0CB74C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var))->___s_Right_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_get_up_m47FB322FA0AB726D36223263AF0A8D2FBE367EED_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var))->___s_Up_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_get_down_mD546C0ADBF5E55DD1845EE917CC8DCE430587AED_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var))->___s_Down_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mDEF1E073986286F6EFA1552A5D0E1A0F6CBF4500_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___vector0;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___maxLength1;
		float L_18 = V_4;
		float L_19 = ___maxLength1;
		float L_20 = V_5;
		float L_21 = ___maxLength1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___vector0;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___vector0;
		float L_8 = L_7.___x_0;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___vector0;
		float L_11 = L_10.___y_1;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		float L_13 = V_3;
		float L_14 = ___maxLength1;
		float L_15 = V_4;
		float L_16 = ___maxLength1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)), /*hidden argument*/NULL);
		V_5 = L_17;
		goto IL_0045;
	}

IL_0040:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___vector0;
		V_5 = L_18;
		goto IL_0045;
	}

IL_0045:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_5;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mDA1E9E9B78D7A59256072CF9B3608DD53DD5A9CC_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = ___maxSpeed4;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_0016;
	}

IL_0016:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		int32_t L_2 = ___z2;
		__this->___m_Z_2 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_op_Addition_m7B25A163958DEC7B64323710764439A8322905AF_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___a0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___b1, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___a0), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___b1), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___a0), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___b1), NULL);
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___a0), NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___b1), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_6), ((int32_t)il2cpp_codegen_add(L_0, L_1)), ((int32_t)il2cpp_codegen_add(L_2, L_3)), ((int32_t)il2cpp_codegen_add(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0036;
	}

IL_0036:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
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
		float L_2 = ___value0;
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
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
