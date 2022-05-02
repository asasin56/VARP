#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,DesperateDevs.Logging.Logger>
struct Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,DesperateDevs.Logging.Logger>
struct KeyCollection_t1BDE81F0B79C5256BA5EEB38D0CC0D060ACC9398;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,DesperateDevs.Logging.Logger>
struct ValueCollection_t48B02BD2983965E6788D345EA305C158E3CF23AF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,DesperateDevs.Logging.Logger>[]
struct EntryU5BU5D_tAF94EFCF7DB6E21533542FC57EF4182D9BB2A5F8;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// DesperateDevs.Logging.FablAssertException
struct FablAssertException_t8E5413E461403CEDF01802A5702FE12A9D9864F6;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// DesperateDevs.Logging.LogDelegate
struct LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C;
// DesperateDevs.Logging.Logger
struct Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FablAssertException_t8E5413E461403CEDF01802A5702FE12A9D9864F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogLevel_t09A020427B95E79BC60AFA4C0D500720C6550C6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralD6CA75AD2C6C40CC40FBA23ABA09565D8A6EC191;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD8CF334D6AF4834019BEFDE2077EF8FED07C87F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m073BA5674154239B2C7B1076E134BD9B63C64BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m60FEA240B8BFB4BD6130D6C42AA429630FBAE142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE3920382B8CB67B99238DA0701BE2B27196D73A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m2188878D3E393EFEA5F98E92DBD775C96B6499FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1C5E6771C1B7FE6B8B6B13C5867E1748BD02F4E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m62FC7530B8B15C99D4E18570572C49796DB0CB90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m44E606EF2E147630B7425D818074F5555215049C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Logger_Assert_m5E4D92CADFEDC77E6CEA3F7B4E947761DDE0E9E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mA8EAE0CD228322A42AAF585B13FB5E88274FEC5A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t81D4AEFFF323413C947CC809F4B0F603BD0FA029 
{
};

// System.Collections.Generic.Dictionary`2<System.String,DesperateDevs.Logging.Logger>
struct Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tAF94EFCF7DB6E21533542FC57EF4182D9BB2A5F8* ____entries_1;
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
	KeyCollection_t1BDE81F0B79C5256BA5EEB38D0CC0D060ACC9398* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t48B02BD2983965E6788D345EA305C158E3CF23AF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,DesperateDevs.Logging.Logger>
struct ValueCollection_t48B02BD2983965E6788D345EA305C158E3CF23AF  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,DesperateDevs.Logging.Logger>
struct Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ____currentValue_3;
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

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
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

// DesperateDevs.Logging.LogLevel
struct LogLevel_t09A020427B95E79BC60AFA4C0D500720C6550C6B 
{
	// System.Int32 DesperateDevs.Logging.LogLevel::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// DesperateDevs.Logging.FablAssertException
struct FablAssertException_t8E5413E461403CEDF01802A5702FE12A9D9864F6  : public Exception_t
{
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

// DesperateDevs.Logging.fabl
struct fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F  : public RuntimeObject
{
};

struct fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields
{
	// DesperateDevs.Logging.LogLevel DesperateDevs.Logging.fabl::_globalLogLevel
	int32_t ____globalLogLevel_0;
	// DesperateDevs.Logging.LogDelegate DesperateDevs.Logging.fabl::_appenders
	LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* ____appenders_1;
	// System.Collections.Generic.Dictionary`2<System.String,DesperateDevs.Logging.Logger> DesperateDevs.Logging.fabl::_loggers
	Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* ____loggers_2;
	// DesperateDevs.Logging.Logger DesperateDevs.Logging.fabl::_logger
	Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ____logger_3;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// DesperateDevs.Logging.LogDelegate
struct LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,DesperateDevs.Logging.Logger>::get_Values()
inline ValueCollection_t48B02BD2983965E6788D345EA305C158E3CF23AF* Dictionary_2_get_Values_m2188878D3E393EFEA5F98E92DBD775C96B6499FD (Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t48B02BD2983965E6788D345EA305C158E3CF23AF* (*) (Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,DesperateDevs.Logging.Logger>::GetEnumerator()
inline Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56 ValueCollection_GetEnumerator_mA8EAE0CD228322A42AAF585B13FB5E88274FEC5A (ValueCollection_t48B02BD2983965E6788D345EA305C158E3CF23AF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56 (*) (ValueCollection_t48B02BD2983965E6788D345EA305C158E3CF23AF*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,DesperateDevs.Logging.Logger>::Dispose()
inline void Enumerator_Dispose_m1C5E6771C1B7FE6B8B6B13C5867E1748BD02F4E0 (Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,DesperateDevs.Logging.Logger>::get_Current()
inline Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* Enumerator_get_Current_m44E606EF2E147630B7425D818074F5555215049C_inline (Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56* __this, const RuntimeMethod* method)
{
	return ((  Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* (*) (Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Void DesperateDevs.Logging.Logger::set_logLevel(DesperateDevs.Logging.LogLevel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Logger_set_logLevel_m102085FE974F49AAA15B576724DDBCBA21700AF8_inline (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,DesperateDevs.Logging.Logger>::MoveNext()
inline bool Enumerator_MoveNext_m62FC7530B8B15C99D4E18570572C49796DB0CB90 (Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Void DesperateDevs.Logging.Logger::Trace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Trace_mEB4F83F673B7913051684E3CD33D0E5177120B1E (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.Logger::Debug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Debug_m74279B35BC40C44C2630807A72257D8531281328 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.Logger::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Info_mB5BFC9F1D451200C5A00EEF26917DD890037F822 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.Logger::Warn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Warn_m908865A74AA0A85ADAB7E464E175FAFCA14B1AF9 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.Logger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Error_mD276DE22144DAF3E7D238FFE1F348031C4C9BC66 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.Logger::Fatal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Fatal_m4C7B680747928A6FC32149105D4BF6CCC8F8E984 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.Logger::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Assert_m5E4D92CADFEDC77E6CEA3F7B4E947761DDE0E9E1 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, bool ___condition0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.Logger::add_OnLog(DesperateDevs.Logging.LogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_add_OnLog_mD4DA5D276A7DB776AA66BD2945E3EA0BB97AFF07 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.Logger::remove_OnLog(DesperateDevs.Logging.LogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_remove_OnLog_m70DF40273F08AB726F53DB2E8D81AB1EFDCC93BC (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* ___value0, const RuntimeMethod* method) ;
// DesperateDevs.Logging.Logger DesperateDevs.Logging.fabl::GetLogger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* fabl_GetLogger_m7F0E6B05CDAB90F50E2652E0AE591DF4680EBB55 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,DesperateDevs.Logging.Logger>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m60FEA240B8BFB4BD6130D6C42AA429630FBAE142 (Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* __this, String_t* ___key0, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E*, String_t*, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void DesperateDevs.Logging.Logger::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_m1872C99334EEEE6434003BDE2FC1E603D971F01E (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___name0, const RuntimeMethod* method) ;
// DesperateDevs.Logging.LogLevel DesperateDevs.Logging.fabl::get_globalLogLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t fabl_get_globalLogLevel_m1F2458D54D39DD3FB7DAD83BF97AD9243CD56F18_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,DesperateDevs.Logging.Logger>::Add(TKey,TValue)
inline void Dictionary_2_Add_mD8CF334D6AF4834019BEFDE2077EF8FED07C87F4 (Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* __this, String_t* ___key0, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E*, String_t*, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,DesperateDevs.Logging.Logger>::Clear()
inline void Dictionary_2_Clear_m073BA5674154239B2C7B1076E134BD9B63C64BA8 (Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,DesperateDevs.Logging.Logger>::.ctor()
inline void Dictionary_2__ctor_mE3920382B8CB67B99238DA0701BE2B27196D73A4 (Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.Logger::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Logger_set_name_mD26B6A83EEABE195FD244D1B2FFC516A8286F438_inline (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.Logger::log(DesperateDevs.Logging.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_log_m8BCD19B9F15248033991265E7487E01AC3574DC6 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, int32_t ___logLvl0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.FablAssertException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FablAssertException__ctor_mA4FC13432E59EDCDA26C4B82DD54FF54DD90D629 (FablAssertException_t8E5413E461403CEDF01802A5702FE12A9D9864F6* __this, String_t* ___message0, const RuntimeMethod* method) ;
// DesperateDevs.Logging.LogLevel DesperateDevs.Logging.Logger::get_logLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Logger_get_logLevel_mC2747145B91E0B9F436C992FE1B1179BF63F00F3_inline (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, const RuntimeMethod* method) ;
// System.Void DesperateDevs.Logging.LogDelegate::Invoke(DesperateDevs.Logging.Logger,DesperateDevs.Logging.LogLevel,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_inline (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
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
// DesperateDevs.Logging.LogLevel DesperateDevs.Logging.fabl::get_globalLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t fabl_get_globalLogLevel_m1F2458D54D39DD3FB7DAD83BF97AD9243CD56F18 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		int32_t L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____globalLogLevel_0;
		return L_0;
	}
}
// System.Void DesperateDevs.Logging.fabl::set_globalLogLevel(DesperateDevs.Logging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_set_globalLogLevel_m88BFCCE380F2564D476FD5694E1DFD8189F10CC2 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m2188878D3E393EFEA5F98E92DBD775C96B6499FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1C5E6771C1B7FE6B8B6B13C5867E1748BD02F4E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m62FC7530B8B15C99D4E18570572C49796DB0CB90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m44E606EF2E147630B7425D818074F5555215049C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mA8EAE0CD228322A42AAF585B13FB5E88274FEC5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____globalLogLevel_0 = L_0;
		Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* L_1 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____loggers_2;
		NullCheck(L_1);
		ValueCollection_t48B02BD2983965E6788D345EA305C158E3CF23AF* L_2;
		L_2 = Dictionary_2_get_Values_m2188878D3E393EFEA5F98E92DBD775C96B6499FD(L_1, Dictionary_2_get_Values_m2188878D3E393EFEA5F98E92DBD775C96B6499FD_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56 L_3;
		L_3 = ValueCollection_GetEnumerator_mA8EAE0CD228322A42AAF585B13FB5E88274FEC5A(L_2, ValueCollection_GetEnumerator_mA8EAE0CD228322A42AAF585B13FB5E88274FEC5A_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1C5E6771C1B7FE6B8B6B13C5867E1748BD02F4E0((&V_0), Enumerator_Dispose_m1C5E6771C1B7FE6B8B6B13C5867E1748BD02F4E0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_0018_1:
			{
				Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_4;
				L_4 = Enumerator_get_Current_m44E606EF2E147630B7425D818074F5555215049C_inline((&V_0), Enumerator_get_Current_m44E606EF2E147630B7425D818074F5555215049C_RuntimeMethod_var);
				int32_t L_5 = ___value0;
				NullCheck(L_4);
				Logger_set_logLevel_m102085FE974F49AAA15B576724DDBCBA21700AF8_inline(L_4, L_5, NULL);
			}

IL_0025_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_m62FC7530B8B15C99D4E18570572C49796DB0CB90((&V_0), Enumerator_MoveNext_m62FC7530B8B15C99D4E18570572C49796DB0CB90_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		return;
	}
}
// System.Void DesperateDevs.Logging.fabl::Trace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_Trace_mC5D9F6E1F820321B53226625102D2687579B20DD (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____logger_3;
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		Logger_Trace_mEB4F83F673B7913051684E3CD33D0E5177120B1E(L_0, L_1, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.fabl::Debug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_Debug_mC173972E61372D0AAA7766DECD3EE24398FD7ADB (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____logger_3;
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		Logger_Debug_m74279B35BC40C44C2630807A72257D8531281328(L_0, L_1, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.fabl::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_Info_mC3C3C7A56E66F7B5D75D880146CF8562EAEC6033 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____logger_3;
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		Logger_Info_mB5BFC9F1D451200C5A00EEF26917DD890037F822(L_0, L_1, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.fabl::Warn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_Warn_m3777F32C02A4C3F119553B8B6B126E97B8BEFC85 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____logger_3;
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		Logger_Warn_m908865A74AA0A85ADAB7E464E175FAFCA14B1AF9(L_0, L_1, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.fabl::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_Error_m04A6DB49C60ED71D28D16F5DEBF4BA582EB7F92C (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____logger_3;
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		Logger_Error_mD276DE22144DAF3E7D238FFE1F348031C4C9BC66(L_0, L_1, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.fabl::Fatal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_Fatal_m1EF8CA647AB386E33E5E38987BACC990E7382714 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____logger_3;
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		Logger_Fatal_m4C7B680747928A6FC32149105D4BF6CCC8F8E984(L_0, L_1, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.fabl::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_Assert_m4C0F8D3BEABAFB85A0B3DA0F8D00B1DBAB8B7231 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____logger_3;
		bool L_1 = ___condition0;
		String_t* L_2 = ___message1;
		NullCheck(L_0);
		Logger_Assert_m5E4D92CADFEDC77E6CEA3F7B4E947761DDE0E9E1(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.fabl::AddAppender(DesperateDevs.Logging.LogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_AddAppender_m59CF68D213A066222CC7EB58EB7039D7A85B8096 (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* ___appender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m2188878D3E393EFEA5F98E92DBD775C96B6499FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1C5E6771C1B7FE6B8B6B13C5867E1748BD02F4E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m62FC7530B8B15C99D4E18570572C49796DB0CB90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m44E606EF2E147630B7425D818074F5555215049C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mA8EAE0CD228322A42AAF585B13FB5E88274FEC5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____appenders_1;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_1 = ___appender0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____appenders_1 = ((LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)CastclassSealed((RuntimeObject*)L_2, LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____appenders_1), (void*)((LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)CastclassSealed((RuntimeObject*)L_2, LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C_il2cpp_TypeInfo_var)));
		Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* L_3 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____loggers_2;
		NullCheck(L_3);
		ValueCollection_t48B02BD2983965E6788D345EA305C158E3CF23AF* L_4;
		L_4 = Dictionary_2_get_Values_m2188878D3E393EFEA5F98E92DBD775C96B6499FD(L_3, Dictionary_2_get_Values_m2188878D3E393EFEA5F98E92DBD775C96B6499FD_RuntimeMethod_var);
		NullCheck(L_4);
		Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56 L_5;
		L_5 = ValueCollection_GetEnumerator_mA8EAE0CD228322A42AAF585B13FB5E88274FEC5A(L_4, ValueCollection_GetEnumerator_mA8EAE0CD228322A42AAF585B13FB5E88274FEC5A_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1C5E6771C1B7FE6B8B6B13C5867E1748BD02F4E0((&V_0), Enumerator_Dispose_m1C5E6771C1B7FE6B8B6B13C5867E1748BD02F4E0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0034_1;
			}

IL_0027_1:
			{
				Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_6;
				L_6 = Enumerator_get_Current_m44E606EF2E147630B7425D818074F5555215049C_inline((&V_0), Enumerator_get_Current_m44E606EF2E147630B7425D818074F5555215049C_RuntimeMethod_var);
				LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_7 = ___appender0;
				NullCheck(L_6);
				Logger_add_OnLog_mD4DA5D276A7DB776AA66BD2945E3EA0BB97AFF07(L_6, L_7, NULL);
			}

IL_0034_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m62FC7530B8B15C99D4E18570572C49796DB0CB90((&V_0), Enumerator_MoveNext_m62FC7530B8B15C99D4E18570572C49796DB0CB90_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		return;
	}
}
// System.Void DesperateDevs.Logging.fabl::RemoveAppender(DesperateDevs.Logging.LogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_RemoveAppender_m2041D33E55A4FAE8733E50ACCC03EA414BE2E546 (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* ___appender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m2188878D3E393EFEA5F98E92DBD775C96B6499FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1C5E6771C1B7FE6B8B6B13C5867E1748BD02F4E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m62FC7530B8B15C99D4E18570572C49796DB0CB90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m44E606EF2E147630B7425D818074F5555215049C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mA8EAE0CD228322A42AAF585B13FB5E88274FEC5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____appenders_1;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_1 = ___appender0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____appenders_1 = ((LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)CastclassSealed((RuntimeObject*)L_2, LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____appenders_1), (void*)((LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)CastclassSealed((RuntimeObject*)L_2, LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C_il2cpp_TypeInfo_var)));
		Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* L_3 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____loggers_2;
		NullCheck(L_3);
		ValueCollection_t48B02BD2983965E6788D345EA305C158E3CF23AF* L_4;
		L_4 = Dictionary_2_get_Values_m2188878D3E393EFEA5F98E92DBD775C96B6499FD(L_3, Dictionary_2_get_Values_m2188878D3E393EFEA5F98E92DBD775C96B6499FD_RuntimeMethod_var);
		NullCheck(L_4);
		Enumerator_tAA1354CEA4E418847B840848A82A93D202D6AB56 L_5;
		L_5 = ValueCollection_GetEnumerator_mA8EAE0CD228322A42AAF585B13FB5E88274FEC5A(L_4, ValueCollection_GetEnumerator_mA8EAE0CD228322A42AAF585B13FB5E88274FEC5A_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1C5E6771C1B7FE6B8B6B13C5867E1748BD02F4E0((&V_0), Enumerator_Dispose_m1C5E6771C1B7FE6B8B6B13C5867E1748BD02F4E0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0034_1;
			}

IL_0027_1:
			{
				Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_6;
				L_6 = Enumerator_get_Current_m44E606EF2E147630B7425D818074F5555215049C_inline((&V_0), Enumerator_get_Current_m44E606EF2E147630B7425D818074F5555215049C_RuntimeMethod_var);
				LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_7 = ___appender0;
				NullCheck(L_6);
				Logger_remove_OnLog_m70DF40273F08AB726F53DB2E8D81AB1EFDCC93BC(L_6, L_7, NULL);
			}

IL_0034_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m62FC7530B8B15C99D4E18570572C49796DB0CB90((&V_0), Enumerator_MoveNext_m62FC7530B8B15C99D4E18570572C49796DB0CB90_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		return;
	}
}
// DesperateDevs.Logging.Logger DesperateDevs.Logging.fabl::GetLogger(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* fabl_GetLogger_m0BE440A70BB6121C71D4C5242BAA4B0C7B4E7783 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_2;
		L_2 = fabl_GetLogger_m7F0E6B05CDAB90F50E2652E0AE591DF4680EBB55(L_1, NULL);
		return L_2;
	}
}
// DesperateDevs.Logging.Logger DesperateDevs.Logging.fabl::GetLogger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* fabl_GetLogger_m7F0E6B05CDAB90F50E2652E0AE591DF4680EBB55 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD8CF334D6AF4834019BEFDE2077EF8FED07C87F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m60FEA240B8BFB4BD6130D6C42AA429630FBAE142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____loggers_2;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m60FEA240B8BFB4BD6130D6C42AA429630FBAE142(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m60FEA240B8BFB4BD6130D6C42AA429630FBAE142_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_3 = ___name0;
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_4 = (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80*)il2cpp_codegen_object_new(Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Logger__ctor_m1872C99334EEEE6434003BDE2FC1E603D971F01E(L_4, L_3, NULL);
		V_0 = L_4;
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = fabl_get_globalLogLevel_m1F2458D54D39DD3FB7DAD83BF97AD9243CD56F18_inline(NULL);
		NullCheck(L_5);
		Logger_set_logLevel_m102085FE974F49AAA15B576724DDBCBA21700AF8_inline(L_5, L_6, NULL);
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_7 = V_0;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_8 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____appenders_1;
		NullCheck(L_7);
		Logger_add_OnLog_mD4DA5D276A7DB776AA66BD2945E3EA0BB97AFF07(L_7, L_8, NULL);
		Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* L_9 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____loggers_2;
		String_t* L_10 = ___name0;
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_11 = V_0;
		NullCheck(L_9);
		Dictionary_2_Add_mD8CF334D6AF4834019BEFDE2077EF8FED07C87F4(L_9, L_10, L_11, Dictionary_2_Add_mD8CF334D6AF4834019BEFDE2077EF8FED07C87F4_RuntimeMethod_var);
	}

IL_0038:
	{
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_12 = V_0;
		return L_12;
	}
}
// System.Void DesperateDevs.Logging.fabl::ResetLoggers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_ResetLoggers_mB48E44525D5B06AC12C826383058B29D245D4ECC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m073BA5674154239B2C7B1076E134BD9B63C64BA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____loggers_2;
		NullCheck(L_0);
		Dictionary_2_Clear_m073BA5674154239B2C7B1076E134BD9B63C64BA8(L_0, Dictionary_2_Clear_m073BA5674154239B2C7B1076E134BD9B63C64BA8_RuntimeMethod_var);
		return;
	}
}
// System.Void DesperateDevs.Logging.fabl::ResetAppenders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl_ResetAppenders_mC75F99255037140C068334F031A405C9DB0FD2CE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____appenders_1 = (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____appenders_1), (void*)(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.fabl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fabl__cctor_m339C59B15B99541A4F49A4BDC318D841D6E1E7AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE3920382B8CB67B99238DA0701BE2B27196D73A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6CA75AD2C6C40CC40FBA23ABA09565D8A6EC191);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E* L_0 = (Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E*)il2cpp_codegen_object_new(Dictionary_2_tCC67BBE629B12E143CDFCA5906FD8AE429E47D8E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mE3920382B8CB67B99238DA0701BE2B27196D73A4(L_0, Dictionary_2__ctor_mE3920382B8CB67B99238DA0701BE2B27196D73A4_RuntimeMethod_var);
		((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____loggers_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____loggers_2), (void*)L_0);
		Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* L_1;
		L_1 = fabl_GetLogger_m7F0E6B05CDAB90F50E2652E0AE591DF4680EBB55(_stringLiteralD6CA75AD2C6C40CC40FBA23ABA09565D8A6EC191, NULL);
		((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____logger_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____logger_3), (void*)L_1);
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
void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_Multicast(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* currentDelegate = reinterpret_cast<LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___logger0, ___logLevel1, ___message2, method);
	}
}
void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_Open(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___logger0, ___logLevel1, ___message2, method);
}
void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_Closed(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___logger0, ___logLevel1, ___message2, method);
}
void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_OpenStaticInvoker(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___logger0, ___logLevel1, ___message2);
}
void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_ClosedStaticInvoker(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___logger0, ___logLevel1, ___message2);
}
void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_OpenVirtual(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method)
{
	VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___logger0, ___logLevel1, ___message2);
}
void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_OpenInterface(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method)
{
	InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___logger0, ___logLevel1, ___message2);
}
void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_OpenGenericVirtual(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(method, ___logger0, ___logLevel1, ___message2);
}
void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_OpenGenericInterface(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(method, ___logger0, ___logLevel1, ___message2);
}
// System.Void DesperateDevs.Logging.LogDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogDelegate__ctor_m10850527C23E2C03705492EEA80B6971F794138C (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_Closed;
	}
	else
	{
		bool isOpen = methodCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_Multicast;
}
// System.Void DesperateDevs.Logging.LogDelegate::Invoke(DesperateDevs.Logging.Logger,DesperateDevs.Logging.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293 (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___logger0, ___logLevel1, ___message2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DesperateDevs.Logging.LogDelegate::BeginInvoke(DesperateDevs.Logging.Logger,DesperateDevs.Logging.LogLevel,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogDelegate_BeginInvoke_m8107C35F38F37E742F41894E6689DDDC8EE012EF (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogLevel_t09A020427B95E79BC60AFA4C0D500720C6550C6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___logger0;
	__d_args[1] = Box(LogLevel_t09A020427B95E79BC60AFA4C0D500720C6550C6B_il2cpp_TypeInfo_var, &___logLevel1);
	__d_args[2] = ___message2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void DesperateDevs.Logging.LogDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogDelegate_EndInvoke_m7FFC805DD8BCB2800E4ED7D2802F5EA5DB901F46 (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DesperateDevs.Logging.Logger::add_OnLog(DesperateDevs.Logging.LogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_add_OnLog_mD4DA5D276A7DB776AA66BD2945E3EA0BB97AFF07 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* V_0 = NULL;
	LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* V_1 = NULL;
	LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* V_2 = NULL;
	{
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_0 = __this->___OnLog_0;
		V_0 = L_0;
	}

IL_0007:
	{
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_1 = V_0;
		V_1 = L_1;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_2 = V_1;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)CastclassSealed((RuntimeObject*)L_4, LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C_il2cpp_TypeInfo_var));
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C** L_5 = (&__this->___OnLog_0);
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_6 = V_2;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_7 = V_1;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_8;
		L_8 = InterlockedCompareExchangeImpl<LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*>(L_5, L_6, L_7);
		V_0 = L_8;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_9 = V_0;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_10 = V_1;
		if ((!(((RuntimeObject*)(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)L_9) == ((RuntimeObject*)(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DesperateDevs.Logging.Logger::remove_OnLog(DesperateDevs.Logging.LogDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_remove_OnLog_m70DF40273F08AB726F53DB2E8D81AB1EFDCC93BC (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* V_0 = NULL;
	LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* V_1 = NULL;
	LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* V_2 = NULL;
	{
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_0 = __this->___OnLog_0;
		V_0 = L_0;
	}

IL_0007:
	{
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_1 = V_0;
		V_1 = L_1;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_2 = V_1;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)CastclassSealed((RuntimeObject*)L_4, LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C_il2cpp_TypeInfo_var));
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C** L_5 = (&__this->___OnLog_0);
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_6 = V_2;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_7 = V_1;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_8;
		L_8 = InterlockedCompareExchangeImpl<LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*>(L_5, L_6, L_7);
		V_0 = L_8;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_9 = V_0;
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_10 = V_1;
		if ((!(((RuntimeObject*)(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)L_9) == ((RuntimeObject*)(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// DesperateDevs.Logging.LogLevel DesperateDevs.Logging.Logger::get_logLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Logger_get_logLevel_mC2747145B91E0B9F436C992FE1B1179BF63F00F3 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClogLevelU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void DesperateDevs.Logging.Logger::set_logLevel(DesperateDevs.Logging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_logLevel_m102085FE974F49AAA15B576724DDBCBA21700AF8 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3ClogLevelU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String DesperateDevs.Logging.Logger::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_get_name_m7C169D7921F28B20AB178B6B1D008BCF8FDAB040 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void DesperateDevs.Logging.Logger::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_name_mD26B6A83EEABE195FD244D1B2FFC516A8286F438 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void DesperateDevs.Logging.Logger::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_m1872C99334EEEE6434003BDE2FC1E603D971F01E (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		Logger_set_name_mD26B6A83EEABE195FD244D1B2FFC516A8286F438_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.Logger::Trace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Trace_mEB4F83F673B7913051684E3CD33D0E5177120B1E (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Logger_log_m8BCD19B9F15248033991265E7487E01AC3574DC6(__this, 1, L_0, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.Logger::Debug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Debug_m74279B35BC40C44C2630807A72257D8531281328 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Logger_log_m8BCD19B9F15248033991265E7487E01AC3574DC6(__this, 2, L_0, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.Logger::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Info_mB5BFC9F1D451200C5A00EEF26917DD890037F822 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Logger_log_m8BCD19B9F15248033991265E7487E01AC3574DC6(__this, 3, L_0, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.Logger::Warn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Warn_m908865A74AA0A85ADAB7E464E175FAFCA14B1AF9 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Logger_log_m8BCD19B9F15248033991265E7487E01AC3574DC6(__this, 4, L_0, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.Logger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Error_mD276DE22144DAF3E7D238FFE1F348031C4C9BC66 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Logger_log_m8BCD19B9F15248033991265E7487E01AC3574DC6(__this, 5, L_0, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.Logger::Fatal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Fatal_m4C7B680747928A6FC32149105D4BF6CCC8F8E984 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Logger_log_m8BCD19B9F15248033991265E7487E01AC3574DC6(__this, 6, L_0, NULL);
		return;
	}
}
// System.Void DesperateDevs.Logging.Logger::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Assert_m5E4D92CADFEDC77E6CEA3F7B4E947761DDE0E9E1 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, bool ___condition0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___message1;
		FablAssertException_t8E5413E461403CEDF01802A5702FE12A9D9864F6* L_2 = (FablAssertException_t8E5413E461403CEDF01802A5702FE12A9D9864F6*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FablAssertException_t8E5413E461403CEDF01802A5702FE12A9D9864F6_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		FablAssertException__ctor_mA4FC13432E59EDCDA26C4B82DD54FF54DD90D629(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Logger_Assert_m5E4D92CADFEDC77E6CEA3F7B4E947761DDE0E9E1_RuntimeMethod_var)));
	}

IL_000a:
	{
		return;
	}
}
// System.Void DesperateDevs.Logging.Logger::log(DesperateDevs.Logging.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_log_m8BCD19B9F15248033991265E7487E01AC3574DC6 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, int32_t ___logLvl0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_0 = __this->___OnLog_0;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1;
		L_1 = Logger_get_logLevel_mC2747145B91E0B9F436C992FE1B1179BF63F00F3_inline(__this, NULL);
		int32_t L_2 = ___logLvl0;
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* L_3 = __this->___OnLog_0;
		int32_t L_4 = ___logLvl0;
		String_t* L_5 = ___message1;
		NullCheck(L_3);
		LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_inline(L_3, __this, L_4, L_5, NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void DesperateDevs.Logging.Logger::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Reset_m47100AC63DBA3989A66462102F6CF0B154AA7E32 (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, const RuntimeMethod* method) 
{
	{
		__this->___OnLog_0 = (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnLog_0), (void*)(LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C*)NULL);
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
// System.Void DesperateDevs.Logging.FablAssertException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FablAssertException__ctor_mA4FC13432E59EDCDA26C4B82DD54FF54DD90D629 (FablAssertException_t8E5413E461403CEDF01802A5702FE12A9D9864F6* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Logger_set_logLevel_m102085FE974F49AAA15B576724DDBCBA21700AF8_inline (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3ClogLevelU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t fabl_get_globalLogLevel_m1F2458D54D39DD3FB7DAD83BF97AD9243CD56F18_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var);
		int32_t L_0 = ((fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_StaticFields*)il2cpp_codegen_static_fields_for(fabl_t10EA1D3B60D7218DF0CB180865793D6D51CADB9F_il2cpp_TypeInfo_var))->____globalLogLevel_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Logger_set_name_mD26B6A83EEABE195FD244D1B2FFC516A8286F438_inline (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Logger_get_logLevel_mC2747145B91E0B9F436C992FE1B1179BF63F00F3_inline (Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClogLevelU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogDelegate_Invoke_m816A1B446C954787836B993EAC512F95EA432293_inline (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (LogDelegate_tA73093F45D73CE85F964837D99E28002A7C2002C* __this, Logger_t1B9066E95684D564D0BFAAF0A111D286AF472C80* ___logger0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___logger0, ___logLevel1, ___message2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
