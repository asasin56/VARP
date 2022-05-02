#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Entitas.Unity.EntityLink
struct EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Entitas.IEntity
struct IEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral1CF797B7868014BC5238E881F333950CB023C35C;
IL2CPP_EXTERN_C String_t* _stringLiteral3D69FC31AAFC500A23DC9B301E22EA0FC280DC03;
IL2CPP_EXTERN_C String_t* _stringLiteral709E8039F1CB9A6C13FA1EDE7B34ABB80C0A512B;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB96DDABF93425971EFBCB46DB374FC67D8C00538;
IL2CPP_EXTERN_C String_t* _stringLiteralC6A7E939566F1BDE161E6194D4BA83573FB69ACA;
IL2CPP_EXTERN_C const RuntimeMethod* EntityLink_Link_m05E79102576CAFA06AA69E06BCDFD0E4B030296A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EntityLink_Unlink_m37F6C169A602FFD85C7E138A00F35A3272E7187E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086_m3820AB5F90C29F721217B482E176A228E3D020F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086_mF5C60654BA6BF9846076013FA1D9E2D7069AD1AE_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t301C1855CD20B3BE02054E79CD6DB92269FE7481 
{
};
struct Il2CppArrayBounds;

// Entitas.Unity.EntityLinkExtension
struct EntityLinkExtension_t0646ACE55C68DDBF97E614DA15FA51ABA4EA3055  : public RuntimeObject
{
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Entitas.Unity.EntityLink
struct EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Entitas.IEntity Entitas.Unity.EntityLink::_entity
	RuntimeObject* ____entity_4;
	// System.Boolean Entitas.Unity.EntityLink::_applicationIsQuitting
	bool ____applicationIsQuitting_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8 (RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Entitas.Unity.EntityLink>()
inline EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* GameObject_GetComponent_TisEntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086_mF5C60654BA6BF9846076013FA1D9E2D7069AD1AE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// Entitas.Unity.EntityLink Entitas.Unity.EntityLinkExtension::GetEntityLink(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* EntityLinkExtension_GetEntityLink_mAE3C81D4F512418D293529C119F925E4827E77FC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Entitas.Unity.EntityLink>()
inline EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* GameObject_AddComponent_TisEntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086_m3820AB5F90C29F721217B482E176A228E3D020F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Entitas.Unity.EntityLink::Link(Entitas.IEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityLink_Link_m05E79102576CAFA06AA69E06BCDFD0E4B030296A (EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* __this, RuntimeObject* ___entity0, const RuntimeMethod* method) ;
// System.Void Entitas.Unity.EntityLink::Unlink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityLink_Unlink_m37F6C169A602FFD85C7E138A00F35A3272E7187E (EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* __this, const RuntimeMethod* method) ;
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
// Entitas.IEntity Entitas.Unity.EntityLink::get_entity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EntityLink_get_entity_m2217AC1EF9A01466D91FDA2A9B054DB17AD1A7AE (EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____entity_4;
		return L_0;
	}
}
// System.Void Entitas.Unity.EntityLink::Link(Entitas.IEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityLink_Link_m05E79102576CAFA06AA69E06BCDFD0E4B030296A (EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* __this, RuntimeObject* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____entity_4;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_1 = __this->____entity_4;
		String_t* L_2;
		L_2 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB96DDABF93425971EFBCB46DB374FC67D8C00538)), L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)), NULL);
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntityLink_Link_m05E79102576CAFA06AA69E06BCDFD0E4B030296A_RuntimeMethod_var)));
	}

IL_0023:
	{
		RuntimeObject* L_4 = ___entity0;
		__this->____entity_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entity_4), (void*)L_4);
		RuntimeObject* L_5 = __this->____entity_4;
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Entitas.IAERC::Retain(System.Object) */, IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var, L_5, __this);
		return;
	}
}
// System.Void Entitas.Unity.EntityLink::Unlink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityLink_Unlink_m37F6C169A602FFD85C7E138A00F35A3272E7187E (EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____entity_4;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral709E8039F1CB9A6C13FA1EDE7B34ABB80C0A512B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntityLink_Unlink_m37F6C169A602FFD85C7E138A00F35A3272E7187E_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____entity_4;
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void Entitas.IAERC::Release(System.Object) */, IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var, L_2, __this);
		__this->____entity_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entity_4), (void*)(RuntimeObject*)NULL);
		return;
	}
}
// System.Void Entitas.Unity.EntityLink::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityLink_OnDestroy_m9234F7F18A7C844B52257AF9E89CB91A9F06729D (EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF797B7868014BC5238E881F333950CB023C35C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D69FC31AAFC500A23DC9B301E22EA0FC280DC03);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____applicationIsQuitting_5;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_1 = __this->____entity_4;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_2 = __this->____entity_4;
		String_t* L_3;
		L_3 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(_stringLiteral3D69FC31AAFC500A23DC9B301E22EA0FC280DC03, L_2, _stringLiteral1CF797B7868014BC5238E881F333950CB023C35C, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_3, NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void Entitas.Unity.EntityLink::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityLink_OnApplicationQuit_mD1EF7E09393231E844E07B0765B5A3A731D6BF16 (EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* __this, const RuntimeMethod* method) 
{
	{
		__this->____applicationIsQuitting_5 = (bool)1;
		return;
	}
}
// System.String Entitas.Unity.EntityLink::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntityLink_ToString_m9AFD89D9310125EEFB944360A1B938ABDAD3F731 (EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6A7E939566F1BDE161E6194D4BA83573FB69ACA);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralC6A7E939566F1BDE161E6194D4BA83573FB69ACA, L_1, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return L_2;
	}
}
// System.Void Entitas.Unity.EntityLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityLink__ctor_m25EB01B2C79943AF526CBBF12D0028BA6B7962DC (EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* __this, const RuntimeMethod* method) 
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
// Entitas.Unity.EntityLink Entitas.Unity.EntityLinkExtension::GetEntityLink(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* EntityLinkExtension_GetEntityLink_mAE3C81D4F512418D293529C119F925E4827E77FC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086_mF5C60654BA6BF9846076013FA1D9E2D7069AD1AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		NullCheck(L_0);
		EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* L_1;
		L_1 = GameObject_GetComponent_TisEntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086_mF5C60654BA6BF9846076013FA1D9E2D7069AD1AE(L_0, GameObject_GetComponent_TisEntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086_mF5C60654BA6BF9846076013FA1D9E2D7069AD1AE_RuntimeMethod_var);
		return L_1;
	}
}
// Entitas.Unity.EntityLink Entitas.Unity.EntityLinkExtension::Link(UnityEngine.GameObject,Entitas.IEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* EntityLinkExtension_Link_mE31013138F49936908ACA68C6B83F95B52A947E6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, RuntimeObject* ___entity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086_m3820AB5F90C29F721217B482E176A228E3D020F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* L_1;
		L_1 = EntityLinkExtension_GetEntityLink_mAE3C81D4F512418D293529C119F925E4827E77FC(L_0, NULL);
		V_0 = L_1;
		EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___gameObject0;
		NullCheck(L_4);
		EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* L_5;
		L_5 = GameObject_AddComponent_TisEntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086_m3820AB5F90C29F721217B482E176A228E3D020F9(L_4, GameObject_AddComponent_TisEntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086_m3820AB5F90C29F721217B482E176A228E3D020F9_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0017:
	{
		EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* L_6 = V_0;
		RuntimeObject* L_7 = ___entity1;
		NullCheck(L_6);
		EntityLink_Link_m05E79102576CAFA06AA69E06BCDFD0E4B030296A(L_6, L_7, NULL);
		EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* L_8 = V_0;
		return L_8;
	}
}
// System.Void Entitas.Unity.EntityLinkExtension::Unlink(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityLinkExtension_Unlink_mBECFAC0C88572979191C74C5100A20B06C12F4A1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		EntityLink_t6FA796CF9B996EFB781A02A97F251749BAE86086* L_1;
		L_1 = EntityLinkExtension_GetEntityLink_mAE3C81D4F512418D293529C119F925E4827E77FC(L_0, NULL);
		NullCheck(L_1);
		EntityLink_Unlink_m37F6C169A602FFD85C7E138A00F35A3272E7187E(L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
