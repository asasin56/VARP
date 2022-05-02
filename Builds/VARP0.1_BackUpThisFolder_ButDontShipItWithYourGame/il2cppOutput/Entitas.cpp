#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
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
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Func`2<Entitas.IEntity,System.String>
struct Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Object,System.String>
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.ICollection`1<Entitas.IEntity>
struct ICollection_1_t873BC7044D20F9CC7BA5AFA879A876DC31440F2A;
// System.Collections.Generic.IEnumerable`1<Entitas.IEntity>
struct IEnumerable_1_t443B7E1CE7C51DFD2FB283D22C27572400E5BBDB;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.List`1<Entitas.ICleanupSystem>
struct List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4;
// System.Collections.Generic.List`1<Entitas.IComponent>
struct List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3;
// System.Collections.Generic.List`1<Entitas.IExecuteSystem>
struct List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB;
// System.Collections.Generic.List`1<Entitas.IInitializeSystem>
struct List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4;
// System.Collections.Generic.List`1<Entitas.ITearDownSystem>
struct List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Stack`1<Entitas.IComponent>
struct Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// System.Collections.Generic.Stack`1<Entitas.IComponent>[]
struct Stack_1U5BU5D_tBDFDA00CAA03620C331BE5D3BB61FA8ED82F2A21;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Entitas.ICleanupSystem[]
struct ICleanupSystemU5BU5D_t96B14578DB90465CD8C966E1B85CC0A47A4C6F3E;
// Entitas.IComponent[]
struct IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50;
// Entitas.IEntity[]
struct IEntityU5BU5D_t1277A8B70C2A654BF7A281B47BEB8E63282D7DC9;
// Entitas.IExecuteSystem[]
struct IExecuteSystemU5BU5D_t02D314117498D01157EEC87156E182072C553CD1;
// Entitas.IInitializeSystem[]
struct IInitializeSystemU5BU5D_t0B8D7DB03A30EB8DDC989B9F7C7E35C141F503EA;
// Entitas.ITearDownSystem[]
struct ITearDownSystemU5BU5D_t2136606D8FCE67F24490E5107E6A7C53C1BA1258;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Entitas.CollectorException
struct CollectorException_t57D1B1EA14CFFC9C5996CBCFA04F3360C625C5BB;
// Entitas.ContextDoesNotContainEntityException
struct ContextDoesNotContainEntityException_t78A395CA84D8B92D90EC31EC184FF38AD76ACDD9;
// Entitas.ContextEntityChanged
struct ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42;
// Entitas.ContextEntityIndexDoesAlreadyExistException
struct ContextEntityIndexDoesAlreadyExistException_t9E716ABFE7F1565F5BB62657B36343AB2DC9B5E9;
// Entitas.ContextEntityIndexDoesNotExistException
struct ContextEntityIndexDoesNotExistException_t23EBA6EDC3488CC51532BB47E86847F248977036;
// Entitas.ContextGroupChanged
struct ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F;
// Entitas.ContextInfo
struct ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD;
// Entitas.ContextInfoException
struct ContextInfoException_t552346465EEC6A53F2D058FDA974D3147D830782;
// Entitas.ContextStillHasRetainedEntitiesException
struct ContextStillHasRetainedEntitiesException_t5ABFA49A47FEDC2AE63CE8487800212BE92AFA33;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Entitas.EntitasException
struct EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD;
// Entitas.Entity
struct Entity_tB4178C475C4604A531B84ABE4E804A477025267D;
// Entitas.EntityAlreadyHasComponentException
struct EntityAlreadyHasComponentException_t180376056AF6FAEE24DCEA02957A565B06F3D63D;
// Entitas.EntityComponentChanged
struct EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4;
// Entitas.EntityComponentReplaced
struct EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D;
// Entitas.EntityDoesNotHaveComponentException
struct EntityDoesNotHaveComponentException_t2204861A7C3C0EEA828CF52D0A151A00E413020C;
// Entitas.EntityEvent
struct EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0;
// Entitas.EntityIndexException
struct EntityIndexException_t9BABEB3E99FFE1156DCFEC91285714BD7C96FED8;
// Entitas.EntityIsAlreadyRetainedByOwnerException
struct EntityIsAlreadyRetainedByOwnerException_tB58BD16D6DB0C073D792DFE04F76CEBAE2EE58FE;
// Entitas.EntityIsNotDestroyedException
struct EntityIsNotDestroyedException_t91EDFD71B22E7B3D73184DEAB30CE79A2CAC79A8;
// Entitas.EntityIsNotEnabledException
struct EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C;
// Entitas.EntityIsNotRetainedByOwnerException
struct EntityIsNotRetainedByOwnerException_t5C9A88040F783ECA528614B562071C871DF738DE;
// System.Exception
struct Exception_t;
// Entitas.IAERC
struct IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Entitas.ICleanupSystem
struct ICleanupSystem_tF99E4939D5332AA0B91FEB2F59FB859B1215F0CE;
// Entitas.IComponent
struct IComponent_tDC3779C7595B53CAC684EFC24FCC4D2189E89601;
// Entitas.IContext
struct IContext_t0801D5F43915BAD7010CF74F4DC08ADEDBCFC8DF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Entitas.IEntity
struct IEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F;
// Entitas.IExecuteSystem
struct IExecuteSystem_t4E30FED777E2D68FE364CF650299C3CFC2EE2B75;
// Entitas.IGroup
struct IGroup_tE01B838EB4FAEA9FAA983A6366D662AD49873849;
// Entitas.IInitializeSystem
struct IInitializeSystem_t35D02C33CCCC76426F530F7A98156337997FAA21;
// Entitas.ISystem
struct ISystem_tB7045233E555B3CD1E25C6CF8BB9B9869F31C287;
// Entitas.ITearDownSystem
struct ITearDownSystem_t7690882D96402E660A661CF00AEEB2FD33CBBFB8;
// Entitas.MatcherException
struct MatcherException_t98972F509249B23D4B5F525E68570C7AE8089BA4;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Entitas.SafeAERC
struct SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Entitas.SingleEntityException
struct SingleEntityException_t183BAB11477B2A57E37055080769CEA53FA77858;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Entitas.Systems
struct Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Type
struct Type_t;
// Entitas.UnsafeAERC
struct UnsafeAERC_tAE5B355208C71BFF1D4400DCE8C30652EFF2696F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Entitas.ContextStillHasRetainedEntitiesException/<>c
struct U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityAlreadyHasComponentException_t180376056AF6FAEE24DCEA02957A565B06F3D63D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityDoesNotHaveComponentException_t2204861A7C3C0EEA828CF52D0A151A00E413020C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityIsAlreadyRetainedByOwnerException_tB58BD16D6DB0C073D792DFE04F76CEBAE2EE58FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityIsNotRetainedByOwnerException_t5C9A88040F783ECA528614B562071C871DF738DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICleanupSystem_tF99E4939D5332AA0B91FEB2F59FB859B1215F0CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t873BC7044D20F9CC7BA5AFA879A876DC31440F2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComponent_tDC3779C7595B53CAC684EFC24FCC4D2189E89601_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IContext_t0801D5F43915BAD7010CF74F4DC08ADEDBCFC8DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExecuteSystem_t4E30FED777E2D68FE364CF650299C3CFC2EE2B75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInitializeSystem_t35D02C33CCCC76426F530F7A98156337997FAA21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReactiveSystem_t097169972AA4253A075D1360A0EBED4AAC6E7F96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITearDownSystem_t7690882D96402E660A661CF00AEEB2FD33CBBFB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleEntityException_t183BAB11477B2A57E37055080769CEA53FA77858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0335C65EEF6379144CEBFCCFBA3673189514186C;
IL2CPP_EXTERN_C String_t* _stringLiteral045CE587D4FC2F581D7D4A4D1E015576DB1CDA4B;
IL2CPP_EXTERN_C String_t* _stringLiteral0849E26A6A4A2DAE7ACBD20B9787BC3CB5CF6F4D;
IL2CPP_EXTERN_C String_t* _stringLiteral11FF187FEE7B8446BA69AAD7D9981843CADFBC7D;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral1822A24BC489207A3699F84A731DBF1B235C6E13;
IL2CPP_EXTERN_C String_t* _stringLiteral1D2EC9DFD86C9FE3334BD1E31A895983B2F47633;
IL2CPP_EXTERN_C String_t* _stringLiteral23E00DFE20D0EDCEF66A31C2D2DC3BE48772FCA5;
IL2CPP_EXTERN_C String_t* _stringLiteral282A064B307B2F72FC822DDE19359CFEA54529D2;
IL2CPP_EXTERN_C String_t* _stringLiteral30BCA17AD2287D35B6E19DEE4768DBE6A7677318;
IL2CPP_EXTERN_C String_t* _stringLiteral3125B63029085F66AA6486C20739994CD2F327DA;
IL2CPP_EXTERN_C String_t* _stringLiteral322321EABED5BED89486E8835DB4FC86B849CC6C;
IL2CPP_EXTERN_C String_t* _stringLiteral34632914D185B61F7F9366A4D39F31BC9A9165DC;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4899007D1B5035A1FDE7D96666CC174630C601BB;
IL2CPP_EXTERN_C String_t* _stringLiteral4A7C0D84FB2D0735065D4877D8C9EE2E04EB20A6;
IL2CPP_EXTERN_C String_t* _stringLiteral53C60D7FDD9672F2421E7FDD885CE9C82E848BBA;
IL2CPP_EXTERN_C String_t* _stringLiteral552BA9BD8DC606651C356E825380CB6A7B858A73;
IL2CPP_EXTERN_C String_t* _stringLiteral57A73DDAE80B092D40521059D162EF5AF60EA12F;
IL2CPP_EXTERN_C String_t* _stringLiteral58E35D66F61CD7F1419182F73D8BB8506EE907AD;
IL2CPP_EXTERN_C String_t* _stringLiteral5BC9D6ECA9D10FF72429022994FC1ADA7D25AE40;
IL2CPP_EXTERN_C String_t* _stringLiteral5D35E6992FED4911709FE05C4D0D58AA494F59F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5DB5DACAACEF2F6E16BFEA20819AB3E510AE97FE;
IL2CPP_EXTERN_C String_t* _stringLiteral5DFC00054C72CA06D0162955D17D64895EB1837C;
IL2CPP_EXTERN_C String_t* _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64;
IL2CPP_EXTERN_C String_t* _stringLiteral6103095F8626AAF90D00D05CCC2158E55AE5154C;
IL2CPP_EXTERN_C String_t* _stringLiteral7479CB2153D35E226E315DCE47F0D5024C373F2D;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral86763FF236B7D1A281A24EC00C7374D860CCA221;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral981D2EFC2C4CBC4604EE78EFA821029E8E51D4BA;
IL2CPP_EXTERN_C String_t* _stringLiteral9A5253BF31B79E22DF1C48DB0D96B50B43A9E0A5;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC4F72316B4407C7823417354A9891DA04B4CC6;
IL2CPP_EXTERN_C String_t* _stringLiteral9CF1F76013B09A2ABD7A5D6D8AE2A9E11813E8C7;
IL2CPP_EXTERN_C String_t* _stringLiteralA0D0A9C5E9251DBE7431001CD318A7D8B1323301;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F8A5729801BFB2F69B94B2BBD68AD343042451;
IL2CPP_EXTERN_C String_t* _stringLiteralA71835C02B0068E7EB5DB4C34281E4F9F69A9471;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB79F3D98860D557F6828ED8EE2B870DFE0DB88A5;
IL2CPP_EXTERN_C String_t* _stringLiteralBD874741033103E9D8FC6768CCEA46CB77566516;
IL2CPP_EXTERN_C String_t* _stringLiteralBFAF55189584BD4E849AEE6FCE6806B6C8CED8FC;
IL2CPP_EXTERN_C String_t* _stringLiteralC0EAF87E0E4374D484734BE2E61574612E387AAB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2EDEB7ECCE25CB568B2B0A7BA0F911C423D2898;
IL2CPP_EXTERN_C String_t* _stringLiteralC71C8B17B8076CDC68F1E50B55240A9295B757DD;
IL2CPP_EXTERN_C String_t* _stringLiteralD5746C0BD05E9E09663FA764FFF2206D493AFA08;
IL2CPP_EXTERN_C String_t* _stringLiteralD93758B5185819AEFE21A48FB425EC792CD52046;
IL2CPP_EXTERN_C String_t* _stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544;
IL2CPP_EXTERN_C String_t* _stringLiteralE006008788ACD78A3DA9418A85208D7602DC81D0;
IL2CPP_EXTERN_C String_t* _stringLiteralEC48BC6AECF8DAF6AF054E221860A4D7DE26515B;
IL2CPP_EXTERN_C String_t* _stringLiteralECBD1FD020ACE94D3888C54BAF8837E1E536ABB9;
IL2CPP_EXTERN_C String_t* _stringLiteralEF3F1351EAC916DB6050B4C0C46DB0BD2DF1AA56;
IL2CPP_EXTERN_C String_t* _stringLiteralF5A4E134A104F68811845EBEE5EAFB427080DCA2;
IL2CPP_EXTERN_C String_t* _stringLiteralF62654508343336C50FBDE2D668C89E740DB9D8C;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtension_SingleEntity_m47A29F143D40F8EC1A538C0AC8474B6652E4F786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Entity_AddComponent_m8EB577742A15B2499E87728B721CCC2659F60EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Entity_Destroy_mD3F6059226F9C43E48A2B8C8A8FB29E331AF6B1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Entity_GetComponent_m48E5240DCCBD9062C45E22A12BC09565807E7191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Entity_RemoveComponent_mFC479EABD6ED87F235F6B3F75AE2DFCF79846413_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Entity_ReplaceComponent_m753F0DB897BD7A12953E9AE8302662965AFEBC0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisIEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_m86688DBA9A12BCF636B40747492B0D0C6C504144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisIEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_TisString_t_mC82F15381E10CD21F14ADBF2FB9EEF6F1ADB9D12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisString_t_m95D9261EB0AD194CE759EFE1B6F25B10EA74A5F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3470969576B79057EE94FCA211CB46D0AA243DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m54A91912B2411D0D35AC46B000D66485CC8798BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m926AD2B85E6E1FBC5F98037D94B427F7E4D9B5A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m955BFC0F3B491F15CD74C678A961B4900A9874DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBD3B17EDD7711457A94E0B737F51E4A3035D8810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC293DD9E1F021871B58449F0A2B1BEC545F82C3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9F5C9D47065498DFB59420502E4A0349EAFD1EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2F2A619D23D0C508C3AB62A578A007B27C312C73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m63F0297745C6B4C4B204AD379F764E2E82C555A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m69A54ED11B9857404699079358C757A11363E887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m857E572D5CC61334AB231EFA59092D30857DCFD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m98C7F81FA64837DD6E162E5C70A13BDEF7C18C0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m34A818667B41D76E9D3322A642D03BB33900380B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBCC89E3A732616D2D45184D8A5D7780C41025B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC8EC69FAFB2FE4AB7E1CBC7465512DDA4A5C4B6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m008F12FFE7C434066EB70D102092AC7A3406DFE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m136BBBD4A6AAF2E1775292CAD7C27A34F3738BA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAC23816FC8101220D796791157C5C1E7B74FE2F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeAERC_Release_m68ECDB31C850E8A2DB6BB6A097AD2EC02333D4B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeAERC_Retain_mBE0924B7AC1821EA3C6F266EFFFE02CE4B5583D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m6501363A3DCBFB09583A65306FFEA89DFC4108E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m1A3A5ABAF9EBA6B669577B6E9F1CEBE57289870B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m34EB03F352ED5B57BD4AD4C41C87A0F2ADC47B79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m06BE4BC0BD3700E0E08866F4E1D53F2A91F1FA91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_0_mD5F3D32E3A52CE0DC6BFAC18D2F879A3361DCA51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_1_m401C5F4998086D5DA7D94602BDB16CAA837A6EB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Entity_tB4178C475C4604A531B84ABE4E804A477025267D_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Stack_1U5BU5D_tBDFDA00CAA03620C331BE5D3BB61FA8ED82F2A21;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50;
struct IEntityU5BU5D_t1277A8B70C2A654BF7A281B47BEB8E63282D7DC9;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
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
struct U3CModuleU3E_t369F3024442649010B630BA9BBA2ED89BFBF3075 
{
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
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

// System.Collections.Generic.List`1<Entitas.ICleanupSystem>
struct List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ICleanupSystemU5BU5D_t96B14578DB90465CD8C966E1B85CC0A47A4C6F3E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ICleanupSystemU5BU5D_t96B14578DB90465CD8C966E1B85CC0A47A4C6F3E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Entitas.IComponent>
struct List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Entitas.IExecuteSystem>
struct List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IExecuteSystemU5BU5D_t02D314117498D01157EEC87156E182072C553CD1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IExecuteSystemU5BU5D_t02D314117498D01157EEC87156E182072C553CD1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Entitas.IInitializeSystem>
struct List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IInitializeSystemU5BU5D_t0B8D7DB03A30EB8DDC989B9F7C7E35C141F503EA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IInitializeSystemU5BU5D_t0B8D7DB03A30EB8DDC989B9F7C7E35C141F503EA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Entitas.ITearDownSystem>
struct List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ITearDownSystemU5BU5D_t2136606D8FCE67F24490E5107E6A7C53C1BA1258* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ITearDownSystemU5BU5D_t2136606D8FCE67F24490E5107E6A7C53C1BA1258* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

// System.Collections.Generic.Stack`1<Entitas.IComponent>
struct Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
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

// Entitas.CollectionExtension
struct CollectionExtension_tA83658BFAB89A525D420BF37039848A63AE7CA0A  : public RuntimeObject
{
};

// Entitas.CollectorContextExtension
struct CollectorContextExtension_tB63DA09F92DB63CA375BAD41BC811E8F657B6A90  : public RuntimeObject
{
};

// Entitas.ContextExtension
struct ContextExtension_tBC290721F5B841C148B67A51ED7BF12FECD79EC3  : public RuntimeObject
{
};

// Entitas.ContextInfo
struct ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD  : public RuntimeObject
{
	// System.String Entitas.ContextInfo::name
	String_t* ___name_0;
	// System.String[] Entitas.ContextInfo::componentNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___componentNames_1;
	// System.Type[] Entitas.ContextInfo::componentTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___componentTypes_2;
};

// Entitas.EntitasResources
struct EntitasResources_tF6215C9FBA732C77A507E02CB6B8FA512233AA3E  : public RuntimeObject
{
};

// Entitas.EntitasStringExtension
struct EntitasStringExtension_t68348C522D9EFCFD4EC0FBA792CBAA6B8DE7778C  : public RuntimeObject
{
};

// Entitas.Entity
struct Entity_tB4178C475C4604A531B84ABE4E804A477025267D  : public RuntimeObject
{
	// Entitas.EntityComponentChanged Entitas.Entity::OnComponentAdded
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* ___OnComponentAdded_0;
	// Entitas.EntityComponentChanged Entitas.Entity::OnComponentRemoved
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* ___OnComponentRemoved_1;
	// Entitas.EntityComponentReplaced Entitas.Entity::OnComponentReplaced
	EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* ___OnComponentReplaced_2;
	// Entitas.EntityEvent Entitas.Entity::OnEntityReleased
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* ___OnEntityReleased_3;
	// Entitas.EntityEvent Entitas.Entity::OnDestroyEntity
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* ___OnDestroyEntity_4;
	// System.Collections.Generic.List`1<Entitas.IComponent> Entitas.Entity::_componentBuffer
	List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3* ____componentBuffer_5;
	// System.Collections.Generic.List`1<System.Int32> Entitas.Entity::_indexBuffer
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____indexBuffer_6;
	// System.Int32 Entitas.Entity::_creationIndex
	int32_t ____creationIndex_7;
	// System.Boolean Entitas.Entity::_isEnabled
	bool ____isEnabled_8;
	// System.Int32 Entitas.Entity::_totalComponents
	int32_t ____totalComponents_9;
	// Entitas.IComponent[] Entitas.Entity::_components
	IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* ____components_10;
	// System.Collections.Generic.Stack`1<Entitas.IComponent>[] Entitas.Entity::_componentPools
	Stack_1U5BU5D_tBDFDA00CAA03620C331BE5D3BB61FA8ED82F2A21* ____componentPools_11;
	// Entitas.ContextInfo Entitas.Entity::_contextInfo
	ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* ____contextInfo_12;
	// Entitas.IAERC Entitas.Entity::_aerc
	RuntimeObject* ____aerc_13;
	// Entitas.IComponent[] Entitas.Entity::_componentsCache
	IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* ____componentsCache_14;
	// System.Int32[] Entitas.Entity::_componentIndicesCache
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____componentIndicesCache_15;
	// System.String Entitas.Entity::_toStringCache
	String_t* ____toStringCache_16;
	// System.Text.StringBuilder Entitas.Entity::_toStringBuilder
	StringBuilder_t* ____toStringBuilder_17;
};

// Entitas.GroupExtension
struct GroupExtension_t16C4CD26CCB852665ABCB957DF5978F4992D610C  : public RuntimeObject
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

// Entitas.PublicMemberInfoEntityExtension
struct PublicMemberInfoEntityExtension_tF25D68C5976FD4659F3547D44CD6CCD2879F5402  : public RuntimeObject
{
};

// Entitas.SafeAERC
struct SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2  : public RuntimeObject
{
	// Entitas.IEntity Entitas.SafeAERC::_entity
	RuntimeObject* ____entity_0;
	// System.Collections.Generic.HashSet`1<System.Object> Entitas.SafeAERC::_owners
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____owners_1;
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

// Entitas.Systems
struct Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Entitas.IInitializeSystem> Entitas.Systems::_initializeSystems
	List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4* ____initializeSystems_0;
	// System.Collections.Generic.List`1<Entitas.IExecuteSystem> Entitas.Systems::_executeSystems
	List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* ____executeSystems_1;
	// System.Collections.Generic.List`1<Entitas.ICleanupSystem> Entitas.Systems::_cleanupSystems
	List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4* ____cleanupSystems_2;
	// System.Collections.Generic.List`1<Entitas.ITearDownSystem> Entitas.Systems::_tearDownSystems
	List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6* ____tearDownSystems_3;
};

// Entitas.TriggerOnEventMatcherExtension
struct TriggerOnEventMatcherExtension_t28493743AB5F21E1A4CD97FCD69A929A81D9CC19  : public RuntimeObject
{
};

// Entitas.UnsafeAERC
struct UnsafeAERC_tAE5B355208C71BFF1D4400DCE8C30652EFF2696F  : public RuntimeObject
{
	// System.Int32 Entitas.UnsafeAERC::_retainCount
	int32_t ____retainCount_0;
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

// Entitas.ContextStillHasRetainedEntitiesException/<>c
struct U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85  : public RuntimeObject
{
};

struct U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_StaticFields
{
	// Entitas.ContextStillHasRetainedEntitiesException/<>c Entitas.ContextStillHasRetainedEntitiesException/<>c::<>9
	U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85* ___U3CU3E9_0;
	// System.Func`2<System.Object,System.String> Entitas.ContextStillHasRetainedEntitiesException/<>c::<>9__0_1
	Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___U3CU3E9__0_1_1;
	// System.Func`2<Entitas.IEntity,System.String> Entitas.ContextStillHasRetainedEntitiesException/<>c::<>9__0_0
	Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5* ___U3CU3E9__0_0_2;
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

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
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

// Entitas.GroupEvent
struct GroupEvent_t7304B1E95FE260403F39C702DB9827D98AD6911D 
{
	// System.Byte Entitas.GroupEvent::value__
	uint8_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.StringComparison
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;
};

// Entitas.EntitasException
struct EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD  : public Exception_t
{
};

// Entitas.MatcherException
struct MatcherException_t98972F509249B23D4B5F525E68570C7AE8089BA4  : public Exception_t
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

// System.Func`2<Entitas.IEntity,System.String>
struct Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.String>
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Entitas.CollectorException
struct CollectorException_t57D1B1EA14CFFC9C5996CBCFA04F3360C625C5BB  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.ContextDoesNotContainEntityException
struct ContextDoesNotContainEntityException_t78A395CA84D8B92D90EC31EC184FF38AD76ACDD9  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.ContextEntityChanged
struct ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42  : public MulticastDelegate_t
{
};

// Entitas.ContextEntityIndexDoesAlreadyExistException
struct ContextEntityIndexDoesAlreadyExistException_t9E716ABFE7F1565F5BB62657B36343AB2DC9B5E9  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.ContextEntityIndexDoesNotExistException
struct ContextEntityIndexDoesNotExistException_t23EBA6EDC3488CC51532BB47E86847F248977036  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.ContextGroupChanged
struct ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F  : public MulticastDelegate_t
{
};

// Entitas.ContextInfoException
struct ContextInfoException_t552346465EEC6A53F2D058FDA974D3147D830782  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.ContextStillHasRetainedEntitiesException
struct ContextStillHasRetainedEntitiesException_t5ABFA49A47FEDC2AE63CE8487800212BE92AFA33  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.EntityAlreadyHasComponentException
struct EntityAlreadyHasComponentException_t180376056AF6FAEE24DCEA02957A565B06F3D63D  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.EntityComponentChanged
struct EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4  : public MulticastDelegate_t
{
};

// Entitas.EntityComponentReplaced
struct EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D  : public MulticastDelegate_t
{
};

// Entitas.EntityDoesNotHaveComponentException
struct EntityDoesNotHaveComponentException_t2204861A7C3C0EEA828CF52D0A151A00E413020C  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.EntityEvent
struct EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0  : public MulticastDelegate_t
{
};

// Entitas.EntityIndexException
struct EntityIndexException_t9BABEB3E99FFE1156DCFEC91285714BD7C96FED8  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.EntityIsAlreadyRetainedByOwnerException
struct EntityIsAlreadyRetainedByOwnerException_tB58BD16D6DB0C073D792DFE04F76CEBAE2EE58FE  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.EntityIsNotDestroyedException
struct EntityIsNotDestroyedException_t91EDFD71B22E7B3D73184DEAB30CE79A2CAC79A8  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.EntityIsNotEnabledException
struct EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.EntityIsNotRetainedByOwnerException
struct EntityIsNotRetainedByOwnerException_t5C9A88040F783ECA528614B562071C871DF738DE  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};

// Entitas.SingleEntityException
struct SingleEntityException_t183BAB11477B2A57E37055080769CEA53FA77858  : public EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.Stack`1<Entitas.IComponent>[]
struct Stack_1U5BU5D_tBDFDA00CAA03620C331BE5D3BB61FA8ED82F2A21  : public RuntimeArray
{
	ALIGN_FIELD (8) Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* m_Items[1];

	inline Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Entitas.IComponent[]
struct IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50  : public RuntimeArray
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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
// Entitas.IEntity[]
struct IEntityU5BU5D_t1277A8B70C2A654BF7A281B47BEB8E63282D7DC9  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Entitas.IComponent>::.ctor()
inline void List_1__ctor_m63F0297745C6B4C4B204AD379F764E2E82C555A8 (List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void Entitas.Entity::Reactivate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Reactivate_m2303F059BF0993EBC6BFEB400DA2E78BA25912CC (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___creationIndex0, const RuntimeMethod* method) ;
// Entitas.ContextInfo Entitas.Entity::createDefaultContextInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* Entity_createDefaultContextInfo_m0F5FB3A4229BED3A4F9C249997E0D8D3D55CBA3D (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) ;
// System.Void Entitas.SafeAERC::.ctor(Entitas.IEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAERC__ctor_mC581C185C97CE4CF301AE39B0D2E26B5142FDEB4 (SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* __this, RuntimeObject* ___entity0, const RuntimeMethod* method) ;
// System.Int32 Entitas.Entity::get_totalComponents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Entity_get_totalComponents_mCD78FA06E98D931D5E6AAA689358E3327A430A5E_inline (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void Entitas.ContextInfo::.ctor(System.String,System.String[],System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextInfo__ctor_mA5B146303B6AB8161E318A1F5866CE5D8804BEF0 (ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* __this, String_t* ___name0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___componentNames1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___componentTypes2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void Entitas.EntityIsNotEnabledException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityIsNotEnabledException__ctor_m252F304FAE1EFD9D9674291D35E2D650648FDE08 (EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean Entitas.Entity::HasComponent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entity_HasComponent_m97FC1729493A4274D38700A5C7CEB9A063BCDF48 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Entitas.EntityAlreadyHasComponentException::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityAlreadyHasComponentException__ctor_mBA4E32B23CDDF8515EB6BC6A2CA509FB95C5B790 (EntityAlreadyHasComponentException_t180376056AF6FAEE24DCEA02957A565B06F3D63D* __this, int32_t ___index0, String_t* ___message1, String_t* ___hint2, const RuntimeMethod* method) ;
// System.Void Entitas.EntityComponentChanged::Invoke(Entitas.IEntity,System.Int32,Entitas.IComponent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_inline (EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method) ;
// System.Void Entitas.EntityDoesNotHaveComponentException::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityDoesNotHaveComponentException__ctor_m79427698C1E92941BFFF19395ED18922D56941BB (EntityDoesNotHaveComponentException_t2204861A7C3C0EEA828CF52D0A151A00E413020C* __this, int32_t ___index0, String_t* ___message1, String_t* ___hint2, const RuntimeMethod* method) ;
// System.Void Entitas.Entity::replaceComponent(System.Int32,Entitas.IComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_replaceComponent_mC1F12DBE9487C2A98C5CB386DF4BF482C594BB89 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, RuntimeObject* ___replacement1, const RuntimeMethod* method) ;
// System.Void Entitas.Entity::AddComponent(System.Int32,Entitas.IComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_AddComponent_m8EB577742A15B2499E87728B721CCC2659F60EC8 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, RuntimeObject* ___component1, const RuntimeMethod* method) ;
// System.Void Entitas.EntityComponentReplaced::Invoke(Entitas.IEntity,System.Int32,Entitas.IComponent,Entitas.IComponent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_inline (EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method) ;
// System.Collections.Generic.Stack`1<Entitas.IComponent> Entitas.Entity::GetComponentPool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* Entity_GetComponentPool_m7A27D771E1F05FD55B754771D6C118F4E4CC75BA (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Entitas.IComponent>::Push(T)
inline void Stack_1_Push_m1A3A5ABAF9EBA6B669577B6E9F1CEBE57289870B (Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335*, RuntimeObject*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Entitas.IComponent>::Add(T)
inline void List_1_Add_m926AD2B85E6E1FBC5F98037D94B427F7E4D9B5A2_inline (List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<Entitas.IComponent>::ToArray()
inline IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* List_1_ToArray_m9F5C9D47065498DFB59420502E4A0349EAFD1EC5 (List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3* __this, const RuntimeMethod* method)
{
	return ((  IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* (*) (List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Entitas.IComponent>::Clear()
inline void List_1_Clear_mC293DD9E1F021871B58449F0A2B1BEC545F82C3F_inline (List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<Entitas.IComponent>::.ctor()
inline void Stack_1__ctor_m34EB03F352ED5B57BD4AD4C41C87A0F2ADC47B79 (Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<Entitas.IComponent>::get_Count()
inline int32_t Stack_1_get_Count_m06BE4BC0BD3700E0E08866F4E1D53F2A91F1FA91_inline (Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<Entitas.IComponent>::Pop()
inline RuntimeObject* Stack_1_Pop_m6501363A3DCBFB09583A65306FFEA89DFC4108E9 (Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void Entitas.EntityEvent::Invoke(Entitas.IEntity)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_inline (EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8 (RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Void Entitas.Entity::RemoveAllComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_RemoveAllComponents_m6D3FEA2B1BCA3EC9FC0550DBCC30A80EB19756DA (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Entitas.IComponent[] Entitas.Entity::GetComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* Entity_GetComponents_mFFEEBD86D8BC111D8148A0F816AF377DCF7CD693 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Entitas.IInitializeSystem>::.ctor()
inline void List_1__ctor_m69A54ED11B9857404699079358C757A11363E887 (List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Entitas.IExecuteSystem>::.ctor()
inline void List_1__ctor_m857E572D5CC61334AB231EFA59092D30857DCFD3 (List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Entitas.ICleanupSystem>::.ctor()
inline void List_1__ctor_m2F2A619D23D0C508C3AB62A578A007B27C312C73 (List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Entitas.ITearDownSystem>::.ctor()
inline void List_1__ctor_m98C7F81FA64837DD6E162E5C70A13BDEF7C18C0F (List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Entitas.IInitializeSystem>::Add(T)
inline void List_1_Add_mBD3B17EDD7711457A94E0B737F51E4A3035D8810_inline (List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Entitas.IExecuteSystem>::Add(T)
inline void List_1_Add_m955BFC0F3B491F15CD74C678A961B4900A9874DA_inline (List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Entitas.ICleanupSystem>::Add(T)
inline void List_1_Add_m3470969576B79057EE94FCA211CB46D0AA243DF9_inline (List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Entitas.ITearDownSystem>::Add(T)
inline void List_1_Add_m54A91912B2411D0D35AC46B000D66485CC8798BA_inline (List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<Entitas.IInitializeSystem>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m008F12FFE7C434066EB70D102092AC7A3406DFE5 (List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Entitas.IInitializeSystem>::get_Count()
inline int32_t List_1_get_Count_mBCC89E3A732616D2D45184D8A5D7780C41025B2E_inline (List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Entitas.IExecuteSystem>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B (List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Entitas.IExecuteSystem>::get_Count()
inline int32_t List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_inline (List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Entitas.ICleanupSystem>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mAC23816FC8101220D796791157C5C1E7B74FE2F3 (List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Entitas.ICleanupSystem>::get_Count()
inline int32_t List_1_get_Count_m34A818667B41D76E9D3322A642D03BB33900380B_inline (List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Entitas.ITearDownSystem>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m136BBBD4A6AAF2E1775292CAD7C27A34F3738BA3 (List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Entitas.ITearDownSystem>::get_Count()
inline int32_t List_1_get_Count_mC8EC69FAFB2FE4AB7E1CBC7465512DDA4A5C4B6D_inline (List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Entitas.Systems::ActivateReactiveSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Systems_ActivateReactiveSystems_m8CC189427D7FE5CB907A67FBCDCF9F96FDA7F0FC (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, const RuntimeMethod* method) ;
// System.Void Entitas.Systems::DeactivateReactiveSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Systems_DeactivateReactiveSystems_mCFF9E5EC8DD87FAF1437FF4314365C73592EFE42 (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, const RuntimeMethod* method) ;
// System.Void Entitas.Systems::ClearReactiveSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Systems_ClearReactiveSystems_m944D8FA4D4324865D74EB78C392994B6170F5830 (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Entitas.EntitasException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E (EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD* __this, String_t* ___message0, String_t* ___hint1, const RuntimeMethod* method) ;
// System.Void System.Func`2<Entitas.IEntity,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC6091E8E8B6D64F03D0E0053E726ED562F51F2CC (Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Entitas.IEntity,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisIEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_TisString_t_mC82F15381E10CD21F14ADBF2FB9EEF6F1ADB9D12 (RuntimeObject* ___source0, Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mE405D676C6881553258F8BAD40A20B462D611068 (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Void Entitas.ContextStillHasRetainedEntitiesException/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F2AC3C6282B5951095AB3E31532337B2D7FFB71 (U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1<System.Object> Entitas.SafeAERC::get_owners()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* SafeAERC_get_owners_m1AB169D663164AA81CD105D5507E4F10EF283252_inline (SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD6767DE619116219CD1567BC735C4AC96B9348CF (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisString_t_m95D9261EB0AD194CE759EFE1B6F25B10EA74A5F2 (RuntimeObject* ___source0, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void Entitas.SingleEntityException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEntityException__ctor_m4A81150F6003B9F03E3A073B980C5539F2BDB502 (SingleEntityException_t183BAB11477B2A57E37055080769CEA53FA77858* __this, int32_t ___count0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<Entitas.IEntity>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_First_TisIEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_m86688DBA9A12BCF636B40747492B0D0C6C504144 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared)(___source0, method);
}
// System.Void DesperateDevs.Utils.PublicMemberInfoExtension::CopyPublicMemberValues(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicMemberInfoExtension_CopyPublicMemberValues_m06325ECB4FA659EFF5F3FA6E91DF2E06BE49BCFE (RuntimeObject* ___source0, RuntimeObject* ___target1, const RuntimeMethod* method) ;
// System.String Entitas.EntitasStringExtension::addSuffix(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_addSuffix_m7E05902931F90E5D2478FEEE1530BC8CB676C4B4 (String_t* ___str0, String_t* ___suffix1, const RuntimeMethod* method) ;
// System.String Entitas.EntitasStringExtension::removeSuffix(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_removeSuffix_mC6927E616894928D2CE9D10493CB637BA521ED33 (String_t* ___str0, String_t* ___suffix1, const RuntimeMethod* method) ;
// System.Boolean Entitas.EntitasStringExtension::hasSuffix(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3 (String_t* ___str0, String_t* ___suffix1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
inline int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
inline void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
inline bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void Entitas.EntityIsAlreadyRetainedByOwnerException::.ctor(Entitas.IEntity,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityIsAlreadyRetainedByOwnerException__ctor_m02B6DD1E20F09F4F4A1571B591B4075F41BC746E (EntityIsAlreadyRetainedByOwnerException_tB58BD16D6DB0C073D792DFE04F76CEBAE2EE58FE* __this, RuntimeObject* ___entity0, RuntimeObject* ___owner1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
inline bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Void Entitas.EntityIsNotRetainedByOwnerException::.ctor(Entitas.IEntity,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityIsNotRetainedByOwnerException__ctor_m2DCE0D9B0197B5C86B7A2038AFF8B06581976727 (EntityIsNotRetainedByOwnerException_t5C9A88040F783ECA528614B562071C871DF738DE* __this, RuntimeObject* ___entity0, RuntimeObject* ___owner1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void Entitas.Entity::add_OnComponentAdded(Entitas.EntityComponentChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_add_OnComponentAdded_mE3F56CECFFF576AA65574EF1C69C7D8374FAC3DF (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_0 = NULL;
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_1 = NULL;
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_2 = NULL;
	{
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_0 = __this->___OnComponentAdded_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_1 = V_0;
		V_1 = L_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_2 = V_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)CastclassSealed((RuntimeObject*)L_4, EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4_il2cpp_TypeInfo_var));
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4** L_5 = (&__this->___OnComponentAdded_0);
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_6 = V_2;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_7 = V_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_8;
		L_8 = InterlockedCompareExchangeImpl<EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*>(L_5, L_6, L_7);
		V_0 = L_8;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_9 = V_0;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_10 = V_1;
		if ((!(((RuntimeObject*)(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)L_9) == ((RuntimeObject*)(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Entity::remove_OnComponentAdded(Entitas.EntityComponentChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_remove_OnComponentAdded_mE43B5F627B2CBC16C98F3BA606FCDFA215B563BA (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_0 = NULL;
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_1 = NULL;
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_2 = NULL;
	{
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_0 = __this->___OnComponentAdded_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_1 = V_0;
		V_1 = L_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_2 = V_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)CastclassSealed((RuntimeObject*)L_4, EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4_il2cpp_TypeInfo_var));
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4** L_5 = (&__this->___OnComponentAdded_0);
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_6 = V_2;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_7 = V_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_8;
		L_8 = InterlockedCompareExchangeImpl<EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*>(L_5, L_6, L_7);
		V_0 = L_8;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_9 = V_0;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_10 = V_1;
		if ((!(((RuntimeObject*)(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)L_9) == ((RuntimeObject*)(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Entity::add_OnComponentRemoved(Entitas.EntityComponentChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_add_OnComponentRemoved_m891ED7F9FDF0C8AD53E2BD5D1B96B5C7476869FF (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_0 = NULL;
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_1 = NULL;
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_2 = NULL;
	{
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_0 = __this->___OnComponentRemoved_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_1 = V_0;
		V_1 = L_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_2 = V_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)CastclassSealed((RuntimeObject*)L_4, EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4_il2cpp_TypeInfo_var));
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4** L_5 = (&__this->___OnComponentRemoved_1);
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_6 = V_2;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_7 = V_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_8;
		L_8 = InterlockedCompareExchangeImpl<EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*>(L_5, L_6, L_7);
		V_0 = L_8;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_9 = V_0;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_10 = V_1;
		if ((!(((RuntimeObject*)(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)L_9) == ((RuntimeObject*)(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Entity::remove_OnComponentRemoved(Entitas.EntityComponentChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_remove_OnComponentRemoved_m0139CE2520DCF84FE0E417ACE4C597D9688C599D (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_0 = NULL;
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_1 = NULL;
	EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* V_2 = NULL;
	{
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_0 = __this->___OnComponentRemoved_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_1 = V_0;
		V_1 = L_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_2 = V_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)CastclassSealed((RuntimeObject*)L_4, EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4_il2cpp_TypeInfo_var));
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4** L_5 = (&__this->___OnComponentRemoved_1);
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_6 = V_2;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_7 = V_1;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_8;
		L_8 = InterlockedCompareExchangeImpl<EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*>(L_5, L_6, L_7);
		V_0 = L_8;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_9 = V_0;
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_10 = V_1;
		if ((!(((RuntimeObject*)(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)L_9) == ((RuntimeObject*)(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Entity::add_OnComponentReplaced(Entitas.EntityComponentReplaced)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_add_OnComponentReplaced_m22C1ED88258788FDDF8DA204BBFA51B2B72AA909 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* V_0 = NULL;
	EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* V_1 = NULL;
	EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* V_2 = NULL;
	{
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_0 = __this->___OnComponentReplaced_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_1 = V_0;
		V_1 = L_1;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_2 = V_1;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D*)CastclassSealed((RuntimeObject*)L_4, EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D_il2cpp_TypeInfo_var));
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D** L_5 = (&__this->___OnComponentReplaced_2);
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_6 = V_2;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_7 = V_1;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_8;
		L_8 = InterlockedCompareExchangeImpl<EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D*>(L_5, L_6, L_7);
		V_0 = L_8;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_9 = V_0;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_10 = V_1;
		if ((!(((RuntimeObject*)(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D*)L_9) == ((RuntimeObject*)(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Entity::remove_OnComponentReplaced(Entitas.EntityComponentReplaced)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_remove_OnComponentReplaced_mE53D3B8C3F4125CBEEA4818B4F0D8DB1104FCC26 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* V_0 = NULL;
	EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* V_1 = NULL;
	EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* V_2 = NULL;
	{
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_0 = __this->___OnComponentReplaced_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_1 = V_0;
		V_1 = L_1;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_2 = V_1;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D*)CastclassSealed((RuntimeObject*)L_4, EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D_il2cpp_TypeInfo_var));
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D** L_5 = (&__this->___OnComponentReplaced_2);
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_6 = V_2;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_7 = V_1;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_8;
		L_8 = InterlockedCompareExchangeImpl<EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D*>(L_5, L_6, L_7);
		V_0 = L_8;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_9 = V_0;
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_10 = V_1;
		if ((!(((RuntimeObject*)(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D*)L_9) == ((RuntimeObject*)(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Entity::add_OnEntityReleased(Entitas.EntityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_add_OnEntityReleased_mFEFAD438C615A11787BA18D255D2A3C5536D2921 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_0 = NULL;
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_1 = NULL;
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_2 = NULL;
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_0 = __this->___OnEntityReleased_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_1 = V_0;
		V_1 = L_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_2 = V_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)CastclassSealed((RuntimeObject*)L_4, EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0_il2cpp_TypeInfo_var));
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0** L_5 = (&__this->___OnEntityReleased_3);
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_6 = V_2;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_7 = V_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_9 = V_0;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)L_9) == ((RuntimeObject*)(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Entity::remove_OnEntityReleased(Entitas.EntityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_remove_OnEntityReleased_m289F9FD40ACF0B48E9C6D2B2518F1B32284DEC7A (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_0 = NULL;
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_1 = NULL;
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_2 = NULL;
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_0 = __this->___OnEntityReleased_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_1 = V_0;
		V_1 = L_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_2 = V_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)CastclassSealed((RuntimeObject*)L_4, EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0_il2cpp_TypeInfo_var));
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0** L_5 = (&__this->___OnEntityReleased_3);
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_6 = V_2;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_7 = V_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_9 = V_0;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)L_9) == ((RuntimeObject*)(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Entity::add_OnDestroyEntity(Entitas.EntityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_add_OnDestroyEntity_m4C38035BD26E6D9DF3EAEF6CF98DDFC334B77028 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_0 = NULL;
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_1 = NULL;
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_2 = NULL;
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_0 = __this->___OnDestroyEntity_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_1 = V_0;
		V_1 = L_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_2 = V_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)CastclassSealed((RuntimeObject*)L_4, EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0_il2cpp_TypeInfo_var));
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0** L_5 = (&__this->___OnDestroyEntity_4);
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_6 = V_2;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_7 = V_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_9 = V_0;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)L_9) == ((RuntimeObject*)(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Entity::remove_OnDestroyEntity(Entitas.EntityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_remove_OnDestroyEntity_m6702E982BFBD701F66502D23DBAC80FC128CAF5A (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_0 = NULL;
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_1 = NULL;
	EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* V_2 = NULL;
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_0 = __this->___OnDestroyEntity_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_1 = V_0;
		V_1 = L_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_2 = V_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)CastclassSealed((RuntimeObject*)L_4, EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0_il2cpp_TypeInfo_var));
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0** L_5 = (&__this->___OnDestroyEntity_4);
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_6 = V_2;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_7 = V_1;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_9 = V_0;
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)L_9) == ((RuntimeObject*)(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Int32 Entitas.Entity::get_totalComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Entity_get_totalComponents_mCD78FA06E98D931D5E6AAA689358E3327A430A5E (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____totalComponents_9;
		return L_0;
	}
}
// System.Int32 Entitas.Entity::get_creationIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Entity_get_creationIndex_m54E102EC17FDA194512DC5718989395B6B3307AE (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____creationIndex_7;
		return L_0;
	}
}
// System.Boolean Entitas.Entity::get_isEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entity_get_isEnabled_m4833C9952FA87E420C96DED687E8E4679C7639A9 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isEnabled_8;
		return L_0;
	}
}
// System.Collections.Generic.Stack`1<Entitas.IComponent>[] Entitas.Entity::get_componentPools()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stack_1U5BU5D_tBDFDA00CAA03620C331BE5D3BB61FA8ED82F2A21* Entity_get_componentPools_mDA88FCCFCD956EDDDBCAD6B0C9F3C05F7D74022B (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	{
		Stack_1U5BU5D_tBDFDA00CAA03620C331BE5D3BB61FA8ED82F2A21* L_0 = __this->____componentPools_11;
		return L_0;
	}
}
// Entitas.ContextInfo Entitas.Entity::get_contextInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* Entity_get_contextInfo_mEB2CE38774398D19AE1D65A540D30466F4B4DB41 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	{
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_0 = __this->____contextInfo_12;
		return L_0;
	}
}
// Entitas.IAERC Entitas.Entity::get_aerc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Entity_get_aerc_m3E971E578DE9035CAAE26A96767A752A614FC8B6 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____aerc_13;
		return L_0;
	}
}
// System.Void Entitas.Entity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity__ctor_m945FDD0C3C50C2316EC7D64A5BAE085A36E9C752 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m63F0297745C6B4C4B204AD379F764E2E82C555A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3* L_0 = (List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3*)il2cpp_codegen_object_new(List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m63F0297745C6B4C4B204AD379F764E2E82C555A8(L_0, List_1__ctor_m63F0297745C6B4C4B204AD379F764E2E82C555A8_RuntimeMethod_var);
		__this->____componentBuffer_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____componentBuffer_5), (void*)L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_1, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->____indexBuffer_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____indexBuffer_6), (void*)L_1);
		return;
	}
}
// System.Void Entitas.Entity::Initialize(System.Int32,System.Int32,System.Collections.Generic.Stack`1<Entitas.IComponent>[],Entitas.ContextInfo,Entitas.IAERC)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Initialize_m7DDBCB35837D4B7FA92F84621F689B944F1977B9 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___creationIndex0, int32_t ___totalComponents1, Stack_1U5BU5D_tBDFDA00CAA03620C331BE5D3BB61FA8ED82F2A21* ___componentPools2, ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* ___contextInfo3, RuntimeObject* ___aerc4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* G_B2_0 = NULL;
	Entity_tB4178C475C4604A531B84ABE4E804A477025267D* G_B2_1 = NULL;
	ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* G_B1_0 = NULL;
	Entity_tB4178C475C4604A531B84ABE4E804A477025267D* G_B1_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	Entity_tB4178C475C4604A531B84ABE4E804A477025267D* G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	Entity_tB4178C475C4604A531B84ABE4E804A477025267D* G_B3_1 = NULL;
	{
		int32_t L_0 = ___creationIndex0;
		Entity_Reactivate_m2303F059BF0993EBC6BFEB400DA2E78BA25912CC(__this, L_0, NULL);
		int32_t L_1 = ___totalComponents1;
		__this->____totalComponents_9 = L_1;
		int32_t L_2 = ___totalComponents1;
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_3 = (IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50*)(IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50*)SZArrayNew(IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____components_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____components_10), (void*)L_3);
		Stack_1U5BU5D_tBDFDA00CAA03620C331BE5D3BB61FA8ED82F2A21* L_4 = ___componentPools2;
		__this->____componentPools_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____componentPools_11), (void*)L_4);
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_5 = ___contextInfo3;
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = __this;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = __this;
			goto IL_002e;
		}
	}
	{
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_7;
		L_7 = Entity_createDefaultContextInfo_m0F5FB3A4229BED3A4F9C249997E0D8D3D55CBA3D(__this, NULL);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002e:
	{
		NullCheck(G_B2_1);
		G_B2_1->____contextInfo_12 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____contextInfo_12), (void*)G_B2_0);
		RuntimeObject* L_8 = ___aerc4;
		RuntimeObject* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = __this;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = __this;
			goto IL_0040;
		}
	}
	{
		SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* L_10 = (SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2*)il2cpp_codegen_object_new(SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		SafeAERC__ctor_mC581C185C97CE4CF301AE39B0D2E26B5142FDEB4(L_10, __this, NULL);
		G_B4_0 = ((RuntimeObject*)(L_10));
		G_B4_1 = G_B3_1;
	}

IL_0040:
	{
		NullCheck(G_B4_1);
		G_B4_1->____aerc_13 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->____aerc_13), (void*)G_B4_0);
		return;
	}
}
// Entitas.ContextInfo Entitas.Entity::createDefaultContextInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* Entity_createDefaultContextInfo_m0F5FB3A4229BED3A4F9C249997E0D8D3D55CBA3D (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4899007D1B5035A1FDE7D96666CC174630C601BB);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Entity_get_totalComponents_mCD78FA06E98D931D5E6AAA689358E3327A430A5E_inline(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001e;
	}

IL_0010:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		int32_t L_3 = V_1;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (String_t*)L_4);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001e:
	{
		int32_t L_6 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_9 = (ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD*)il2cpp_codegen_object_new(ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ContextInfo__ctor_mA5B146303B6AB8161E318A1F5866CE5D8804BEF0(L_9, _stringLiteral4899007D1B5035A1FDE7D96666CC174630C601BB, L_8, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, NULL);
		return L_9;
	}
}
// System.Void Entitas.Entity::Reactivate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Reactivate_m2303F059BF0993EBC6BFEB400DA2E78BA25912CC (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___creationIndex0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___creationIndex0;
		__this->____creationIndex_7 = L_0;
		__this->____isEnabled_8 = (bool)1;
		return;
	}
}
// System.Void Entitas.Entity::AddComponent(System.Int32,Entitas.IComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_AddComponent_m8EB577742A15B2499E87728B721CCC2659F60EC8 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, RuntimeObject* ___component1, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isEnabled_8;
		if (L_0)
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD874741033103E9D8FC6768CCEA46CB77566516)));
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD874741033103E9D8FC6768CCEA46CB77566516)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_4 = __this->____contextInfo_12;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___componentNames_1;
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_8);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECBD1FD020ACE94D3888C54BAF8837E1E536ABB9)));
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECBD1FD020ACE94D3888C54BAF8837E1E536ABB9)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, __this);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)__this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		String_t* L_12;
		L_12 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_11, NULL);
		EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C* L_13 = (EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		EntityIsNotEnabledException__ctor_m252F304FAE1EFD9D9674291D35E2D650648FDE08(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Entity_AddComponent_m8EB577742A15B2499E87728B721CCC2659F60EC8_RuntimeMethod_var)));
	}

IL_0045:
	{
		int32_t L_14 = ___index0;
		bool L_15;
		L_15 = Entity_HasComponent_m97FC1729493A4274D38700A5C7CEB9A063BCDF48(__this, L_14, NULL);
		if (!L_15)
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_16 = ___index0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD874741033103E9D8FC6768CCEA46CB77566516)));
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD874741033103E9D8FC6768CCEA46CB77566516)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_18;
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_20 = __this->____contextInfo_12;
		NullCheck(L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20->___componentNames_1;
		int32_t L_22 = ___index0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_24);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_19;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECBD1FD020ACE94D3888C54BAF8837E1E536ABB9)));
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECBD1FD020ACE94D3888C54BAF8837E1E536ABB9)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, __this);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)__this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		String_t* L_28;
		L_28 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_27, NULL);
		EntityAlreadyHasComponentException_t180376056AF6FAEE24DCEA02957A565B06F3D63D* L_29 = (EntityAlreadyHasComponentException_t180376056AF6FAEE24DCEA02957A565B06F3D63D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntityAlreadyHasComponentException_t180376056AF6FAEE24DCEA02957A565B06F3D63D_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		EntityAlreadyHasComponentException__ctor_mBA4E32B23CDDF8515EB6BC6A2CA509FB95C5B790(L_29, L_16, L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC48BC6AECF8DAF6AF054E221860A4D7DE26515B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Entity_AddComponent_m8EB577742A15B2499E87728B721CCC2659F60EC8_RuntimeMethod_var)));
	}

IL_0091:
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_30 = __this->____components_10;
		int32_t L_31 = ___index0;
		RuntimeObject* L_32 = ___component1;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (RuntimeObject*)L_32);
		__this->____componentsCache_14 = (IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____componentsCache_14), (void*)(IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50*)NULL);
		__this->____componentIndicesCache_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____componentIndicesCache_15), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____toStringCache_16 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toStringCache_16), (void*)(String_t*)NULL);
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_33 = __this->___OnComponentAdded_0;
		if (!L_33)
		{
			goto IL_00c5;
		}
	}
	{
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_34 = __this->___OnComponentAdded_0;
		int32_t L_35 = ___index0;
		RuntimeObject* L_36 = ___component1;
		NullCheck(L_34);
		EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_inline(L_34, __this, L_35, L_36, NULL);
	}

IL_00c5:
	{
		return;
	}
}
// System.Void Entitas.Entity::RemoveComponent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_RemoveComponent_mFC479EABD6ED87F235F6B3F75AE2DFCF79846413 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isEnabled_8;
		if (L_0)
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral322321EABED5BED89486E8835DB4FC86B849CC6C)));
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral322321EABED5BED89486E8835DB4FC86B849CC6C)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_4 = __this->____contextInfo_12;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___componentNames_1;
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_8);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5746C0BD05E9E09663FA764FFF2206D493AFA08)));
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5746C0BD05E9E09663FA764FFF2206D493AFA08)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, __this);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)__this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		String_t* L_12;
		L_12 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_11, NULL);
		EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C* L_13 = (EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		EntityIsNotEnabledException__ctor_m252F304FAE1EFD9D9674291D35E2D650648FDE08(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Entity_RemoveComponent_mFC479EABD6ED87F235F6B3F75AE2DFCF79846413_RuntimeMethod_var)));
	}

IL_0045:
	{
		int32_t L_14 = ___index0;
		bool L_15;
		L_15 = Entity_HasComponent_m97FC1729493A4274D38700A5C7CEB9A063BCDF48(__this, L_14, NULL);
		if (L_15)
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_16 = ___index0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral322321EABED5BED89486E8835DB4FC86B849CC6C)));
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral322321EABED5BED89486E8835DB4FC86B849CC6C)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_18;
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_20 = __this->____contextInfo_12;
		NullCheck(L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20->___componentNames_1;
		int32_t L_22 = ___index0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_24);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_19;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5746C0BD05E9E09663FA764FFF2206D493AFA08)));
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5746C0BD05E9E09663FA764FFF2206D493AFA08)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, __this);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)__this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		String_t* L_28;
		L_28 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_27, NULL);
		EntityDoesNotHaveComponentException_t2204861A7C3C0EEA828CF52D0A151A00E413020C* L_29 = (EntityDoesNotHaveComponentException_t2204861A7C3C0EEA828CF52D0A151A00E413020C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntityDoesNotHaveComponentException_t2204861A7C3C0EEA828CF52D0A151A00E413020C_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		EntityDoesNotHaveComponentException__ctor_m79427698C1E92941BFFF19395ED18922D56941BB(L_29, L_16, L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CF1F76013B09A2ABD7A5D6D8AE2A9E11813E8C7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Entity_RemoveComponent_mFC479EABD6ED87F235F6B3F75AE2DFCF79846413_RuntimeMethod_var)));
	}

IL_0091:
	{
		int32_t L_30 = ___index0;
		Entity_replaceComponent_mC1F12DBE9487C2A98C5CB386DF4BF482C594BB89(__this, L_30, (RuntimeObject*)NULL, NULL);
		return;
	}
}
// System.Void Entitas.Entity::ReplaceComponent(System.Int32,Entitas.IComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_ReplaceComponent_m753F0DB897BD7A12953E9AE8302662965AFEBC0D (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, RuntimeObject* ___component1, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isEnabled_8;
		if (L_0)
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11FF187FEE7B8446BA69AAD7D9981843CADFBC7D)));
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11FF187FEE7B8446BA69AAD7D9981843CADFBC7D)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_4 = __this->____contextInfo_12;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___componentNames_1;
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_8);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D2EC9DFD86C9FE3334BD1E31A895983B2F47633)));
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D2EC9DFD86C9FE3334BD1E31A895983B2F47633)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, __this);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)__this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		String_t* L_12;
		L_12 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_11, NULL);
		EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C* L_13 = (EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		EntityIsNotEnabledException__ctor_m252F304FAE1EFD9D9674291D35E2D650648FDE08(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Entity_ReplaceComponent_m753F0DB897BD7A12953E9AE8302662965AFEBC0D_RuntimeMethod_var)));
	}

IL_0045:
	{
		int32_t L_14 = ___index0;
		bool L_15;
		L_15 = Entity_HasComponent_m97FC1729493A4274D38700A5C7CEB9A063BCDF48(__this, L_14, NULL);
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_16 = ___index0;
		RuntimeObject* L_17 = ___component1;
		Entity_replaceComponent_mC1F12DBE9487C2A98C5CB386DF4BF482C594BB89(__this, L_16, L_17, NULL);
		return;
	}

IL_0057:
	{
		RuntimeObject* L_18 = ___component1;
		if (!L_18)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_19 = ___index0;
		RuntimeObject* L_20 = ___component1;
		Entity_AddComponent_m8EB577742A15B2499E87728B721CCC2659F60EC8(__this, L_19, L_20, NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void Entitas.Entity::replaceComponent(System.Int32,Entitas.IComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_replaceComponent_mC1F12DBE9487C2A98C5CB386DF4BF482C594BB89 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, RuntimeObject* ___replacement1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m1A3A5ABAF9EBA6B669577B6E9F1CEBE57289870B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_0 = __this->____components_10;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		RuntimeObject* L_4 = ___replacement1;
		RuntimeObject* L_5 = V_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)L_5)))
		{
			goto IL_006b;
		}
	}
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_6 = __this->____components_10;
		int32_t L_7 = ___index0;
		RuntimeObject* L_8 = ___replacement1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		__this->____componentsCache_14 = (IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____componentsCache_14), (void*)(IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50*)NULL);
		RuntimeObject* L_9 = ___replacement1;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_10 = __this->___OnComponentReplaced_2;
		if (!L_10)
		{
			goto IL_005d;
		}
	}
	{
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_11 = __this->___OnComponentReplaced_2;
		int32_t L_12 = ___index0;
		RuntimeObject* L_13 = V_0;
		RuntimeObject* L_14 = ___replacement1;
		NullCheck(L_11);
		EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_inline(L_11, __this, L_12, L_13, L_14, NULL);
		goto IL_005d;
	}

IL_0039:
	{
		__this->____componentIndicesCache_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____componentIndicesCache_15), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____toStringCache_16 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toStringCache_16), (void*)(String_t*)NULL);
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_15 = __this->___OnComponentRemoved_1;
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* L_16 = __this->___OnComponentRemoved_1;
		int32_t L_17 = ___index0;
		RuntimeObject* L_18 = V_0;
		NullCheck(L_16);
		EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_inline(L_16, __this, L_17, L_18, NULL);
	}

IL_005d:
	{
		int32_t L_19 = ___index0;
		Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* L_20;
		L_20 = Entity_GetComponentPool_m7A27D771E1F05FD55B754771D6C118F4E4CC75BA(__this, L_19, NULL);
		RuntimeObject* L_21 = V_0;
		NullCheck(L_20);
		Stack_1_Push_m1A3A5ABAF9EBA6B669577B6E9F1CEBE57289870B(L_20, L_21, Stack_1_Push_m1A3A5ABAF9EBA6B669577B6E9F1CEBE57289870B_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_22 = __this->___OnComponentReplaced_2;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* L_23 = __this->___OnComponentReplaced_2;
		int32_t L_24 = ___index0;
		RuntimeObject* L_25 = V_0;
		RuntimeObject* L_26 = ___replacement1;
		NullCheck(L_23);
		EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_inline(L_23, __this, L_24, L_25, L_26, NULL);
	}

IL_0082:
	{
		return;
	}
}
// Entitas.IComponent Entitas.Entity::GetComponent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Entity_GetComponent_m48E5240DCCBD9062C45E22A12BC09565807E7191 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		bool L_1;
		L_1 = Entity_HasComponent_m97FC1729493A4274D38700A5C7CEB9A063BCDF48(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_2 = ___index0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34632914D185B61F7F9366A4D39F31BC9A9165DC)));
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34632914D185B61F7F9366A4D39F31BC9A9165DC)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_6 = __this->____contextInfo_12;
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6->___componentNames_1;
		int32_t L_8 = ___index0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_10);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_5;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5746C0BD05E9E09663FA764FFF2206D493AFA08)));
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5746C0BD05E9E09663FA764FFF2206D493AFA08)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, __this);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)__this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)));
		String_t* L_14;
		L_14 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_13, NULL);
		EntityDoesNotHaveComponentException_t2204861A7C3C0EEA828CF52D0A151A00E413020C* L_15 = (EntityDoesNotHaveComponentException_t2204861A7C3C0EEA828CF52D0A151A00E413020C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntityDoesNotHaveComponentException_t2204861A7C3C0EEA828CF52D0A151A00E413020C_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		EntityDoesNotHaveComponentException__ctor_m79427698C1E92941BFFF19395ED18922D56941BB(L_15, L_2, L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral282A064B307B2F72FC822DDE19359CFEA54529D2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Entity_GetComponent_m48E5240DCCBD9062C45E22A12BC09565807E7191_RuntimeMethod_var)));
	}

IL_004c:
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_16 = __this->____components_10;
		int32_t L_17 = ___index0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		return L_19;
	}
}
// Entitas.IComponent[] Entitas.Entity::GetComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* Entity_GetComponents_mFFEEBD86D8BC111D8148A0F816AF377DCF7CD693 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m926AD2B85E6E1FBC5F98037D94B427F7E4D9B5A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC293DD9E1F021871B58449F0A2B1BEC545F82C3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9F5C9D47065498DFB59420502E4A0349EAFD1EC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_0 = __this->____componentsCache_14;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_0 = 0;
		goto IL_0028;
	}

IL_000c:
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_1 = __this->____components_10;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3* L_6 = __this->____componentBuffer_5;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_6);
		List_1_Add_m926AD2B85E6E1FBC5F98037D94B427F7E4D9B5A2_inline(L_6, L_7, List_1_Add_m926AD2B85E6E1FBC5F98037D94B427F7E4D9B5A2_RuntimeMethod_var);
	}

IL_0024:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0028:
	{
		int32_t L_9 = V_0;
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_10 = __this->____components_10;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3* L_11 = __this->____componentBuffer_5;
		NullCheck(L_11);
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_12;
		L_12 = List_1_ToArray_m9F5C9D47065498DFB59420502E4A0349EAFD1EC5(L_11, List_1_ToArray_m9F5C9D47065498DFB59420502E4A0349EAFD1EC5_RuntimeMethod_var);
		__this->____componentsCache_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____componentsCache_14), (void*)L_12);
		List_1_tFC012DB3686C1DDFFF429C09A5DD7B416A470DA3* L_13 = __this->____componentBuffer_5;
		NullCheck(L_13);
		List_1_Clear_mC293DD9E1F021871B58449F0A2B1BEC545F82C3F_inline(L_13, List_1_Clear_mC293DD9E1F021871B58449F0A2B1BEC545F82C3F_RuntimeMethod_var);
	}

IL_004f:
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_14 = __this->____componentsCache_14;
		return L_14;
	}
}
// System.Int32[] Entitas.Entity::GetComponentIndices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Entity_GetComponentIndices_m76AF67018BEB92729FE848A281E44A75DD9ADA51 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____componentIndicesCache_15;
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_000c:
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_1 = __this->____components_10;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = __this->____indexBuffer_6;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_5, L_6, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0022:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0026:
	{
		int32_t L_8 = V_0;
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_9 = __this->____components_10;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = __this->____indexBuffer_6;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_10, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		__this->____componentIndicesCache_15 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____componentIndicesCache_15), (void*)L_11);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = __this->____indexBuffer_6;
		NullCheck(L_12);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_12, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
	}

IL_004d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____componentIndicesCache_15;
		return L_13;
	}
}
// System.Boolean Entitas.Entity::HasComponent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entity_HasComponent_m97FC1729493A4274D38700A5C7CEB9A063BCDF48 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_0 = __this->____components_10;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean Entitas.Entity::HasComponents(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entity_HasComponents_m96BF3D6FB3C811EB8AFFD640C09BF20CC9E4FE5F (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_0 = __this->____components_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___indices0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (L_6)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0016:
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___indices0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Entitas.Entity::HasAnyComponent(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entity_HasAnyComponent_m959BC73516E99058FDEFC153D774C9E47152AF5A (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_0 = __this->____components_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___indices0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0016:
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___indices0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Entitas.Entity::RemoveAllComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_RemoveAllComponents_m6D3FEA2B1BCA3EC9FC0550DBCC30A80EB19756DA (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__this->____toStringCache_16 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toStringCache_16), (void*)(String_t*)NULL);
		V_0 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_0 = __this->____components_10;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_4 = V_0;
		Entity_replaceComponent_mC1F12DBE9487C2A98C5CB386DF4BF482C594BB89(__this, L_4, (RuntimeObject*)NULL, NULL);
	}

IL_001d:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_7 = __this->____components_10;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Stack`1<Entitas.IComponent> Entitas.Entity::GetComponentPool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* Entity_GetComponentPool_m7A27D771E1F05FD55B754771D6C118F4E4CC75BA (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m34EB03F352ED5B57BD4AD4C41C87A0F2ADC47B79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* V_0 = NULL;
	{
		Stack_1U5BU5D_tBDFDA00CAA03620C331BE5D3BB61FA8ED82F2A21* L_0 = __this->____componentPools_11;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* L_4 = V_0;
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* L_5 = (Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335*)il2cpp_codegen_object_new(Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Stack_1__ctor_m34EB03F352ED5B57BD4AD4C41C87A0F2ADC47B79(L_5, Stack_1__ctor_m34EB03F352ED5B57BD4AD4C41C87A0F2ADC47B79_RuntimeMethod_var);
		V_0 = L_5;
		Stack_1U5BU5D_tBDFDA00CAA03620C331BE5D3BB61FA8ED82F2A21* L_6 = __this->____componentPools_11;
		int32_t L_7 = ___index0;
		Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* L_8 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335*)L_8);
	}

IL_001b:
	{
		Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* L_9 = V_0;
		return L_9;
	}
}
// Entitas.IComponent Entitas.Entity::CreateComponent(System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Entity_CreateComponent_mC7D282D4A08331F829DE35BA5408B4BDEDEF3E60 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, int32_t ___index0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComponent_tDC3779C7595B53CAC684EFC24FCC4D2189E89601_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m6501363A3DCBFB09583A65306FFEA89DFC4108E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m06BE4BC0BD3700E0E08866F4E1D53F2A91F1FA91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* V_0 = NULL;
	{
		int32_t L_0 = ___index0;
		Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* L_1;
		L_1 = Entity_GetComponentPool_m7A27D771E1F05FD55B754771D6C118F4E4CC75BA(__this, L_0, NULL);
		V_0 = L_1;
		Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_m06BE4BC0BD3700E0E08866F4E1D53F2A91F1FA91_inline(L_2, Stack_1_get_Count_m06BE4BC0BD3700E0E08866F4E1D53F2A91F1FA91_RuntimeMethod_var);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t* L_4 = ___type1;
		RuntimeObject* L_5;
		L_5 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_4, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IComponent_tDC3779C7595B53CAC684EFC24FCC4D2189E89601_il2cpp_TypeInfo_var));
	}

IL_001d:
	{
		Stack_1_t52E22E362E0225C299C21AA1E48AAA12B52B5335* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Stack_1_Pop_m6501363A3DCBFB09583A65306FFEA89DFC4108E9(L_6, Stack_1_Pop_m6501363A3DCBFB09583A65306FFEA89DFC4108E9_RuntimeMethod_var);
		return L_7;
	}
}
// System.Int32 Entitas.Entity::get_retainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Entity_get_retainCount_m676992DE58920B46D96078B2BDF47BF664F58E9C (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____aerc_13;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Entitas.IAERC::get_retainCount() */, IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Entitas.Entity::Retain(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Retain_m00D0E8E349F8DF30986EC895C1CEA07853FF7449 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, RuntimeObject* ___owner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____aerc_13;
		RuntimeObject* L_1 = ___owner0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Entitas.IAERC::Retain(System.Object) */, IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void Entitas.Entity::Release(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Release_m3FE7870AF86DEA7F161AB605089BAF088BDE0CBD (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, RuntimeObject* ___owner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____aerc_13;
		RuntimeObject* L_1 = ___owner0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void Entitas.IAERC::Release(System.Object) */, IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->____aerc_13;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Entitas.IAERC::get_retainCount() */, IAERC_t69CBD4DE45FBA9F66D967261934D07F291315957_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_4 = __this->___OnEntityReleased_3;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_5 = __this->___OnEntityReleased_3;
		NullCheck(L_5);
		EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_inline(L_5, __this, NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void Entitas.Entity::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Destroy_mD3F6059226F9C43E48A2B8C8A8FB29E331AF6B1D (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isEnabled_8;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1;
		L_1 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2EDEB7ECCE25CB568B2B0A7BA0F911C423D2898)), __this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46)), NULL);
		EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C* L_2 = (EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		EntityIsNotEnabledException__ctor_m252F304FAE1EFD9D9674291D35E2D650648FDE08(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Entity_Destroy_mD3F6059226F9C43E48A2B8C8A8FB29E331AF6B1D_RuntimeMethod_var)));
	}

IL_001e:
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_3 = __this->___OnDestroyEntity_4;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* L_4 = __this->___OnDestroyEntity_4;
		NullCheck(L_4);
		EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_inline(L_4, __this, NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Entitas.Entity::InternalDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_InternalDestroy_mDB2F678A7ABFCE2E5537941C01927FE83A6472E4 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	{
		__this->____isEnabled_8 = (bool)0;
		Entity_RemoveAllComponents_m6D3FEA2B1BCA3EC9FC0550DBCC30A80EB19756DA(__this, NULL);
		__this->___OnComponentAdded_0 = (EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnComponentAdded_0), (void*)(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)NULL);
		__this->___OnComponentReplaced_2 = (EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnComponentReplaced_2), (void*)(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D*)NULL);
		__this->___OnComponentRemoved_1 = (EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnComponentRemoved_1), (void*)(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*)NULL);
		__this->___OnDestroyEntity_4 = (EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDestroyEntity_4), (void*)(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)NULL);
		return;
	}
}
// System.Void Entitas.Entity::RemoveAllOnEntityReleasedHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_RemoveAllOnEntityReleasedHandlers_m771F18DDF4B6384B39C9E9531E8F0F57F4E91DE4 (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	{
		__this->___OnEntityReleased_3 = (EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnEntityReleased_3), (void*)(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*)NULL);
		return;
	}
}
// System.String Entitas.Entity::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Entity_ToString_m8979549AF5DC8FB6812614BD2C4AB0745CAC61AD (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5A4E134A104F68811845EBEE5EAFB427080DCA2);
		s_Il2CppMethodInitialized = true;
	}
	IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		String_t* L_0 = __this->____toStringCache_16;
		if (L_0)
		{
			goto IL_00c6;
		}
	}
	{
		StringBuilder_t* L_1 = __this->____toStringBuilder_17;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		__this->____toStringBuilder_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toStringBuilder_17), (void*)L_2);
	}

IL_001e:
	{
		StringBuilder_t* L_3 = __this->____toStringBuilder_17;
		NullCheck(L_3);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_3, 0, NULL);
		StringBuilder_t* L_4 = __this->____toStringBuilder_17;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralF5A4E134A104F68811845EBEE5EAFB427080DCA2, NULL);
		int32_t L_6 = __this->____creationIndex_7;
		NullCheck(L_5);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_5, L_6, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_9;
		L_9 = Entity_GetComponents_mFFEEBD86D8BC111D8148A0F816AF377DCF7CD693(__this, NULL);
		V_0 = L_9;
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_10 = V_0;
		NullCheck(L_10);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), 1));
		V_2 = 0;
		goto IL_009e;
	}

IL_0061:
	{
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = L_14;
		RuntimeObject* L_15 = V_3;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_15, NULL);
		__this->____toStringCache_16 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toStringCache_16), (void*)(String_t*)NULL);
		StringBuilder_t* L_17 = __this->____toStringBuilder_17;
		RuntimeObject* L_18 = V_3;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		NullCheck(L_17);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_19, NULL);
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t* L_23 = __this->____toStringBuilder_17;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_009a:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_009e:
	{
		int32_t L_26 = V_2;
		IComponentU5BU5D_tB5BF3CD1AA11A5386760F64B9C69C07CA6CC1F50* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0061;
		}
	}
	{
		StringBuilder_t* L_28 = __this->____toStringBuilder_17;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		StringBuilder_t* L_30 = __this->____toStringBuilder_17;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		__this->____toStringCache_16 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toStringCache_16), (void*)L_31);
	}

IL_00c6:
	{
		String_t* L_32 = __this->____toStringCache_16;
		return L_32;
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
// System.Void Entitas.Systems::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Systems__ctor_m2941125B4EBDC6C6AC31ACF2C1FB69FB417804FF (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2F2A619D23D0C508C3AB62A578A007B27C312C73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m69A54ED11B9857404699079358C757A11363E887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m857E572D5CC61334AB231EFA59092D30857DCFD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m98C7F81FA64837DD6E162E5C70A13BDEF7C18C0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4* L_0 = (List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4*)il2cpp_codegen_object_new(List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m69A54ED11B9857404699079358C757A11363E887(L_0, List_1__ctor_m69A54ED11B9857404699079358C757A11363E887_RuntimeMethod_var);
		__this->____initializeSystems_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____initializeSystems_0), (void*)L_0);
		List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* L_1 = (List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB*)il2cpp_codegen_object_new(List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m857E572D5CC61334AB231EFA59092D30857DCFD3(L_1, List_1__ctor_m857E572D5CC61334AB231EFA59092D30857DCFD3_RuntimeMethod_var);
		__this->____executeSystems_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executeSystems_1), (void*)L_1);
		List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4* L_2 = (List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4*)il2cpp_codegen_object_new(List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m2F2A619D23D0C508C3AB62A578A007B27C312C73(L_2, List_1__ctor_m2F2A619D23D0C508C3AB62A578A007B27C312C73_RuntimeMethod_var);
		__this->____cleanupSystems_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cleanupSystems_2), (void*)L_2);
		List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6* L_3 = (List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6*)il2cpp_codegen_object_new(List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m98C7F81FA64837DD6E162E5C70A13BDEF7C18C0F(L_3, List_1__ctor_m98C7F81FA64837DD6E162E5C70A13BDEF7C18C0F_RuntimeMethod_var);
		__this->____tearDownSystems_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tearDownSystems_3), (void*)L_3);
		return;
	}
}
// Entitas.Systems Entitas.Systems::Add(Entitas.ISystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* Systems_Add_m4BCFCF1839B433C2F91B7D8E7CA60F8A49683061 (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, RuntimeObject* ___system0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICleanupSystem_tF99E4939D5332AA0B91FEB2F59FB859B1215F0CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExecuteSystem_t4E30FED777E2D68FE364CF650299C3CFC2EE2B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializeSystem_t35D02C33CCCC76426F530F7A98156337997FAA21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITearDownSystem_t7690882D96402E660A661CF00AEEB2FD33CBBFB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3470969576B79057EE94FCA211CB46D0AA243DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m54A91912B2411D0D35AC46B000D66485CC8798BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m955BFC0F3B491F15CD74C678A961B4900A9874DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBD3B17EDD7711457A94E0B737F51E4A3035D8810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___system0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IInitializeSystem_t35D02C33CCCC76426F530F7A98156337997FAA21_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4* L_2 = __this->____initializeSystems_0;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_2);
		List_1_Add_mBD3B17EDD7711457A94E0B737F51E4A3035D8810_inline(L_2, L_3, List_1_Add_mBD3B17EDD7711457A94E0B737F51E4A3035D8810_RuntimeMethod_var);
	}

IL_0016:
	{
		RuntimeObject* L_4 = ___system0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IExecuteSystem_t4E30FED777E2D68FE364CF650299C3CFC2EE2B75_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* L_6 = __this->____executeSystems_1;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_6);
		List_1_Add_m955BFC0F3B491F15CD74C678A961B4900A9874DA_inline(L_6, L_7, List_1_Add_m955BFC0F3B491F15CD74C678A961B4900A9874DA_RuntimeMethod_var);
	}

IL_002c:
	{
		RuntimeObject* L_8 = ___system0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, ICleanupSystem_tF99E4939D5332AA0B91FEB2F59FB859B1215F0CE_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4* L_10 = __this->____cleanupSystems_2;
		RuntimeObject* L_11 = V_2;
		NullCheck(L_10);
		List_1_Add_m3470969576B79057EE94FCA211CB46D0AA243DF9_inline(L_10, L_11, List_1_Add_m3470969576B79057EE94FCA211CB46D0AA243DF9_RuntimeMethod_var);
	}

IL_0042:
	{
		RuntimeObject* L_12 = ___system0;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, ITearDownSystem_t7690882D96402E660A661CF00AEEB2FD33CBBFB8_il2cpp_TypeInfo_var));
		RuntimeObject* L_13 = V_3;
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6* L_14 = __this->____tearDownSystems_3;
		RuntimeObject* L_15 = V_3;
		NullCheck(L_14);
		List_1_Add_m54A91912B2411D0D35AC46B000D66485CC8798BA_inline(L_14, L_15, List_1_Add_m54A91912B2411D0D35AC46B000D66485CC8798BA_RuntimeMethod_var);
	}

IL_0058:
	{
		return __this;
	}
}
// System.Void Entitas.Systems::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Systems_Initialize_m7BE3CEA29EAA1865944C69369891753EF966B160 (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializeSystem_t35D02C33CCCC76426F530F7A98156337997FAA21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBCC89E3A732616D2D45184D8A5D7780C41025B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m008F12FFE7C434066EB70D102092AC7A3406DFE5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4* L_0 = __this->____initializeSystems_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_m008F12FFE7C434066EB70D102092AC7A3406DFE5(L_0, L_1, List_1_get_Item_m008F12FFE7C434066EB70D102092AC7A3406DFE5_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Entitas.IInitializeSystem::Initialize() */, IInitializeSystem_t35D02C33CCCC76426F530F7A98156337997FAA21_il2cpp_TypeInfo_var, L_2);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		List_1_tE6220CD1E2167FFF79D9EE391372CDAB30C438E4* L_5 = __this->____initializeSystems_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mBCC89E3A732616D2D45184D8A5D7780C41025B2E_inline(L_5, List_1_get_Count_mBCC89E3A732616D2D45184D8A5D7780C41025B2E_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Systems::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Systems_Execute_mFA3AC55E510E9DC064FF80C0950AB01D3A8DDED8 (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExecuteSystem_t4E30FED777E2D68FE364CF650299C3CFC2EE2B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* L_0 = __this->____executeSystems_1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B(L_0, L_1, List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Entitas.IExecuteSystem::Execute() */, IExecuteSystem_t4E30FED777E2D68FE364CF650299C3CFC2EE2B75_il2cpp_TypeInfo_var, L_2);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* L_5 = __this->____executeSystems_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_inline(L_5, List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Systems::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Systems_Cleanup_m37CF0DD2E95676A689BCBA97FD4CCAD9935D150B (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICleanupSystem_tF99E4939D5332AA0B91FEB2F59FB859B1215F0CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m34A818667B41D76E9D3322A642D03BB33900380B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAC23816FC8101220D796791157C5C1E7B74FE2F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4* L_0 = __this->____cleanupSystems_2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_mAC23816FC8101220D796791157C5C1E7B74FE2F3(L_0, L_1, List_1_get_Item_mAC23816FC8101220D796791157C5C1E7B74FE2F3_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Entitas.ICleanupSystem::Cleanup() */, ICleanupSystem_tF99E4939D5332AA0B91FEB2F59FB859B1215F0CE_il2cpp_TypeInfo_var, L_2);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		List_1_tAEDBB8CA3ED279EA3ED6C66B30033E40280037A4* L_5 = __this->____cleanupSystems_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m34A818667B41D76E9D3322A642D03BB33900380B_inline(L_5, List_1_get_Count_m34A818667B41D76E9D3322A642D03BB33900380B_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Systems::TearDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Systems_TearDown_mEA01AEDDC9BF2DC562440D646B47A164AD7E3736 (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITearDownSystem_t7690882D96402E660A661CF00AEEB2FD33CBBFB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC8EC69FAFB2FE4AB7E1CBC7465512DDA4A5C4B6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m136BBBD4A6AAF2E1775292CAD7C27A34F3738BA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6* L_0 = __this->____tearDownSystems_3;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_m136BBBD4A6AAF2E1775292CAD7C27A34F3738BA3(L_0, L_1, List_1_get_Item_m136BBBD4A6AAF2E1775292CAD7C27A34F3738BA3_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Entitas.ITearDownSystem::TearDown() */, ITearDownSystem_t7690882D96402E660A661CF00AEEB2FD33CBBFB8_il2cpp_TypeInfo_var, L_2);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		List_1_tA65A399EA3B6F244C8045E14969A754766FAA6C6* L_5 = __this->____tearDownSystems_3;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mC8EC69FAFB2FE4AB7E1CBC7465512DDA4A5C4B6D_inline(L_5, List_1_get_Count_mC8EC69FAFB2FE4AB7E1CBC7465512DDA4A5C4B6D_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Systems::ActivateReactiveSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Systems_ActivateReactiveSystems_m8CC189427D7FE5CB907A67FBCDCF9F96FDA7F0FC (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveSystem_t097169972AA4253A075D1360A0EBED4AAC6E7F96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* V_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* L_0 = __this->____executeSystems_1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B(L_0, L_1, List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B_RuntimeMethod_var);
		RuntimeObject* L_3 = L_2;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IReactiveSystem_t097169972AA4253A075D1360A0EBED4AAC6E7F96_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_1;
		G_B2_0 = L_3;
		if (!L_4)
		{
			G_B3_0 = L_3;
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Entitas.IReactiveSystem::Activate() */, IReactiveSystem_t097169972AA4253A075D1360A0EBED4AAC6E7F96_il2cpp_TypeInfo_var, L_5);
		G_B3_0 = G_B2_0;
	}

IL_0020:
	{
		V_2 = ((Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E*)IsInstClass((RuntimeObject*)G_B3_0, Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E_il2cpp_TypeInfo_var));
		Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* L_6 = V_2;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* L_7 = V_2;
		NullCheck(L_7);
		Systems_ActivateReactiveSystems_m8CC189427D7FE5CB907A67FBCDCF9F96FDA7F0FC(L_7, NULL);
	}

IL_002f:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* L_10 = __this->____executeSystems_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_inline(L_10, List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Systems::DeactivateReactiveSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Systems_DeactivateReactiveSystems_mCFF9E5EC8DD87FAF1437FF4314365C73592EFE42 (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveSystem_t097169972AA4253A075D1360A0EBED4AAC6E7F96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* V_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* L_0 = __this->____executeSystems_1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B(L_0, L_1, List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B_RuntimeMethod_var);
		RuntimeObject* L_3 = L_2;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IReactiveSystem_t097169972AA4253A075D1360A0EBED4AAC6E7F96_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_1;
		G_B2_0 = L_3;
		if (!L_4)
		{
			G_B3_0 = L_3;
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Entitas.IReactiveSystem::Deactivate() */, IReactiveSystem_t097169972AA4253A075D1360A0EBED4AAC6E7F96_il2cpp_TypeInfo_var, L_5);
		G_B3_0 = G_B2_0;
	}

IL_0020:
	{
		V_2 = ((Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E*)IsInstClass((RuntimeObject*)G_B3_0, Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E_il2cpp_TypeInfo_var));
		Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* L_6 = V_2;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* L_7 = V_2;
		NullCheck(L_7);
		Systems_DeactivateReactiveSystems_mCFF9E5EC8DD87FAF1437FF4314365C73592EFE42(L_7, NULL);
	}

IL_002f:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* L_10 = __this->____executeSystems_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_inline(L_10, List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Entitas.Systems::ClearReactiveSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Systems_ClearReactiveSystems_m944D8FA4D4324865D74EB78C392994B6170F5830 (Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveSystem_t097169972AA4253A075D1360A0EBED4AAC6E7F96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* V_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* L_0 = __this->____executeSystems_1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B(L_0, L_1, List_1_get_Item_mEF669AC0B44B77803D582B526D2C08269A722F4B_RuntimeMethod_var);
		RuntimeObject* L_3 = L_2;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IReactiveSystem_t097169972AA4253A075D1360A0EBED4AAC6E7F96_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_1;
		G_B2_0 = L_3;
		if (!L_4)
		{
			G_B3_0 = L_3;
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Entitas.IReactiveSystem::Clear() */, IReactiveSystem_t097169972AA4253A075D1360A0EBED4AAC6E7F96_il2cpp_TypeInfo_var, L_5);
		G_B3_0 = G_B2_0;
	}

IL_0020:
	{
		V_2 = ((Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E*)IsInstClass((RuntimeObject*)G_B3_0, Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E_il2cpp_TypeInfo_var));
		Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* L_6 = V_2;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		Systems_t8159B225CAC3E3C13C9A931ED0EC460AF1F0AA7E* L_7 = V_2;
		NullCheck(L_7);
		Systems_ClearReactiveSystems_m944D8FA4D4324865D74EB78C392994B6170F5830(L_7, NULL);
	}

IL_002f:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		List_1_t8BB36283515257FA9CF8D70BF92105D506D81BEB* L_10 = __this->____executeSystems_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_inline(L_10, List_1_get_Count_m7639C2A449943F673350F560F544B8B9FAB8A37D_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
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
// System.Void Entitas.ContextDoesNotContainEntityException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextDoesNotContainEntityException__ctor_mD9E43A7F7C959235595BD9594ED211BB998B5AFB (ContextDoesNotContainEntityException_t78A395CA84D8B92D90EC31EC184FF38AD76ACDD9* __this, String_t* ___message0, String_t* ___hint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A5253BF31B79E22DF1C48DB0D96B50B43A9E0A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral9A5253BF31B79E22DF1C48DB0D96B50B43A9E0A5, NULL);
		String_t* L_2 = ___hint1;
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_1, L_2, NULL);
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
// System.Void Entitas.ContextEntityIndexDoesAlreadyExistException::.ctor(Entitas.IContext,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextEntityIndexDoesAlreadyExistException__ctor_mD40BEC1DCB38EF8CC9C808D520F0E002E766DE4E (ContextEntityIndexDoesAlreadyExistException_t9E716ABFE7F1565F5BB62657B36343AB2DC9B5E9* __this, RuntimeObject* ___context0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB5DACAACEF2F6E16BFEA20819AB3E510AE97FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA71835C02B0068E7EB5DB4C34281E4F9F69A9471);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFAF55189584BD4E849AEE6FCE6806B6C8CED8FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC71C8B17B8076CDC68F1E50B55240A9295B757DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC71C8B17B8076CDC68F1E50B55240A9295B757DD);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralC71C8B17B8076CDC68F1E50B55240A9295B757DD);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralBFAF55189584BD4E849AEE6FCE6806B6C8CED8FC);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralBFAF55189584BD4E849AEE6FCE6806B6C8CED8FC);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___context0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralA71835C02B0068E7EB5DB4C34281E4F9F69A9471);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralA71835C02B0068E7EB5DB4C34281E4F9F69A9471);
		String_t* L_8;
		L_8 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_7, NULL);
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_8, _stringLiteral5DB5DACAACEF2F6E16BFEA20819AB3E510AE97FE, NULL);
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
// System.Void Entitas.ContextEntityIndexDoesNotExistException::.ctor(Entitas.IContext,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextEntityIndexDoesNotExistException__ctor_mFADEA51A77F2AA27EE9F34A0D2F4100B7BAAC757 (ContextEntityIndexDoesNotExistException_t23EBA6EDC3488CC51532BB47E86847F248977036* __this, RuntimeObject* ___context0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30BCA17AD2287D35B6E19DEE4768DBE6A7677318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3F8A5729801BFB2F69B94B2BBD68AD343042451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA71835C02B0068E7EB5DB4C34281E4F9F69A9471);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0EAF87E0E4374D484734BE2E61574612E387AAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3F8A5729801BFB2F69B94B2BBD68AD343042451);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralA3F8A5729801BFB2F69B94B2BBD68AD343042451);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralC0EAF87E0E4374D484734BE2E61574612E387AAB);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralC0EAF87E0E4374D484734BE2E61574612E387AAB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___context0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralA71835C02B0068E7EB5DB4C34281E4F9F69A9471);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralA71835C02B0068E7EB5DB4C34281E4F9F69A9471);
		String_t* L_8;
		L_8 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_7, NULL);
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_8, _stringLiteral30BCA17AD2287D35B6E19DEE4768DBE6A7677318, NULL);
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
// System.Void Entitas.ContextStillHasRetainedEntitiesException::.ctor(Entitas.IContext,Entitas.IEntity[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextStillHasRetainedEntitiesException__ctor_m003221AFFD676BF8B27BD1189B09CD5A82BA55BC (ContextStillHasRetainedEntitiesException_t5ABFA49A47FEDC2AE63CE8487800212BE92AFA33* __this, RuntimeObject* ___context0, IEntityU5BU5D_t1277A8B70C2A654BF7A281B47BEB8E63282D7DC9* ___entities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_TisString_t_mC82F15381E10CD21F14ADBF2FB9EEF6F1ADB9D12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__0_0_mD5F3D32E3A52CE0DC6BFAC18D2F879A3361DCA51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981D2EFC2C4CBC4604EE78EFA821029E8E51D4BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BC4F72316B4407C7823417354A9891DA04B4CC6);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5* G_B2_0 = NULL;
	IEntityU5BU5D_t1277A8B70C2A654BF7A281B47BEB8E63282D7DC9* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	String_t* G_B2_4 = NULL;
	ContextStillHasRetainedEntitiesException_t5ABFA49A47FEDC2AE63CE8487800212BE92AFA33* G_B2_5 = NULL;
	Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5* G_B1_0 = NULL;
	IEntityU5BU5D_t1277A8B70C2A654BF7A281B47BEB8E63282D7DC9* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B1_4 = NULL;
	ContextStillHasRetainedEntitiesException_t5ABFA49A47FEDC2AE63CE8487800212BE92AFA33* G_B1_5 = NULL;
	{
		RuntimeObject* L_0 = ___context0;
		String_t* L_1;
		L_1 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, L_0, _stringLiteral981D2EFC2C4CBC4604EE78EFA821029E8E51D4BA, NULL);
		IEntityU5BU5D_t1277A8B70C2A654BF7A281B47BEB8E63282D7DC9* L_2 = ___entities1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var);
		Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5* L_3 = ((U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2;
		Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
		G_B1_3 = _stringLiteral9BC4F72316B4407C7823417354A9891DA04B4CC6;
		G_B1_4 = L_1;
		G_B1_5 = __this;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
			G_B2_3 = _stringLiteral9BC4F72316B4407C7823417354A9891DA04B4CC6;
			G_B2_4 = L_1;
			G_B2_5 = __this;
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var);
		U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85* L_5 = ((U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5* L_6 = (Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5*)il2cpp_codegen_object_new(Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mC6091E8E8B6D64F03D0E0053E726ED562F51F2CC(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__0_0_mD5F3D32E3A52CE0DC6BFAC18D2F879A3361DCA51_RuntimeMethod_var), NULL);
		Func_2_t6D2E58ECD14989F315928FF171DED6E65CBAB6E5* L_7 = L_6;
		((U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
		G_B2_5 = G_B1_5;
	}

IL_003b:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisIEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_TisString_t_mC82F15381E10CD21F14ADBF2FB9EEF6F1ADB9D12((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisIEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_TisString_t_mC82F15381E10CD21F14ADBF2FB9EEF6F1ADB9D12_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_8, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		String_t* L_10;
		L_10 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(G_B2_2, L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B2_3, L_10, NULL);
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(G_B2_5, G_B2_4, L_11, NULL);
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
// System.Void Entitas.ContextStillHasRetainedEntitiesException/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE7082999BBD477AF0B65473481B22F077A7CDB54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85* L_0 = (U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85*)il2cpp_codegen_object_new(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1F2AC3C6282B5951095AB3E31532337B2D7FFB71(L_0, NULL);
		((U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Entitas.ContextStillHasRetainedEntitiesException/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F2AC3C6282B5951095AB3E31532337B2D7FFB71 (U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Entitas.ContextStillHasRetainedEntitiesException/<>c::<.ctor>b__0_0(Entitas.IEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__0_0_mD5F3D32E3A52CE0DC6BFAC18D2F879A3361DCA51 (U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85* __this, RuntimeObject* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisString_t_m95D9261EB0AD194CE759EFE1B6F25B10EA74A5F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__0_1_m401C5F4998086D5DA7D94602BDB16CAA837A6EB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* V_0 = NULL;
	Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* G_B3_0 = NULL;
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	RuntimeObject* G_B3_4 = NULL;
	Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* G_B2_0 = NULL;
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	RuntimeObject* G_B2_4 = NULL;
	{
		RuntimeObject* L_0 = ___e0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(15 /* Entitas.IAERC Entitas.IEntity::get_aerc() */, IEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_il2cpp_TypeInfo_var, L_0);
		V_0 = ((SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2*)IsInstSealed((RuntimeObject*)L_1, SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2_il2cpp_TypeInfo_var));
		SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject* L_3 = ___e0;
		SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* L_4 = V_0;
		NullCheck(L_4);
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_5;
		L_5 = SafeAERC_get_owners_m1AB169D663164AA81CD105D5507E4F10EF283252_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var);
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_6 = ((U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1;
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_7 = L_6;
		G_B2_0 = L_7;
		G_B2_1 = L_5;
		G_B2_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
		G_B2_3 = _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
		G_B2_4 = L_3;
		if (L_7)
		{
			G_B3_0 = L_7;
			G_B3_1 = L_5;
			G_B3_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
			G_B3_3 = _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
			G_B3_4 = L_3;
			goto IL_003f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var);
		U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85* L_8 = ((U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_9 = (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*)il2cpp_codegen_object_new(Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_mD6767DE619116219CD1567BC735C4AC96B9348CF(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__0_1_m401C5F4998086D5DA7D94602BDB16CAA837A6EB8_RuntimeMethod_var), NULL);
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_10 = L_9;
		((U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1), (void*)L_10);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_003f:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_Select_TisRuntimeObject_TisString_t_m95D9261EB0AD194CE759EFE1B6F25B10EA74A5F2(G_B3_1, G_B3_0, Enumerable_Select_TisRuntimeObject_TisString_t_m95D9261EB0AD194CE759EFE1B6F25B10EA74A5F2_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_11, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		String_t* L_13;
		L_13 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(G_B3_2, L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(G_B3_4, G_B3_3, L_13, NULL);
		return L_14;
	}

IL_0054:
	{
		RuntimeObject* L_15 = ___e0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		return L_16;
	}
}
// System.String Entitas.ContextStillHasRetainedEntitiesException/<>c::<.ctor>b__0_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__0_1_m401C5F4998086D5DA7D94602BDB16CAA837A6EB8 (U3CU3Ec_tED35ACB0CE60DC167BA870072EF905605A3FAC85* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___o0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void Entitas.EntityIsNotDestroyedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityIsNotDestroyedException__ctor_mCA521C10DFE315016BFD23366CF0D93FB059CDAE (EntityIsNotDestroyedException_t91EDFD71B22E7B3D73184DEAB30CE79A2CAC79A8* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D35E6992FED4911709FE05C4D0D58AA494F59F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6103095F8626AAF90D00D05CCC2158E55AE5154C);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral6103095F8626AAF90D00D05CCC2158E55AE5154C, NULL);
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_1, _stringLiteral5D35E6992FED4911709FE05C4D0D58AA494F59F9, NULL);
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
// System.Void Entitas.ContextInfoException::.ctor(Entitas.IContext,Entitas.ContextInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextInfoException__ctor_m032988BE9BE5523E81414A9AC35CD54C2BAF4168 (ContextInfoException_t552346465EEC6A53F2D058FDA974D3147D830782* __this, RuntimeObject* ___context0, ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* ___contextInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IContext_t0801D5F43915BAD7010CF74F4DC08ADEDBCFC8DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A7C0D84FB2D0735065D4877D8C9EE2E04EB20A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58E35D66F61CD7F1419182F73D8BB8506EE907AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BC9D6ECA9D10FF72429022994FC1ADA7D25AE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral58E35D66F61CD7F1419182F73D8BB8506EE907AD);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral58E35D66F61CD7F1419182F73D8BB8506EE907AD);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		RuntimeObject* L_3 = ___context0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral5BC9D6ECA9D10FF72429022994FC1ADA7D25AE40);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral5BC9D6ECA9D10FF72429022994FC1ADA7D25AE40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___context0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Entitas.IContext::get_totalComponents() */, IContext_t0801D5F43915BAD7010CF74F4DC08ADEDBCFC8DF_il2cpp_TypeInfo_var, L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_5;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral4A7C0D84FB2D0735065D4877D8C9EE2E04EB20A6);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral4A7C0D84FB2D0735065D4877D8C9EE2E04EB20A6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_12 = ___contextInfo1;
		NullCheck(L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12->___componentNames_1;
		NullCheck(L_13);
		int32_t L_14 = ((int32_t)(((RuntimeArray*)L_13)->max_length));
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_11;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		String_t* L_17;
		L_17 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_16, NULL);
		ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* L_18 = ___contextInfo1;
		NullCheck(L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18->___componentNames_1;
		String_t* L_20;
		L_20 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_19, NULL);
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_17, L_20, NULL);
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
// System.Void Entitas.EntityAlreadyHasComponentException::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityAlreadyHasComponentException__ctor_mBA4E32B23CDDF8515EB6BC6A2CA509FB95C5B790 (EntityAlreadyHasComponentException_t180376056AF6FAEE24DCEA02957A565B06F3D63D* __this, int32_t ___index0, String_t* ___message1, String_t* ___hint2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23E00DFE20D0EDCEF66A31C2D2DC3BE48772FCA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___message1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral23E00DFE20D0EDCEF66A31C2D2DC3BE48772FCA5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral23E00DFE20D0EDCEF66A31C2D2DC3BE48772FCA5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___index0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		String_t* L_9;
		L_9 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_8, NULL);
		String_t* L_10 = ___hint2;
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_9, L_10, NULL);
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
// System.Void Entitas.EntityDoesNotHaveComponentException::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityDoesNotHaveComponentException__ctor_m79427698C1E92941BFFF19395ED18922D56941BB (EntityDoesNotHaveComponentException_t2204861A7C3C0EEA828CF52D0A151A00E413020C* __this, int32_t ___index0, String_t* ___message1, String_t* ___hint2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0D0A9C5E9251DBE7431001CD318A7D8B1323301);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___message1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralA0D0A9C5E9251DBE7431001CD318A7D8B1323301);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralA0D0A9C5E9251DBE7431001CD318A7D8B1323301);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___index0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		String_t* L_9;
		L_9 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_8, NULL);
		String_t* L_10 = ___hint2;
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_9, L_10, NULL);
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
// System.Void Entitas.EntityIsAlreadyRetainedByOwnerException::.ctor(Entitas.IEntity,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityIsAlreadyRetainedByOwnerException__ctor_m02B6DD1E20F09F4F4A1571B591B4075F41BC746E (EntityIsAlreadyRetainedByOwnerException_tB58BD16D6DB0C073D792DFE04F76CEBAE2EE58FE* __this, RuntimeObject* ___entity0, RuntimeObject* ___owner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1822A24BC489207A3699F84A731DBF1B235C6E13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86763FF236B7D1A281A24EC00C7374D860CCA221);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB79F3D98860D557F6828ED8EE2B870DFE0DB88A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		RuntimeObject* L_3 = ___owner1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1822A24BC489207A3699F84A731DBF1B235C6E13);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral1822A24BC489207A3699F84A731DBF1B235C6E13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___entity0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral86763FF236B7D1A281A24EC00C7374D860CCA221);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral86763FF236B7D1A281A24EC00C7374D860CCA221);
		String_t* L_8;
		L_8 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_7, NULL);
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_8, _stringLiteralB79F3D98860D557F6828ED8EE2B870DFE0DB88A5, NULL);
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
// System.Void Entitas.EntityIsNotEnabledException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityIsNotEnabledException__ctor_m252F304FAE1EFD9D9674291D35E2D650648FDE08 (EntityIsNotEnabledException_tC48798BE7CA57C50EF69705FC8BF2F440DD7957C* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DFC00054C72CA06D0162955D17D64895EB1837C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD93758B5185819AEFE21A48FB425EC792CD52046);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteralD93758B5185819AEFE21A48FB425EC792CD52046, NULL);
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_1, _stringLiteral5DFC00054C72CA06D0162955D17D64895EB1837C, NULL);
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
// System.Void Entitas.EntityIsNotRetainedByOwnerException::.ctor(Entitas.IEntity,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityIsNotRetainedByOwnerException__ctor_m2DCE0D9B0197B5C86B7A2038AFF8B06581976727 (EntityIsNotRetainedByOwnerException_t5C9A88040F783ECA528614B562071C871DF738DE* __this, RuntimeObject* ___entity0, RuntimeObject* ___owner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral045CE587D4FC2F581D7D4A4D1E015576DB1CDA4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53C60D7FDD9672F2421E7FDD885CE9C82E848BBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral552BA9BD8DC606651C356E825380CB6A7B858A73);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		RuntimeObject* L_3 = ___owner1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral045CE587D4FC2F581D7D4A4D1E015576DB1CDA4B);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral045CE587D4FC2F581D7D4A4D1E015576DB1CDA4B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___entity0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral53C60D7FDD9672F2421E7FDD885CE9C82E848BBA);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral53C60D7FDD9672F2421E7FDD885CE9C82E848BBA);
		String_t* L_8;
		L_8 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_7, NULL);
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_8, _stringLiteral552BA9BD8DC606651C356E825380CB6A7B858A73, NULL);
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
// System.Void Entitas.EntityIndexException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityIndexException__ctor_m1265A9363D62300CF73043A526A06B2755D8815D (EntityIndexException_t9BABEB3E99FFE1156DCFEC91285714BD7C96FED8* __this, String_t* ___message0, String_t* ___hint1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___hint1;
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_0, L_1, NULL);
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
// System.Void Entitas.MatcherException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatcherException__ctor_m191E462E239DCD65CFE3B8397A5239735A46B488 (MatcherException_t98972F509249B23D4B5F525E68570C7AE8089BA4* __this, int32_t ___indices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF3F1351EAC916DB6050B4C0C46DB0BD2DF1AA56);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___indices0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteralEF3F1351EAC916DB6050B4C0C46DB0BD2DF1AA56, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_3, NULL);
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
// System.Void Entitas.CollectorException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectorException__ctor_m697D555590A484D9A2F36B8C35353436ADA2768F (CollectorException_t57D1B1EA14CFFC9C5996CBCFA04F3360C625C5BB* __this, String_t* ___message0, String_t* ___hint1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___hint1;
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_0, L_1, NULL);
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
// System.String Entitas.EntitasResources::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasResources_GetVersion_mE876F548E4BC50AEC9D0B4BADE0125A5A34F5005 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Entity_tB4178C475C4604A531B84ABE4E804A477025267D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0335C65EEF6379144CEBFCCFBA3673189514186C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Entity_tB4178C475C4604A531B84ABE4E804A477025267D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Assembly_t* L_2;
		L_2 = VirtualFuncInvoker0< Assembly_t* >::Invoke(26 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_1);
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = VirtualFuncInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t* >::Invoke(14 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_2, _stringLiteral0335C65EEF6379144CEBFCCFBA3673189514186C);
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_4 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_4, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0031;
					}
				}
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0031:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_7);
			V_0 = L_8;
			goto IL_0032;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		String_t* L_9 = V_0;
		return L_9;
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
// Entitas.IEntity Entitas.CollectionExtension::SingleEntity(System.Collections.Generic.ICollection`1<Entitas.IEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionExtension_SingleEntity_m47A29F143D40F8EC1A538C0AC8474B6652E4F786 (RuntimeObject* ___collection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisIEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_m86688DBA9A12BCF636B40747492B0D0C6C504144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t873BC7044D20F9CC7BA5AFA879A876DC31440F2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___collection0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Entitas.IEntity>::get_Count() */, ICollection_1_t873BC7044D20F9CC7BA5AFA879A876DC31440F2A_il2cpp_TypeInfo_var, L_0);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___collection0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Entitas.IEntity>::get_Count() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ICollection_1_t873BC7044D20F9CC7BA5AFA879A876DC31440F2A_il2cpp_TypeInfo_var)), L_2);
		SingleEntityException_t183BAB11477B2A57E37055080769CEA53FA77858* L_4 = (SingleEntityException_t183BAB11477B2A57E37055080769CEA53FA77858*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleEntityException_t183BAB11477B2A57E37055080769CEA53FA77858_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		SingleEntityException__ctor_m4A81150F6003B9F03E3A073B980C5539F2BDB502(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CollectionExtension_SingleEntity_m47A29F143D40F8EC1A538C0AC8474B6652E4F786_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_5 = ___collection0;
		RuntimeObject* L_6;
		L_6 = Enumerable_First_TisIEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_m86688DBA9A12BCF636B40747492B0D0C6C504144(L_5, Enumerable_First_TisIEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_m86688DBA9A12BCF636B40747492B0D0C6C504144_RuntimeMethod_var);
		return L_6;
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
// System.Void Entitas.SingleEntityException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEntityException__ctor_m4A81150F6003B9F03E3A073B980C5539F2BDB502 (SingleEntityException_t183BAB11477B2A57E37055080769CEA53FA77858* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7479CB2153D35E226E315DCE47F0D5024C373F2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF62654508343336C50FBDE2D668C89E740DB9D8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___count0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(_stringLiteralF62654508343336C50FBDE2D668C89E740DB9D8C, L_2, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, NULL);
		EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E(__this, L_3, _stringLiteral7479CB2153D35E226E315DCE47F0D5024C373F2D, NULL);
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
// System.Void Entitas.PublicMemberInfoEntityExtension::CopyTo(Entitas.IEntity,Entitas.IEntity,System.Boolean,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicMemberInfoEntityExtension_CopyTo_mC64FE334472D65E763F6C43E6D8585A3858AAC4F (RuntimeObject* ___entity0, RuntimeObject* ___target1, bool ___replaceExisting2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B3_0 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___indices3;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0007;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___indices3;
		G_B3_0 = L_1;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_2 = ___entity0;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(23 /* System.Int32[] Entitas.IEntity::GetComponentIndices() */, IEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_0050;
	}

IL_0012:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject* L_8 = ___entity0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(21 /* Entitas.IComponent Entitas.IEntity::GetComponent(System.Int32) */, IEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_il2cpp_TypeInfo_var, L_8, L_9);
		V_3 = L_10;
		RuntimeObject* L_11 = ___target1;
		int32_t L_12 = V_2;
		RuntimeObject* L_13 = V_3;
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_13, NULL);
		NullCheck(L_11);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, Type_t* >::Invoke(29 /* Entitas.IComponent Entitas.IEntity::CreateComponent(System.Int32,System.Type) */, IEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_il2cpp_TypeInfo_var, L_11, L_12, L_14);
		V_4 = L_15;
		RuntimeObject* L_16 = V_3;
		RuntimeObject* L_17 = V_4;
		PublicMemberInfoExtension_CopyPublicMemberValues_m06325ECB4FA659EFF5F3FA6E91DF2E06BE49BCFE(L_16, L_17, NULL);
		bool L_18 = ___replaceExisting2;
		if (!L_18)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_19 = ___target1;
		int32_t L_20 = V_2;
		RuntimeObject* L_21 = V_4;
		NullCheck(L_19);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(20 /* System.Void Entitas.IEntity::ReplaceComponent(System.Int32,Entitas.IComponent) */, IEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_il2cpp_TypeInfo_var, L_19, L_20, L_21);
		goto IL_004c;
	}

IL_0043:
	{
		RuntimeObject* L_22 = ___target1;
		int32_t L_23 = V_2;
		RuntimeObject* L_24 = V_4;
		NullCheck(L_22);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(18 /* System.Void Entitas.IEntity::AddComponent(System.Int32,Entitas.IComponent) */, IEntity_t16C38023789E4F2A4A32C4639EE8610DE0F9E97F_il2cpp_TypeInfo_var, L_22, L_23, L_24);
	}

IL_004c:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0050:
	{
		int32_t L_26 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
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
// System.String Entitas.EntitasStringExtension::AddContextSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_AddContextSuffix_mF681092AFCD668D4946B72BDEAA954AAA78A7220 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0849E26A6A4A2DAE7ACBD20B9787BC3CB5CF6F4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_addSuffix_m7E05902931F90E5D2478FEEE1530BC8CB676C4B4(L_0, _stringLiteral0849E26A6A4A2DAE7ACBD20B9787BC3CB5CF6F4D, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::RemoveContextSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_RemoveContextSuffix_m3B20CA46083CD14BA6E848AAE25EBF292467EB0F (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0849E26A6A4A2DAE7ACBD20B9787BC3CB5CF6F4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_removeSuffix_mC6927E616894928D2CE9D10493CB637BA521ED33(L_0, _stringLiteral0849E26A6A4A2DAE7ACBD20B9787BC3CB5CF6F4D, NULL);
		return L_1;
	}
}
// System.Boolean Entitas.EntitasStringExtension::HasContextSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntitasStringExtension_HasContextSuffix_m1D4BBD10E4DDFEB4CC7E016562A17E6EBB92348B (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0849E26A6A4A2DAE7ACBD20B9787BC3CB5CF6F4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3(L_0, _stringLiteral0849E26A6A4A2DAE7ACBD20B9787BC3CB5CF6F4D, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::AddEntitySuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_AddEntitySuffix_mA50D034321C5CF02FF18F3A6BA1AB324FD7702A4 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE006008788ACD78A3DA9418A85208D7602DC81D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_addSuffix_m7E05902931F90E5D2478FEEE1530BC8CB676C4B4(L_0, _stringLiteralE006008788ACD78A3DA9418A85208D7602DC81D0, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::RemoveEntitySuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_RemoveEntitySuffix_mF0002FBB91448B806EAC651941825D31AB4D1F94 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE006008788ACD78A3DA9418A85208D7602DC81D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_removeSuffix_mC6927E616894928D2CE9D10493CB637BA521ED33(L_0, _stringLiteralE006008788ACD78A3DA9418A85208D7602DC81D0, NULL);
		return L_1;
	}
}
// System.Boolean Entitas.EntitasStringExtension::HasEntitySuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntitasStringExtension_HasEntitySuffix_m785BD1AC84BAB61E60B06C098C16217C937782AF (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE006008788ACD78A3DA9418A85208D7602DC81D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3(L_0, _stringLiteralE006008788ACD78A3DA9418A85208D7602DC81D0, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::AddComponentSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_AddComponentSuffix_mE2636EA75A434E0C108E8BEF73F5729213307165 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_addSuffix_m7E05902931F90E5D2478FEEE1530BC8CB676C4B4(L_0, _stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::RemoveComponentSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_RemoveComponentSuffix_m1C5F9623144E1ACF874970B3E1921B38D05F0AB4 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_removeSuffix_mC6927E616894928D2CE9D10493CB637BA521ED33(L_0, _stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544, NULL);
		return L_1;
	}
}
// System.Boolean Entitas.EntitasStringExtension::HasComponentSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntitasStringExtension_HasComponentSuffix_mCF23BDA6180B327CCF0050DDE8E05938703D2097 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3(L_0, _stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::AddSystemSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_AddSystemSuffix_mEE40CE5F09E953DFEE223B753A7043F042B7261B (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_addSuffix_m7E05902931F90E5D2478FEEE1530BC8CB676C4B4(L_0, _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::RemoveSystemSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_RemoveSystemSuffix_m51DB3959E426F92557370DB0E4D9FCF3AC0FF287 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_removeSuffix_mC6927E616894928D2CE9D10493CB637BA521ED33(L_0, _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64, NULL);
		return L_1;
	}
}
// System.Boolean Entitas.EntitasStringExtension::HasSystemSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntitasStringExtension_HasSystemSuffix_mC91DBB1D382FC656E19583448ECF6B6D67004E1C (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3(L_0, _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::AddMatcherSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_AddMatcherSuffix_m0EA35C1BFF1854DCB056AF75B3DEE38100C8C428 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57A73DDAE80B092D40521059D162EF5AF60EA12F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_addSuffix_m7E05902931F90E5D2478FEEE1530BC8CB676C4B4(L_0, _stringLiteral57A73DDAE80B092D40521059D162EF5AF60EA12F, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::RemoveMatcherSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_RemoveMatcherSuffix_mA1532ACB7F7EC2DA5B8BF78AD6801EF7B80D66BD (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57A73DDAE80B092D40521059D162EF5AF60EA12F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_removeSuffix_mC6927E616894928D2CE9D10493CB637BA521ED33(L_0, _stringLiteral57A73DDAE80B092D40521059D162EF5AF60EA12F, NULL);
		return L_1;
	}
}
// System.Boolean Entitas.EntitasStringExtension::HasMatcherSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntitasStringExtension_HasMatcherSuffix_m188030E94E1F834A3ECCD61CA1CD283027D1A0F6 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57A73DDAE80B092D40521059D162EF5AF60EA12F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3(L_0, _stringLiteral57A73DDAE80B092D40521059D162EF5AF60EA12F, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::AddListenerSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_AddListenerSuffix_m9A25E777D9C1F40B31AEF392B385B29C0254BA7C (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3125B63029085F66AA6486C20739994CD2F327DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_addSuffix_m7E05902931F90E5D2478FEEE1530BC8CB676C4B4(L_0, _stringLiteral3125B63029085F66AA6486C20739994CD2F327DA, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::RemoveListenerSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_RemoveListenerSuffix_mC24B4AA52080D20CC0BB79DEB8CFC5BD2CA93E40 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3125B63029085F66AA6486C20739994CD2F327DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = EntitasStringExtension_removeSuffix_mC6927E616894928D2CE9D10493CB637BA521ED33(L_0, _stringLiteral3125B63029085F66AA6486C20739994CD2F327DA, NULL);
		return L_1;
	}
}
// System.Boolean Entitas.EntitasStringExtension::HasListenerSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntitasStringExtension_HasListenerSuffix_m38538E8DE8BF8DAA59C7B1FC68BB4C7228A272B3 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3125B63029085F66AA6486C20739994CD2F327DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3(L_0, _stringLiteral3125B63029085F66AA6486C20739994CD2F327DA, NULL);
		return L_1;
	}
}
// System.String Entitas.EntitasStringExtension::addSuffix(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_addSuffix_m7E05902931F90E5D2478FEEE1530BC8CB676C4B4 (String_t* ___str0, String_t* ___suffix1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___str0;
		String_t* L_1 = ___suffix1;
		bool L_2;
		L_2 = EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_3 = ___str0;
		String_t* L_4 = ___suffix1;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, L_4, NULL);
		return L_5;
	}

IL_0011:
	{
		String_t* L_6 = ___str0;
		return L_6;
	}
}
// System.String Entitas.EntitasStringExtension::removeSuffix(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntitasStringExtension_removeSuffix_mC6927E616894928D2CE9D10493CB637BA521ED33 (String_t* ___str0, String_t* ___suffix1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___str0;
		String_t* L_1 = ___suffix1;
		bool L_2;
		L_2 = EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_3 = ___str0;
		return L_3;
	}

IL_000b:
	{
		String_t* L_4 = ___str0;
		String_t* L_5 = ___str0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		String_t* L_7 = ___suffix1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		NullCheck(L_4);
		String_t* L_9;
		L_9 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_4, 0, ((int32_t)il2cpp_codegen_subtract(L_6, L_8)), NULL);
		return L_9;
	}
}
// System.Boolean Entitas.EntitasStringExtension::hasSuffix(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3 (String_t* ___str0, String_t* ___suffix1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___str0;
		String_t* L_1 = ___suffix1;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_0, L_1, 4, NULL);
		return L_2;
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
// System.Int32 Entitas.UnsafeAERC::get_retainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeAERC_get_retainCount_m4FB2DAF72CC78BDCB3798ECEC1C41209912554A1 (UnsafeAERC_tAE5B355208C71BFF1D4400DCE8C30652EFF2696F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____retainCount_0;
		return L_0;
	}
}
// System.Void Entitas.UnsafeAERC::Retain(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAERC_Retain_mF9274634CE1859165B7850CE7664EE9229EEB9B9 (UnsafeAERC_tAE5B355208C71BFF1D4400DCE8C30652EFF2696F* __this, RuntimeObject* ___owner0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____retainCount_0;
		__this->____retainCount_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// System.Void Entitas.UnsafeAERC::Release(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAERC_Release_m294300937C308CC833E6691AB069195318810B7F (UnsafeAERC_tAE5B355208C71BFF1D4400DCE8C30652EFF2696F* __this, RuntimeObject* ___owner0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____retainCount_0;
		__this->____retainCount_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
// System.Void Entitas.UnsafeAERC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAERC__ctor_m4A8C0C254335509A68C6A6E40F425482914AF4DC (UnsafeAERC_tAE5B355208C71BFF1D4400DCE8C30652EFF2696F* __this, const RuntimeMethod* method) 
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
// System.Int32 Entitas.SafeAERC::get_retainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SafeAERC_get_retainCount_m68B5B5B0D483E39BE3C5002C569621A44BB98DF4 (SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = __this->____owners_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_inline(L_0, HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.HashSet`1<System.Object> Entitas.SafeAERC::get_owners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* SafeAERC_get_owners_m1AB169D663164AA81CD105D5507E4F10EF283252 (SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* __this, const RuntimeMethod* method) 
{
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = __this->____owners_1;
		return L_0;
	}
}
// System.Void Entitas.SafeAERC::.ctor(Entitas.IEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAERC__ctor_mC581C185C97CE4CF301AE39B0D2E26B5142FDEB4 (SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* __this, RuntimeObject* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)il2cpp_codegen_object_new(HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E(L_0, HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_RuntimeMethod_var);
		__this->____owners_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____owners_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_1 = ___entity0;
		__this->____entity_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entity_0), (void*)L_1);
		return;
	}
}
// System.Void Entitas.SafeAERC::Retain(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAERC_Retain_mBE0924B7AC1821EA3C6F266EFFFE02CE4B5583D6 (SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* __this, RuntimeObject* ___owner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0;
		L_0 = SafeAERC_get_owners_m1AB169D663164AA81CD105D5507E4F10EF283252_inline(__this, NULL);
		RuntimeObject* L_1 = ___owner0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B(L_0, L_1, HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_3 = __this->____entity_0;
		RuntimeObject* L_4 = ___owner0;
		EntityIsAlreadyRetainedByOwnerException_tB58BD16D6DB0C073D792DFE04F76CEBAE2EE58FE* L_5 = (EntityIsAlreadyRetainedByOwnerException_tB58BD16D6DB0C073D792DFE04F76CEBAE2EE58FE*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntityIsAlreadyRetainedByOwnerException_tB58BD16D6DB0C073D792DFE04F76CEBAE2EE58FE_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		EntityIsAlreadyRetainedByOwnerException__ctor_m02B6DD1E20F09F4F4A1571B591B4075F41BC746E(L_5, L_3, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeAERC_Retain_mBE0924B7AC1821EA3C6F266EFFFE02CE4B5583D6_RuntimeMethod_var)));
	}

IL_001b:
	{
		return;
	}
}
// System.Void Entitas.SafeAERC::Release(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAERC_Release_m68ECDB31C850E8A2DB6BB6A097AD2EC02333D4B5 (SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* __this, RuntimeObject* ___owner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0;
		L_0 = SafeAERC_get_owners_m1AB169D663164AA81CD105D5507E4F10EF283252_inline(__this, NULL);
		RuntimeObject* L_1 = ___owner0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB(L_0, L_1, HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_3 = __this->____entity_0;
		RuntimeObject* L_4 = ___owner0;
		EntityIsNotRetainedByOwnerException_t5C9A88040F783ECA528614B562071C871DF738DE* L_5 = (EntityIsNotRetainedByOwnerException_t5C9A88040F783ECA528614B562071C871DF738DE*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntityIsNotRetainedByOwnerException_t5C9A88040F783ECA528614B562071C871DF738DE_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		EntityIsNotRetainedByOwnerException__ctor_m2DCE0D9B0197B5C86B7A2038AFF8B06581976727(L_5, L_3, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeAERC_Release_m68ECDB31C850E8A2DB6BB6A097AD2EC02333D4B5_RuntimeMethod_var)));
	}

IL_001b:
	{
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
// System.Void Entitas.ContextInfo::.ctor(System.String,System.String[],System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextInfo__ctor_mA5B146303B6AB8161E318A1F5866CE5D8804BEF0 (ContextInfo_t471F16CB7FF9A3DF0F1B360A38F8DF5CD28749AD* __this, String_t* ___name0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___componentNames1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___componentTypes2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___componentNames1;
		__this->___componentNames_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___componentNames_1), (void*)L_1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___componentTypes2;
		__this->___componentTypes_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___componentTypes_2), (void*)L_2);
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
// System.Void Entitas.EntitasException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E (EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD* __this, String_t* ___message0, String_t* ___hint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD* G_B2_0 = NULL;
	EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	EntitasException_tCF713E0DA03CB155FC2C2E30652A842FE732B2DD* G_B3_1 = NULL;
	{
		String_t* L_0 = ___hint1;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		String_t* L_1 = ___message0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_0007:
	{
		String_t* L_2 = ___message0;
		String_t* L_3 = ___hint1;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(G_B3_1, G_B3_0, NULL);
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
void ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_Multicast(ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* currentDelegate = reinterpret_cast<ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___context0, ___entity1, method);
	}
}
void ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_Open(ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___entity1, method);
}
void ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_Closed(ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___context0, ___entity1, method);
}
void ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_OpenStaticInvoker(ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___context0, ___entity1);
}
void ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_ClosedStaticInvoker(ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0, ___entity1);
}
void ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_OpenVirtual(ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___context0, ___entity1);
}
void ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_OpenInterface(ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___context0, ___entity1);
}
void ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_OpenGenericVirtual(ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(method, ___context0, ___entity1);
}
void ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_OpenGenericInterface(ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(method, ___context0, ___entity1);
}
// System.Void Entitas.ContextEntityChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextEntityChanged__ctor_mE9220FC1EAC9839BF4549817DC8FC7F69CA8D1AF (ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_Closed;
	}
	else
	{
		bool isOpen = methodCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2_Multicast;
}
// System.Void Entitas.ContextEntityChanged::Invoke(Entitas.IContext,Entitas.IEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2 (ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___context0, ___entity1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Entitas.ContextEntityChanged::BeginInvoke(Entitas.IContext,Entitas.IEntity,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ContextEntityChanged_BeginInvoke_m53691AB502728FEAEAC3FB79D05C7CA89E801BF5 (ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___context0, RuntimeObject* ___entity1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___context0;
	__d_args[1] = ___entity1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Entitas.ContextEntityChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextEntityChanged_EndInvoke_mA0A47560371263740D9866189E716B601716A5AF (ContextEntityChanged_t664F55E3A651D2713CC38B64092750E8816DBF42* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_Multicast(ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* currentDelegate = reinterpret_cast<ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___context0, ___group1, method);
	}
}
void ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_Open(ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___group1, method);
}
void ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_Closed(ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___context0, ___group1, method);
}
void ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_OpenStaticInvoker(ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___context0, ___group1);
}
void ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_ClosedStaticInvoker(ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0, ___group1);
}
void ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_OpenVirtual(ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___context0, ___group1);
}
void ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_OpenInterface(ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___context0, ___group1);
}
void ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_OpenGenericVirtual(ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(method, ___context0, ___group1);
}
void ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_OpenGenericInterface(ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(method, ___context0, ___group1);
}
// System.Void Entitas.ContextGroupChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextGroupChanged__ctor_mDC739D99C53E6F24F91C71116E46C6132078DD66 (ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_Closed;
	}
	else
	{
		bool isOpen = methodCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742_Multicast;
}
// System.Void Entitas.ContextGroupChanged::Invoke(Entitas.IContext,Entitas.IGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742 (ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___context0, ___group1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Entitas.ContextGroupChanged::BeginInvoke(Entitas.IContext,Entitas.IGroup,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ContextGroupChanged_BeginInvoke_m65C81A5646CC0237316B77A8D5A1E857FE323FDC (ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___context0, RuntimeObject* ___group1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___context0;
	__d_args[1] = ___group1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Entitas.ContextGroupChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextGroupChanged_EndInvoke_mB88AC0717B226314119C977E0658E534E2EFAE8F (ContextGroupChanged_t40BC410925FACFB7B33FAE12A39E00B5275B580F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_Multicast(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* currentDelegate = reinterpret_cast<EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___entity0, ___index1, ___component2, method);
	}
}
void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_Open(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___entity0, ___index1, ___component2, method);
}
void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_Closed(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___entity0, ___index1, ___component2, method);
}
void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_OpenStaticInvoker(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___entity0, ___index1, ___component2);
}
void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_ClosedStaticInvoker(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___entity0, ___index1, ___component2);
}
void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_OpenVirtual(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method)
{
	VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___entity0, ___index1, ___component2);
}
void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_OpenInterface(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method)
{
	InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___entity0, ___index1, ___component2);
}
void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_OpenGenericVirtual(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(method, ___entity0, ___index1, ___component2);
}
void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_OpenGenericInterface(EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(method, ___entity0, ___index1, ___component2);
}
// System.Void Entitas.EntityComponentChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityComponentChanged__ctor_m5683171ECE6AD229A8A2E39263D94D95A726FF7C (EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_Closed;
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
						__this->___invoke_impl_1 = (intptr_t)&EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_Multicast;
}
// System.Void Entitas.EntityComponentChanged::Invoke(Entitas.IEntity,System.Int32,Entitas.IComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14 (EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___entity0, ___index1, ___component2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Entitas.EntityComponentChanged::BeginInvoke(Entitas.IEntity,System.Int32,Entitas.IComponent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EntityComponentChanged_BeginInvoke_m73EFD66695CCC009CC69A55598FE477FDA8D0C70 (EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___entity0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___component2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Entitas.EntityComponentChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityComponentChanged_EndInvoke_mDA49E34A357C438EFD80FC685B7A395624F546C7 (EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_Multicast(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* currentDelegate = reinterpret_cast<EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___entity0, ___index1, ___previousComponent2, ___newComponent3, method);
	}
}
void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_Open(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___entity0, ___index1, ___previousComponent2, ___newComponent3, method);
}
void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_Closed(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___entity0, ___index1, ___previousComponent2, ___newComponent3, method);
}
void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_OpenStaticInvoker(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___entity0, ___index1, ___previousComponent2, ___newComponent3);
}
void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_ClosedStaticInvoker(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___entity0, ___index1, ___previousComponent2, ___newComponent3);
}
void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_OpenVirtual(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method)
{
	VirtualActionInvoker3< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___entity0, ___index1, ___previousComponent2, ___newComponent3);
}
void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_OpenInterface(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method)
{
	InterfaceActionInvoker3< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___entity0, ___index1, ___previousComponent2, ___newComponent3);
}
void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_OpenGenericVirtual(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker3< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(method, ___entity0, ___index1, ___previousComponent2, ___newComponent3);
}
void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_OpenGenericInterface(EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker3< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(method, ___entity0, ___index1, ___previousComponent2, ___newComponent3);
}
// System.Void Entitas.EntityComponentReplaced::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityComponentReplaced__ctor_mAEDEA94CF108818A39027B490EDCEC4FF756E028 (EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_Closed;
	}
	else
	{
		bool isOpen = methodCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_Multicast;
}
// System.Void Entitas.EntityComponentReplaced::Invoke(Entitas.IEntity,System.Int32,Entitas.IComponent,Entitas.IComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70 (EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___entity0, ___index1, ___previousComponent2, ___newComponent3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Entitas.EntityComponentReplaced::BeginInvoke(Entitas.IEntity,System.Int32,Entitas.IComponent,Entitas.IComponent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EntityComponentReplaced_BeginInvoke_m635D00DF6538EA9416D4691BEC51FED1968F970D (EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___entity0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___previousComponent2;
	__d_args[3] = ___newComponent3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Entitas.EntityComponentReplaced::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityComponentReplaced_EndInvoke_mCC1BA3BF183A92A4B3CF31AAB605D2C2BC44684A (EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_Multicast(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* currentDelegate = reinterpret_cast<EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___entity0, method);
	}
}
void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_Open(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___entity0, method);
}
void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_Closed(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___entity0, method);
}
void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_OpenStaticInvoker(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___entity0);
}
void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_ClosedStaticInvoker(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___entity0);
}
void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_OpenVirtual(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___entity0);
}
void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_OpenInterface(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___entity0);
}
void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_OpenGenericVirtual(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___entity0);
}
void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_OpenGenericInterface(EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___entity0);
}
// System.Void Entitas.EntityEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityEvent__ctor_mB962D865660CA65D5666F56D010725CDAE8E163E (EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_Closed;
	}
	else
	{
		bool isOpen = methodCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_Multicast;
}
// System.Void Entitas.EntityEvent::Invoke(Entitas.IEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234 (EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___entity0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Entitas.EntityEvent::BeginInvoke(Entitas.IEntity,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EntityEvent_BeginInvoke_m110FADC053D453EC8B4B818EDE8946DB21272758 (EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___entity0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Entitas.EntityEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityEvent_EndInvoke_mB148D9CC9DC5CBA247B21D012F09065B00E2EDE8 (EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Entity_get_totalComponents_mCD78FA06E98D931D5E6AAA689358E3327A430A5E_inline (Entity_tB4178C475C4604A531B84ABE4E804A477025267D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____totalComponents_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14_inline (EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (EntityComponentChanged_t7192AC8B4239B99DBB58341AA2758EAFED39C9A4* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___component2, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___entity0, ___index1, ___component2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70_inline (EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (EntityComponentReplaced_tAA437266DF1E9399927B52E8B71BE7C74B32B33D* __this, RuntimeObject* ___entity0, int32_t ___index1, RuntimeObject* ___previousComponent2, RuntimeObject* ___newComponent3, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___entity0, ___index1, ___previousComponent2, ___newComponent3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234_inline (EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (EntityEvent_t816A324A62C6C1DE453EEB0A56E128C0F62299D0* __this, RuntimeObject* ___entity0, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___entity0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* SafeAERC_get_owners_m1AB169D663164AA81CD105D5507E4F10EF283252_inline (SafeAERC_t2ACCDA86D6EADCF4DEDF85944900E09DD7583AB2* __this, const RuntimeMethod* method) 
{
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = __this->____owners_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}
