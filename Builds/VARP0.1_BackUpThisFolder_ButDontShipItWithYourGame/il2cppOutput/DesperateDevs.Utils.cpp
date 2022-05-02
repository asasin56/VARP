#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>
struct Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298;
// System.Collections.Generic.Dictionary`2<DesperateDevs.Logging.LogLevel,System.ConsoleColor>
struct Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>
struct Func_2_tF9905F052EF12704501D5B272E965D9B1311A014;
// System.Func`2<System.String,System.Reflection.Assembly>
struct Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
// System.Func`2<System.Type,System.String>
struct Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121;
// System.Collections.Generic.HashSet`1<System.Reflection.Assembly>
struct HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>
struct IEnumerable_1_t11F08D46A18E820E6CD80DE57F40444AD29E6689;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEqualityComparer`1<System.Reflection.Assembly>
struct IEqualityComparer_1_t975A0BD8908847A977A19545D770A17F26B44EE6;
// System.Collections.Generic.IEqualityComparer`1<DesperateDevs.Logging.LogLevel>
struct IEqualityComparer_1_t79572791D021F40C8623B2E8F08E5205E38BBD54;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<DesperateDevs.Logging.LogLevel,System.ConsoleColor>
struct KeyCollection_t7B0466ADF3D6B602E0D8A9570B35A37D6BA7BC78;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<DesperateDevs.Utils.PublicMemberInfo>
struct List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
// System.Collections.Generic.Dictionary`2/ValueCollection<DesperateDevs.Logging.LogLevel,System.ConsoleColor>
struct ValueCollection_t96E5FCEF910FDC889F351AD2F266265D97DE07DF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
// System.Collections.Generic.Dictionary`2/Entry<DesperateDevs.Logging.LogLevel,System.ConsoleColor>[]
struct EntryU5BU5D_t10CF56C467FA1A58709961C4155A2A2C83F8AE01;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
// System.Collections.Generic.HashSet`1/Slot<System.Reflection.Assembly>[]
struct SlotU5BU5D_t703F8C302384C1C781334EB09608DFBE164C9EC3;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// DesperateDevs.Utils.AttributeInfo[]
struct AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// DesperateDevs.Utils.PublicMemberInfo[]
struct PublicMemberInfoU5BU5D_tB40691D3FE84E1F307FD4B8FC4192A641C9956D0;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// DesperateDevs.Utils.AssemblyResolver
struct AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E;
// DesperateDevs.Utils.AttributeInfo
struct AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// DesperateDevs.Utils.ConsoleColors
struct ConsoleColors_t88DC67BFAB2B76B6E56C2213B726063EF40E7791;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// DesperateDevs.Logging.LogDelegate
struct LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C;
// DesperateDevs.Logging.Logger
struct Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// DesperateDevs.Utils.ObjectCache
struct ObjectCache_tEDF196223C72877FEFAF4B0AB634B01B96FC4CC4;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// DesperateDevs.Utils.PublicMemberInfo
struct PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF;
// System.Reflection.ReflectionTypeLoadException
struct ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.ResolveEventArgs
struct ResolveEventArgs_t3768D40A0CC1EA56714B75722FDC7C8D49CABCB0;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// DesperateDevs.Utils.AppDomainExtension/<>c
struct U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E;
// DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9;
// DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_1
struct U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E;
// DesperateDevs.Utils.SerializationTypeExtension/<>c
struct U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336;
// DesperateDevs.Utils.SerializationTypeExtension/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7;
// DesperateDevs.Utils.StringExtension/<>c
struct U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileLoadException_t7B98CE82B69E1EE2766408D480716802BBA5968B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF9905F052EF12704501D5B272E965D9B1311A014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t11F08D46A18E820E6CD80DE57F40444AD29E6689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF0CA2A62533B2B34FE6ED0A865FFEAB3166AC173_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral03F819654CF817F595485BB93438CE48B90FD355;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0C04CD91AEBB050BE21D6AD24AABF576BC020AC5;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB9164A63017585BF93DEC0F34BE2DBE1C56793;
IL2CPP_EXTERN_C String_t* _stringLiteral0FAAD6F8CD67196FDCAD20D4F7FE08C93EEA0028;
IL2CPP_EXTERN_C String_t* _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18;
IL2CPP_EXTERN_C String_t* _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral19AD7C05BAAA8A293677420CEAB2047E77E9044F;
IL2CPP_EXTERN_C String_t* _stringLiteral2577B78964A89256EFDADCD286C8019D216458BD;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
IL2CPP_EXTERN_C String_t* _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral392D79F3BB854C7447F572D606D32F0E50B8BDB9;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4E5BAAFDAB120B872A321DA81FC38A34E0BC9C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C;
IL2CPP_EXTERN_C String_t* _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D;
IL2CPP_EXTERN_C String_t* _stringLiteral5C27A0B1BADE691B5E081C6206EA2258803AD35B;
IL2CPP_EXTERN_C String_t* _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral8192EF02E079142FD5CA69DC024E6EF19381C3B6;
IL2CPP_EXTERN_C String_t* _stringLiteral82A7DC8A7D43BCA912EA8F0A6CA746727E5C7BA6;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9395CF055ECA0DDEF60CC9C426CC12027115F599;
IL2CPP_EXTERN_C String_t* _stringLiteral94152201B24834B0EF60CA96399C126BAED45FB6;
IL2CPP_EXTERN_C String_t* _stringLiteral94379E6F458254EE0A13EA20A16C5605CA5E7DE4;
IL2CPP_EXTERN_C String_t* _stringLiteralAFAD53C63F3B69C9FE8DBBA28D57153333CAB1D6;
IL2CPP_EXTERN_C String_t* _stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E1C35407C2C2276609982ABAA7CBF7F971B7A3;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC45650C963261F1B046FEBC27ABA14BCBA8F11;
IL2CPP_EXTERN_C String_t* _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC3A8E77BFEC96D39BC81E775AA2148ABFCC7B627;
IL2CPP_EXTERN_C String_t* _stringLiteralD0D599E289BFF74CCC0A60ADDA5F2A9BB501CA3D;
IL2CPP_EXTERN_C String_t* _stringLiteralD5C1F833B9BE779404488EC6DDA5379616471E78;
IL2CPP_EXTERN_C String_t* _stringLiteralD79901FD99BDBB0DB8DA1A5A26E2494FCC02635C;
IL2CPP_EXTERN_C String_t* _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A;
IL2CPP_EXTERN_C String_t* _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralEE18A03A42C3630065A4A851B24F01948FD8026C;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF0306CD1D9CF504B5991281FD28128ECE3A493F1;
IL2CPP_EXTERN_C String_t* _stringLiteralF08339D4FE85DC41A1A67350BEBFF4F037C2EC98;
IL2CPP_EXTERN_C String_t* _stringLiteralF16D8766C3E454E6B20DC525B5017CAC8D0BDC90;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFE6B7E72961EFAC1F608AD025001BB0C4D2114CC;
IL2CPP_EXTERN_C String_t* _stringLiteralFFA36FEC765CE9140429C3C852A895A05B9F710A;
IL2CPP_EXTERN_C const RuntimeMethod* AssemblyResolver_onAssemblyResolve_m5E6B4B299030EB81588F3D55329657D2E1F6779F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssemblyResolver_onReflectionOnlyAssemblyResolve_m49BB56BBEC8A877044122D671E672020D0F8B77C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assembly_LoadFrom_m64962FD97F481DCEF5F72D5D49A20C3A8CED76CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assembly_ReflectionOnlyLoadFrom_m61360A2F00D533957DB3D714915E9C3CEBF15A73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m832A599C00F304088408057755E2559A02BFD591_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m133F7C5C9FA210B6A3584FCBC4A4FBA359EC4DDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisString_t_TisString_t_mBA9B69398AD8146D692B7978C87C27DBFD4B3AA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisString_t_m60A7751DBEA2577100838E550C6AEDF59AA3F4AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisType_t_TisString_t_mFDBC720E9323EF1D635D18224C9F3244D226DC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisAssembly_t_mF2BA74F79C12BB4A58BD5A547C1DAC3CA2AFD3BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_mBDD356C957E8D2FEE45299F34F461B519451D745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF4AF93354481E3D2499BDD90455A5EED9F523B99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m1E1DA8C4C0668674CDC02B686FA96008B9EF7E07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE28BDDBD87DFF9DD672FFB81B9A03B97F247361E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0FCB31C97FA6E8742C15D72778B0F8062B6CD28F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6BAC954925EB3A27490794D696C9BB7EA17F0433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCBFD30731B24B473F82DC26EAFAF0D23EC9DB470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializationTypeExtension_ToType_mD27C7EAC8CF0E59164A1AA7618D8A14BF9C58CFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CArrayFromCSVU3Eb__5_0_m3BEB5CF678B4F351BE59BA62CBAF8FE3FDF548BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAllTypesU3Eb__1_0_mBF8B04E55A450F8627D92412AA264D784BB15833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToCSVU3Eb__4_0_m7388706B21EE3BE785E32410AD449B31D7988137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToCSVU3Eb__4_1_m740736DBBCA62BA7A34482558B6F4D07F50D7A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToCompilableStringU3Eb__0_0_m2BB39CD73781C666E9D467BEB85807F630371D41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CgenerateArrayU3Eb__6_0_mEF2F90773331C1101D9AAB55D05F6EE43C22A1F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_1_U3CgetAssemblyFilesU3Eb__0_m9743F6096B930E5E3AD4E9257E4C5618726D0401_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CgenerateGenericArgumentsU3Eb__0_mABB934B04B90B84E8BF4713D4B925BA3AB1481C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E_0_0_0_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE904E6C1825AE011307812704D5705624D5B9E10 
{
};

// System.Collections.Generic.Dictionary`2<DesperateDevs.Logging.LogLevel,System.ConsoleColor>
struct Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t10CF56C467FA1A58709961C4155A2A2C83F8AE01* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t7B0466ADF3D6B602E0D8A9570B35A37D6BA7BC78* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t96E5FCEF910FDC889F351AD2F266265D97DE07DF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.Reflection.Assembly>
struct HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t703F8C302384C1C781334EB09608DFBE164C9EC3* ____slots_8;
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

// System.Collections.Generic.List`1<DesperateDevs.Utils.PublicMemberInfo>
struct List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PublicMemberInfoU5BU5D_tB40691D3FE84E1F307FD4B8FC4192A641C9956D0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PublicMemberInfoU5BU5D_tB40691D3FE84E1F307FD4B8FC4192A641C9956D0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray_5;
};

// DesperateDevs.Utils.AppDomainExtension
struct AppDomainExtension_t5D44179A4566DBC551EB1F8711A918AF44DCA6E7  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// DesperateDevs.Utils.AssemblyResolver
struct AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E  : public RuntimeObject
{
	// DesperateDevs.Logging.Logger DesperateDevs.Utils.AssemblyResolver::_logger
	Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ____logger_0;
	// System.Boolean DesperateDevs.Utils.AssemblyResolver::_reflectionOnly
	bool ____reflectionOnly_1;
	// System.String[] DesperateDevs.Utils.AssemblyResolver::_basePaths
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____basePaths_2;
	// System.Collections.Generic.HashSet`1<System.Reflection.Assembly> DesperateDevs.Utils.AssemblyResolver::_assemblies
	HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60* ____assemblies_3;
	// System.AppDomain DesperateDevs.Utils.AssemblyResolver::_appDomain
	AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* ____appDomain_4;
};

// DesperateDevs.Utils.AttributeInfo
struct AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2  : public RuntimeObject
{
	// System.Object DesperateDevs.Utils.AttributeInfo::attribute
	RuntimeObject* ___attribute_0;
	// System.Collections.Generic.List`1<DesperateDevs.Utils.PublicMemberInfo> DesperateDevs.Utils.AttributeInfo::memberInfos
	List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* ___memberInfos_1;
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// DesperateDevs.Utils.DictionaryExtension
struct DictionaryExtension_tA584363161E220EF15FE3E564850546117C6776C  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
};

// DesperateDevs.Utils.InterfaceTypeExtension
struct InterfaceTypeExtension_t33EB5F10F682B109B8D1CC3EDFE05C14BB875DE9  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// DesperateDevs.Utils.ObjectCache
struct ObjectCache_tEDF196223C72877FEFAF4B0AB634B01B96FC4CC4  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> DesperateDevs.Utils.ObjectCache::_objectPools
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ____objectPools_0;
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// DesperateDevs.Utils.PublicMemberInfo
struct PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF  : public RuntimeObject
{
	// System.Type DesperateDevs.Utils.PublicMemberInfo::type
	Type_t* ___type_0;
	// System.String DesperateDevs.Utils.PublicMemberInfo::name
	String_t* ___name_1;
	// DesperateDevs.Utils.AttributeInfo[] DesperateDevs.Utils.PublicMemberInfo::attributes
	AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC* ___attributes_2;
	// System.Reflection.FieldInfo DesperateDevs.Utils.PublicMemberInfo::_fieldInfo
	FieldInfo_t* ____fieldInfo_3;
	// System.Reflection.PropertyInfo DesperateDevs.Utils.PublicMemberInfo::_propertyInfo
	PropertyInfo_t* ____propertyInfo_4;
};

// DesperateDevs.Utils.PublicMemberInfoExtension
struct PublicMemberInfoExtension_t49662C5EC823FC3269BCA59BB23CC8BF9131518E  : public RuntimeObject
{
};

// DesperateDevs.Utils.SerializationTypeExtension
struct SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284  : public RuntimeObject
{
};

struct SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> DesperateDevs.Utils.SerializationTypeExtension::_builtInTypesToString
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____builtInTypesToString_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> DesperateDevs.Utils.SerializationTypeExtension::_builtInTypeStrings
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____builtInTypeStrings_1;
};

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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// DesperateDevs.Utils.StringExtension
struct StringExtension_tFB5B1690B50692D315AF93D748E96E43FD6500EA  : public RuntimeObject
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

// DesperateDevs.Utils.AppDomainExtension/<>c
struct U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E  : public RuntimeObject
{
};

struct U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_StaticFields
{
	// DesperateDevs.Utils.AppDomainExtension/<>c DesperateDevs.Utils.AppDomainExtension/<>c::<>9
	U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E* ___U3CU3E9_0;
	// System.Func`2<System.Type,System.Boolean> DesperateDevs.Utils.AppDomainExtension/<>c::<>9__1_0
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__1_0_1;
};

// DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9  : public RuntimeObject
{
	// System.Boolean DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_0::allDirectories
	bool ___allDirectories_0;
};

// DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_1
struct U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E  : public RuntimeObject
{
	// System.String DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_1::pattern
	String_t* ___pattern_0;
	// DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_0 DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9* ___CSU24U3CU3E8__locals1_1;
};

// DesperateDevs.Utils.SerializationTypeExtension/<>c
struct U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336  : public RuntimeObject
{
};

struct U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_StaticFields
{
	// DesperateDevs.Utils.SerializationTypeExtension/<>c DesperateDevs.Utils.SerializationTypeExtension/<>c::<>9
	U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336* ___U3CU3E9_0;
	// System.Func`2<System.Type,System.String> DesperateDevs.Utils.SerializationTypeExtension/<>c::<>9__0_0
	Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* ___U3CU3E9__0_0_1;
	// System.Text.RegularExpressions.MatchEvaluator DesperateDevs.Utils.SerializationTypeExtension/<>c::<>9__6_0
	MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113* ___U3CU3E9__6_0_2;
};

// DesperateDevs.Utils.SerializationTypeExtension/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7  : public RuntimeObject
{
	// System.String[] DesperateDevs.Utils.SerializationTypeExtension/<>c__DisplayClass5_0::separator
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separator_0;
};

// DesperateDevs.Utils.StringExtension/<>c
struct U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1  : public RuntimeObject
{
};

struct U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields
{
	// DesperateDevs.Utils.StringExtension/<>c DesperateDevs.Utils.StringExtension/<>c::<>9
	U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1* ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> DesperateDevs.Utils.StringExtension/<>c::<>9__4_0
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__4_0_1;
	// System.Func`2<System.String,System.String> DesperateDevs.Utils.StringExtension/<>c::<>9__4_1
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___U3CU3E9__4_1_2;
	// System.Func`2<System.String,System.String> DesperateDevs.Utils.StringExtension/<>c::<>9__5_0
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___U3CU3E9__5_0_3;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
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

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.ResolveEventArgs
struct ResolveEventArgs_t3768D40A0CC1EA56714B75722FDC7C8D49CABCB0  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String System.ResolveEventArgs::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Reflection.Assembly System.ResolveEventArgs::<RequestingAssembly>k__BackingField
	Assembly_t* ___U3CRequestingAssemblyU3Ek__BackingField_2;
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

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// System.Reflection.AssemblyContentType
struct AssemblyContentType_tE0A2224D247DD97616065CB0ECB16912B756D745 
{
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;
};

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct AssemblyHashAlgorithm_t6202395EA0C9A01D6342348A9535DF4CA47010D1 
{
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;
};

// System.Reflection.AssemblyNameFlags
struct AssemblyNameFlags_t48EB44AFB7A3310746DD78ACC3DC5AE6D3D91122 
{
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;
};

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct AssemblyVersionCompatibility_t1E27EE4AB4137C64EE164A25A184E844AC722159 
{
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.ConsoleColor
struct ConsoleColor_tF1C4F0AD2193FB7B4B0903ACA588E0EA0DBABD2F 
{
	// System.Int32 System.ConsoleColor::value__
	int32_t ___value___2;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// DesperateDevs.Logging.LogLevel
struct LogLevel_t09A020427B95E79BC60AFA4C0D500720C6550C6B 
{
	// System.Int32 DesperateDevs.Logging.LogLevel::value__
	int32_t ___value___2;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Reflection.ParameterAttributes
struct ParameterAttributes_tDAEC8B3C5986B042F8F9B0845505D0FC15F92E68 
{
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;
};

// System.Reflection.ProcessorArchitecture
struct ProcessorArchitecture_t549C86643DDABC4E0C6DC968F0C74A707ADCAD9B 
{
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.SearchOption
struct SearchOption_tDCBB43E1597F64296592F64A1E685996A57EA392 
{
	// System.Int32 System.IO.SearchOption::value__
	int32_t ___value___2;
};

// System.StringComparison
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;
};

// System.StringSplitOptions
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;
};

// System.UriIdnScope
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;
};

// System.Uri/Flags
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;
};

// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2  : public RuntimeObject
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;
};
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// DesperateDevs.Utils.ConsoleColors
struct ConsoleColors_t88DC67BFAB2B76B6E56C2213B726063EF40E7791  : public RuntimeObject
{
	// System.ConsoleColor DesperateDevs.Utils.ConsoleColors::<highlightedBackground>k__BackingField
	int32_t ___U3ChighlightedBackgroundU3Ek__BackingField_0;
	// System.ConsoleColor DesperateDevs.Utils.ConsoleColors::<highlightedForeground>k__BackingField
	int32_t ___U3ChighlightedForegroundU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<DesperateDevs.Logging.LogLevel,System.ConsoleColor> DesperateDevs.Utils.ConsoleColors::logLevelColors
	Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490* ___logLevelColors_2;
};

// DesperateDevs.Logging.Logger
struct Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80  : public RuntimeObject
{
	// DesperateDevs.Logging.LogDelegate DesperateDevs.Logging.Logger::OnLog
	LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* ___OnLog_0;
	// DesperateDevs.Logging.LogLevel DesperateDevs.Logging.Logger::<logLevel>k__BackingField
	int32_t ___U3ClogLevelU3Ek__BackingField_1;
	// System.String DesperateDevs.Logging.Logger::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
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

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>
struct Func_2_tF9905F052EF12704501D5B272E965D9B1311A014  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Reflection.Assembly>
struct Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.String>
struct Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121  : public MulticastDelegate_t
{
};

// System.BadImageFormatException
struct BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.BadImageFormatException::_fileName
	String_t* ____fileName_18;
	// System.String System.BadImageFormatException::_fusionLog
	String_t* ____fusionLog_19;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113  : public MulticastDelegate_t
{
};

// System.Reflection.ReflectionTypeLoadException
struct ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Type[] System.Reflection.ReflectionTypeLoadException::<Types>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CTypesU3Ek__BackingField_18;
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::<LoaderExceptions>k__BackingField
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___U3CLoaderExceptionsU3Ek__BackingField_19;
};

// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692  : public MulticastDelegate_t
{
};

// System.IO.FileLoadException
struct FileLoadException_t7B98CE82B69E1EE2766408D480716802BBA5968B  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileLoadException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileLoadException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
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
// DesperateDevs.Utils.AttributeInfo[]
struct AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC  : public RuntimeArray
{
	ALIGN_FIELD (8) AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2* m_Items[1];

	inline AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_m4052F60F13DF530E12A56A34BC921BA5E262B711_gshared (RuntimeObject* ___source0, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::.ctor()
inline void Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::Clear()
inline void Dictionary_2_Clear_m832A599C00F304088408057755E2559A02BFD591 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<DesperateDevs.Logging.LogLevel,System.ConsoleColor>::.ctor()
inline void Dictionary_2__ctor_m133F7C5C9FA210B6A3584FCBC4A4FBA359EC4DDC (Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490*, const RuntimeMethod*))Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<DesperateDevs.Logging.LogLevel,System.ConsoleColor>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6 (Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared)(__this, ___key0, ___value1, method);
}
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Type[] DesperateDevs.Utils.AppDomainExtension::GetAllTypes(System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* AppDomainExtension_GetAllTypes_m74C78A181C9AB7267325B0AF34A6AC44F3B74898 (RuntimeObject* ___assemblies0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
inline void List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Type[] System.Reflection.ReflectionTypeLoadException::get_Types()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ReflectionTypeLoadException_get_Types_mEA33478930C629147E252D53230510BE0F4AD45E_inline (ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_mBDD356C957E8D2FEE45299F34F461B519451D745 (RuntimeObject* ___source0, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
inline TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void DesperateDevs.Utils.AppDomainExtension/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m537CE2492B229C47153D905E0C5BA411A116791A (U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m059A8C7FD3318EFF79FD145F9FDA4C44E4192897 (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Type,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisType_t_TisString_t_mFDBC720E9323EF1D635D18224C9F3244D226DC94 (RuntimeObject* ___source0, Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mE405D676C6881553258F8BAD40A20B462D611068 (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.String DesperateDevs.Utils.SerializationTypeExtension::ToCompilableString(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationTypeExtension_ToCompilableString_mA9547637796C57B054482D269500CB1A8DDDEAEA (Type_t* ___type0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsNested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.String DesperateDevs.Utils.SerializationTypeExtension::generateTypeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationTypeExtension_generateTypeString_m1785F09E764A9FC97578997CFEE973A7067DC112 (String_t* ___typeString0, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE (const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String DesperateDevs.Utils.SerializationTypeExtension::generateGenericArguments(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationTypeExtension_generateGenericArguments_mA4189ADC1B4CB956FD81A78663547436C43FE9C6 (String_t* ___typeString0, const RuntimeMethod* method) ;
// System.String DesperateDevs.Utils.SerializationTypeExtension::generateArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationTypeExtension_generateArray_m30F4248C5F16D52C3E4AA4F65C0AB7825096F780 (String_t* ___typeString0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Utils.SerializationTypeExtension/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mE0824A1E48F081A935010162D96F2440EA88DD23 (U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchEvaluator__ctor_m4F7140E86A532BE1E1206DCEA76DE8E91CB985F2 (MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Text.RegularExpressions.MatchEvaluator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_mC2D352FBA01E07EA395477C76E4145C26461CF0E (String_t* ___input0, String_t* ___pattern1, MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113* ___evaluator2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void DesperateDevs.Utils.SerializationTypeExtension/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6AC42F0E7591FD23F5C7FB91246032C6939A859 (U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, String_t* ___groupname0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Char System.Char::ToUpper(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_ToUpper_m3753B9BCD4A82C8B5D86D39D9B1B2D638B0AFE84 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Char System.Char::ToLower(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_ToLower_m643675C4A50AD39A7BE3F5C3F40A1BFD547FF957 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184 (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1 (RuntimeObject* ___source0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814 (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisString_t_m60A7751DBEA2577100838E550C6AEDF59AA3F4AC (RuntimeObject* ___source0, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.String[] System.String::Split(System.Char[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m6811F7CF4DE7C68019D76E9DC6D17B2293BA8B12 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsUpper(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsUpper_m857948FB8687710EC3EAB889A4908E00E4F48BDA (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.String DesperateDevs.Utils.StringExtension::CreateUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtension_CreateUri_mA45E4D44B58D69A201B58FD17C0F65DEFCD0974F (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.String System.Uri::get_AbsolutePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_Fragment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Fragment_m3CB7AD14DA9618ADE406039D4713F67D6951D835 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.Uri::UnescapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_UnescapeDataString_mD0A4732F7ED9CA5DB9E46D802971B5406094CC77 (String_t* ___stringToUnescape0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Utils.StringExtension/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE4F37CEAB5DC02470562224C1A9C480EC89CA6DA (U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Reflection.Assembly>(System.Collections.Generic.IEnumerable`1<TSource>)
inline AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* Enumerable_ToArray_TisAssembly_t_mF2BA74F79C12BB4A58BD5A547C1DAC3CA2AFD3BD (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// DesperateDevs.Logging.Logger DesperateDevs.Logging.fabl::GetLogger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* fabl_GetLogger_m7F0E6B05CDAB90F50E2652E0AE591DF4680EBB55 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Reflection.Assembly>::.ctor()
inline void HashSet_1__ctor_m1E1DA8C4C0668674CDC02B686FA96008B9EF7E07 (HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResolveEventHandler__ctor_m6EDDA1AABD23F6BDA9A4FAC209B4CF16D3318487 (ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.AppDomain::add_ReflectionOnlyAssemblyResolve(System.ResolveEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_ReflectionOnlyAssemblyResolve_m13755BC65244B5EBE4FE241414F0051B2BAC22A7 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___value0, const RuntimeMethod* method) ;
// System.Void System.AppDomain::add_AssemblyResolve(System.ResolveEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_AssemblyResolve_mF70FC220D03BADA436B3BE6C11EE69908AF6149A (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8 (RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.Logger::Debug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Debug_m74279B35BC40C44C2630807A72257D8531281328 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.Reflection.Assembly>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m56C750B3C704098C40E7BA70B1013DF403F9B8EC (Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Reflection.Assembly DesperateDevs.Utils.AssemblyResolver::resolveAndLoad(System.String,System.Func`2<System.String,System.Reflection.Assembly>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* AssemblyResolver_resolveAndLoad_mCE3655D9234EFEFA17B639AAB0FAB9643F349DF7 (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, String_t* ___name0, Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88* ___loadMethod1, bool ___isDependency2, const RuntimeMethod* method) ;
// System.Void System.AppDomain::remove_ReflectionOnlyAssemblyResolve(System.ResolveEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_remove_ReflectionOnlyAssemblyResolve_m6981FFD76F0F089118585D2689FADDDB6DE42257 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___value0, const RuntimeMethod* method) ;
// System.Void System.AppDomain::remove_AssemblyResolve(System.ResolveEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_remove_AssemblyResolve_mE9525557034AD388D8415E2A94162C0638DEED65 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___value0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.String,System.Reflection.Assembly>::Invoke(T)
inline Assembly_t* Func_2_Invoke_m4740521C1836E2DDA757AAB6CCD6F49D82CC4CFD_inline (Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88* __this, String_t* ___arg0, const RuntimeMethod* method)
{
	return ((  Assembly_t* (*) (Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88*, String_t*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void DesperateDevs.Utils.AssemblyResolver::addAssembly(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyResolver_addAssembly_m0D43AA7166BA4A200AA4A323E69A05F90917FD2A (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, Assembly_t* ___assembly0, const RuntimeMethod* method) ;
// System.String DesperateDevs.Utils.AssemblyResolver::resolvePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssemblyResolver_resolvePath_m6ACFE0A2E7A13483AD9AF054BF2B401DBDC8CABF (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.ResolveEventArgs::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResolveEventArgs_get_Name_mA7AB7570CBF57D5C3FF8D478BF59A9A08387CC6A_inline (ResolveEventArgs_t3768D40A0CC1EA56714B75722FDC7C8D49CABCB0* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Reflection.Assembly>::Add(T)
inline bool HashSet_1_Add_mF4AF93354481E3D2499BDD90455A5EED9F523B99 (HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60* __this, Assembly_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60*, Assembly_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Reflection.AssemblyName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyName__ctor_mA1FA5566003555823FD33805E1490F2477B3C10C (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, String_t* ___assemblyName0, const RuntimeMethod* method) ;
// System.String System.Reflection.AssemblyName::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Utils.AssemblyResolver::.ctor(System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyResolver__ctor_m41413D39FE04475EFB2A40E99AF4BB9888785F15 (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, bool ___reflectionOnly0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___basePaths1, const RuntimeMethod* method) ;
// System.String[] DesperateDevs.Utils.AssemblyResolver::getAssemblyFiles(System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* AssemblyResolver_getAssemblyFiles_m71B4153F1BF48EA18FC3FEA3CD2E20BD16BF4FFD (bool ___allDirectories0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___basePaths1, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Utils.AssemblyResolver::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyResolver_Load_m389EDC2757F1C1EE70C93BE8535550202FDEC91A (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mBA42A29FE2382D528F7E7FB7D4FA2E4D2CD45758 (U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_1__ctor_m9B7A46B2D8D20847684B234D7CF4278C349E95F0 (U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4A9B7DC847F99DB2FD0BA764145147086C2247A4 (Func_2_tF9905F052EF12704501D5B272E965D9B1311A014* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF9905F052EF12704501D5B272E965D9B1311A014*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.String,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisString_t_TisString_t_mBA9B69398AD8146D692B7978C87C27DBFD4B3AA5 (RuntimeObject* ___source0, Func_2_tF9905F052EF12704501D5B272E965D9B1311A014* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF9905F052EF12704501D5B272E965D9B1311A014*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_m4052F60F13DF530E12A56A34BC921BA5E262B711_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.String[] System.IO.Directory::GetFiles(System.String,System.String,System.IO.SearchOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetFiles_mAD2C2FCFE204E9D7A8933C93A813E77573CD141B (String_t* ___path0, String_t* ___searchPattern1, int32_t ___searchOption2, const RuntimeMethod* method) ;
// DesperateDevs.Utils.AttributeInfo[] DesperateDevs.Utils.PublicMemberInfo::getAttributes(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC* PublicMemberInfo_getAttributes_m8E61D0B5E47B9CA1A50AF3D4A967341DE3751224 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___attributes0, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<DesperateDevs.Utils.PublicMemberInfo> DesperateDevs.Utils.PublicMemberInfoExtension::GetPublicMemberInfos(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* PublicMemberInfoExtension_GetPublicMemberInfos_mAD76C6CA84A71B0A79CDB39432062B10BE04B1D5 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Utils.AttributeInfo::.ctor(System.Object,System.Collections.Generic.List`1<DesperateDevs.Utils.PublicMemberInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeInfo__ctor_mDB458AF110625BDED17C781108DB2AA6455D959C (AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2* __this, RuntimeObject* ___attribute0, List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* ___memberInfos1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DesperateDevs.Utils.PublicMemberInfo>::.ctor(System.Int32)
inline void List_1__ctor_m0FCB31C97FA6E8742C15D72778B0F8062B6CD28F (List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void DesperateDevs.Utils.PublicMemberInfo::.ctor(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicMemberInfo__ctor_m3ACABA31FF6585C721043F53F1940F9651CDFDF6 (PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* __this, FieldInfo_t* ___info0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DesperateDevs.Utils.PublicMemberInfo>::Add(T)
inline void List_1_Add_mE28BDDBD87DFF9DD672FFB81B9A03B97F247361E_inline (List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* __this, PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1*, PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void DesperateDevs.Utils.PublicMemberInfo::.ctor(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicMemberInfo__ctor_m5C6C7A66D543239A67C6C0C145D29A801CFB7A89 (PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* __this, PropertyInfo_t* ___info0, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Utils.PublicMemberInfoExtension::CopyPublicMemberValues(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicMemberInfoExtension_CopyPublicMemberValues_m06325ECB4FA659EFF5F3FA6E91DF2E06BE49BCFE (RuntimeObject* ___source0, RuntimeObject* ___target1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<DesperateDevs.Utils.PublicMemberInfo>::get_Item(System.Int32)
inline PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* List_1_get_Item_mCBFD30731B24B473F82DC26EAFAF0D23EC9DB470 (List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* (*) (List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Object DesperateDevs.Utils.PublicMemberInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PublicMemberInfo_GetValue_mF1961678960CAF1CD4F8BCEDC9CEF2FAD2E40E2F (PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Utils.PublicMemberInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicMemberInfo_SetValue_mDD2D029BD378BA6124DA9828BB6C47701299FD83 (PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<DesperateDevs.Utils.PublicMemberInfo>::get_Count()
inline int32_t List_1_get_Count_m6BAC954925EB3A27490794D696C9BB7EA17F0433_inline (List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
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
// System.Void DesperateDevs.Utils.ObjectCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectCache__ctor_m9571E239F2AC6D637B5AC6AC0FB8A8FC3B5260E8 (ObjectCache_tEDF196223C72877FEFAF4B0AB634B01B96FC4CC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)il2cpp_codegen_object_new(Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E(L_0, Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var);
		__this->____objectPools_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectPools_0), (void*)L_0);
		return;
	}
}
// System.Void DesperateDevs.Utils.ObjectCache::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectCache_Reset_m71BDE0774FCA791DC0E302E39D355626878ECC51 (ObjectCache_tEDF196223C72877FEFAF4B0AB634B01B96FC4CC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m832A599C00F304088408057755E2559A02BFD591_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = __this->____objectPools_0;
		NullCheck(L_0);
		Dictionary_2_Clear_m832A599C00F304088408057755E2559A02BFD591(L_0, Dictionary_2_Clear_m832A599C00F304088408057755E2559A02BFD591_RuntimeMethod_var);
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
// System.ConsoleColor DesperateDevs.Utils.ConsoleColors::get_highlightedBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsoleColors_get_highlightedBackground_m0EB0A4F4AF47AE10E8BB8FF1ED7CCB5BE369B26F (ConsoleColors_t88DC67BFAB2B76B6E56C2213B726063EF40E7791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ChighlightedBackgroundU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DesperateDevs.Utils.ConsoleColors::set_highlightedBackground(System.ConsoleColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleColors_set_highlightedBackground_mBA1E07AF3EA48804748C7E745FA4304A2B784620 (ConsoleColors_t88DC67BFAB2B76B6E56C2213B726063EF40E7791* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3ChighlightedBackgroundU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.ConsoleColor DesperateDevs.Utils.ConsoleColors::get_highlightedForeground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsoleColors_get_highlightedForeground_mD70AE22D8E65CB35D8226698DA87A848EE24E655 (ConsoleColors_t88DC67BFAB2B76B6E56C2213B726063EF40E7791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ChighlightedForegroundU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void DesperateDevs.Utils.ConsoleColors::set_highlightedForeground(System.ConsoleColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleColors_set_highlightedForeground_m027D242EEB8B1F23C717C649DBE976A1996B9D80 (ConsoleColors_t88DC67BFAB2B76B6E56C2213B726063EF40E7791* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3ChighlightedForegroundU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void DesperateDevs.Utils.ConsoleColors::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleColors__ctor_m602A8939CED606298E6B8643723EC69DEA7C0208 (ConsoleColors_t88DC67BFAB2B76B6E56C2213B726063EF40E7791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m133F7C5C9FA210B6A3584FCBC4A4FBA359EC4DDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3ChighlightedBackgroundU3Ek__BackingField_0 = ((int32_t)15);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490* L_0 = (Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490*)il2cpp_codegen_object_new(Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m133F7C5C9FA210B6A3584FCBC4A4FBA359EC4DDC(L_0, Dictionary_2__ctor_m133F7C5C9FA210B6A3584FCBC4A4FBA359EC4DDC_RuntimeMethod_var);
		Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6(L_1, 1, ((int32_t)11), Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6_RuntimeMethod_var);
		Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6(L_2, 2, ((int32_t)15), Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6_RuntimeMethod_var);
		Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6(L_3, 3, ((int32_t)15), Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6_RuntimeMethod_var);
		Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6(L_4, 4, 6, Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6_RuntimeMethod_var);
		Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6(L_5, 5, ((int32_t)12), Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6_RuntimeMethod_var);
		Dictionary_2_t9CE18403891085D353863FEFD222E80F5E687490* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6(L_6, 6, 4, Dictionary_2_Add_mF20119741C5E4F51FC9CE2AC48340A12C8BF60F6_RuntimeMethod_var);
		__this->___logLevelColors_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logLevelColors_2), (void*)L_6);
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
// System.Type[] DesperateDevs.Utils.AppDomainExtension::GetAllTypes(System.AppDomain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* AppDomainExtension_GetAllTypes_mDC91A6B2A05B246DB5B78805572C988E659D854C (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* ___appDomain0, const RuntimeMethod* method) 
{
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_0 = ___appDomain0;
		NullCheck(L_0);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_1;
		L_1 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2;
		L_2 = AppDomainExtension_GetAllTypes_m74C78A181C9AB7267325B0AF34A6AC44F3B74898((RuntimeObject*)L_1, NULL);
		return L_2;
	}
}
// System.Type[] DesperateDevs.Utils.AppDomainExtension::GetAllTypes(System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* AppDomainExtension_GetAllTypes_m74C78A181C9AB7267325B0AF34A6AC44F3B74898 (RuntimeObject* ___assemblies0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t11F08D46A18E820E6CD80DE57F40444AD29E6689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF0CA2A62533B2B34FE6ED0A865FFEAB3166AC173_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Assembly_t* V_2 = NULL;
	ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B6_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B6_1 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* G_B6_2 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B5_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B5_1 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* G_B5_2 = NULL;
	{
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_0, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___assemblies0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>::GetEnumerator() */, IEnumerable_1_t11F08D46A18E820E6CD80DE57F40444AD29E6689_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0057_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				Assembly_t* L_6;
				L_6 = InterfaceFuncInvoker0< Assembly_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.Assembly>::get_Current() */, IEnumerator_1_tF0CA2A62533B2B34FE6ED0A865FFEAB3166AC173_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
			}
			try
			{// begin try (depth: 2)
				List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_7 = V_0;
				Assembly_t* L_8 = V_2;
				NullCheck(L_8);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9;
				L_9 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(16 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_8);
				NullCheck(L_7);
				List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F(L_7, (RuntimeObject*)L_9, List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F_RuntimeMethod_var);
				goto IL_0057_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0024_1;
				}
				throw e;
			}

CATCH_0024_1:
			{// begin catch(System.Reflection.ReflectionTypeLoadException)
				{
					V_3 = ((ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475*)IL2CPP_GET_ACTIVE_EXCEPTION(ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475*));
					List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_10 = V_0;
					ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475* L_11 = V_3;
					NullCheck(L_11);
					TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12;
					L_12 = ReflectionTypeLoadException_get_Types_mEA33478930C629147E252D53230510BE0F4AD45E_inline(L_11, NULL);
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_il2cpp_TypeInfo_var)));
					Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_13 = ((U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_il2cpp_TypeInfo_var))))->___U3CU3E9__1_0_1;
					Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_14 = L_13;
					G_B5_0 = L_14;
					G_B5_1 = L_12;
					G_B5_2 = L_10;
					if (L_14)
					{
						G_B6_0 = L_14;
						G_B6_1 = L_12;
						G_B6_2 = L_10;
						goto IL_004b_1;
					}
				}
				{
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_il2cpp_TypeInfo_var)));
					U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E* L_15 = ((U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_il2cpp_TypeInfo_var))))->___U3CU3E9_0;
					Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_16 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var)));
					NullCheck(L_16);
					Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_16, L_15, (intptr_t)((void*)((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetAllTypesU3Eb__1_0_mBF8B04E55A450F8627D92412AA264D784BB15833_RuntimeMethod_var))), NULL);
					Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_17 = L_16;
					((U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_il2cpp_TypeInfo_var))))->___U3CU3E9__1_0_1 = L_17;
					Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_il2cpp_TypeInfo_var))))->___U3CU3E9__1_0_1), (void*)L_17);
					G_B6_0 = L_17;
					G_B6_1 = G_B5_1;
					G_B6_2 = G_B5_2;
				}

IL_004b_1:
				{
					RuntimeObject* L_18;
					L_18 = Enumerable_Where_TisType_t_mBDD356C957E8D2FEE45299F34F461B519451D745((RuntimeObject*)G_B6_1, G_B6_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Where_TisType_t_mBDD356C957E8D2FEE45299F34F461B519451D745_RuntimeMethod_var)));
					NullCheck(G_B6_2);
					List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F(G_B6_2, L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F_RuntimeMethod_var)));
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0057_1;
				}
			}// end catch (depth: 2)

IL_0057_1:
			{
				RuntimeObject* L_19 = V_1;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_006b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_21 = V_0;
		NullCheck(L_21);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22;
		L_22 = List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56(L_21, List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56_RuntimeMethod_var);
		return L_22;
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
// System.Void DesperateDevs.Utils.AppDomainExtension/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE1398DAC0B1A1D757F9482B046F726EB258251E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E* L_0 = (U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E*)il2cpp_codegen_object_new(U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m537CE2492B229C47153D905E0C5BA411A116791A(L_0, NULL);
		((U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void DesperateDevs.Utils.AppDomainExtension/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m537CE2492B229C47153D905E0C5BA411A116791A (U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean DesperateDevs.Utils.AppDomainExtension/<>c::<GetAllTypes>b__1_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllTypesU3Eb__1_0_mBF8B04E55A450F8627D92412AA264D784BB15833 (U3CU3Ec_t89735EDE04F3B77A12E26D4DE05151C5A538D07E* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___type0;
		return (bool)((!(((RuntimeObject*)(Type_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String DesperateDevs.Utils.SerializationTypeExtension::ToCompilableString(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationTypeExtension_ToCompilableString_mA9547637796C57B054482D269500CB1A8DDDEAEA (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisType_t_TisString_t_mFDBC720E9323EF1D635D18224C9F3244D226DC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToCompilableStringU3Eb__0_0_m2BB39CD73781C666E9D467BEB85807F630371D41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* G_B5_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* G_B4_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ((SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_StaticFields*)il2cpp_codegen_static_fields_for(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var))->____builtInTypesToString_0;
		Type_t* L_1 = ___type0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_0, L_2, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ((SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_StaticFields*)il2cpp_codegen_static_fields_for(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var))->____builtInTypesToString_0;
		Type_t* L_5 = ___type0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_5);
		NullCheck(L_4);
		String_t* L_7;
		L_7 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_4, L_6, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		return L_7;
	}

IL_0023:
	{
		Type_t* L_8 = ___type0;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_8);
		if (!L_9)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_10 = ___type0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_10);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)96));
		NullCheck(L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14;
		L_14 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_11, L_13, NULL);
		NullCheck(L_14);
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Type_t* L_17 = ___type0;
		NullCheck(L_17);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_18;
		L_18 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_17);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var);
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_19 = ((U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_20 = L_19;
		G_B4_0 = L_20;
		G_B4_1 = L_18;
		G_B4_2 = L_16;
		if (L_20)
		{
			G_B5_0 = L_20;
			G_B5_1 = L_18;
			G_B5_2 = L_16;
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var);
		U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336* L_21 = ((U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_22 = (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*)il2cpp_codegen_object_new(Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Func_2__ctor_m059A8C7FD3318EFF79FD145F9FDA4C44E4192897(L_22, L_21, (intptr_t)((void*)U3CU3Ec_U3CToCompilableStringU3Eb__0_0_m2BB39CD73781C666E9D467BEB85807F630371D41_RuntimeMethod_var), NULL);
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_23 = L_22;
		((U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_23);
		G_B5_0 = L_23;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_0068:
	{
		RuntimeObject* L_24;
		L_24 = Enumerable_Select_TisType_t_TisString_t_mFDBC720E9323EF1D635D18224C9F3244D226DC94((RuntimeObject*)G_B5_1, G_B5_0, Enumerable_Select_TisType_t_TisString_t_mFDBC720E9323EF1D635D18224C9F3244D226DC94_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25;
		L_25 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_24, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		V_0 = L_25;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_0;
		String_t* L_27;
		L_27 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B5_2, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_27, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_28;
	}

IL_008e:
	{
		Type_t* L_29 = ___type0;
		NullCheck(L_29);
		bool L_30;
		L_30 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_29, NULL);
		if (!L_30)
		{
			goto IL_00c0;
		}
	}
	{
		Type_t* L_31 = ___type0;
		NullCheck(L_31);
		Type_t* L_32;
		L_32 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_31);
		il2cpp_codegen_runtime_class_init_inline(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = SerializationTypeExtension_ToCompilableString_mA9547637796C57B054482D269500CB1A8DDDEAEA(L_32, NULL);
		Type_t* L_34 = ___type0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VirtualFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 System.Type::GetArrayRank() */, L_34);
		String_t* L_36;
		L_36 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)44), ((int32_t)il2cpp_codegen_subtract(L_35, 1)), NULL);
		String_t* L_37;
		L_37 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_33, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_36, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		return L_37;
	}

IL_00c0:
	{
		Type_t* L_38 = ___type0;
		NullCheck(L_38);
		bool L_39;
		L_39 = Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD(L_38, NULL);
		if (!L_39)
		{
			goto IL_00d8;
		}
	}
	{
		Type_t* L_40 = ___type0;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_40);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_41, ((int32_t)43), ((int32_t)46), NULL);
		return L_42;
	}

IL_00d8:
	{
		Type_t* L_43 = ___type0;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_43);
		return L_44;
	}
}
// System.Type DesperateDevs.Utils.SerializationTypeExtension::ToType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SerializationTypeExtension_ToType_mD27C7EAC8CF0E59164A1AA7618D8A14BF9C58CFC (String_t* ___typeString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationTypeExtension_ToType_mD27C7EAC8CF0E59164A1AA7618D8A14BF9C58CFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_2 = NULL;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___typeString0;
		il2cpp_codegen_runtime_class_init_inline(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SerializationTypeExtension_generateTypeString_m1785F09E764A9FC97578997CFEE973A7067DC112(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = il2cpp_codegen_get_type(L_2, Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var, SerializationTypeExtension_ToType_mD27C7EAC8CF0E59164A1AA7618D8A14BF9C58CFC_RuntimeMethod_var);
		V_1 = L_3;
		Type_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		Type_t* L_5 = V_1;
		return L_5;
	}

IL_0013:
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_6;
		L_6 = AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE(NULL);
		NullCheck(L_6);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_7;
		L_7 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_6, NULL);
		V_2 = L_7;
		V_3 = 0;
		goto IL_0035;
	}

IL_0022:
	{
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Assembly_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		String_t* L_12 = V_0;
		NullCheck(L_11);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_11, L_12);
		V_1 = L_13;
		Type_t* L_14 = V_1;
		if (!L_14)
		{
			goto IL_0031;
		}
	}
	{
		Type_t* L_15 = V_1;
		return L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0035:
	{
		int32_t L_17 = V_3;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		return (Type_t*)NULL;
	}
}
// System.String DesperateDevs.Utils.SerializationTypeExtension::ShortTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationTypeExtension_ShortTypeName_m579C88EF34936B8500DBBF3E7D9B5717E1F0BCB8 (String_t* ___fullTypeName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fullTypeName0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_0, L_2, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1));
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.String DesperateDevs.Utils.SerializationTypeExtension::RemoveDots(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationTypeExtension_RemoveDots_m13637C66028573E5BB19A31AF2EA3E7BE56B12C4 (String_t* ___fullTypeName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fullTypeName0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_1, NULL);
		return L_2;
	}
}
// System.String DesperateDevs.Utils.SerializationTypeExtension::generateTypeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationTypeExtension_generateTypeString_m1785F09E764A9FC97578997CFEE973A7067DC112 (String_t* ___typeString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ((SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_StaticFields*)il2cpp_codegen_static_fields_for(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var))->____builtInTypeStrings_1;
		String_t* L_1 = ___typeString0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_0, L_1, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ((SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_StaticFields*)il2cpp_codegen_static_fields_for(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var))->____builtInTypeStrings_1;
		String_t* L_4 = ___typeString0;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_3, L_4, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		___typeString0 = L_5;
		goto IL_002c;
	}

IL_001c:
	{
		String_t* L_6 = ___typeString0;
		il2cpp_codegen_runtime_class_init_inline(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = SerializationTypeExtension_generateGenericArguments_mA4189ADC1B4CB956FD81A78663547436C43FE9C6(L_6, NULL);
		___typeString0 = L_7;
		String_t* L_8 = ___typeString0;
		String_t* L_9;
		L_9 = SerializationTypeExtension_generateArray_m30F4248C5F16D52C3E4AA4F65C0AB7825096F780(L_8, NULL);
		___typeString0 = L_9;
	}

IL_002c:
	{
		String_t* L_10 = ___typeString0;
		return L_10;
	}
}
// System.String DesperateDevs.Utils.SerializationTypeExtension::generateGenericArguments(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationTypeExtension_generateGenericArguments_mA4189ADC1B4CB956FD81A78663547436C43FE9C6 (String_t* ___typeString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CgenerateGenericArgumentsU3Eb__0_mABB934B04B90B84E8BF4713D4B925BA3AB1481C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19AD7C05BAAA8A293677420CEAB2047E77E9044F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7* L_0 = (U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_mE0824A1E48F081A935010162D96F2440EA88DD23(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7* L_1 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		NullCheck(L_1);
		L_1->___separator_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___separator_0), (void*)L_3);
		String_t* L_4 = ___typeString0;
		U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7* L_5 = V_0;
		MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113* L_6 = (MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113*)il2cpp_codegen_object_new(MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		MatchEvaluator__ctor_m4F7140E86A532BE1E1206DCEA76DE8E91CB985F2(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CgenerateGenericArgumentsU3Eb__0_mABB934B04B90B84E8BF4713D4B925BA3AB1481C4_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Regex_Replace_mC2D352FBA01E07EA395477C76E4145C26461CF0E(L_4, _stringLiteral19AD7C05BAAA8A293677420CEAB2047E77E9044F, L_6, NULL);
		___typeString0 = L_7;
		String_t* L_8 = ___typeString0;
		return L_8;
	}
}
// System.String DesperateDevs.Utils.SerializationTypeExtension::generateArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationTypeExtension_generateArray_m30F4248C5F16D52C3E4AA4F65C0AB7825096F780 (String_t* ___typeString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CgenerateArrayU3Eb__6_0_mEF2F90773331C1101D9AAB55D05F6EE43C22A1F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03F819654CF817F595485BB93438CE48B90FD355);
		s_Il2CppMethodInitialized = true;
	}
	MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	{
		String_t* L_0 = ___typeString0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var);
		MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113* L_1 = ((U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2;
		MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral03F819654CF817F595485BB93438CE48B90FD355;
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral03F819654CF817F595485BB93438CE48B90FD355;
			G_B2_2 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var);
		U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336* L_3 = ((U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113* L_4 = (MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113*)il2cpp_codegen_object_new(MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MatchEvaluator__ctor_m4F7140E86A532BE1E1206DCEA76DE8E91CB985F2(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CgenerateArrayU3Eb__6_0_mEF2F90773331C1101D9AAB55D05F6EE43C22A1F5_RuntimeMethod_var), NULL);
		MatchEvaluator_t66F8BF60D7C3F0C22163554A2B8FDF63A86C8113* L_5 = L_4;
		((U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Regex_Replace_mC2D352FBA01E07EA395477C76E4145C26461CF0E(G_B2_2, G_B2_1, G_B2_0, NULL);
		___typeString0 = L_6;
		String_t* L_7 = ___typeString0;
		return L_7;
	}
}
// System.Void DesperateDevs.Utils.SerializationTypeExtension::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationTypeExtension__cctor_mC0295A3CA7521487516A952D5289910E73C3974E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C04CD91AEBB050BE21D6AD24AABF576BC020AC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAAD6F8CD67196FDCAD20D4F7FE08C93EEA0028);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C27A0B1BADE691B5E081C6206EA2258803AD35B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8192EF02E079142FD5CA69DC024E6EF19381C3B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A7DC8A7D43BCA912EA8F0A6CA746727E5C7BA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94152201B24834B0EF60CA96399C126BAED45FB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC45650C963261F1B046FEBC27ABA14BCBA8F11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3A8E77BFEC96D39BC81E775AA2148ABFCC7B627);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5C1F833B9BE779404488EC6DDA5379616471E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3165827D406DD8F354BE7515C630A771E98916A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE18A03A42C3630065A4A851B24F01948FD8026C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF08339D4FE85DC41A1A67350BEBFF4F037C2EC98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF16D8766C3E454E6B20DC525B5017CAC8D0BDC90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE6B7E72961EFAC1F608AD025001BB0C4D2114CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFA36FEC765CE9140429C3C852A895A05B9F710A);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteralD5C1F833B9BE779404488EC6DDA5379616471E78, _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, _stringLiteralEE18A03A42C3630065A4A851B24F01948FD8026C, _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteralFE6B7E72961EFAC1F608AD025001BB0C4D2114CC, _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, _stringLiteral0C04CD91AEBB050BE21D6AD24AABF576BC020AC5, _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_5, _stringLiteralBFC45650C963261F1B046FEBC27ABA14BCBA8F11, _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_6, _stringLiteralF08339D4FE85DC41A1A67350BEBFF4F037C2EC98, _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_7, _stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892, _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_8, _stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A, _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_9, _stringLiteralFFA36FEC765CE9140429C3C852A895A05B9F710A, _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_10, _stringLiteral0FAAD6F8CD67196FDCAD20D4F7FE08C93EEA0028, _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_11, _stringLiteral82A7DC8A7D43BCA912EA8F0A6CA746727E5C7BA6, _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = L_11;
		NullCheck(L_12);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_12, _stringLiteral94152201B24834B0EF60CA96399C126BAED45FB6, _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = L_12;
		NullCheck(L_13);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_13, _stringLiteralC3A8E77BFEC96D39BC81E775AA2148ABFCC7B627, _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_14, _stringLiteralF16D8766C3E454E6B20DC525B5017CAC8D0BDC90, _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = L_14;
		NullCheck(L_15);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_15, _stringLiteral8192EF02E079142FD5CA69DC024E6EF19381C3B6, _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = L_15;
		NullCheck(L_16);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_16, _stringLiteral5C27A0B1BADE691B5E081C6206EA2258803AD35B, _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		((SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_StaticFields*)il2cpp_codegen_static_fields_for(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var))->____builtInTypesToString_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_StaticFields*)il2cpp_codegen_static_fields_for(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var))->____builtInTypesToString_0), (void*)L_16);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_17, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = L_17;
		NullCheck(L_18);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_18, _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2, _stringLiteralD5C1F833B9BE779404488EC6DDA5379616471E78, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_19 = L_18;
		NullCheck(L_19);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_19, _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, _stringLiteralEE18A03A42C3630065A4A851B24F01948FD8026C, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = L_19;
		NullCheck(L_20);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_20, _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB, _stringLiteralFE6B7E72961EFAC1F608AD025001BB0C4D2114CC, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = L_20;
		NullCheck(L_21);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_21, _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, _stringLiteral0C04CD91AEBB050BE21D6AD24AABF576BC020AC5, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = L_21;
		NullCheck(L_22);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_22, _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D, _stringLiteralBFC45650C963261F1B046FEBC27ABA14BCBA8F11, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_23 = L_22;
		NullCheck(L_23);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_23, _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, _stringLiteralF08339D4FE85DC41A1A67350BEBFF4F037C2EC98, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_24 = L_23;
		NullCheck(L_24);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_24, _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, _stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_25 = L_24;
		NullCheck(L_25);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_25, _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, _stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_26 = L_25;
		NullCheck(L_26);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_26, _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A, _stringLiteralFFA36FEC765CE9140429C3C852A895A05B9F710A, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27 = L_26;
		NullCheck(L_27);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_27, _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, _stringLiteral0FAAD6F8CD67196FDCAD20D4F7FE08C93EEA0028, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_28 = L_27;
		NullCheck(L_28);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_28, _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1, _stringLiteral82A7DC8A7D43BCA912EA8F0A6CA746727E5C7BA6, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_29 = L_28;
		NullCheck(L_29);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_29, _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18, _stringLiteral94152201B24834B0EF60CA96399C126BAED45FB6, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_30 = L_29;
		NullCheck(L_30);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_30, _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, _stringLiteralC3A8E77BFEC96D39BC81E775AA2148ABFCC7B627, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = L_30;
		NullCheck(L_31);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_31, _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E, _stringLiteralF16D8766C3E454E6B20DC525B5017CAC8D0BDC90, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_32 = L_31;
		NullCheck(L_32);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_32, _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE, _stringLiteral8192EF02E079142FD5CA69DC024E6EF19381C3B6, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_33 = L_32;
		NullCheck(L_33);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_33, _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9, _stringLiteral5C27A0B1BADE691B5E081C6206EA2258803AD35B, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		((SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_StaticFields*)il2cpp_codegen_static_fields_for(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var))->____builtInTypeStrings_1 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_StaticFields*)il2cpp_codegen_static_fields_for(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var))->____builtInTypeStrings_1), (void*)L_33);
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
// System.Void DesperateDevs.Utils.SerializationTypeExtension/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC7F41156909DE801786D6A7D025E47657074F3AD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336* L_0 = (U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336*)il2cpp_codegen_object_new(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mD6AC42F0E7591FD23F5C7FB91246032C6939A859(L_0, NULL);
		((U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void DesperateDevs.Utils.SerializationTypeExtension/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6AC42F0E7591FD23F5C7FB91246032C6939A859 (U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String DesperateDevs.Utils.SerializationTypeExtension/<>c::<ToCompilableString>b__0_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToCompilableStringU3Eb__0_0_m2BB39CD73781C666E9D467BEB85807F630371D41 (U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336* __this, Type_t* ___argType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___argType0;
		il2cpp_codegen_runtime_class_init_inline(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SerializationTypeExtension_ToCompilableString_mA9547637796C57B054482D269500CB1A8DDDEAEA(L_0, NULL);
		return L_1;
	}
}
// System.String DesperateDevs.Utils.SerializationTypeExtension/<>c::<generateArray>b__6_0(System.Text.RegularExpressions.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CgenerateArrayU3Eb__6_0_mEF2F90773331C1101D9AAB55D05F6EE43C22A1F5 (U3CU3Ec_t60DE4DBC0963851EFB14862BD968E49AC8FCD336* __this, Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___m0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94379E6F458254EE0A13EA20A16C5605CA5E7DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_0 = ___m0;
		NullCheck(L_0);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_1;
		L_1 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_0);
		NullCheck(L_1);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_2;
		L_2 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_1, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = SerializationTypeExtension_generateTypeString_m1785F09E764A9FC97578997CFEE973A7067DC112(L_3, NULL);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_5 = ___m0;
		NullCheck(L_5);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_6;
		L_6 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_5);
		NullCheck(L_6);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_7;
		L_7 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_6, _stringLiteral94379E6F458254EE0A13EA20A16C5605CA5E7DE4, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_7, NULL);
		V_0 = L_8;
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_4, L_9, NULL);
		return L_10;
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
// System.Void DesperateDevs.Utils.SerializationTypeExtension/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mE0824A1E48F081A935010162D96F2440EA88DD23 (U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String DesperateDevs.Utils.SerializationTypeExtension/<>c__DisplayClass5_0::<generateGenericArguments>b__0(System.Text.RegularExpressions.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass5_0_U3CgenerateGenericArgumentsU3Eb__0_mABB934B04B90B84E8BF4713D4B925BA3AB1481C4 (U3CU3Ec__DisplayClass5_0_t1032B35CE0DBC20DE71CBED7F9B02F8099EC7FA7* __this, Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___m0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E5BAAFDAB120B872A321DA81FC38A34E0BC9C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_0 = ___m0;
		NullCheck(L_0);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_1;
		L_1 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_0);
		NullCheck(L_1);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_2;
		L_2 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_1, _stringLiteral4E5BAAFDAB120B872A321DA81FC38A34E0BC9C3E, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SerializationTypeExtension_t9789C651AD077F9F0854D796B046B68DEE008284_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = SerializationTypeExtension_generateTypeString_m1785F09E764A9FC97578997CFEE973A7067DC112(L_3, NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->___separator_0;
		NullCheck(L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_5, L_6, 0, NULL);
		NullCheck(L_7);
		V_1 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		String_t* L_16 = V_0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_18;
		L_18 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_17, NULL);
		return L_18;
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
// System.String DesperateDevs.Utils.StringExtension::UppercaseFirst(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtension_UppercaseFirst_m8EA0AA20AF7B006AC15CA74215F76A2B598514A6 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_2 = ___str0;
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		Il2CppChar L_5;
		L_5 = Char_ToUpper_m3753B9BCD4A82C8B5D86D39D9B1B2D638B0AFE84(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_0), NULL);
		String_t* L_7 = ___str0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_7, 1, NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_6, L_8, NULL);
		return L_9;
	}
}
// System.String DesperateDevs.Utils.StringExtension::LowercaseFirst(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtension_LowercaseFirst_mDADCDBA6B9E11A6327EFED82D8A9A1612C27D11F (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_2 = ___str0;
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		Il2CppChar L_5;
		L_5 = Char_ToLower_m643675C4A50AD39A7BE3F5C3F40A1BFD547FF957(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_0), NULL);
		String_t* L_7 = ___str0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_7, 1, NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_6, L_8, NULL);
		return L_9;
	}
}
// System.String DesperateDevs.Utils.StringExtension::ToUnixLineEndings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtension_ToUnixLineEndings_mA521BDB5F86166CC56C00BA93813EB4ADB1511CE (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		return L_2;
	}
}
// System.String DesperateDevs.Utils.StringExtension::ToUnixPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtension_ToUnixPath_mCC4259EFD420FAB97D03BC53DEAFF88809F1DC98 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		return L_1;
	}
}
// System.String DesperateDevs.Utils.StringExtension::ToCSV(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtension_ToCSV_m46CBBABFB494DE843BA843435E90625D098152C7 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisString_t_m60A7751DBEA2577100838E550C6AEDF59AA3F4AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToCSVU3Eb__4_0_m7388706B21EE3BE785E32410AD449B31D7988137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToCSVU3Eb__4_1_m740736DBBCA62BA7A34482558B6F4D07F50D7A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B2_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B1_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_1 = ((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var);
		U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1* L_3 = ((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_4 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CToCSVU3Eb__4_0_m7388706B21EE3BE785E32410AD449B31D7988137_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_5 = L_4;
		((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_7 = ((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9__4_1_2;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		G_B3_2 = G_B2_2;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			G_B4_2 = G_B2_2;
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var);
		U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1* L_9 = ((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_10 = (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*)il2cpp_codegen_object_new(Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CToCSVU3Eb__4_1_m740736DBBCA62BA7A34482558B6F4D07F50D7A4E_RuntimeMethod_var), NULL);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_11 = L_10;
		((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9__4_1_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9__4_1_2), (void*)L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0049:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Select_TisString_t_TisString_t_m60A7751DBEA2577100838E550C6AEDF59AA3F4AC(G_B4_1, G_B4_0, Enumerable_Select_TisString_t_TisString_t_m60A7751DBEA2577100838E550C6AEDF59AA3F4AC_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
		L_13 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_12, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		String_t* L_14;
		L_14 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(G_B4_2, L_13, NULL);
		return L_14;
	}
}
// System.String[] DesperateDevs.Utils.StringExtension::ArrayFromCSV(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StringExtension_ArrayFromCSV_m03F5A45659FDE324B08921B88F3453EE86913687 (String_t* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisString_t_m60A7751DBEA2577100838E550C6AEDF59AA3F4AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CArrayFromCSVU3Eb__5_0_m3BEB5CF678B4F351BE59BA62CBAF8FE3FDF548BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B2_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B1_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_1 = NULL;
	{
		String_t* L_0 = ___values0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m6811F7CF4DE7C68019D76E9DC6D17B2293BA8B12(L_0, L_2, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_4 = ((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_3;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var);
		U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1* L_6 = ((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_7 = (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*)il2cpp_codegen_object_new(Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CArrayFromCSVU3Eb__5_0_m3BEB5CF678B4F351BE59BA62CBAF8FE3FDF548BC_RuntimeMethod_var), NULL);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_8 = L_7;
		((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_3), (void*)L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
	}

IL_0031:
	{
		RuntimeObject* L_9;
		L_9 = Enumerable_Select_TisString_t_TisString_t_m60A7751DBEA2577100838E550C6AEDF59AA3F4AC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisString_t_TisString_t_m60A7751DBEA2577100838E550C6AEDF59AA3F4AC_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_9, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		return L_10;
	}
}
// System.String DesperateDevs.Utils.StringExtension::ToSpacedCamelCase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtension_ToSpacedCamelCase_m9978839A881C371184D57908C75AF94C16ADE026 (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___text0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_2, ((int32_t)il2cpp_codegen_multiply(L_1, 2)), NULL);
		V_0 = L_2;
		StringBuilder_t* L_3 = V_0;
		String_t* L_4 = ___text0;
		NullCheck(L_4);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		Il2CppChar L_6;
		L_6 = Char_ToUpper_m3753B9BCD4A82C8B5D86D39D9B1B2D638B0AFE84(L_5, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_3, L_6, NULL);
		V_1 = 1;
		goto IL_005b;
	}

IL_0025:
	{
		String_t* L_8 = ___text0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Char_IsUpper_m857948FB8687710EC3EAB889A4908E00E4F48BDA(L_10, NULL);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_12 = ___text0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), NULL);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_0049;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)32), NULL);
	}

IL_0049:
	{
		StringBuilder_t* L_17 = V_0;
		String_t* L_18 = ___text0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Il2CppChar L_20;
		L_20 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_18, L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, L_20, NULL);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005b:
	{
		int32_t L_23 = V_1;
		String_t* L_24 = ___text0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_24, NULL);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		return L_27;
	}
}
// System.String DesperateDevs.Utils.StringExtension::MakePathRelativeTo(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtension_MakePathRelativeTo_mAE71642874BDAAC232CDFFECDED456BABE25E56E (String_t* ___path0, String_t* ___currentDirectory1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___currentDirectory1;
		String_t* L_1;
		L_1 = StringExtension_CreateUri_mA45E4D44B58D69A201B58FD17C0F65DEFCD0974F(L_0, NULL);
		___currentDirectory1 = L_1;
		String_t* L_2 = ___path0;
		String_t* L_3;
		L_3 = StringExtension_CreateUri_mA45E4D44B58D69A201B58FD17C0F65DEFCD0974F(L_2, NULL);
		___path0 = L_3;
		String_t* L_4 = ___path0;
		String_t* L_5 = ___currentDirectory1;
		NullCheck(L_4);
		bool L_6;
		L_6 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_7 = ___path0;
		String_t* L_8 = ___currentDirectory1;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_7, L_8, L_9, NULL);
		___path0 = L_10;
		String_t* L_11 = ___path0;
		NullCheck(L_11);
		bool L_12;
		L_12 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_11, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		if (!L_12)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_13 = ___path0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_13, 1, NULL);
		___path0 = L_14;
	}

IL_003d:
	{
		String_t* L_15 = ___path0;
		return L_15;
	}
}
// System.String DesperateDevs.Utils.StringExtension::CreateUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtension_CreateUri_mA45E4D44B58D69A201B58FD17C0F65DEFCD0974F (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_1, L_0, NULL);
		V_0 = L_1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA(L_2, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Uri_get_Fragment_m3CB7AD14DA9618ADE406039D4713F67D6951D835(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Uri_UnescapeDataString_mD0A4732F7ED9CA5DB9E46D802971B5406094CC77(L_6, NULL);
		return L_7;
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
// System.Void DesperateDevs.Utils.StringExtension/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCC66F0F08C9B72A854DF7FD3E74B020D406BCD56 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1* L_0 = (U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1*)il2cpp_codegen_object_new(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE4F37CEAB5DC02470562224C1A9C480EC89CA6DA(L_0, NULL);
		((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void DesperateDevs.Utils.StringExtension/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE4F37CEAB5DC02470562224C1A9C480EC89CA6DA (U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean DesperateDevs.Utils.StringExtension/<>c::<ToCSV>b__4_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CToCSVU3Eb__4_0_m7388706B21EE3BE785E32410AD449B31D7988137 (U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.String DesperateDevs.Utils.StringExtension/<>c::<ToCSV>b__4_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToCSVU3Eb__4_1_m740736DBBCA62BA7A34482558B6F4D07F50D7A4E (U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_0, NULL);
		return L_1;
	}
}
// System.String DesperateDevs.Utils.StringExtension/<>c::<ArrayFromCSV>b__5_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CArrayFromCSVU3Eb__5_0_m3BEB5CF678B4F351BE59BA62CBAF8FE3FDF548BC (U3CU3Ec_tEB11DD04B95A6A7E1F4258B3905D7040D38603E1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_0, NULL);
		return L_1;
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
// System.Reflection.Assembly[] DesperateDevs.Utils.AssemblyResolver::get_assemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AssemblyResolver_get_assemblies_m51631FB6C233836ADD31D4884B8C4B154C5BB8E6 (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisAssembly_t_mF2BA74F79C12BB4A58BD5A547C1DAC3CA2AFD3BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60* L_0 = __this->____assemblies_3;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_1;
		L_1 = Enumerable_ToArray_TisAssembly_t_mF2BA74F79C12BB4A58BD5A547C1DAC3CA2AFD3BD(L_0, Enumerable_ToArray_TisAssembly_t_mF2BA74F79C12BB4A58BD5A547C1DAC3CA2AFD3BD_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void DesperateDevs.Utils.AssemblyResolver::.ctor(System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyResolver__ctor_m41413D39FE04475EFB2A40E99AF4BB9888785F15 (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, bool ___reflectionOnly0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___basePaths1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyResolver_onAssemblyResolve_m5E6B4B299030EB81588F3D55329657D2E1F6779F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyResolver_onReflectionOnlyAssemblyResolve_m49BB56BBEC8A877044122D671E672020D0F8B77C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m1E1DA8C4C0668674CDC02B686FA96008B9EF7E07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_3;
		L_3 = fabl_GetLogger_m7F0E6B05CDAB90F50E2652E0AE591DF4680EBB55(L_2, NULL);
		__this->____logger_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____logger_0), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_4 = ___reflectionOnly0;
		__this->____reflectionOnly_1 = L_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___basePaths1;
		__this->____basePaths_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____basePaths_2), (void*)L_5);
		HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60* L_6 = (HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60*)il2cpp_codegen_object_new(HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		HashSet_1__ctor_m1E1DA8C4C0668674CDC02B686FA96008B9EF7E07(L_6, HashSet_1__ctor_m1E1DA8C4C0668674CDC02B686FA96008B9EF7E07_RuntimeMethod_var);
		__this->____assemblies_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____assemblies_3), (void*)L_6);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_7;
		L_7 = AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE(NULL);
		__this->____appDomain_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____appDomain_4), (void*)L_7);
		bool L_8 = ___reflectionOnly0;
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_9 = __this->____appDomain_4;
		ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* L_10 = (ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692*)il2cpp_codegen_object_new(ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ResolveEventHandler__ctor_m6EDDA1AABD23F6BDA9A4FAC209B4CF16D3318487(L_10, __this, (intptr_t)((void*)AssemblyResolver_onReflectionOnlyAssemblyResolve_m49BB56BBEC8A877044122D671E672020D0F8B77C_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		AppDomain_add_ReflectionOnlyAssemblyResolve_m13755BC65244B5EBE4FE241414F0051B2BAC22A7(L_9, L_10, NULL);
		return;
	}

IL_005f:
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_11 = __this->____appDomain_4;
		ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* L_12 = (ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692*)il2cpp_codegen_object_new(ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ResolveEventHandler__ctor_m6EDDA1AABD23F6BDA9A4FAC209B4CF16D3318487(L_12, __this, (intptr_t)((void*)AssemblyResolver_onAssemblyResolve_m5E6B4B299030EB81588F3D55329657D2E1F6779F_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		AppDomain_add_AssemblyResolve_mF70FC220D03BADA436B3BE6C11EE69908AF6149A(L_11, L_12, NULL);
		return;
	}
}
// System.Void DesperateDevs.Utils.AssemblyResolver::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyResolver_Load_m389EDC2757F1C1EE70C93BE8535550202FDEC91A (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assembly_LoadFrom_m64962FD97F481DCEF5F72D5D49A20C3A8CED76CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assembly_ReflectionOnlyLoadFrom_m61360A2F00D533957DB3D714915E9C3CEBF15A73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2577B78964A89256EFDADCD286C8019D216458BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral392D79F3BB854C7447F572D606D32F0E50B8BDB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____reflectionOnly_1;
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_1 = __this->____logger_0;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_2 = __this->____appDomain_4;
		String_t* L_3 = ___path0;
		String_t* L_4;
		L_4 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(L_2, _stringLiteral2577B78964A89256EFDADCD286C8019D216458BD, L_3, NULL);
		NullCheck(L_1);
		Logger_Debug_m74279B35BC40C44C2630807A72257D8531281328(L_1, L_4, NULL);
		String_t* L_5 = ___path0;
		Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88* L_6 = (Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88*)il2cpp_codegen_object_new(Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m56C750B3C704098C40E7BA70B1013DF403F9B8EC(L_6, NULL, (intptr_t)((void*)Assembly_ReflectionOnlyLoadFrom_m61360A2F00D533957DB3D714915E9C3CEBF15A73_RuntimeMethod_var), NULL);
		Assembly_t* L_7;
		L_7 = AssemblyResolver_resolveAndLoad_mCE3655D9234EFEFA17B639AAB0FAB9643F349DF7(__this, L_5, L_6, (bool)0, NULL);
		return;
	}

IL_003a:
	{
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_8 = __this->____logger_0;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_9 = __this->____appDomain_4;
		String_t* L_10 = ___path0;
		String_t* L_11;
		L_11 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(L_9, _stringLiteral392D79F3BB854C7447F572D606D32F0E50B8BDB9, L_10, NULL);
		NullCheck(L_8);
		Logger_Debug_m74279B35BC40C44C2630807A72257D8531281328(L_8, L_11, NULL);
		String_t* L_12 = ___path0;
		Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88* L_13 = (Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88*)il2cpp_codegen_object_new(Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m56C750B3C704098C40E7BA70B1013DF403F9B8EC(L_13, NULL, (intptr_t)((void*)Assembly_LoadFrom_m64962FD97F481DCEF5F72D5D49A20C3A8CED76CD_RuntimeMethod_var), NULL);
		Assembly_t* L_14;
		L_14 = AssemblyResolver_resolveAndLoad_mCE3655D9234EFEFA17B639AAB0FAB9643F349DF7(__this, L_12, L_13, (bool)0, NULL);
		return;
	}
}
// System.Void DesperateDevs.Utils.AssemblyResolver::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyResolver_Close_m6B37092663F3373353603FFB09C08F5323356FB6 (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyResolver_onAssemblyResolve_m5E6B4B299030EB81588F3D55329657D2E1F6779F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyResolver_onReflectionOnlyAssemblyResolve_m49BB56BBEC8A877044122D671E672020D0F8B77C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____reflectionOnly_1;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_1 = __this->____appDomain_4;
		ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* L_2 = (ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692*)il2cpp_codegen_object_new(ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ResolveEventHandler__ctor_m6EDDA1AABD23F6BDA9A4FAC209B4CF16D3318487(L_2, __this, (intptr_t)((void*)AssemblyResolver_onReflectionOnlyAssemblyResolve_m49BB56BBEC8A877044122D671E672020D0F8B77C_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AppDomain_remove_ReflectionOnlyAssemblyResolve_m6981FFD76F0F089118585D2689FADDDB6DE42257(L_1, L_2, NULL);
		return;
	}

IL_0020:
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_3 = __this->____appDomain_4;
		ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* L_4 = (ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692*)il2cpp_codegen_object_new(ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ResolveEventHandler__ctor_m6EDDA1AABD23F6BDA9A4FAC209B4CF16D3318487(L_4, __this, (intptr_t)((void*)AssemblyResolver_onAssemblyResolve_m5E6B4B299030EB81588F3D55329657D2E1F6779F_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		AppDomain_remove_AssemblyResolve_mE9525557034AD388D8415E2A94162C0638DEED65(L_3, L_4, NULL);
		return;
	}
}
// System.Reflection.Assembly DesperateDevs.Utils.AssemblyResolver::resolveAndLoad(System.String,System.Func`2<System.String,System.Reflection.Assembly>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* AssemblyResolver_resolveAndLoad_mCE3655D9234EFEFA17B639AAB0FAB9643F349DF7 (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, String_t* ___name0, Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88* ___loadMethod1, bool ___isDependency2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0D599E289BFF74CCC0A60ADDA5F2A9BB501CA3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD79901FD99BDBB0DB8DA1A5A26E2494FCC02635C);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		V_0 = (Assembly_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		{
			bool L_0 = ___isDependency2;
			if (!L_0)
			{
				goto IL_001d_1;
			}
		}
		{
			Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_1 = __this->____logger_0;
			String_t* L_2 = ___name0;
			String_t* L_3;
			L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD79901FD99BDBB0DB8DA1A5A26E2494FCC02635C, L_2, NULL);
			NullCheck(L_1);
			Logger_Debug_m74279B35BC40C44C2630807A72257D8531281328(L_1, L_3, NULL);
			goto IL_0033_1;
		}

IL_001d_1:
		{
			Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_4 = __this->____logger_0;
			String_t* L_5 = ___name0;
			String_t* L_6;
			L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD0D599E289BFF74CCC0A60ADDA5F2A9BB501CA3D, L_5, NULL);
			NullCheck(L_4);
			Logger_Debug_m74279B35BC40C44C2630807A72257D8531281328(L_4, L_6, NULL);
		}

IL_0033_1:
		{
			Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88* L_7 = ___loadMethod1;
			String_t* L_8 = ___name0;
			NullCheck(L_7);
			Assembly_t* L_9;
			L_9 = Func_2_Invoke_m4740521C1836E2DDA757AAB6CCD6F49D82CC4CFD_inline(L_7, L_8, NULL);
			V_0 = L_9;
			Assembly_t* L_10 = V_0;
			AssemblyResolver_addAssembly_m0D43AA7166BA4A200AA4A323E69A05F90917FD2A(__this, L_10, NULL);
			goto IL_0066;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0044;
		}
		throw e;
	}

CATCH_0044:
	{// begin catch(System.Exception)
		{
			String_t* L_11 = ___name0;
			String_t* L_12;
			L_12 = AssemblyResolver_resolvePath_m6ACFE0A2E7A13483AD9AF054BF2B401DBDC8CABF(__this, L_11, NULL);
			V_1 = L_12;
			String_t* L_13 = V_1;
			if (!L_13)
			{
				goto IL_0064;
			}
		}
		try
		{// begin try (depth: 2)
			Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88* L_14 = ___loadMethod1;
			String_t* L_15 = V_1;
			NullCheck(L_14);
			Assembly_t* L_16;
			L_16 = Func_2_Invoke_m4740521C1836E2DDA757AAB6CCD6F49D82CC4CFD_inline(L_14, L_15, NULL);
			V_0 = L_16;
			Assembly_t* L_17 = V_0;
			AssemblyResolver_addAssembly_m0D43AA7166BA4A200AA4A323E69A05F90917FD2A(__this, L_17, NULL);
			goto IL_0064;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0061;
			}
			throw e;
		}

CATCH_0061:
		{// begin catch(System.BadImageFormatException)
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0064;
		}// end catch (depth: 2)

IL_0064:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0066;
		}
	}// end catch (depth: 1)

IL_0066:
	{
		Assembly_t* L_18 = V_0;
		return L_18;
	}
}
// System.Reflection.Assembly DesperateDevs.Utils.AssemblyResolver::onAssemblyResolve(System.Object,System.ResolveEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* AssemblyResolver_onAssemblyResolve_m5E6B4B299030EB81588F3D55329657D2E1F6779F (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, RuntimeObject* ___sender0, ResolveEventArgs_t3768D40A0CC1EA56714B75722FDC7C8D49CABCB0* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assembly_LoadFrom_m64962FD97F481DCEF5F72D5D49A20C3A8CED76CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResolveEventArgs_t3768D40A0CC1EA56714B75722FDC7C8D49CABCB0* L_0 = ___args1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ResolveEventArgs_get_Name_mA7AB7570CBF57D5C3FF8D478BF59A9A08387CC6A_inline(L_0, NULL);
		Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88* L_2 = (Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88*)il2cpp_codegen_object_new(Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_2__ctor_m56C750B3C704098C40E7BA70B1013DF403F9B8EC(L_2, NULL, (intptr_t)((void*)Assembly_LoadFrom_m64962FD97F481DCEF5F72D5D49A20C3A8CED76CD_RuntimeMethod_var), NULL);
		Assembly_t* L_3;
		L_3 = AssemblyResolver_resolveAndLoad_mCE3655D9234EFEFA17B639AAB0FAB9643F349DF7(__this, L_1, L_2, (bool)1, NULL);
		return L_3;
	}
}
// System.Reflection.Assembly DesperateDevs.Utils.AssemblyResolver::onReflectionOnlyAssemblyResolve(System.Object,System.ResolveEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* AssemblyResolver_onReflectionOnlyAssemblyResolve_m49BB56BBEC8A877044122D671E672020D0F8B77C (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, RuntimeObject* ___sender0, ResolveEventArgs_t3768D40A0CC1EA56714B75722FDC7C8D49CABCB0* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assembly_ReflectionOnlyLoadFrom_m61360A2F00D533957DB3D714915E9C3CEBF15A73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResolveEventArgs_t3768D40A0CC1EA56714B75722FDC7C8D49CABCB0* L_0 = ___args1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ResolveEventArgs_get_Name_mA7AB7570CBF57D5C3FF8D478BF59A9A08387CC6A_inline(L_0, NULL);
		Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88* L_2 = (Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88*)il2cpp_codegen_object_new(Func_2_tBA5E584FC90FBB59CCF59A470C58557E7E80CF88_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_2__ctor_m56C750B3C704098C40E7BA70B1013DF403F9B8EC(L_2, NULL, (intptr_t)((void*)Assembly_ReflectionOnlyLoadFrom_m61360A2F00D533957DB3D714915E9C3CEBF15A73_RuntimeMethod_var), NULL);
		Assembly_t* L_3;
		L_3 = AssemblyResolver_resolveAndLoad_mCE3655D9234EFEFA17B639AAB0FAB9643F349DF7(__this, L_1, L_2, (bool)1, NULL);
		return L_3;
	}
}
// System.Void DesperateDevs.Utils.AssemblyResolver::addAssembly(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyResolver_addAssembly_m0D43AA7166BA4A200AA4A323E69A05F90917FD2A (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, Assembly_t* ___assembly0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF4AF93354481E3D2499BDD90455A5EED9F523B99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60* L_0 = __this->____assemblies_3;
		Assembly_t* L_1 = ___assembly0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_mF4AF93354481E3D2499BDD90455A5EED9F523B99(L_0, L_1, HashSet_1_Add_mF4AF93354481E3D2499BDD90455A5EED9F523B99_RuntimeMethod_var);
		return;
	}
}
// System.String DesperateDevs.Utils.AssemblyResolver::resolvePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssemblyResolver_resolvePath_m6ACFE0A2E7A13483AD9AF054BF2B401DBDC8CABF (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6E1C35407C2C2276609982ABAA7CBF7F971B7A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0306CD1D9CF504B5991281FD28128ECE3A493F1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	Il2CppChar V_4 = 0x0;
	String_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			String_t* L_0 = ___name0;
			AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_1 = (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2*)il2cpp_codegen_object_new(AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_il2cpp_TypeInfo_var);
			NullCheck(L_1);
			AssemblyName__ctor_mA1FA5566003555823FD33805E1490F2477B3C10C(L_1, L_0, NULL);
			NullCheck(L_1);
			String_t* L_2;
			L_2 = AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline(L_1, NULL);
			V_0 = L_2;
			String_t* L_3 = V_0;
			NullCheck(L_3);
			bool L_4;
			L_4 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_3, _stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4, 5, NULL);
			if (L_4)
			{
				goto IL_0034_1;
			}
		}
		{
			String_t* L_5 = V_0;
			NullCheck(L_5);
			bool L_6;
			L_6 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_5, _stringLiteralB6E1C35407C2C2276609982ABAA7CBF7F971B7A3, 5, NULL);
			if (L_6)
			{
				goto IL_0034_1;
			}
		}
		{
			String_t* L_7 = V_0;
			String_t* L_8;
			L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_7, _stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4, NULL);
			V_0 = L_8;
		}

IL_0034_1:
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = __this->____basePaths_2;
			V_1 = L_9;
			V_2 = 0;
			goto IL_007e_1;
		}

IL_003f_1:
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
			int32_t L_11 = V_2;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			Il2CppChar L_14 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
			V_4 = L_14;
			String_t* L_15;
			L_15 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
			String_t* L_16 = V_0;
			String_t* L_17;
			L_17 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_13, L_15, L_16, NULL);
			V_3 = L_17;
			String_t* L_18 = V_3;
			bool L_19;
			L_19 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_18, NULL);
			if (!L_19)
			{
				goto IL_007a_1;
			}
		}
		{
			Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_20 = __this->____logger_0;
			String_t* L_21 = V_3;
			String_t* L_22;
			L_22 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF0306CD1D9CF504B5991281FD28128ECE3A493F1, L_21, NULL);
			NullCheck(L_20);
			Logger_Debug_m74279B35BC40C44C2630807A72257D8531281328(L_20, L_22, NULL);
			String_t* L_23 = V_3;
			V_5 = L_23;
			goto IL_00a1;
		}

IL_007a_1:
		{
			int32_t L_24 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		}

IL_007e_1:
		{
			int32_t L_25 = V_2;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_1;
			NullCheck(L_26);
			if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
			{
				goto IL_003f_1;
			}
		}
		{
			goto IL_009f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileLoadException_t7B98CE82B69E1EE2766408D480716802BBA5968B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{// begin catch(System.IO.FileLoadException)
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_27 = __this->____logger_0;
		String_t* L_28 = ___name0;
		String_t* L_29;
		L_29 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFAD53C63F3B69C9FE8DBBA28D57153333CAB1D6)), L_28, NULL);
		NullCheck(L_27);
		Logger_Debug_m74279B35BC40C44C2630807A72257D8531281328(L_27, L_29, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009f;
	}// end catch (depth: 1)

IL_009f:
	{
		return (String_t*)NULL;
	}

IL_00a1:
	{
		String_t* L_30 = V_5;
		return L_30;
	}
}
// System.Type[] DesperateDevs.Utils.AssemblyResolver::GetTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* AssemblyResolver_GetTypes_m5D37874671AA9F621D1655DF2D3256144C4659E2 (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisAssembly_t_mF2BA74F79C12BB4A58BD5A547C1DAC3CA2AFD3BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1214CC44287B1BA4B0A822151F7913F9A37E9F60* L_0 = __this->____assemblies_3;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_1;
		L_1 = Enumerable_ToArray_TisAssembly_t_mF2BA74F79C12BB4A58BD5A547C1DAC3CA2AFD3BD(L_0, Enumerable_ToArray_TisAssembly_t_mF2BA74F79C12BB4A58BD5A547C1DAC3CA2AFD3BD_RuntimeMethod_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2;
		L_2 = AppDomainExtension_GetAllTypes_m74C78A181C9AB7267325B0AF34A6AC44F3B74898((RuntimeObject*)L_1, NULL);
		return L_2;
	}
}
// DesperateDevs.Utils.AssemblyResolver DesperateDevs.Utils.AssemblyResolver::LoadAssemblies(System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* AssemblyResolver_LoadAssemblies_m3A0BC446510EB0C4713B643CB91B84F24DACA8C7 (bool ___allDirectories0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___basePaths1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___basePaths1;
		AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* L_1 = (AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E*)il2cpp_codegen_object_new(AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AssemblyResolver__ctor_m41413D39FE04475EFB2A40E99AF4BB9888785F15(L_1, (bool)0, L_0, NULL);
		V_0 = L_1;
		bool L_2 = ___allDirectories0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___basePaths1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = AssemblyResolver_getAssemblyFiles_m71B4153F1BF48EA18FC3FEA3CD2E20BD16BF4FFD(L_2, L_3, NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0023;
	}

IL_0014:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* L_9 = V_0;
		String_t* L_10 = V_3;
		NullCheck(L_9);
		AssemblyResolver_Load_m389EDC2757F1C1EE70C93BE8535550202FDEC91A(L_9, L_10, NULL);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0023:
	{
		int32_t L_12 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		AssemblyResolver_t8F0E483238D08C074C29DE9096A174D5DEE5AA4E* L_14 = V_0;
		return L_14;
	}
}
// System.String[] DesperateDevs.Utils.AssemblyResolver::getAssemblyFiles(System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* AssemblyResolver_getAssemblyFiles_m71B4153F1BF48EA18FC3FEA3CD2E20BD16BF4FFD (bool ___allDirectories0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___basePaths1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisString_t_TisString_t_mBA9B69398AD8146D692B7978C87C27DBFD4B3AA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF9905F052EF12704501D5B272E965D9B1311A014_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_1_U3CgetAssemblyFilesU3Eb__0_m9743F6096B930E5E3AD4E9257E4C5618726D0401_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB9164A63017585BF93DEC0F34BE2DBE1C56793);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9395CF055ECA0DDEF60CC9C426CC12027115F599);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E* V_4 = NULL;
	{
		U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9* L_0 = (U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass19_0__ctor_mBA42A29FE2382D528F7E7FB7D4FA2E4D2CD45758(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9* L_1 = V_0;
		bool L_2 = ___allDirectories0;
		NullCheck(L_1);
		L_1->___allDirectories_0 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral0DB9164A63017585BF93DEC0F34BE2DBE1C56793);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0DB9164A63017585BF93DEC0F34BE2DBE1C56793);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral9395CF055ECA0DDEF60CC9C426CC12027115F599);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9395CF055ECA0DDEF60CC9C426CC12027115F599);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_6, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_1 = L_6;
		V_2 = L_5;
		V_3 = 0;
		goto IL_0064;
	}

IL_002e:
	{
		U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E* L_7 = (U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		U3CU3Ec__DisplayClass19_1__ctor_m9B7A46B2D8D20847684B234D7CF4278C349E95F0(L_7, NULL);
		V_4 = L_7;
		U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E* L_8 = V_4;
		U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9* L_9 = V_0;
		NullCheck(L_8);
		L_8->___CSU24U3CU3E8__locals1_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___CSU24U3CU3E8__locals1_1), (void*)L_9);
		U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E* L_10 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_2;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		L_10->___pattern_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___pattern_0), (void*)L_14);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ___basePaths1;
		U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E* L_17 = V_4;
		Func_2_tF9905F052EF12704501D5B272E965D9B1311A014* L_18 = (Func_2_tF9905F052EF12704501D5B272E965D9B1311A014*)il2cpp_codegen_object_new(Func_2_tF9905F052EF12704501D5B272E965D9B1311A014_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_2__ctor_m4A9B7DC847F99DB2FD0BA764145147086C2247A4(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass19_1_U3CgetAssemblyFilesU3Eb__0_m9743F6096B930E5E3AD4E9257E4C5618726D0401_RuntimeMethod_var), NULL);
		RuntimeObject* L_19;
		L_19 = Enumerable_SelectMany_TisString_t_TisString_t_mBA9B69398AD8146D692B7978C87C27DBFD4B3AA5((RuntimeObject*)L_16, L_18, Enumerable_SelectMany_TisString_t_TisString_t_mBA9B69398AD8146D692B7978C87C27DBFD4B3AA5_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_15, L_19, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0064:
	{
		int32_t L_21 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_2;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_002e;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = V_1;
		NullCheck(L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24;
		L_24 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_23, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		return L_24;
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
// System.Void DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mBA42A29FE2382D528F7E7FB7D4FA2E4D2CD45758 (U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9* __this, const RuntimeMethod* method) 
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
// System.Void DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_1__ctor_m9B7A46B2D8D20847684B234D7CF4278C349E95F0 (U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> DesperateDevs.Utils.AssemblyResolver/<>c__DisplayClass19_1::<getAssemblyFiles>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass19_1_U3CgetAssemblyFilesU3Eb__0_m9743F6096B930E5E3AD4E9257E4C5618726D0401 (U3CU3Ec__DisplayClass19_1_t791F0B4B396B259644AC47FEBCC5F9292BC4063E* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		String_t* L_0 = ___s0;
		String_t* L_1 = __this->___pattern_0;
		U3CU3Ec__DisplayClass19_0_t0A9B54597E45B48ED59BD03F7CFD623A6F75F5F9* L_2 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_2);
		bool L_3 = L_2->___allDirectories_0;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0018:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Directory_GetFiles_mAD2C2FCFE204E9D7A8933C93A813E77573CD141B(G_B3_2, G_B3_1, G_B3_0, NULL);
		return (RuntimeObject*)L_4;
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
// System.Void DesperateDevs.Utils.AttributeInfo::.ctor(System.Object,System.Collections.Generic.List`1<DesperateDevs.Utils.PublicMemberInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeInfo__ctor_mDB458AF110625BDED17C781108DB2AA6455D959C (AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2* __this, RuntimeObject* ___attribute0, List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* ___memberInfos1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___attribute0;
		__this->___attribute_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attribute_0), (void*)L_0);
		List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* L_1 = ___memberInfos1;
		__this->___memberInfos_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___memberInfos_1), (void*)L_1);
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
// System.Void DesperateDevs.Utils.PublicMemberInfo::.ctor(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicMemberInfo__ctor_m3ACABA31FF6585C721043F53F1940F9651CDFDF6 (PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* __this, FieldInfo_t* ___info0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FieldInfo_t* L_0 = ___info0;
		__this->____fieldInfo_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fieldInfo_3), (void*)L_0);
		FieldInfo_t* L_1 = __this->____fieldInfo_3;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_1);
		__this->___type_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_2);
		FieldInfo_t* L_3 = __this->____fieldInfo_3;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		__this->___name_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_4);
		FieldInfo_t* L_5 = __this->____fieldInfo_3;
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_5, (bool)0);
		AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC* L_7;
		L_7 = PublicMemberInfo_getAttributes_m8E61D0B5E47B9CA1A50AF3D4A967341DE3751224(L_6, NULL);
		__this->___attributes_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attributes_2), (void*)L_7);
		return;
	}
}
// System.Void DesperateDevs.Utils.PublicMemberInfo::.ctor(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicMemberInfo__ctor_m5C6C7A66D543239A67C6C0C145D29A801CFB7A89 (PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* __this, PropertyInfo_t* ___info0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		PropertyInfo_t* L_0 = ___info0;
		__this->____propertyInfo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyInfo_4), (void*)L_0);
		PropertyInfo_t* L_1 = __this->____propertyInfo_4;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_1);
		__this->___type_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_2);
		PropertyInfo_t* L_3 = __this->____propertyInfo_4;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		__this->___name_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_4);
		PropertyInfo_t* L_5 = __this->____propertyInfo_4;
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_5, (bool)0);
		AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC* L_7;
		L_7 = PublicMemberInfo_getAttributes_m8E61D0B5E47B9CA1A50AF3D4A967341DE3751224(L_6, NULL);
		__this->___attributes_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attributes_2), (void*)L_7);
		return;
	}
}
// System.Void DesperateDevs.Utils.PublicMemberInfo::.ctor(System.Type,System.String,DesperateDevs.Utils.AttributeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicMemberInfo__ctor_m9C66615B0072A8179399B7AFB6B97B9E9BE566AF (PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* __this, Type_t* ___type0, String_t* ___name1, AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC* ___attributes2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Type_t* L_0 = ___type0;
		__this->___type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_0);
		String_t* L_1 = ___name1;
		__this->___name_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_1);
		AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC* L_2 = ___attributes2;
		__this->___attributes_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attributes_2), (void*)L_2);
		return;
	}
}
// System.Object DesperateDevs.Utils.PublicMemberInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PublicMemberInfo_GetValue_mF1961678960CAF1CD4F8BCEDC9CEF2FAD2E40E2F (PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->____fieldInfo_3;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		PropertyInfo_t* L_1 = __this->____propertyInfo_4;
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_1, L_2, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return L_3;
	}

IL_0016:
	{
		FieldInfo_t* L_4 = __this->____fieldInfo_3;
		RuntimeObject* L_5 = ___obj0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_4, L_5);
		return L_6;
	}
}
// System.Void DesperateDevs.Utils.PublicMemberInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicMemberInfo_SetValue_mDD2D029BD378BA6124DA9828BB6C47701299FD83 (PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->____fieldInfo_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		FieldInfo_t* L_1 = __this->____fieldInfo_3;
		RuntimeObject* L_2 = ___obj0;
		RuntimeObject* L_3 = ___value1;
		NullCheck(L_1);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_1, L_2, L_3, NULL);
		return;
	}

IL_0016:
	{
		PropertyInfo_t* L_4 = __this->____propertyInfo_4;
		RuntimeObject* L_5 = ___obj0;
		RuntimeObject* L_6 = ___value1;
		NullCheck(L_4);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(23 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_4, L_5, L_6, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return;
	}
}
// DesperateDevs.Utils.AttributeInfo[] DesperateDevs.Utils.PublicMemberInfo::getAttributes(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC* PublicMemberInfo_getAttributes_m8E61D0B5E47B9CA1A50AF3D4A967341DE3751224 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___attributes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___attributes0;
		NullCheck(L_0);
		AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC* L_1 = (AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC*)(AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC*)SZArrayNew(AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0029;
	}

IL_000d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___attributes0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = V_2;
		RuntimeObject* L_9 = V_2;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* L_11;
		L_11 = PublicMemberInfoExtension_GetPublicMemberInfos_mAD76C6CA84A71B0A79CDB39432062B10BE04B1D5(L_10, NULL);
		AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2* L_12 = (AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2*)il2cpp_codegen_object_new(AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		AttributeInfo__ctor_mDB458AF110625BDED17C781108DB2AA6455D959C(L_12, L_8, L_11, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_12);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (AttributeInfo_t18E5CF8395FFB54C1839989F636DD832A7DE81E2*)L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0029:
	{
		int32_t L_14 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = ___attributes0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		AttributeInfoU5BU5D_tA7FEB43F45BD1D9A816C0D349EB3C5029EEC51CC* L_16 = V_0;
		return L_16;
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
// System.Collections.Generic.List`1<DesperateDevs.Utils.PublicMemberInfo> DesperateDevs.Utils.PublicMemberInfoExtension::GetPublicMemberInfos(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* PublicMemberInfoExtension_GetPublicMemberInfos_mAD76C6CA84A71B0A79CDB39432062B10BE04B1D5 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE28BDDBD87DFF9DD672FFB81B9A03B97F247361E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0FCB31C97FA6E8742C15D72778B0F8062B6CD28F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_1 = NULL;
	List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	PropertyInfo_t* V_5 = NULL;
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_1;
		L_1 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(83 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)20));
		V_0 = L_1;
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_3;
		L_3 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(103 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_2, ((int32_t)20));
		V_1 = L_3;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_4 = V_0;
		NullCheck(L_4);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_5 = V_1;
		NullCheck(L_5);
		List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* L_6 = (List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1*)il2cpp_codegen_object_new(List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m0FCB31C97FA6E8742C15D72778B0F8062B6CD28F(L_6, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length)))), List_1__ctor_m0FCB31C97FA6E8742C15D72778B0F8062B6CD28F_RuntimeMethod_var);
		V_2 = L_6;
		V_3 = 0;
		goto IL_0035;
	}

IL_0023:
	{
		List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* L_7 = V_2;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		FieldInfo_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* L_12 = (PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF*)il2cpp_codegen_object_new(PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		PublicMemberInfo__ctor_m3ACABA31FF6585C721043F53F1940F9651CDFDF6(L_12, L_11, NULL);
		NullCheck(L_7);
		List_1_Add_mE28BDDBD87DFF9DD672FFB81B9A03B97F247361E_inline(L_7, L_12, List_1_Add_mE28BDDBD87DFF9DD672FFB81B9A03B97F247361E_RuntimeMethod_var);
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0035:
	{
		int32_t L_14 = V_3;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		V_4 = 0;
		goto IL_0075;
	}

IL_0040:
	{
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_16 = V_1;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		PropertyInfo_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		PropertyInfo_t* L_20 = V_5;
		NullCheck(L_20);
		bool L_21;
		L_21 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_20);
		if (!L_21)
		{
			goto IL_006f;
		}
	}
	{
		PropertyInfo_t* L_22 = V_5;
		NullCheck(L_22);
		bool L_23;
		L_23 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_22);
		if (!L_23)
		{
			goto IL_006f;
		}
	}
	{
		PropertyInfo_t* L_24 = V_5;
		NullCheck(L_24);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_25;
		L_25 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_24);
		NullCheck(L_25);
		if ((((RuntimeArray*)L_25)->max_length))
		{
			goto IL_006f;
		}
	}
	{
		List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* L_26 = V_2;
		PropertyInfo_t* L_27 = V_5;
		PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* L_28 = (PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF*)il2cpp_codegen_object_new(PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		PublicMemberInfo__ctor_m5C6C7A66D543239A67C6C0C145D29A801CFB7A89(L_28, L_27, NULL);
		NullCheck(L_26);
		List_1_Add_mE28BDDBD87DFF9DD672FFB81B9A03B97F247361E_inline(L_26, L_28, List_1_Add_mE28BDDBD87DFF9DD672FFB81B9A03B97F247361E_RuntimeMethod_var);
	}

IL_006f:
	{
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0075:
	{
		int32_t L_30 = V_4;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_31 = V_1;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0040;
		}
	}
	{
		List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* L_32 = V_2;
		return L_32;
	}
}
// System.Object DesperateDevs.Utils.PublicMemberInfoExtension::PublicMemberClone(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PublicMemberInfoExtension_PublicMemberClone_m321011F7CA06286F80ABB5CA968F34F177073A92 (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___obj0;
		RuntimeObject* L_4 = V_0;
		PublicMemberInfoExtension_CopyPublicMemberValues_m06325ECB4FA659EFF5F3FA6E91DF2E06BE49BCFE(L_3, L_4, NULL);
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Void DesperateDevs.Utils.PublicMemberInfoExtension::CopyPublicMemberValues(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicMemberInfoExtension_CopyPublicMemberValues_m06325ECB4FA659EFF5F3FA6E91DF2E06BE49BCFE (RuntimeObject* ___source0, RuntimeObject* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6BAC954925EB3A27490794D696C9BB7EA17F0433_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCBFD30731B24B473F82DC26EAFAF0D23EC9DB470_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* V_0 = NULL;
	int32_t V_1 = 0;
	PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* L_2;
		L_2 = PublicMemberInfoExtension_GetPublicMemberInfos_mAD76C6CA84A71B0A79CDB39432062B10BE04B1D5(L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002a;
	}

IL_0010:
	{
		List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* L_5;
		L_5 = List_1_get_Item_mCBFD30731B24B473F82DC26EAFAF0D23EC9DB470(L_3, L_4, List_1_get_Item_mCBFD30731B24B473F82DC26EAFAF0D23EC9DB470_RuntimeMethod_var);
		V_2 = L_5;
		PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* L_6 = V_2;
		RuntimeObject* L_7 = ___target1;
		PublicMemberInfo_t16B7783F60D3C8F042AE4FDE20824D9C27BBABBF* L_8 = V_2;
		RuntimeObject* L_9 = ___source0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = PublicMemberInfo_GetValue_mF1961678960CAF1CD4F8BCEDC9CEF2FAD2E40E2F(L_8, L_9, NULL);
		NullCheck(L_6);
		PublicMemberInfo_SetValue_mDD2D029BD378BA6124DA9828BB6C47701299FD83(L_6, L_7, L_10, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002a:
	{
		int32_t L_12 = V_1;
		List_1_t8644DEF97CE26C310BF5E8711B9C9A453047FAE1* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m6BAC954925EB3A27490794D696C9BB7EA17F0433_inline(L_13, List_1_get_Count_m6BAC954925EB3A27490794D696C9BB7EA17F0433_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ReflectionTypeLoadException_get_Types_mEA33478930C629147E252D53230510BE0F4AD45E_inline (ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475* __this, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___U3CTypesU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResolveEventArgs_get_Name_mA7AB7570CBF57D5C3FF8D478BF59A9A08387CC6A_inline (ResolveEventArgs_t3768D40A0CC1EA56714B75722FDC7C8D49CABCB0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
