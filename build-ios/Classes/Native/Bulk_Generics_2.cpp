#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
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
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_t132251570;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t4067030938;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t3512676632;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t4176035766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Func`2<System.Object,System.Char>
struct Func_2_t3001484680;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2447130374;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1<System.Object>
struct U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594;
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Char>
struct U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675;
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>
struct U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369;
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
struct U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<System.Boolean>
struct Predicate_1_t922582089;
// System.Predicate`1<System.Char>
struct Predicate_1_t164787298;
// System.Predicate`1<System.Int32>
struct Predicate_1_t3776239877;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>
struct Predicate_1_t1113159834;
// System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>
struct Predicate_1_t3548444281;
// System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>
struct Predicate_1_t2411271955;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t2063956538;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t3872988374;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2703961024;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3944607041;
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t2423483305;
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t982173797;
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t1111334208;
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t3723462114;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t832123510;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t214452203;
// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t3068109991;
// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t3197270402;
// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t1514431012;
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t362407658;
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t4059188962;
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t2756980746;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t682124106;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3535781894;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3664942305;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1982102915;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t2933211702;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t3283971887;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t2165061829;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t1262235195;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1557236713;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t682480391;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t3960448221;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t3832605257;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3961765668;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t614268397;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t2404744798;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t4085588227;
// UnityEngine.Object
struct Object_t631007953;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* CustomAttributeNamedArgument_t287865710_il2cpp_TypeInfo_var;
extern RuntimeClass* CustomAttributeTypedArgument_t2723150157_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* InvokableCall_t832123510_il2cpp_TypeInfo_var;
extern RuntimeClass* LoadSceneMode_t3251202195_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* OrderBlock_t1585977831_il2cpp_TypeInfo_var;
extern RuntimeClass* Scene_t2348375561_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1864861238;
extern String_t* _stringLiteral2248280106;
extern const RuntimeMethod* InvokableCall_1_Invoke_m3497872319_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_m4071643321_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_m4150391468_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_m891112188_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_2_Invoke_m1520082677_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_3_Invoke_m3141788616_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_4_Invoke_m3371718871_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1245201994_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4156046467_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m1801617894_RuntimeMethod_var;
extern const RuntimeMethod* U3CCreateRepeatIteratorU3Ec__IteratorE_1_Reset_m1825858813_RuntimeMethod_var;
extern const RuntimeMethod* U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m2429402641_RuntimeMethod_var;
extern const RuntimeMethod* U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m3657389382_RuntimeMethod_var;
extern const RuntimeMethod* U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m2453824118_RuntimeMethod_var;
extern const uint32_t InvokableCall_1_Invoke_m3497872319_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_m4071643321_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_m4150391468_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_m891112188_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m337513891_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m4147324340_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m854286695_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m974734014_MetadataUsageId;
extern const uint32_t InvokableCall_2_Invoke_m1520082677_MetadataUsageId;
extern const uint32_t InvokableCall_2__ctor_m3619012188_MetadataUsageId;
extern const uint32_t InvokableCall_3_Invoke_m3141788616_MetadataUsageId;
extern const uint32_t InvokableCall_3__ctor_m4245235439_MetadataUsageId;
extern const uint32_t InvokableCall_4_Invoke_m3371718871_MetadataUsageId;
extern const uint32_t InvokableCall_4__ctor_m3136187504_MetadataUsageId;
extern const uint32_t Nullable_1_Equals_m2119234996_MetadataUsageId;
extern const uint32_t Nullable_1_ToString_m1520177337_MetadataUsageId;
extern const uint32_t Nullable_1_get_Value_m1801617894_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m1546451260_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m2845045805_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m29636740_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m3459414084_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m3843624646_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m401952161_MetadataUsageId;
extern const uint32_t U3CCreateRepeatIteratorU3Ec__IteratorE_1_Reset_m1825858813_MetadataUsageId;
extern const uint32_t U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m437323034_MetadataUsageId;
extern const uint32_t U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m607447036_MetadataUsageId;
extern const uint32_t U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m3133424210_MetadataUsageId;
extern const uint32_t U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m769180727_MetadataUsageId;
extern const uint32_t U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m2429402641_MetadataUsageId;
extern const uint32_t U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m3657389382_MetadataUsageId;
extern const uint32_t U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m838916350_MetadataUsageId;
extern const uint32_t U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m612748497_MetadataUsageId;
extern const uint32_t U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m2453824118_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m2530432941_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m3721186338_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m4018737650_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m677813163_MetadataUsageId;
extern const uint32_t UnityAction_2_BeginInvoke_m1733258791_MetadataUsageId;
extern const uint32_t UnityAction_2_BeginInvoke_m1769266175_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m1397247356_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m322741469_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m2734859485_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m3604335408_MetadataUsageId;
extern const uint32_t UnityEvent_2_FindMethod_Impl_m2569180594_MetadataUsageId;
extern const uint32_t UnityEvent_3_FindMethod_Impl_m1640458315_MetadataUsageId;
extern const uint32_t UnityEvent_4_FindMethod_Impl_m3410547086_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct TypeU5BU5D_t3940880105;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T4176035766_H
#define LIST_1_T4176035766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_t4176035766  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t3944607041* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t3944607041* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t3944607041** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t3944607041* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4176035766_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	BaseInvokableCallU5BU5D_t3944607041* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4176035766_StaticFields, ___EmptyArray_4)); }
	inline BaseInvokableCallU5BU5D_t3944607041* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline BaseInvokableCallU5BU5D_t3944607041** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(BaseInvokableCallU5BU5D_t3944607041* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4176035766_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef U3CCREATEREPEATITERATORU3EC__ITERATORE_1_T4009011594_H
#define U3CCREATEREPEATITERATORU3EC__ITERATORE_1_T4009011594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1<System.Object>
struct  U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1::<i>__0
	int32_t ___U3CiU3E__0_0;
	// System.Int32 System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1::count
	int32_t ___count_1;
	// TResult System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1::element
	RuntimeObject * ___element_2;
	// System.Int32 System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1::$PC
	int32_t ___U24PC_3;
	// TResult System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1::$current
	RuntimeObject * ___U24current_4;
	// System.Int32 System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1::<$>count
	int32_t ___U3CU24U3Ecount_5;
	// TResult System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1::<$>element
	RuntimeObject * ___U3CU24U3Eelement_6;

public:
	inline static int32_t get_offset_of_U3CiU3E__0_0() { return static_cast<int32_t>(offsetof(U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594, ___U3CiU3E__0_0)); }
	inline int32_t get_U3CiU3E__0_0() const { return ___U3CiU3E__0_0; }
	inline int32_t* get_address_of_U3CiU3E__0_0() { return &___U3CiU3E__0_0; }
	inline void set_U3CiU3E__0_0(int32_t value)
	{
		___U3CiU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_element_2() { return static_cast<int32_t>(offsetof(U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594, ___element_2)); }
	inline RuntimeObject * get_element_2() const { return ___element_2; }
	inline RuntimeObject ** get_address_of_element_2() { return &___element_2; }
	inline void set_element_2(RuntimeObject * value)
	{
		___element_2 = value;
		Il2CppCodeGenWriteBarrier((&___element_2), value);
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ecount_5() { return static_cast<int32_t>(offsetof(U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594, ___U3CU24U3Ecount_5)); }
	inline int32_t get_U3CU24U3Ecount_5() const { return ___U3CU24U3Ecount_5; }
	inline int32_t* get_address_of_U3CU24U3Ecount_5() { return &___U3CU24U3Ecount_5; }
	inline void set_U3CU24U3Ecount_5(int32_t value)
	{
		___U3CU24U3Ecount_5 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Eelement_6() { return static_cast<int32_t>(offsetof(U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594, ___U3CU24U3Eelement_6)); }
	inline RuntimeObject * get_U3CU24U3Eelement_6() const { return ___U3CU24U3Eelement_6; }
	inline RuntimeObject ** get_address_of_U3CU24U3Eelement_6() { return &___U3CU24U3Eelement_6; }
	inline void set_U3CU24U3Eelement_6(RuntimeObject * value)
	{
		___U3CU24U3Eelement_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Eelement_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEREPEATITERATORU3EC__ITERATORE_1_T4009011594_H
#ifndef U3CCREATESELECTITERATORU3EC__ITERATOR10_2_T2431000675_H
#define U3CCREATESELECTITERATORU3EC__ITERATOR10_2_T2431000675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Char>
struct  U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::source
	RuntimeObject* ___source_0;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$s_91>__0
	RuntimeObject* ___U3CU24s_91U3E__0_1;
	// TSource System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<element>__1
	RuntimeObject * ___U3CelementU3E__1_2;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::selector
	Func_2_t3001484680 * ___selector_3;
	// System.Int32 System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::$PC
	int32_t ___U24PC_4;
	// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::$current
	Il2CppChar ___U24current_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$>source
	RuntimeObject* ___U3CU24U3Esource_6;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$>selector
	Func_2_t3001484680 * ___U3CU24U3Eselector_7;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}

	inline static int32_t get_offset_of_U3CU24s_91U3E__0_1() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675, ___U3CU24s_91U3E__0_1)); }
	inline RuntimeObject* get_U3CU24s_91U3E__0_1() const { return ___U3CU24s_91U3E__0_1; }
	inline RuntimeObject** get_address_of_U3CU24s_91U3E__0_1() { return &___U3CU24s_91U3E__0_1; }
	inline void set_U3CU24s_91U3E__0_1(RuntimeObject* value)
	{
		___U3CU24s_91U3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_91U3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CelementU3E__1_2() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675, ___U3CelementU3E__1_2)); }
	inline RuntimeObject * get_U3CelementU3E__1_2() const { return ___U3CelementU3E__1_2; }
	inline RuntimeObject ** get_address_of_U3CelementU3E__1_2() { return &___U3CelementU3E__1_2; }
	inline void set_U3CelementU3E__1_2(RuntimeObject * value)
	{
		___U3CelementU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CelementU3E__1_2), value);
	}

	inline static int32_t get_offset_of_selector_3() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675, ___selector_3)); }
	inline Func_2_t3001484680 * get_selector_3() const { return ___selector_3; }
	inline Func_2_t3001484680 ** get_address_of_selector_3() { return &___selector_3; }
	inline void set_selector_3(Func_2_t3001484680 * value)
	{
		___selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___selector_3), value);
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675, ___U24current_5)); }
	inline Il2CppChar get_U24current_5() const { return ___U24current_5; }
	inline Il2CppChar* get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Il2CppChar value)
	{
		___U24current_5 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Esource_6() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675, ___U3CU24U3Esource_6)); }
	inline RuntimeObject* get_U3CU24U3Esource_6() const { return ___U3CU24U3Esource_6; }
	inline RuntimeObject** get_address_of_U3CU24U3Esource_6() { return &___U3CU24U3Esource_6; }
	inline void set_U3CU24U3Esource_6(RuntimeObject* value)
	{
		___U3CU24U3Esource_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Esource_6), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eselector_7() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675, ___U3CU24U3Eselector_7)); }
	inline Func_2_t3001484680 * get_U3CU24U3Eselector_7() const { return ___U3CU24U3Eselector_7; }
	inline Func_2_t3001484680 ** get_address_of_U3CU24U3Eselector_7() { return &___U3CU24U3Eselector_7; }
	inline void set_U3CU24U3Eselector_7(Func_2_t3001484680 * value)
	{
		___U3CU24U3Eselector_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Eselector_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATESELECTITERATORU3EC__ITERATOR10_2_T2431000675_H
#ifndef U3CCREATESELECTITERATORU3EC__ITERATOR10_2_T1876646369_H
#define U3CCREATESELECTITERATORU3EC__ITERATOR10_2_T1876646369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>
struct  U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::source
	RuntimeObject* ___source_0;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$s_91>__0
	RuntimeObject* ___U3CU24s_91U3E__0_1;
	// TSource System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<element>__1
	RuntimeObject * ___U3CelementU3E__1_2;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::selector
	Func_2_t2447130374 * ___selector_3;
	// System.Int32 System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::$PC
	int32_t ___U24PC_4;
	// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::$current
	RuntimeObject * ___U24current_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$>source
	RuntimeObject* ___U3CU24U3Esource_6;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$>selector
	Func_2_t2447130374 * ___U3CU24U3Eselector_7;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}

	inline static int32_t get_offset_of_U3CU24s_91U3E__0_1() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369, ___U3CU24s_91U3E__0_1)); }
	inline RuntimeObject* get_U3CU24s_91U3E__0_1() const { return ___U3CU24s_91U3E__0_1; }
	inline RuntimeObject** get_address_of_U3CU24s_91U3E__0_1() { return &___U3CU24s_91U3E__0_1; }
	inline void set_U3CU24s_91U3E__0_1(RuntimeObject* value)
	{
		___U3CU24s_91U3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_91U3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CelementU3E__1_2() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369, ___U3CelementU3E__1_2)); }
	inline RuntimeObject * get_U3CelementU3E__1_2() const { return ___U3CelementU3E__1_2; }
	inline RuntimeObject ** get_address_of_U3CelementU3E__1_2() { return &___U3CelementU3E__1_2; }
	inline void set_U3CelementU3E__1_2(RuntimeObject * value)
	{
		___U3CelementU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CelementU3E__1_2), value);
	}

	inline static int32_t get_offset_of_selector_3() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369, ___selector_3)); }
	inline Func_2_t2447130374 * get_selector_3() const { return ___selector_3; }
	inline Func_2_t2447130374 ** get_address_of_selector_3() { return &___selector_3; }
	inline void set_selector_3(Func_2_t2447130374 * value)
	{
		___selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___selector_3), value);
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Esource_6() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369, ___U3CU24U3Esource_6)); }
	inline RuntimeObject* get_U3CU24U3Esource_6() const { return ___U3CU24U3Esource_6; }
	inline RuntimeObject** get_address_of_U3CU24U3Esource_6() { return &___U3CU24U3Esource_6; }
	inline void set_U3CU24U3Esource_6(RuntimeObject* value)
	{
		___U3CU24U3Esource_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Esource_6), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eselector_7() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369, ___U3CU24U3Eselector_7)); }
	inline Func_2_t2447130374 * get_U3CU24U3Eselector_7() const { return ___U3CU24U3Eselector_7; }
	inline Func_2_t2447130374 ** get_address_of_U3CU24U3Eselector_7() { return &___U3CU24U3Eselector_7; }
	inline void set_U3CU24U3Eselector_7(Func_2_t2447130374 * value)
	{
		___U3CU24U3Eselector_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Eselector_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATESELECTITERATORU3EC__ITERATOR10_2_T1876646369_H
#ifndef U3CCREATEWHEREITERATORU3EC__ITERATOR1D_1_T230129833_H
#define U3CCREATEWHEREITERATORU3EC__ITERATOR1D_1_T230129833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
struct  U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::source
	RuntimeObject* ___source_0;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::<$s_120>__0
	RuntimeObject* ___U3CU24s_120U3E__0_1;
	// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::<element>__1
	RuntimeObject * ___U3CelementU3E__1_2;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::predicate
	Func_2_t3759279471 * ___predicate_3;
	// System.Int32 System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::$PC
	int32_t ___U24PC_4;
	// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::$current
	RuntimeObject * ___U24current_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::<$>source
	RuntimeObject* ___U3CU24U3Esource_6;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::<$>predicate
	Func_2_t3759279471 * ___U3CU24U3Epredicate_7;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}

	inline static int32_t get_offset_of_U3CU24s_120U3E__0_1() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U3CU24s_120U3E__0_1)); }
	inline RuntimeObject* get_U3CU24s_120U3E__0_1() const { return ___U3CU24s_120U3E__0_1; }
	inline RuntimeObject** get_address_of_U3CU24s_120U3E__0_1() { return &___U3CU24s_120U3E__0_1; }
	inline void set_U3CU24s_120U3E__0_1(RuntimeObject* value)
	{
		___U3CU24s_120U3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_120U3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CelementU3E__1_2() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U3CelementU3E__1_2)); }
	inline RuntimeObject * get_U3CelementU3E__1_2() const { return ___U3CelementU3E__1_2; }
	inline RuntimeObject ** get_address_of_U3CelementU3E__1_2() { return &___U3CelementU3E__1_2; }
	inline void set_U3CelementU3E__1_2(RuntimeObject * value)
	{
		___U3CelementU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CelementU3E__1_2), value);
	}

	inline static int32_t get_offset_of_predicate_3() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___predicate_3)); }
	inline Func_2_t3759279471 * get_predicate_3() const { return ___predicate_3; }
	inline Func_2_t3759279471 ** get_address_of_predicate_3() { return &___predicate_3; }
	inline void set_predicate_3(Func_2_t3759279471 * value)
	{
		___predicate_3 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_3), value);
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Esource_6() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U3CU24U3Esource_6)); }
	inline RuntimeObject* get_U3CU24U3Esource_6() const { return ___U3CU24U3Esource_6; }
	inline RuntimeObject** get_address_of_U3CU24U3Esource_6() { return &___U3CU24U3Esource_6; }
	inline void set_U3CU24U3Esource_6(RuntimeObject* value)
	{
		___U3CU24U3Esource_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Esource_6), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Epredicate_7() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U3CU24U3Epredicate_7)); }
	inline Func_2_t3759279471 * get_U3CU24U3Epredicate_7() const { return ___U3CU24U3Epredicate_7; }
	inline Func_2_t3759279471 ** get_address_of_U3CU24U3Epredicate_7() { return &___U3CU24U3Epredicate_7; }
	inline void set_U3CU24U3Epredicate_7(Func_2_t3759279471 * value)
	{
		___U3CU24U3Epredicate_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Epredicate_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEWHEREITERATORU3EC__ITERATOR1D_1_T230129833_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BASEINVOKABLECALL_T2703961024_H
#define BASEINVOKABLECALL_T2703961024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2703961024  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2703961024_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t2723150157 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ORDERBLOCK_T1585977831_H
#define ORDERBLOCK_T1585977831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BeforeRenderHelper/OrderBlock
struct  OrderBlock_t1585977831 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t3245792599 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___callback_1)); }
	inline UnityAction_t3245792599 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t3245792599 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t3245792599 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
#endif // ORDERBLOCK_T1585977831_H
#ifndef INVOKABLECALL_T832123510_H
#define INVOKABLECALL_T832123510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t832123510  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t3245792599 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t832123510, ___Delegate_0)); }
	inline UnityAction_t3245792599 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t3245792599 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t3245792599 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T832123510_H
#ifndef INVOKABLECALL_1_T214452203_H
#define INVOKABLECALL_1_T214452203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct  InvokableCall_1_t214452203  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t682124106 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t214452203, ___Delegate_0)); }
	inline UnityAction_1_t682124106 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t682124106 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t682124106 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T214452203_H
#ifndef INVOKABLECALL_1_T3068109991_H
#define INVOKABLECALL_1_T3068109991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t3068109991  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t3535781894 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3068109991, ___Delegate_0)); }
	inline UnityAction_1_t3535781894 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t3535781894 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t3535781894 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T3068109991_H
#ifndef INVOKABLECALL_1_T3197270402_H
#define INVOKABLECALL_1_T3197270402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Object>
struct  InvokableCall_1_t3197270402  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t3664942305 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3197270402, ___Delegate_0)); }
	inline UnityAction_1_t3664942305 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t3664942305 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t3664942305 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T3197270402_H
#ifndef INVOKABLECALL_1_T1514431012_H
#define INVOKABLECALL_1_T1514431012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Single>
struct  InvokableCall_1_t1514431012  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t1982102915 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t1514431012, ___Delegate_0)); }
	inline UnityAction_1_t1982102915 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t1982102915 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t1982102915 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T1514431012_H
#ifndef INVOKABLECALL_2_T362407658_H
#define INVOKABLECALL_2_T362407658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t362407658  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t3283971887 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t362407658, ___Delegate_0)); }
	inline UnityAction_2_t3283971887 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t3283971887 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t3283971887 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_2_T362407658_H
#ifndef INVOKABLECALL_3_T4059188962_H
#define INVOKABLECALL_3_T4059188962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4059188962  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1557236713 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4059188962, ___Delegate_0)); }
	inline UnityAction_3_t1557236713 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1557236713 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1557236713 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_3_T4059188962_H
#ifndef INVOKABLECALL_4_T2756980746_H
#define INVOKABLECALL_4_T2756980746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t2756980746  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_t682480391 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t2756980746, ___Delegate_0)); }
	inline UnityAction_4_t682480391 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_t682480391 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_t682480391 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_4_T2756980746_H
#ifndef UNITYEVENT_1_T3832605257_H
#define UNITYEVENT_1_T3832605257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t3832605257  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3832605257, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3832605257_H
#ifndef UNITYEVENT_1_T3961765668_H
#define UNITYEVENT_1_T3961765668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t3961765668  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3961765668, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3961765668_H
#ifndef UNITYEVENT_2_T614268397_H
#define UNITYEVENT_2_T614268397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_t614268397  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t614268397, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T614268397_H
#ifndef UNITYEVENT_3_T2404744798_H
#define UNITYEVENT_3_T2404744798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t2404744798  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t2404744798, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_T2404744798_H
#ifndef UNITYEVENT_4_T4085588227_H
#define UNITYEVENT_4_T4085588227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t4085588227  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_4_t4085588227, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_4_T4085588227_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef NULLABLE_1_T2603721331_H
#define NULLABLE_1_T2603721331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.TimeSpan>
struct  Nullable_1_t2603721331 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t881159249  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2603721331, ___value_0)); }
	inline TimeSpan_t881159249  get_value_0() const { return ___value_0; }
	inline TimeSpan_t881159249 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t881159249  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2603721331, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2603721331_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t287865710 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t2723150157  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t2723150157  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t2723150157 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t2723150157  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_com
{
	CustomAttributeTypedArgument_t2723150157_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef CASTHELPER_1_T2613165452_H
#define CASTHELPER_1_T2613165452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CastHelper`1<System.Object>
struct  CastHelper_1_t2613165452 
{
public:
	// T UnityEngine.CastHelper`1::t
	RuntimeObject * ___t_0;
	// System.IntPtr UnityEngine.CastHelper`1::onePointerFurtherThanT
	intptr_t ___onePointerFurtherThanT_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(CastHelper_1_t2613165452, ___t_0)); }
	inline RuntimeObject * get_t_0() const { return ___t_0; }
	inline RuntimeObject ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(RuntimeObject * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_0), value);
	}

	inline static int32_t get_offset_of_onePointerFurtherThanT_1() { return static_cast<int32_t>(offsetof(CastHelper_1_t2613165452, ___onePointerFurtherThanT_1)); }
	inline intptr_t get_onePointerFurtherThanT_1() const { return ___onePointerFurtherThanT_1; }
	inline intptr_t* get_address_of_onePointerFurtherThanT_1() { return &___onePointerFurtherThanT_1; }
	inline void set_onePointerFurtherThanT_1(intptr_t value)
	{
		___onePointerFurtherThanT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTHELPER_1_T2613165452_H
#ifndef CACHEDINVOKABLECALL_1_T2423483305_H
#define CACHEDINVOKABLECALL_1_T2423483305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct  CachedInvokableCall_1_t2423483305  : public InvokableCall_1_t214452203
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	bool ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t2423483305, ___m_Arg1_1)); }
	inline bool get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline bool* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(bool value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T2423483305_H
#ifndef CACHEDINVOKABLECALL_1_T982173797_H
#define CACHEDINVOKABLECALL_1_T982173797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct  CachedInvokableCall_1_t982173797  : public InvokableCall_1_t3068109991
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	int32_t ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t982173797, ___m_Arg1_1)); }
	inline int32_t get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline int32_t* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(int32_t value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T982173797_H
#ifndef CACHEDINVOKABLECALL_1_T1111334208_H
#define CACHEDINVOKABLECALL_1_T1111334208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct  CachedInvokableCall_1_t1111334208  : public InvokableCall_1_t3197270402
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	RuntimeObject * ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t1111334208, ___m_Arg1_1)); }
	inline RuntimeObject * get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline RuntimeObject ** get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(RuntimeObject * value)
	{
		___m_Arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T1111334208_H
#ifndef CACHEDINVOKABLECALL_1_T3723462114_H
#define CACHEDINVOKABLECALL_1_T3723462114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct  CachedInvokableCall_1_t3723462114  : public InvokableCall_1_t1514431012
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	float ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t3723462114, ___m_Arg1_1)); }
	inline float get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline float* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(float value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T3723462114_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef LOADSCENEMODE_T3251202195_H
#define LOADSCENEMODE_T3251202195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t3251202195 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t3251202195, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T3251202195_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef FUNC_2_T3759279471_H
#define FUNC_2_T3759279471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t3759279471  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3759279471_H
#ifndef FUNC_2_T3001484680_H
#define FUNC_2_T3001484680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Char>
struct  Func_2_t3001484680  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3001484680_H
#ifndef FUNC_2_T2447130374_H
#define FUNC_2_T2447130374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Object>
struct  Func_2_t2447130374  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2447130374_H
#ifndef PREDICATE_1_T922582089_H
#define PREDICATE_1_T922582089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Boolean>
struct  Predicate_1_t922582089  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T922582089_H
#ifndef PREDICATE_1_T164787298_H
#define PREDICATE_1_T164787298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Char>
struct  Predicate_1_t164787298  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T164787298_H
#ifndef PREDICATE_1_T3776239877_H
#define PREDICATE_1_T3776239877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Int32>
struct  Predicate_1_t3776239877  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3776239877_H
#ifndef PREDICATE_1_T3905400288_H
#define PREDICATE_1_T3905400288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t3905400288  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3905400288_H
#ifndef PREDICATE_1_T1113159834_H
#define PREDICATE_1_T1113159834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>
struct  Predicate_1_t1113159834  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T1113159834_H
#ifndef PREDICATE_1_T3548444281_H
#define PREDICATE_1_T3548444281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>
struct  Predicate_1_t3548444281  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3548444281_H
#ifndef PREDICATE_1_T2411271955_H
#define PREDICATE_1_T2411271955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>
struct  Predicate_1_t2411271955  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T2411271955_H
#ifndef GETTER_2_T2063956538_H
#define GETTER_2_T2063956538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct  Getter_2_t2063956538  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTER_2_T2063956538_H
#ifndef STATICGETTER_1_T3872988374_H
#define STATICGETTER_1_T3872988374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct  StaticGetter_1_t3872988374  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATICGETTER_1_T3872988374_H
#ifndef UNITYACTION_1_T682124106_H
#define UNITYACTION_1_T682124106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_t682124106  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T682124106_H
#ifndef UNITYACTION_1_T3535781894_H
#define UNITYACTION_1_T3535781894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t3535781894  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3535781894_H
#ifndef UNITYACTION_1_T3664942305_H
#define UNITYACTION_1_T3664942305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t3664942305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3664942305_H
#ifndef UNITYACTION_1_T1982102915_H
#define UNITYACTION_1_T1982102915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t1982102915  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1982102915_H
#ifndef UNITYACTION_1_T2933211702_H
#define UNITYACTION_1_T2933211702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t2933211702  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T2933211702_H
#ifndef UNITYACTION_2_T3283971887_H
#define UNITYACTION_2_T3283971887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t3283971887  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T3283971887_H
#ifndef UNITYACTION_2_T2165061829_H
#define UNITYACTION_2_T2165061829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_t2165061829  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T2165061829_H
#ifndef UNITYACTION_2_T1262235195_H
#define UNITYACTION_2_T1262235195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t1262235195  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T1262235195_H
#ifndef UNITYACTION_3_T1557236713_H
#define UNITYACTION_3_T1557236713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1557236713  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_3_T1557236713_H
#ifndef UNITYACTION_4_T682480391_H
#define UNITYACTION_4_T682480391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityAction_4_t682480391  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_4_T682480391_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3314784284_gshared (Nullable_1_t2603721331 * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1210311128_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method);
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  Nullable_1_get_Value_m1801617894_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m4046255732_gshared (Nullable_1_t2603721331 * __this, Nullable_1_t2603721331  p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m2119234996_gshared (Nullable_1_t2603721331 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m4232053575_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method);
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m1520177337_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Boolean>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m28611209_gshared (Predicate_1_t922582089 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Char>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3154276773_gshared (Predicate_1_t164787298 * __this, Il2CppChar ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2308795536_gshared (Predicate_1_t3776239877 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3369767990_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2315049893_gshared (Predicate_1_t1113159834 * __this, CustomAttributeNamedArgument_t287865710  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m685699837_gshared (Predicate_1_t3548444281 * __this, CustomAttributeTypedArgument_t2723150157  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m851618236_gshared (Predicate_1_t2411271955 * __this, OrderBlock_t1585977831  ___obj0, const RuntimeMethod* method);
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Getter_2_Invoke_m3667195478_gshared (Getter_2_t2063956538 * __this, RuntimeObject * ____this0, const RuntimeMethod* method);
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * StaticGetter_1_Invoke_m3640162116_gshared (StaticGetter_1_t3872988374 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3535252839_gshared (UnityAction_1_t682124106 * __this, bool ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3388120194_gshared (UnityAction_1_t3535781894 * __this, int32_t ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m272661351_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m1035307306_gshared (UnityAction_1_t1982102915 * __this, float ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3649732398_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m2304474703_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m1541286357_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m944492567_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m1904347475_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m218720656_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m3023855514 (RuntimeObject * __this /* static, unused */, int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
inline void Nullable_1__ctor_m3314784284 (Nullable_1_t2603721331 * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t2603721331 *, TimeSpan_t881159249 , const RuntimeMethod*))Nullable_1__ctor_m3314784284_gshared)(__this, ___value0, method);
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1210311128 (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t2603721331 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1210311128_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* ___message0, const RuntimeMethod* method);
// T System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_t881159249  Nullable_1_get_Value_m1801617894 (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_t881159249  (*) (Nullable_1_t2603721331 *, const RuntimeMethod*))Nullable_1_get_Value_m1801617894_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
inline bool Nullable_1_Equals_m4046255732 (Nullable_1_t2603721331 * __this, Nullable_1_t2603721331  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t2603721331 *, Nullable_1_t2603721331 , const RuntimeMethod*))Nullable_1_Equals_m4046255732_gshared)(__this, p0, method);
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
inline bool Nullable_1_Equals_m2119234996 (Nullable_1_t2603721331 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t2603721331 *, RuntimeObject *, const RuntimeMethod*))Nullable_1_Equals_m2119234996_gshared)(__this, ___other0, method);
}
// System.Boolean System.TimeSpan::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TimeSpan_Equals_m45505612 (TimeSpan_t881159249 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TimeSpan_GetHashCode_m1939414618 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
inline int32_t Nullable_1_GetHashCode_m4232053575 (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t2603721331 *, const RuntimeMethod*))Nullable_1_GetHashCode_m4232053575_gshared)(__this, method);
}
// System.String System.TimeSpan::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TimeSpan_ToString_m1128692466 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.String System.Nullable`1<System.TimeSpan>::ToString()
inline String_t* Nullable_1_ToString_m1520177337 (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_t2603721331 *, const RuntimeMethod*))Nullable_1_ToString_m1520177337_gshared)(__this, method);
}
// System.Boolean System.Predicate`1<System.Boolean>::Invoke(T)
inline bool Predicate_1_Invoke_m28611209 (Predicate_1_t922582089 * __this, bool ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t922582089 *, bool, const RuntimeMethod*))Predicate_1_Invoke_m28611209_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<System.Char>::Invoke(T)
inline bool Predicate_1_Invoke_m3154276773 (Predicate_1_t164787298 * __this, Il2CppChar ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t164787298 *, Il2CppChar, const RuntimeMethod*))Predicate_1_Invoke_m3154276773_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
inline bool Predicate_1_Invoke_m2308795536 (Predicate_1_t3776239877 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t3776239877 *, int32_t, const RuntimeMethod*))Predicate_1_Invoke_m2308795536_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
inline bool Predicate_1_Invoke_m3369767990 (Predicate_1_t3905400288 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))Predicate_1_Invoke_m3369767990_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
inline bool Predicate_1_Invoke_m2315049893 (Predicate_1_t1113159834 * __this, CustomAttributeNamedArgument_t287865710  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t1113159834 *, CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*))Predicate_1_Invoke_m2315049893_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
inline bool Predicate_1_Invoke_m685699837 (Predicate_1_t3548444281 * __this, CustomAttributeTypedArgument_t2723150157  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t3548444281 *, CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*))Predicate_1_Invoke_m685699837_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::Invoke(T)
inline bool Predicate_1_Invoke_m851618236 (Predicate_1_t2411271955 * __this, OrderBlock_t1585977831  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t2411271955 *, OrderBlock_t1585977831 , const RuntimeMethod*))Predicate_1_Invoke_m851618236_gshared)(__this, ___obj0, method);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
inline RuntimeObject * Getter_2_Invoke_m3667195478 (Getter_2_t2063956538 * __this, RuntimeObject * ____this0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Getter_2_t2063956538 *, RuntimeObject *, const RuntimeMethod*))Getter_2_Invoke_m3667195478_gshared)(__this, ____this0, method);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
inline RuntimeObject * StaticGetter_1_Invoke_m3640162116 (StaticGetter_1_t3872988374 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (StaticGetter_1_t3872988374 *, const RuntimeMethod*))StaticGetter_1_Invoke_m3640162116_gshared)(__this, method);
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m2110966014 (BaseInvokableCall_t2703961024 * __this, RuntimeObject * ___target0, MethodInfo_t * ___function1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * NetFxCoreExtensions_CreateDelegate_m751211712 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, RuntimeObject * ___target2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m768115019 (BaseInvokableCall_t2703961024 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR bool BaseInvokableCall_AllowInvoke_m878393606 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___delegate0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m2361978888 (Delegate_t1188392813 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m444570327 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
inline void UnityAction_1_Invoke_m3535252839 (UnityAction_1_t682124106 * __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t682124106 *, bool, const RuntimeMethod*))UnityAction_1_Invoke_m3535252839_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
inline void UnityAction_1_Invoke_m3388120194 (UnityAction_1_t3535781894 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t3535781894 *, int32_t, const RuntimeMethod*))UnityAction_1_Invoke_m3388120194_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
inline void UnityAction_1_Invoke_m272661351 (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))UnityAction_1_Invoke_m272661351_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
inline void UnityAction_1_Invoke_m1035307306 (UnityAction_1_t1982102915 * __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t1982102915 *, float, const RuntimeMethod*))UnityAction_1_Invoke_m1035307306_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
inline void UnityAction_1_Invoke_m3649732398 (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t2933211702 *, Scene_t2348375561 , const RuntimeMethod*))UnityAction_1_Invoke_m3649732398_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m2304474703 (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t3283971887 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))UnityAction_2_Invoke_m2304474703_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m1541286357 (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t2165061829 *, Scene_t2348375561 , int32_t, const RuntimeMethod*))UnityAction_2_Invoke_m1541286357_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m944492567 (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1262235195 *, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*))UnityAction_2_Invoke_m944492567_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
inline void UnityAction_3_Invoke_m1904347475 (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_3_t1557236713 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))UnityAction_3_Invoke_m1904347475_gshared)(__this, ___arg00, ___arg11, ___arg22, method);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
inline void UnityAction_4_Invoke_m218720656 (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_4_t682480391 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))UnityAction_4_Invoke_m218720656_gshared)(__this, ___arg00, ___arg11, ___arg22, ___arg33, method);
}
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m1851535676 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_m3539965410 (UnityEventBase_t3960448221 * __this, BaseInvokableCall_t2703961024 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_m3326364145 (UnityEventBase_t3960448221 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3989987635 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t3940880105* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
extern "C" IL2CPP_METHOD_ATTR List_1_t4176035766 * UnityEventBase_PrepareInvoke_m1785382128 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_t2703961024 * List_1_get_Item_m4156046467 (List_1_t4176035766 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_t2703961024 * (*) (List_1_t4176035766 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m1437964737 (InvokableCall_t832123510 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m1245201994 (List_1_t4176035766 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4176035766 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateRepeatIteratorU3Ec__IteratorE_1__ctor_m1166954228_gshared (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1<System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateRepeatIteratorU3Ec__IteratorE_1_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m3141126828_gshared (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_4();
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateRepeatIteratorU3Ec__IteratorE_1_System_Collections_IEnumerator_get_Current_m3994952378_gshared (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_4();
		return L_0;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateRepeatIteratorU3Ec__IteratorE_1_System_Collections_IEnumerable_GetEnumerator_m2040255614_gshared (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1<System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateRepeatIteratorU3Ec__IteratorE_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m923433989_gshared (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * __this, const RuntimeMethod* method)
{
	U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * V_0 = NULL;
	{
		int32_t* L_0 = (int32_t*)__this->get_address_of_U24PC_3();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)(int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * L_2 = (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 *)L_2;
		U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * L_3 = V_0;
		int32_t L_4 = (int32_t)__this->get_U3CU24U3Ecount_5();
		NullCheck(L_3);
		L_3->set_count_1(L_4);
		U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_U3CU24U3Eelement_6();
		NullCheck(L_5);
		L_5->set_element_2(L_6);
		U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CCreateRepeatIteratorU3Ec__IteratorE_1_MoveNext_m3845053797_gshared (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_3();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_006b;
	}

IL_0021:
	{
		__this->set_U3CiU3E__0_0(0);
		goto IL_0053;
	}

IL_002d:
	{
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_element_2();
		__this->set_U24current_4(L_2);
		__this->set_U24PC_3(1);
		goto IL_006d;
	}

IL_0045:
	{
		int32_t L_3 = (int32_t)__this->get_U3CiU3E__0_0();
		__this->set_U3CiU3E__0_0(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
	}

IL_0053:
	{
		int32_t L_4 = (int32_t)__this->get_U3CiU3E__0_0();
		int32_t L_5 = (int32_t)__this->get_count_1();
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_002d;
		}
	}
	{
		__this->set_U24PC_3((-1));
	}

IL_006b:
	{
		return (bool)0;
	}

IL_006d:
	{
		return (bool)1;
	}
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Void System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateRepeatIteratorU3Ec__IteratorE_1_Dispose_m2954315964_gshared (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateRepeatIterator>c__IteratorE`1<System.Object>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateRepeatIteratorU3Ec__IteratorE_1_Reset_m1825858813_gshared (U3CCreateRepeatIteratorU3Ec__IteratorE_1_t4009011594 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateRepeatIteratorU3Ec__IteratorE_1_Reset_m1825858813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCreateRepeatIteratorU3Ec__IteratorE_1_Reset_m1825858813_RuntimeMethod_var);
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
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Char>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m1010328898_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Char>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m3471715123_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->get_U24current_5();
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Char>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m2022299275_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->get_U24current_5();
		Il2CppChar L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m2458179023_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Char>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m1057415669_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * __this, const RuntimeMethod* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * V_0 = NULL;
	{
		int32_t* L_0 = (int32_t*)__this->get_address_of_U24PC_4();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)(int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * L_3 = V_0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_U3CU24U3Esource_6();
		NullCheck(L_3);
		L_3->set_source_0(L_4);
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * L_5 = V_0;
		Func_2_t3001484680 * L_6 = (Func_2_t3001484680 *)__this->get_U3CU24U3Eselector_7();
		NullCheck(L_5);
		L_5->set_selector_3(L_6);
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Char>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m769180727_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m769180727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_4();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_4((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_00b3;
	}

IL_0023:
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_source_0();
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_2);
		__this->set_U3CU24s_91U3E__0_1(L_3);
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
			{
				case 0:
				{
					goto IL_007e;
				}
			}
		}

IL_0043:
		{
			goto IL_007e;
		}

IL_0048:
		{
			RuntimeObject* L_5 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			NullCheck((RuntimeObject*)L_5);
			RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_5);
			__this->set_U3CelementU3E__1_2(L_6);
			Func_2_t3001484680 * L_7 = (Func_2_t3001484680 *)__this->get_selector_3();
			RuntimeObject * L_8 = (RuntimeObject *)__this->get_U3CelementU3E__1_2();
			NullCheck((Func_2_t3001484680 *)L_7);
			Il2CppChar L_9 = ((  Il2CppChar (*) (Func_2_t3001484680 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t3001484680 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			__this->set_U24current_5(L_9);
			__this->set_U24PC_4(1);
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB5, FINALLY_0093);
		}

IL_007e:
		{
			RuntimeObject* L_10 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (L_11)
			{
				goto IL_0048;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_0097:
		{
			RuntimeObject* L_13 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_00a0:
		{
			RuntimeObject* L_14 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			NullCheck((RuntimeObject*)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ac:
	{
		__this->set_U24PC_4((-1));
	}

IL_00b3:
	{
		return (bool)0;
	}

IL_00b5:
	{
		return (bool)1;
	}
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Char>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m607447036_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m607447036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_4();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_2 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			NullCheck((RuntimeObject*)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Char>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m3657389382_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2431000675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m3657389382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m3657389382_RuntimeMethod_var);
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
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m2334477525_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m749791228_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_5();
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m3765573728_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_5();
		return L_0;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m3692051038_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m3716086981_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * __this, const RuntimeMethod* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * V_0 = NULL;
	{
		int32_t* L_0 = (int32_t*)__this->get_address_of_U24PC_4();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)(int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * L_3 = V_0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_U3CU24U3Esource_6();
		NullCheck(L_3);
		L_3->set_source_0(L_4);
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * L_5 = V_0;
		Func_2_t2447130374 * L_6 = (Func_2_t2447130374 *)__this->get_U3CU24U3Eselector_7();
		NullCheck(L_5);
		L_5->set_selector_3(L_6);
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m3133424210_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m3133424210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_4();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_4((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_00b3;
	}

IL_0023:
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_source_0();
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_2);
		__this->set_U3CU24s_91U3E__0_1(L_3);
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
			{
				case 0:
				{
					goto IL_007e;
				}
			}
		}

IL_0043:
		{
			goto IL_007e;
		}

IL_0048:
		{
			RuntimeObject* L_5 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			NullCheck((RuntimeObject*)L_5);
			RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_5);
			__this->set_U3CelementU3E__1_2(L_6);
			Func_2_t2447130374 * L_7 = (Func_2_t2447130374 *)__this->get_selector_3();
			RuntimeObject * L_8 = (RuntimeObject *)__this->get_U3CelementU3E__1_2();
			NullCheck((Func_2_t2447130374 *)L_7);
			RuntimeObject * L_9 = ((  RuntimeObject * (*) (Func_2_t2447130374 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t2447130374 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			__this->set_U24current_5(L_9);
			__this->set_U24PC_4(1);
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB5, FINALLY_0093);
		}

IL_007e:
		{
			RuntimeObject* L_10 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (L_11)
			{
				goto IL_0048;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_0097:
		{
			RuntimeObject* L_13 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_00a0:
		{
			RuntimeObject* L_14 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			NullCheck((RuntimeObject*)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ac:
	{
		__this->set_U24PC_4((-1));
	}

IL_00b3:
	{
		return (bool)0;
	}

IL_00b5:
	{
		return (bool)1;
	}
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m437323034_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m437323034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_4();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_2 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->get_U3CU24s_91U3E__0_1();
			NullCheck((RuntimeObject*)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m2429402641_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t1876646369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m2429402641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m2429402641_RuntimeMethod_var);
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
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m1723214851_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m1909387290_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_5();
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m2550921559_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_5();
		return L_0;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m3813267333_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m183487175_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * V_0 = NULL;
	{
		int32_t* L_0 = (int32_t*)__this->get_address_of_U24PC_4();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)(int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * L_2 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 *)L_2;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * L_3 = V_0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_U3CU24U3Esource_6();
		NullCheck(L_3);
		L_3->set_source_0(L_4);
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * L_5 = V_0;
		Func_2_t3759279471 * L_6 = (Func_2_t3759279471 *)__this->get_U3CU24U3Epredicate_7();
		NullCheck(L_5);
		L_5->set_predicate_3(L_6);
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m612748497_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m612748497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_4();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_4((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_00be;
	}

IL_0023:
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_source_0();
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_2);
		__this->set_U3CU24s_120U3E__0_1(L_3);
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0089;
				}
			}
		}

IL_0043:
		{
			goto IL_0089;
		}

IL_0048:
		{
			RuntimeObject* L_5 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			NullCheck((RuntimeObject*)L_5);
			RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_5);
			__this->set_U3CelementU3E__1_2(L_6);
			Func_2_t3759279471 * L_7 = (Func_2_t3759279471 *)__this->get_predicate_3();
			RuntimeObject * L_8 = (RuntimeObject *)__this->get_U3CelementU3E__1_2();
			NullCheck((Func_2_t3759279471 *)L_7);
			bool L_9 = ((  bool (*) (Func_2_t3759279471 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t3759279471 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			if (!L_9)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			RuntimeObject * L_10 = (RuntimeObject *)__this->get_U3CelementU3E__1_2();
			__this->set_U24current_5(L_10);
			__this->set_U24PC_4(1);
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xC0, FINALLY_009e);
		}

IL_0089:
		{
			RuntimeObject* L_11 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			NullCheck((RuntimeObject*)L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			if (L_12)
			{
				goto IL_0048;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a2;
			}
		}

IL_00a1:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00a2:
		{
			RuntimeObject* L_14 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			if (L_14)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00ab:
		{
			RuntimeObject* L_15 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b7:
	{
		__this->set_U24PC_4((-1));
	}

IL_00be:
	{
		return (bool)0;
	}

IL_00c0:
	{
		return (bool)1;
	}
	{
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m838916350_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m838916350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_4();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_2 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			NullCheck((RuntimeObject*)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m2453824118_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m2453824118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m2453824118_RuntimeMethod_var);
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
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3314784284_gshared (Nullable_1_t2603721331 * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	{
		__this->set_has_value_1((bool)1);
		TimeSpan_t881159249  L_0 = ___value0;
		__this->set_value_0(L_0);
		return;
	}
}
extern "C"  void Nullable_1__ctor_m3314784284_AdjustorThunk (RuntimeObject * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	Nullable_1__ctor_m3314784284(&_thisAdjusted, ___value0, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1210311128_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
extern "C"  bool Nullable_1_get_HasValue_m1210311128_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	bool _returnValue = Nullable_1_get_HasValue_m1210311128(&_thisAdjusted, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  Nullable_1_get_Value_m1801617894_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_get_Value_m1801617894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, (String_t*)_stringLiteral2248280106, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Nullable_1_get_Value_m1801617894_RuntimeMethod_var);
	}

IL_0016:
	{
		TimeSpan_t881159249  L_2 = (TimeSpan_t881159249 )__this->get_value_0();
		return L_2;
	}
}
extern "C"  TimeSpan_t881159249  Nullable_1_get_Value_m1801617894_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	TimeSpan_t881159249  _returnValue = Nullable_1_get_Value_m1801617894(&_thisAdjusted, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m2119234996_gshared (Nullable_1_t2603721331 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_Equals_m2119234996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (bool)__this->get_has_value_1();
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0010:
	{
		RuntimeObject * L_2 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		RuntimeObject * L_3 = ___other0;
		void* L_4 = alloca(sizeof(Nullable_1_t2603721331 ));
		UnBoxNullable(L_3, TimeSpan_t881159249_il2cpp_TypeInfo_var, L_4);
		bool L_5 = Nullable_1_Equals_m4046255732((Nullable_1_t2603721331 *)(Nullable_1_t2603721331 *)__this, (Nullable_1_t2603721331 )((*(Nullable_1_t2603721331 *)((Nullable_1_t2603721331 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_5;
	}
}
extern "C"  bool Nullable_1_Equals_m2119234996_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	bool _returnValue = Nullable_1_Equals_m2119234996(&_thisAdjusted, ___other0, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m4046255732_gshared (Nullable_1_t2603721331 * __this, Nullable_1_t2603721331  ___other0, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)(&___other0)->get_has_value_1();
		bool L_1 = (bool)__this->get_has_value_1();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		bool L_2 = (bool)__this->get_has_value_1();
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		TimeSpan_t881159249 * L_3 = (TimeSpan_t881159249 *)(&___other0)->get_address_of_value_0();
		TimeSpan_t881159249  L_4 = (TimeSpan_t881159249 )__this->get_value_0();
		TimeSpan_t881159249  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_5);
		bool L_7 = TimeSpan_Equals_m45505612((TimeSpan_t881159249 *)(TimeSpan_t881159249 *)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
extern "C"  bool Nullable_1_Equals_m4046255732_AdjustorThunk (RuntimeObject * __this, Nullable_1_t2603721331  ___other0, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	bool _returnValue = Nullable_1_Equals_m4046255732(&_thisAdjusted, ___other0, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m4232053575_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		TimeSpan_t881159249 * L_1 = (TimeSpan_t881159249 *)__this->get_address_of_value_0();
		int32_t L_2 = TimeSpan_GetHashCode_m1939414618((TimeSpan_t881159249 *)(TimeSpan_t881159249 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  int32_t Nullable_1_GetHashCode_m4232053575_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	int32_t _returnValue = Nullable_1_GetHashCode_m4232053575(&_thisAdjusted, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m1520177337_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_ToString_m1520177337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		TimeSpan_t881159249 * L_1 = (TimeSpan_t881159249 *)__this->get_address_of_value_0();
		String_t* L_2 = TimeSpan_ToString_m1128692466((TimeSpan_t881159249 *)(TimeSpan_t881159249 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_3;
	}
}
extern "C"  String_t* Nullable_1_ToString_m1520177337_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	String_t* _returnValue = Nullable_1_ToString_m1520177337(&_thisAdjusted, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2943702050_gshared (Predicate_1_t922582089 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Boolean>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m28611209_gshared (Predicate_1_t922582089 * __this, bool ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m28611209((Predicate_1_t922582089 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, bool >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, bool >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m3843624646_gshared (Predicate_1_t922582089 * __this, bool ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m3843624646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m2744427925_gshared (Predicate_1_t922582089 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Char>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m1194004425_gshared (Predicate_1_t164787298 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Char>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3154276773_gshared (Predicate_1_t164787298 * __this, Il2CppChar ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m3154276773((Predicate_1_t164787298 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, Il2CppChar >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, Il2CppChar >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m1546451260_gshared (Predicate_1_t164787298 * __this, Il2CppChar ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m1546451260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Char_t3634460470_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<System.Char>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m1476583978_gshared (Predicate_1_t164787298 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2074002922_gshared (Predicate_1_t3776239877 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2308795536_gshared (Predicate_1_t3776239877 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m2308795536((Predicate_1_t3776239877 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m29636740_gshared (Predicate_1_t3776239877 * __this, int32_t ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m29636740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m3675319632_gshared (Predicate_1_t3776239877 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m327447107_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3369767990_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m3369767990((Predicate_1_t3905400288 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___obj0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m213497518_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m1490920825_gshared (Predicate_1_t3905400288 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3002344741_gshared (Predicate_1_t1113159834 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2315049893_gshared (Predicate_1_t1113159834 * __this, CustomAttributeNamedArgument_t287865710  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m2315049893((Predicate_1_t1113159834 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m3459414084_gshared (Predicate_1_t1113159834 * __this, CustomAttributeNamedArgument_t287865710  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m3459414084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CustomAttributeNamedArgument_t287865710_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m3884403745_gshared (Predicate_1_t1113159834 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m4256519903_gshared (Predicate_1_t3548444281 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m685699837_gshared (Predicate_1_t3548444281 * __this, CustomAttributeTypedArgument_t2723150157  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m685699837((Predicate_1_t3548444281 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m401952161_gshared (Predicate_1_t3548444281 * __this, CustomAttributeTypedArgument_t2723150157  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m401952161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CustomAttributeTypedArgument_t2723150157_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m3252191495_gshared (Predicate_1_t3548444281 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m1646720565_gshared (Predicate_1_t2411271955 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m851618236_gshared (Predicate_1_t2411271955 * __this, OrderBlock_t1585977831  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m851618236((Predicate_1_t2411271955 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, OrderBlock_t1585977831 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, OrderBlock_t1585977831 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, OrderBlock_t1585977831  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, OrderBlock_t1585977831  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, OrderBlock_t1585977831  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, OrderBlock_t1585977831  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, OrderBlock_t1585977831 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m2845045805_gshared (Predicate_1_t2411271955 * __this, OrderBlock_t1585977831  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m2845045805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(OrderBlock_t1585977831_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m2307501513_gshared (Predicate_1_t2411271955 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Getter_2__ctor_m122643074_gshared (Getter_2_t2063956538 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Getter_2_Invoke_m3667195478_gshared (Getter_2_t2063956538 * __this, RuntimeObject * ____this0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		Getter_2_Invoke_m3667195478((Getter_2_t2063956538 *)__this->get_prev_9(), ____this0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ____this0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ____this0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ____this0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ____this0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____this0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____this0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ____this0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ____this0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ____this0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ____this0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ____this0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(____this0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Getter_2_BeginInvoke_m3421506930_gshared (Getter_2_t2063956538 * __this, RuntimeObject * ____this0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Getter_2_EndInvoke_m491985352_gshared (Getter_2_t2063956538 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void StaticGetter_1__ctor_m3696559939_gshared (StaticGetter_1_t3872988374 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * StaticGetter_1_Invoke_m3640162116_gshared (StaticGetter_1_t3872988374 * __this, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		StaticGetter_1_Invoke_m3640162116((StaticGetter_1_t3872988374 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StaticGetter_1_BeginInvoke_m2666084926_gshared (StaticGetter_1_t3872988374 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * StaticGetter_1_EndInvoke_m3076990878_gshared (StaticGetter_1_t3872988374 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m3078689395_gshared (CachedInvokableCall_1_t2423483305 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, bool ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_t214452203 *)__this);
		((  void (*) (InvokableCall_1_t214452203 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t214452203 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		bool L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m3002667207_gshared (CachedInvokableCall_1_t2423483305 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t214452203 *)__this);
		((  void (*) (InvokableCall_1_t214452203 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t214452203 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m812947504_gshared (CachedInvokableCall_1_t2423483305 * __this, bool ___arg00, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t214452203 *)__this);
		((  void (*) (InvokableCall_1_t214452203 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t214452203 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m2046334630_gshared (CachedInvokableCall_1_t982173797 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, int32_t ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_t3068109991 *)__this);
		((  void (*) (InvokableCall_1_t3068109991 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m502907382_gshared (CachedInvokableCall_1_t982173797 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t3068109991 *)__this);
		((  void (*) (InvokableCall_1_t3068109991 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m2909479018_gshared (CachedInvokableCall_1_t982173797 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t3068109991 *)__this);
		((  void (*) (InvokableCall_1_t3068109991 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m3714231058_gshared (CachedInvokableCall_1_t1111334208 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, RuntimeObject * ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_t3197270402 *)__this);
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m931536002_gshared (CachedInvokableCall_1_t1111334208 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t3197270402 *)__this);
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m853073645_gshared (CachedInvokableCall_1_t1111334208 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t3197270402 *)__this);
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m1997047287_gshared (CachedInvokableCall_1_t3723462114 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, float ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_t1514431012 *)__this);
		((  void (*) (InvokableCall_1_t1514431012 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		float L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m2734252625_gshared (CachedInvokableCall_1_t3723462114 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t1514431012 *)__this);
		((  void (*) (InvokableCall_1_t1514431012 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m1355947625_gshared (CachedInvokableCall_1_t3723462114 * __this, float ___arg00, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t1514431012 *)__this);
		((  void (*) (InvokableCall_1_t1514431012 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m337513891_gshared (InvokableCall_1_t214452203 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m337513891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t214452203 *)__this);
		((  void (*) (InvokableCall_1_t214452203 *, UnityAction_1_t682124106 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t214452203 *)__this, (UnityAction_1_t682124106 *)((UnityAction_1_t682124106 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m1028560745_gshared (InvokableCall_1_t214452203 * __this, UnityAction_1_t682124106 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m768115019((BaseInvokableCall_t2703961024 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t682124106 * L_0 = ___action0;
		NullCheck((InvokableCall_1_t214452203 *)__this);
		((  void (*) (InvokableCall_1_t214452203 *, UnityAction_1_t682124106 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t214452203 *)__this, (UnityAction_1_t682124106 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m1011133128_gshared (InvokableCall_1_t214452203 * __this, UnityAction_1_t682124106 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t682124106 * V_0 = NULL;
	UnityAction_1_t682124106 * V_1 = NULL;
	{
		UnityAction_1_t682124106 * L_0 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t682124106 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t682124106 * L_1 = V_0;
		V_1 = (UnityAction_1_t682124106 *)L_1;
		UnityAction_1_t682124106 ** L_2 = (UnityAction_1_t682124106 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t682124106 * L_3 = V_1;
		UnityAction_1_t682124106 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t682124106 * L_6 = V_0;
		UnityAction_1_t682124106 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t682124106 *>((UnityAction_1_t682124106 **)(UnityAction_1_t682124106 **)L_2, (UnityAction_1_t682124106 *)((UnityAction_1_t682124106 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t682124106 *)L_6);
		V_0 = (UnityAction_1_t682124106 *)L_7;
		UnityAction_1_t682124106 * L_8 = V_0;
		UnityAction_1_t682124106 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t682124106 *)L_8) == ((RuntimeObject*)(UnityAction_1_t682124106 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m1293546855_gshared (InvokableCall_1_t214452203 * __this, UnityAction_1_t682124106 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t682124106 * V_0 = NULL;
	UnityAction_1_t682124106 * V_1 = NULL;
	{
		UnityAction_1_t682124106 * L_0 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t682124106 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t682124106 * L_1 = V_0;
		V_1 = (UnityAction_1_t682124106 *)L_1;
		UnityAction_1_t682124106 ** L_2 = (UnityAction_1_t682124106 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t682124106 * L_3 = V_1;
		UnityAction_1_t682124106 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t682124106 * L_6 = V_0;
		UnityAction_1_t682124106 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t682124106 *>((UnityAction_1_t682124106 **)(UnityAction_1_t682124106 **)L_2, (UnityAction_1_t682124106 *)((UnityAction_1_t682124106 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t682124106 *)L_6);
		V_0 = (UnityAction_1_t682124106 *)L_7;
		UnityAction_1_t682124106 * L_8 = V_0;
		UnityAction_1_t682124106 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t682124106 *)L_8) == ((RuntimeObject*)(UnityAction_1_t682124106 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m3497872319_gshared (InvokableCall_1_t214452203 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m3497872319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m3497872319_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t682124106 * L_5 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t682124106 * L_7 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((UnityAction_1_t682124106 *)L_7);
		((  void (*) (UnityAction_1_t682124106 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t682124106 *)L_7, (bool)((*(bool*)((bool*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m3859772291_gshared (InvokableCall_1_t214452203 * __this, bool ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t682124106 * L_0 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t682124106 * L_2 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		bool L_3 = ___args00;
		NullCheck((UnityAction_1_t682124106 *)L_2);
		((  void (*) (UnityAction_1_t682124106 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t682124106 *)L_2, (bool)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m3228745517_gshared (InvokableCall_1_t214452203 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t682124106 * L_0 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t682124106 * L_3 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m854286695_gshared (InvokableCall_1_t3068109991 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m854286695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t3068109991 *)__this);
		((  void (*) (InvokableCall_1_t3068109991 *, UnityAction_1_t3535781894 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (UnityAction_1_t3535781894 *)((UnityAction_1_t3535781894 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m250126292_gshared (InvokableCall_1_t3068109991 * __this, UnityAction_1_t3535781894 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m768115019((BaseInvokableCall_t2703961024 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t3535781894 * L_0 = ___action0;
		NullCheck((InvokableCall_1_t3068109991 *)__this);
		((  void (*) (InvokableCall_1_t3068109991 *, UnityAction_1_t3535781894 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (UnityAction_1_t3535781894 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m3984829522_gshared (InvokableCall_1_t3068109991 * __this, UnityAction_1_t3535781894 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3535781894 * V_0 = NULL;
	UnityAction_1_t3535781894 * V_1 = NULL;
	{
		UnityAction_1_t3535781894 * L_0 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3535781894 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3535781894 * L_1 = V_0;
		V_1 = (UnityAction_1_t3535781894 *)L_1;
		UnityAction_1_t3535781894 ** L_2 = (UnityAction_1_t3535781894 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3535781894 * L_3 = V_1;
		UnityAction_1_t3535781894 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3535781894 * L_6 = V_0;
		UnityAction_1_t3535781894 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3535781894 *>((UnityAction_1_t3535781894 **)(UnityAction_1_t3535781894 **)L_2, (UnityAction_1_t3535781894 *)((UnityAction_1_t3535781894 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t3535781894 *)L_6);
		V_0 = (UnityAction_1_t3535781894 *)L_7;
		UnityAction_1_t3535781894 * L_8 = V_0;
		UnityAction_1_t3535781894 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3535781894 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3535781894 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m1404598405_gshared (InvokableCall_1_t3068109991 * __this, UnityAction_1_t3535781894 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3535781894 * V_0 = NULL;
	UnityAction_1_t3535781894 * V_1 = NULL;
	{
		UnityAction_1_t3535781894 * L_0 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3535781894 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3535781894 * L_1 = V_0;
		V_1 = (UnityAction_1_t3535781894 *)L_1;
		UnityAction_1_t3535781894 ** L_2 = (UnityAction_1_t3535781894 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3535781894 * L_3 = V_1;
		UnityAction_1_t3535781894 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3535781894 * L_6 = V_0;
		UnityAction_1_t3535781894 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3535781894 *>((UnityAction_1_t3535781894 **)(UnityAction_1_t3535781894 **)L_2, (UnityAction_1_t3535781894 *)((UnityAction_1_t3535781894 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t3535781894 *)L_6);
		V_0 = (UnityAction_1_t3535781894 *)L_7;
		UnityAction_1_t3535781894 * L_8 = V_0;
		UnityAction_1_t3535781894 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3535781894 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3535781894 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m891112188_gshared (InvokableCall_1_t3068109991 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m891112188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m891112188_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t3535781894 * L_5 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t3535781894 * L_7 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((UnityAction_1_t3535781894 *)L_7);
		((  void (*) (UnityAction_1_t3535781894 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t3535781894 *)L_7, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m1665111854_gshared (InvokableCall_1_t3068109991 * __this, int32_t ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3535781894 * L_0 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t3535781894 * L_2 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		int32_t L_3 = ___args00;
		NullCheck((UnityAction_1_t3535781894 *)L_2);
		((  void (*) (UnityAction_1_t3535781894 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t3535781894 *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m2748617534_gshared (InvokableCall_1_t3068109991 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t3535781894 * L_0 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t3535781894 * L_3 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m974734014_gshared (InvokableCall_1_t3197270402 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m974734014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t3197270402 *)__this);
		((  void (*) (InvokableCall_1_t3197270402 *, UnityAction_1_t3664942305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (UnityAction_1_t3664942305 *)((UnityAction_1_t3664942305 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m2204476693_gshared (InvokableCall_1_t3197270402 * __this, UnityAction_1_t3664942305 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m768115019((BaseInvokableCall_t2703961024 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_0 = ___action0;
		NullCheck((InvokableCall_1_t3197270402 *)__this);
		((  void (*) (InvokableCall_1_t3197270402 *, UnityAction_1_t3664942305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (UnityAction_1_t3664942305 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m1149657958_gshared (InvokableCall_1_t3197270402 * __this, UnityAction_1_t3664942305 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3664942305 * V_0 = NULL;
	UnityAction_1_t3664942305 * V_1 = NULL;
	{
		UnityAction_1_t3664942305 * L_0 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3664942305 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3664942305 * L_1 = V_0;
		V_1 = (UnityAction_1_t3664942305 *)L_1;
		UnityAction_1_t3664942305 ** L_2 = (UnityAction_1_t3664942305 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3664942305 * L_3 = V_1;
		UnityAction_1_t3664942305 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_6 = V_0;
		UnityAction_1_t3664942305 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3664942305 *>((UnityAction_1_t3664942305 **)(UnityAction_1_t3664942305 **)L_2, (UnityAction_1_t3664942305 *)((UnityAction_1_t3664942305 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t3664942305 *)L_6);
		V_0 = (UnityAction_1_t3664942305 *)L_7;
		UnityAction_1_t3664942305 * L_8 = V_0;
		UnityAction_1_t3664942305 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3664942305 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3664942305 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m1459577645_gshared (InvokableCall_1_t3197270402 * __this, UnityAction_1_t3664942305 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3664942305 * V_0 = NULL;
	UnityAction_1_t3664942305 * V_1 = NULL;
	{
		UnityAction_1_t3664942305 * L_0 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3664942305 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3664942305 * L_1 = V_0;
		V_1 = (UnityAction_1_t3664942305 *)L_1;
		UnityAction_1_t3664942305 ** L_2 = (UnityAction_1_t3664942305 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3664942305 * L_3 = V_1;
		UnityAction_1_t3664942305 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_6 = V_0;
		UnityAction_1_t3664942305 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3664942305 *>((UnityAction_1_t3664942305 **)(UnityAction_1_t3664942305 **)L_2, (UnityAction_1_t3664942305 *)((UnityAction_1_t3664942305 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t3664942305 *)L_6);
		V_0 = (UnityAction_1_t3664942305 *)L_7;
		UnityAction_1_t3664942305 * L_8 = V_0;
		UnityAction_1_t3664942305 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3664942305 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3664942305 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m4071643321_gshared (InvokableCall_1_t3197270402 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m4071643321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m4071643321_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t3664942305 * L_5 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t3664942305 * L_7 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((UnityAction_1_t3664942305 *)L_7);
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t3664942305 *)L_7, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m1111745191_gshared (InvokableCall_1_t3197270402 * __this, RuntimeObject * ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3664942305 * L_0 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t3664942305 * L_2 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		RuntimeObject * L_3 = ___args00;
		NullCheck((UnityAction_1_t3664942305 *)L_2);
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t3664942305 *)L_2, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m667253485_gshared (InvokableCall_1_t3197270402 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t3664942305 * L_0 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t3664942305 * L_3 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m4147324340_gshared (InvokableCall_1_t1514431012 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m4147324340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t1514431012 *)__this);
		((  void (*) (InvokableCall_1_t1514431012 *, UnityAction_1_t1982102915 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (UnityAction_1_t1982102915 *)((UnityAction_1_t1982102915 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m550191732_gshared (InvokableCall_1_t1514431012 * __this, UnityAction_1_t1982102915 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m768115019((BaseInvokableCall_t2703961024 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t1982102915 * L_0 = ___action0;
		NullCheck((InvokableCall_1_t1514431012 *)__this);
		((  void (*) (InvokableCall_1_t1514431012 *, UnityAction_1_t1982102915 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (UnityAction_1_t1982102915 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m1440777569_gshared (InvokableCall_1_t1514431012 * __this, UnityAction_1_t1982102915 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t1982102915 * V_0 = NULL;
	UnityAction_1_t1982102915 * V_1 = NULL;
	{
		UnityAction_1_t1982102915 * L_0 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t1982102915 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t1982102915 * L_1 = V_0;
		V_1 = (UnityAction_1_t1982102915 *)L_1;
		UnityAction_1_t1982102915 ** L_2 = (UnityAction_1_t1982102915 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t1982102915 * L_3 = V_1;
		UnityAction_1_t1982102915 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t1982102915 * L_6 = V_0;
		UnityAction_1_t1982102915 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t1982102915 *>((UnityAction_1_t1982102915 **)(UnityAction_1_t1982102915 **)L_2, (UnityAction_1_t1982102915 *)((UnityAction_1_t1982102915 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t1982102915 *)L_6);
		V_0 = (UnityAction_1_t1982102915 *)L_7;
		UnityAction_1_t1982102915 * L_8 = V_0;
		UnityAction_1_t1982102915 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t1982102915 *)L_8) == ((RuntimeObject*)(UnityAction_1_t1982102915 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m790146436_gshared (InvokableCall_1_t1514431012 * __this, UnityAction_1_t1982102915 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t1982102915 * V_0 = NULL;
	UnityAction_1_t1982102915 * V_1 = NULL;
	{
		UnityAction_1_t1982102915 * L_0 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t1982102915 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t1982102915 * L_1 = V_0;
		V_1 = (UnityAction_1_t1982102915 *)L_1;
		UnityAction_1_t1982102915 ** L_2 = (UnityAction_1_t1982102915 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t1982102915 * L_3 = V_1;
		UnityAction_1_t1982102915 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t1982102915 * L_6 = V_0;
		UnityAction_1_t1982102915 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t1982102915 *>((UnityAction_1_t1982102915 **)(UnityAction_1_t1982102915 **)L_2, (UnityAction_1_t1982102915 *)((UnityAction_1_t1982102915 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t1982102915 *)L_6);
		V_0 = (UnityAction_1_t1982102915 *)L_7;
		UnityAction_1_t1982102915 * L_8 = V_0;
		UnityAction_1_t1982102915 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t1982102915 *)L_8) == ((RuntimeObject*)(UnityAction_1_t1982102915 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m4150391468_gshared (InvokableCall_1_t1514431012 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m4150391468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m4150391468_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t1982102915 * L_5 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t1982102915 * L_7 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((UnityAction_1_t1982102915 *)L_7);
		((  void (*) (UnityAction_1_t1982102915 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t1982102915 *)L_7, (float)((*(float*)((float*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m1920505169_gshared (InvokableCall_1_t1514431012 * __this, float ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t1982102915 * L_0 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t1982102915 * L_2 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		float L_3 = ___args00;
		NullCheck((UnityAction_1_t1982102915 *)L_2);
		((  void (*) (UnityAction_1_t1982102915 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t1982102915 *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m1741895083_gshared (InvokableCall_1_t1514431012 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t1982102915 * L_0 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t1982102915 * L_3 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_2__ctor_m3619012188_gshared (InvokableCall_2_t362407658 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2__ctor_m3619012188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_2_t3283971887 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_2_Invoke_m1520082677_gshared (InvokableCall_2_t362407658 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2_Invoke_m1520082677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_2_Invoke_m1520082677_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		UnityAction_2_t3283971887 * L_8 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		bool L_9 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		UnityAction_2_t3283971887 * L_10 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_11 = ___args0;
		NullCheck(L_11);
		int32_t L_12 = 0;
		RuntimeObject * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ObjectU5BU5D_t2843939325* L_14 = ___args0;
		NullCheck(L_14);
		int32_t L_15 = 1;
		RuntimeObject * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck((UnityAction_2_t3283971887 *)L_10);
		((  void (*) (UnityAction_2_t3283971887 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_2_t3283971887 *)L_10, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0050:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_2_Find_m265590023_gshared (InvokableCall_2_t362407658 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t3283971887 * L_0 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_2_t3283971887 * L_3 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_3__ctor_m4245235439_gshared (InvokableCall_3_t4059188962 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3__ctor_m4245235439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_3_t1557236713 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_3_Invoke_m3141788616_gshared (InvokableCall_3_t4059188962 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3_Invoke_m3141788616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_3_Invoke_m3141788616_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_3_t1557236713 * L_11 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		bool L_12 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		UnityAction_3_t1557236713 * L_13 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_14 = ___args0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		RuntimeObject * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ObjectU5BU5D_t2843939325* L_17 = ___args0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		RuntimeObject * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t2843939325* L_20 = ___args0;
		NullCheck(L_20);
		int32_t L_21 = 2;
		RuntimeObject * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck((UnityAction_3_t1557236713 *)L_13);
		((  void (*) (UnityAction_3_t1557236713 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_3_t1557236713 *)L_13, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0060:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_3_Find_m26605783_gshared (InvokableCall_3_t4059188962 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t1557236713 * L_0 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_3_t1557236713 * L_3 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_4__ctor_m3136187504_gshared (InvokableCall_4_t2756980746 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4__ctor_m3136187504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_4_t682480391 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_4_Invoke_m3371718871_gshared (InvokableCall_4_t2756980746 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4_Invoke_m3371718871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)4)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_4_Invoke_m3371718871_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		ObjectU5BU5D_t2843939325* L_11 = ___args0;
		NullCheck(L_11);
		int32_t L_12 = 3;
		RuntimeObject * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		UnityAction_4_t682480391 * L_14 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		bool L_15 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0070;
		}
	}
	{
		UnityAction_4_t682480391 * L_16 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_17 = ___args0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		RuntimeObject * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t2843939325* L_20 = ___args0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		RuntimeObject * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		ObjectU5BU5D_t2843939325* L_23 = ___args0;
		NullCheck(L_23);
		int32_t L_24 = 2;
		RuntimeObject * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ObjectU5BU5D_t2843939325* L_26 = ___args0;
		NullCheck(L_26);
		int32_t L_27 = 3;
		RuntimeObject * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck((UnityAction_4_t682480391 *)L_16);
		((  void (*) (UnityAction_4_t682480391 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((UnityAction_4_t682480391 *)L_16, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_25, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_28, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0070:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_4_Find_m2717860129_gshared (InvokableCall_4_t2756980746 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_t682480391 * L_0 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_4_t682480391 * L_3 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m483887086_gshared (UnityAction_1_t682124106 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3535252839_gshared (UnityAction_1_t682124106 * __this, bool ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m3535252839((UnityAction_1_t682124106 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m3721186338_gshared (UnityAction_1_t682124106 * __this, bool ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m3721186338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1872049713_gshared (UnityAction_1_t682124106 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m3569411354_gshared (UnityAction_1_t3535781894 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3388120194_gshared (UnityAction_1_t3535781894 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m3388120194((UnityAction_1_t3535781894 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m4018737650_gshared (UnityAction_1_t3535781894 * __this, int32_t ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m4018737650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m290165017_gshared (UnityAction_1_t3535781894 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m2434317150_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m272661351_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m272661351((UnityAction_1_t3664942305 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m992932529_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m4173210162_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m4218191642_gshared (UnityAction_1_t1982102915 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m1035307306_gshared (UnityAction_1_t1982102915 * __this, float ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m1035307306((UnityAction_1_t1982102915 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m2530432941_gshared (UnityAction_1_t1982102915 * __this, float ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m2530432941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1615818599_gshared (UnityAction_1_t1982102915 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m63817492_gshared (UnityAction_1_t2933211702 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3649732398_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m3649732398((UnityAction_1_t2933211702 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m677813163_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m677813163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m367631613_gshared (UnityAction_1_t2933211702 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m4260941619_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m2304474703_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m2304474703((UnityAction_2_t3283971887 *)__this->get_prev_9(), ___arg00, ___arg11, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1322091188_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m1292612021_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m3108471759_gshared (UnityAction_2_t2165061829 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m1541286357_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m1541286357((UnityAction_2_t2165061829 *)__this->get_prev_9(), ___arg00, ___arg11, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1769266175_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m1769266175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(LoadSceneMode_t3251202195_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m2179051926_gshared (UnityAction_2_t2165061829 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m2941677221_gshared (UnityAction_2_t1262235195 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m944492567_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m944492567((UnityAction_2_t1262235195 *)__this->get_prev_9(), ___arg00, ___arg11, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1733258791_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m1733258791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m2385586247_gshared (UnityAction_2_t1262235195 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3__ctor_m2228523061_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m1904347475_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_3_Invoke_m1904347475((UnityAction_3_t1557236713 *)__this->get_prev_9(), ___arg00, ___arg11, ___arg22, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_m1515014307_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m1256921407_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4__ctor_m4196105227_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m218720656_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_4_Invoke_m218720656((UnityAction_4_t682480391 *)__this->get_prev_9(), ___arg00, ___arg11, ___arg22, ___arg33, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_m2207320832_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_m1236619780_gshared (UnityAction_4_t682480391 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m3816765192_gshared (UnityEvent_1_t3832605257 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m3158408092_gshared (UnityEvent_1_t3832605257 * __this, UnityAction_1_t3535781894 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3535781894 * L_0 = ___call0;
		BaseInvokableCall_t2703961024 * L_1 = ((  BaseInvokableCall_t2703961024 * (*) (RuntimeObject * /* static, unused */, UnityAction_1_t3535781894 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UnityAction_1_t3535781894 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_AddCall_m3539965410((UnityEventBase_t3960448221 *)__this, (BaseInvokableCall_t2703961024 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m1953458448_gshared (UnityEvent_1_t3832605257 * __this, UnityAction_1_t3535781894 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3535781894 * L_0 = ___call0;
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t3535781894 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_RemoveListener_m3326364145((UnityEventBase_t3960448221 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m1397247356_gshared (UnityEvent_1_t3832605257 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m1397247356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m617150804_gshared (UnityEvent_1_t3832605257 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t3068109991 * L_2 = (InvokableCall_1_t3068109991 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3068109991 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m2283422164_gshared (RuntimeObject * __this /* static, unused */, UnityAction_1_t3535781894 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		UnityAction_1_t3535781894 * L_0 = ___action0;
		InvokableCall_1_t3068109991 * L_1 = (InvokableCall_1_t3068109991 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3068109991 *, UnityAction_1_t3535781894 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t3535781894 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_t2703961024 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m3604335408_gshared (UnityEvent_1_t3832605257 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m3604335408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t3068109991 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t3960448221 *)__this);
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_t4176035766 *)L_1);
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t3068109991 *)((InvokableCall_1_t3068109991 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t3068109991 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t3068109991 * L_5 = V_2;
		int32_t L_6 = ___arg00;
		NullCheck((InvokableCall_1_t3068109991 *)L_5);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_t3068109991 *)L_5, (int32_t)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_t4176035766 *)L_7);
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		NullCheck((InvokableCall_t832123510 *)L_11);
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_t4176035766 *)L_12);
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		int32_t L_18 = ___arg00;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_t2703961024 * L_21 = V_4;
		ObjectU5BU5D_t2843939325* L_22 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_t2703961024 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_21, (ObjectU5BU5D_t2843939325*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_t4176035766 * L_25 = V_0;
		NullCheck((List_1_t4176035766 *)L_25);
		int32_t L_26 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_25, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1789019280_gshared (UnityEvent_1_t3961765668 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m3703050950_gshared (UnityEvent_1_t3961765668 * __this, UnityAction_1_t3664942305 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3664942305 * L_0 = ___call0;
		BaseInvokableCall_t2703961024 * L_1 = ((  BaseInvokableCall_t2703961024 * (*) (RuntimeObject * /* static, unused */, UnityAction_1_t3664942305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UnityAction_1_t3664942305 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_AddCall_m3539965410((UnityEventBase_t3960448221 *)__this, (BaseInvokableCall_t2703961024 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m4140584754_gshared (UnityEvent_1_t3961765668 * __this, UnityAction_1_t3664942305 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3664942305 * L_0 = ___call0;
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_RemoveListener_m3326364145((UnityEventBase_t3960448221 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m322741469_gshared (UnityEvent_1_t3961765668 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m322741469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m1223269239_gshared (UnityEvent_1_t3961765668 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t3197270402 * L_2 = (InvokableCall_1_t3197270402 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m1604725783_gshared (RuntimeObject * __this /* static, unused */, UnityAction_1_t3664942305 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		UnityAction_1_t3664942305 * L_0 = ___action0;
		InvokableCall_1_t3197270402 * L_1 = (InvokableCall_1_t3197270402 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3197270402 *, UnityAction_1_t3664942305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t3664942305 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_t2703961024 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m2734859485_gshared (UnityEvent_1_t3961765668 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m2734859485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t3197270402 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t3960448221 *)__this);
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_t4176035766 *)L_1);
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t3197270402 *)((InvokableCall_1_t3197270402 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t3197270402 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t3197270402 * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		NullCheck((InvokableCall_1_t3197270402 *)L_5);
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t3197270402 *)L_5, (RuntimeObject *)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_t4176035766 *)L_7);
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		NullCheck((InvokableCall_t832123510 *)L_11);
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_t4176035766 *)L_12);
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_18 = ___arg00;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		BaseInvokableCall_t2703961024 * L_19 = V_4;
		ObjectU5BU5D_t2843939325* L_20 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_t2703961024 *)L_19);
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_19, (ObjectU5BU5D_t2843939325*)L_20);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_22 = V_1;
		List_1_t4176035766 * L_23 = V_0;
		NullCheck((List_1_t4176035766 *)L_23);
		int32_t L_24 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_23, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m155249342_gshared (UnityEvent_2_t614268397 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m2569180594_gshared (UnityEvent_2_t614268397 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m2569180594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t3940880105* L_6 = (TypeU5BU5D_t3940880105*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002e;
	}

IL_002e:
	{
		MethodInfo_t * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_2_GetDelegate_m3909669659_gshared (UnityEvent_2_t614268397 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t362407658 * L_2 = (InvokableCall_2_t362407658 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t362407658 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m3891569313_gshared (UnityEvent_3_t2404744798 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_m1640458315_gshared (UnityEvent_3_t2404744798 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_m1640458315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t3940880105* L_6 = (TypeU5BU5D_t3940880105*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t3940880105* L_9 = (TypeU5BU5D_t3940880105*)L_6;
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_3_GetDelegate_m1156357290_gshared (UnityEvent_3_t2404744798 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4059188962 * L_2 = (InvokableCall_3_t4059188962 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t4059188962 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
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
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m831487108_gshared (UnityEvent_4_t4085588227 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m3410547086_gshared (UnityEvent_4_t4085588227 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m3410547086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t3940880105* L_6 = (TypeU5BU5D_t3940880105*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t3940880105* L_9 = (TypeU5BU5D_t3940880105*)L_6;
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t3940880105* L_12 = (TypeU5BU5D_t3940880105*)L_9;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0048;
	}

IL_0048:
	{
		MethodInfo_t * L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_4_GetDelegate_m3111342790_gshared (UnityEvent_4_t4085588227 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t2756980746 * L_2 = (InvokableCall_4_t2756980746 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t2756980746 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
