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


// Application.Position
struct Position_t2320711192;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t235857739;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>
struct List_1_t3418373063;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Type
struct Type_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Analytics.AnalyticsEventParamListContainer
struct AnalyticsEventParamListContainer_t587083383;
// UnityEngine.Analytics.EventTrigger/OnTrigger
struct OnTrigger_t4184125570;
// UnityEngine.Analytics.TrackableField
struct TrackableField_t1772682203;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_t3943537984;
// UnityEngine.Analytics.TriggerListContainer
struct TriggerListContainer_t2032715483;
// UnityEngine.Analytics.TriggerMethod
struct TriggerMethod_t582536534;
// UnityEngine.Analytics.ValueProperty
struct ValueProperty_t1868393739;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Transform
struct Transform_t3600365921;




#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
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
#ifndef STANDARDEVENTPAYLOAD_T1629891255_H
#define STANDARDEVENTPAYLOAD_T1629891255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.StandardEventPayload
struct  StandardEventPayload_t1629891255  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.StandardEventPayload::m_IsEventExpanded
	bool ___m_IsEventExpanded_0;
	// System.String UnityEngine.Analytics.StandardEventPayload::m_StandardEventType
	String_t* ___m_StandardEventType_1;
	// System.Type UnityEngine.Analytics.StandardEventPayload::standardEventType
	Type_t * ___standardEventType_2;
	// UnityEngine.Analytics.AnalyticsEventParamListContainer UnityEngine.Analytics.StandardEventPayload::m_Parameters
	AnalyticsEventParamListContainer_t587083383 * ___m_Parameters_3;
	// System.String UnityEngine.Analytics.StandardEventPayload::m_Name
	String_t* ___m_Name_5;

public:
	inline static int32_t get_offset_of_m_IsEventExpanded_0() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_IsEventExpanded_0)); }
	inline bool get_m_IsEventExpanded_0() const { return ___m_IsEventExpanded_0; }
	inline bool* get_address_of_m_IsEventExpanded_0() { return &___m_IsEventExpanded_0; }
	inline void set_m_IsEventExpanded_0(bool value)
	{
		___m_IsEventExpanded_0 = value;
	}

	inline static int32_t get_offset_of_m_StandardEventType_1() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_StandardEventType_1)); }
	inline String_t* get_m_StandardEventType_1() const { return ___m_StandardEventType_1; }
	inline String_t** get_address_of_m_StandardEventType_1() { return &___m_StandardEventType_1; }
	inline void set_m_StandardEventType_1(String_t* value)
	{
		___m_StandardEventType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_StandardEventType_1), value);
	}

	inline static int32_t get_offset_of_standardEventType_2() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___standardEventType_2)); }
	inline Type_t * get_standardEventType_2() const { return ___standardEventType_2; }
	inline Type_t ** get_address_of_standardEventType_2() { return &___standardEventType_2; }
	inline void set_standardEventType_2(Type_t * value)
	{
		___standardEventType_2 = value;
		Il2CppCodeGenWriteBarrier((&___standardEventType_2), value);
	}

	inline static int32_t get_offset_of_m_Parameters_3() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_Parameters_3)); }
	inline AnalyticsEventParamListContainer_t587083383 * get_m_Parameters_3() const { return ___m_Parameters_3; }
	inline AnalyticsEventParamListContainer_t587083383 ** get_address_of_m_Parameters_3() { return &___m_Parameters_3; }
	inline void set_m_Parameters_3(AnalyticsEventParamListContainer_t587083383 * value)
	{
		___m_Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parameters_3), value);
	}

	inline static int32_t get_offset_of_m_Name_5() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_Name_5)); }
	inline String_t* get_m_Name_5() const { return ___m_Name_5; }
	inline String_t** get_address_of_m_Name_5() { return &___m_Name_5; }
	inline void set_m_Name_5(String_t* value)
	{
		___m_Name_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_5), value);
	}
};

struct StandardEventPayload_t1629891255_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.StandardEventPayload::m_EventData
	Dictionary_2_t2865362463 * ___m_EventData_4;

public:
	inline static int32_t get_offset_of_m_EventData_4() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255_StaticFields, ___m_EventData_4)); }
	inline Dictionary_2_t2865362463 * get_m_EventData_4() const { return ___m_EventData_4; }
	inline Dictionary_2_t2865362463 ** get_address_of_m_EventData_4() { return &___m_EventData_4; }
	inline void set_m_EventData_4(Dictionary_2_t2865362463 * value)
	{
		___m_EventData_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDEVENTPAYLOAD_T1629891255_H
#ifndef TRACKABLEPROPERTY_T3943537984_H
#define TRACKABLEPROPERTY_T3943537984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty
struct  TrackableProperty_t3943537984  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::m_Fields
	List_1_t235857739 * ___m_Fields_1;

public:
	inline static int32_t get_offset_of_m_Fields_1() { return static_cast<int32_t>(offsetof(TrackableProperty_t3943537984, ___m_Fields_1)); }
	inline List_1_t235857739 * get_m_Fields_1() const { return ___m_Fields_1; }
	inline List_1_t235857739 ** get_address_of_m_Fields_1() { return &___m_Fields_1; }
	inline void set_m_Fields_1(List_1_t235857739 * value)
	{
		___m_Fields_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Fields_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTY_T3943537984_H
#ifndef FIELDWITHTARGET_T3058750293_H
#define FIELDWITHTARGET_T3058750293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct  FieldWithTarget_t3058750293  : public RuntimeObject
{
public:
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_ParamName
	String_t* ___m_ParamName_0;
	// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_Target
	Object_t631007953 * ___m_Target_1;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_FieldPath
	String_t* ___m_FieldPath_2;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_TypeString
	String_t* ___m_TypeString_3;
	// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_DoStatic
	bool ___m_DoStatic_4;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_StaticString
	String_t* ___m_StaticString_5;

public:
	inline static int32_t get_offset_of_m_ParamName_0() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_ParamName_0)); }
	inline String_t* get_m_ParamName_0() const { return ___m_ParamName_0; }
	inline String_t** get_address_of_m_ParamName_0() { return &___m_ParamName_0; }
	inline void set_m_ParamName_0(String_t* value)
	{
		___m_ParamName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParamName_0), value);
	}

	inline static int32_t get_offset_of_m_Target_1() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_Target_1)); }
	inline Object_t631007953 * get_m_Target_1() const { return ___m_Target_1; }
	inline Object_t631007953 ** get_address_of_m_Target_1() { return &___m_Target_1; }
	inline void set_m_Target_1(Object_t631007953 * value)
	{
		___m_Target_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_1), value);
	}

	inline static int32_t get_offset_of_m_FieldPath_2() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_FieldPath_2)); }
	inline String_t* get_m_FieldPath_2() const { return ___m_FieldPath_2; }
	inline String_t** get_address_of_m_FieldPath_2() { return &___m_FieldPath_2; }
	inline void set_m_FieldPath_2(String_t* value)
	{
		___m_FieldPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_FieldPath_2), value);
	}

	inline static int32_t get_offset_of_m_TypeString_3() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_TypeString_3)); }
	inline String_t* get_m_TypeString_3() const { return ___m_TypeString_3; }
	inline String_t** get_address_of_m_TypeString_3() { return &___m_TypeString_3; }
	inline void set_m_TypeString_3(String_t* value)
	{
		___m_TypeString_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeString_3), value);
	}

	inline static int32_t get_offset_of_m_DoStatic_4() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_DoStatic_4)); }
	inline bool get_m_DoStatic_4() const { return ___m_DoStatic_4; }
	inline bool* get_address_of_m_DoStatic_4() { return &___m_DoStatic_4; }
	inline void set_m_DoStatic_4(bool value)
	{
		___m_DoStatic_4 = value;
	}

	inline static int32_t get_offset_of_m_StaticString_5() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_StaticString_5)); }
	inline String_t* get_m_StaticString_5() const { return ___m_StaticString_5; }
	inline String_t** get_address_of_m_StaticString_5() { return &___m_StaticString_5; }
	inline void set_m_StaticString_5(String_t* value)
	{
		___m_StaticString_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_StaticString_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDWITHTARGET_T3058750293_H
#ifndef TRACKABLEPROPERTYBASE_T2121532948_H
#define TRACKABLEPROPERTYBASE_T2121532948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackablePropertyBase
struct  TrackablePropertyBase_t2121532948  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Analytics.TrackablePropertyBase::m_Target
	Object_t631007953 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackablePropertyBase::m_Path
	String_t* ___m_Path_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackablePropertyBase_t2121532948, ___m_Target_0)); }
	inline Object_t631007953 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t631007953 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t631007953 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(TrackablePropertyBase_t2121532948, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTYBASE_T2121532948_H
#ifndef TRACKABLETRIGGER_T621205209_H
#define TRACKABLETRIGGER_T621205209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableTrigger
struct  TrackableTrigger_t621205209  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Analytics.TrackableTrigger::m_Target
	GameObject_t1113636619 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackableTrigger::m_MethodPath
	String_t* ___m_MethodPath_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_Target_0)); }
	inline GameObject_t1113636619 * get_m_Target_0() const { return ___m_Target_0; }
	inline GameObject_t1113636619 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(GameObject_t1113636619 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodPath_1() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_MethodPath_1)); }
	inline String_t* get_m_MethodPath_1() const { return ___m_MethodPath_1; }
	inline String_t** get_address_of_m_MethodPath_1() { return &___m_MethodPath_1; }
	inline void set_m_MethodPath_1(String_t* value)
	{
		___m_MethodPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodPath_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLETRIGGER_T621205209_H
#ifndef TRIGGERLISTCONTAINER_T2032715483_H
#define TRIGGERLISTCONTAINER_T2032715483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerListContainer
struct  TriggerListContainer_t2032715483  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::m_Rules
	List_1_t3418373063 * ___m_Rules_0;

public:
	inline static int32_t get_offset_of_m_Rules_0() { return static_cast<int32_t>(offsetof(TriggerListContainer_t2032715483, ___m_Rules_0)); }
	inline List_1_t3418373063 * get_m_Rules_0() const { return ___m_Rules_0; }
	inline List_1_t3418373063 ** get_address_of_m_Rules_0() { return &___m_Rules_0; }
	inline void set_m_Rules_0(List_1_t3418373063 * value)
	{
		___m_Rules_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERLISTCONTAINER_T2032715483_H
#ifndef TRIGGERMETHOD_T582536534_H
#define TRIGGERMETHOD_T582536534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerMethod
struct  TriggerMethod_t582536534  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERMETHOD_T582536534_H
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
#ifndef TRACKABLEFIELD_T1772682203_H
#define TRACKABLEFIELD_T1772682203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableField
struct  TrackableField_t1772682203  : public TrackablePropertyBase_t2121532948
{
public:
	// System.String[] UnityEngine.Analytics.TrackableField::m_ValidTypeNames
	StringU5BU5D_t1281789340* ___m_ValidTypeNames_2;
	// System.String UnityEngine.Analytics.TrackableField::m_Type
	String_t* ___m_Type_3;
	// System.String UnityEngine.Analytics.TrackableField::m_EnumType
	String_t* ___m_EnumType_4;

public:
	inline static int32_t get_offset_of_m_ValidTypeNames_2() { return static_cast<int32_t>(offsetof(TrackableField_t1772682203, ___m_ValidTypeNames_2)); }
	inline StringU5BU5D_t1281789340* get_m_ValidTypeNames_2() const { return ___m_ValidTypeNames_2; }
	inline StringU5BU5D_t1281789340** get_address_of_m_ValidTypeNames_2() { return &___m_ValidTypeNames_2; }
	inline void set_m_ValidTypeNames_2(StringU5BU5D_t1281789340* value)
	{
		___m_ValidTypeNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValidTypeNames_2), value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(TrackableField_t1772682203, ___m_Type_3)); }
	inline String_t* get_m_Type_3() const { return ___m_Type_3; }
	inline String_t** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(String_t* value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_3), value);
	}

	inline static int32_t get_offset_of_m_EnumType_4() { return static_cast<int32_t>(offsetof(TrackableField_t1772682203, ___m_EnumType_4)); }
	inline String_t* get_m_EnumType_4() const { return ___m_EnumType_4; }
	inline String_t** get_address_of_m_EnumType_4() { return &___m_EnumType_4; }
	inline void set_m_EnumType_4(String_t* value)
	{
		___m_EnumType_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EnumType_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEFIELD_T1772682203_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef POSITION_T2320711192_H
#define POSITION_T2320711192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Application.Position
struct  Position_t2320711192  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Application.Position::p0
	Vector3_t3722313464  ___p0_0;
	// System.Boolean Application.Position::hasP0
	bool ___hasP0_1;
	// UnityEngine.Vector3 Application.Position::p1
	Vector3_t3722313464  ___p1_2;
	// System.Boolean Application.Position::hasP1
	bool ___hasP1_3;

public:
	inline static int32_t get_offset_of_p0_0() { return static_cast<int32_t>(offsetof(Position_t2320711192, ___p0_0)); }
	inline Vector3_t3722313464  get_p0_0() const { return ___p0_0; }
	inline Vector3_t3722313464 * get_address_of_p0_0() { return &___p0_0; }
	inline void set_p0_0(Vector3_t3722313464  value)
	{
		___p0_0 = value;
	}

	inline static int32_t get_offset_of_hasP0_1() { return static_cast<int32_t>(offsetof(Position_t2320711192, ___hasP0_1)); }
	inline bool get_hasP0_1() const { return ___hasP0_1; }
	inline bool* get_address_of_hasP0_1() { return &___hasP0_1; }
	inline void set_hasP0_1(bool value)
	{
		___hasP0_1 = value;
	}

	inline static int32_t get_offset_of_p1_2() { return static_cast<int32_t>(offsetof(Position_t2320711192, ___p1_2)); }
	inline Vector3_t3722313464  get_p1_2() const { return ___p1_2; }
	inline Vector3_t3722313464 * get_address_of_p1_2() { return &___p1_2; }
	inline void set_p1_2(Vector3_t3722313464  value)
	{
		___p1_2 = value;
	}

	inline static int32_t get_offset_of_hasP1_3() { return static_cast<int32_t>(offsetof(Position_t2320711192, ___hasP1_3)); }
	inline bool get_hasP1_3() const { return ___hasP1_3; }
	inline bool* get_address_of_hasP1_3() { return &___hasP1_3; }
	inline void set_hasP1_3(bool value)
	{
		___hasP1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITION_T2320711192_H
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
#ifndef TRIGGER_T4199345191_H
#define TRIGGER_T4199345191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker/Trigger
struct  Trigger_t4199345191 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker/Trigger::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Trigger_t4199345191, ___value___1)); }
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
#endif // TRIGGER_T4199345191_H
#ifndef TRIGGERBOOL_T501031542_H
#define TRIGGERBOOL_T501031542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerBool
struct  TriggerBool_t501031542 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerBool::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerBool_t501031542, ___value___1)); }
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
#endif // TRIGGERBOOL_T501031542_H
#ifndef TRIGGERLIFECYCLEEVENT_T3193146760_H
#define TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerLifecycleEvent
struct  TriggerLifecycleEvent_t3193146760 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerLifecycleEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerLifecycleEvent_t3193146760, ___value___1)); }
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
#endif // TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifndef TRIGGEROPERATOR_T3611898925_H
#define TRIGGEROPERATOR_T3611898925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerOperator
struct  TriggerOperator_t3611898925 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerOperator::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerOperator_t3611898925, ___value___1)); }
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
#endif // TRIGGEROPERATOR_T3611898925_H
#ifndef TRIGGERTYPE_T105272677_H
#define TRIGGERTYPE_T105272677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerType
struct  TriggerType_t105272677 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerType_t105272677, ___value___1)); }
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
#endif // TRIGGERTYPE_T105272677_H
#ifndef PROPERTYTYPE_T4040930247_H
#define PROPERTYTYPE_T4040930247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.ValueProperty/PropertyType
struct  PropertyType_t4040930247 
{
public:
	// System.Int32 UnityEngine.Analytics.ValueProperty/PropertyType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyType_t4040930247, ___value___1)); }
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
#endif // PROPERTYTYPE_T4040930247_H
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
#ifndef EVENTTRIGGER_T2527451695_H
#define EVENTTRIGGER_T2527451695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger
struct  EventTrigger_t2527451695  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_IsTriggerExpanded
	bool ___m_IsTriggerExpanded_0;
	// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::m_Type
	int32_t ___m_Type_1;
	// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::m_LifecycleEvent
	int32_t ___m_LifecycleEvent_2;
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_ApplyRules
	bool ___m_ApplyRules_3;
	// UnityEngine.Analytics.TriggerListContainer UnityEngine.Analytics.EventTrigger::m_Rules
	TriggerListContainer_t2032715483 * ___m_Rules_4;
	// UnityEngine.Analytics.TriggerBool UnityEngine.Analytics.EventTrigger::m_TriggerBool
	int32_t ___m_TriggerBool_5;
	// System.Single UnityEngine.Analytics.EventTrigger::m_InitTime
	float ___m_InitTime_6;
	// System.Single UnityEngine.Analytics.EventTrigger::m_RepeatTime
	float ___m_RepeatTime_7;
	// System.Int32 UnityEngine.Analytics.EventTrigger::m_Repetitions
	int32_t ___m_Repetitions_8;
	// System.Int32 UnityEngine.Analytics.EventTrigger::repetitionCount
	int32_t ___repetitionCount_9;
	// UnityEngine.Analytics.EventTrigger/OnTrigger UnityEngine.Analytics.EventTrigger::m_TriggerFunction
	OnTrigger_t4184125570 * ___m_TriggerFunction_10;
	// UnityEngine.Analytics.TriggerMethod UnityEngine.Analytics.EventTrigger::m_Method
	TriggerMethod_t582536534 * ___m_Method_11;

public:
	inline static int32_t get_offset_of_m_IsTriggerExpanded_0() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_IsTriggerExpanded_0)); }
	inline bool get_m_IsTriggerExpanded_0() const { return ___m_IsTriggerExpanded_0; }
	inline bool* get_address_of_m_IsTriggerExpanded_0() { return &___m_IsTriggerExpanded_0; }
	inline void set_m_IsTriggerExpanded_0(bool value)
	{
		___m_IsTriggerExpanded_0 = value;
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_LifecycleEvent_2() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_LifecycleEvent_2)); }
	inline int32_t get_m_LifecycleEvent_2() const { return ___m_LifecycleEvent_2; }
	inline int32_t* get_address_of_m_LifecycleEvent_2() { return &___m_LifecycleEvent_2; }
	inline void set_m_LifecycleEvent_2(int32_t value)
	{
		___m_LifecycleEvent_2 = value;
	}

	inline static int32_t get_offset_of_m_ApplyRules_3() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_ApplyRules_3)); }
	inline bool get_m_ApplyRules_3() const { return ___m_ApplyRules_3; }
	inline bool* get_address_of_m_ApplyRules_3() { return &___m_ApplyRules_3; }
	inline void set_m_ApplyRules_3(bool value)
	{
		___m_ApplyRules_3 = value;
	}

	inline static int32_t get_offset_of_m_Rules_4() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Rules_4)); }
	inline TriggerListContainer_t2032715483 * get_m_Rules_4() const { return ___m_Rules_4; }
	inline TriggerListContainer_t2032715483 ** get_address_of_m_Rules_4() { return &___m_Rules_4; }
	inline void set_m_Rules_4(TriggerListContainer_t2032715483 * value)
	{
		___m_Rules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_4), value);
	}

	inline static int32_t get_offset_of_m_TriggerBool_5() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerBool_5)); }
	inline int32_t get_m_TriggerBool_5() const { return ___m_TriggerBool_5; }
	inline int32_t* get_address_of_m_TriggerBool_5() { return &___m_TriggerBool_5; }
	inline void set_m_TriggerBool_5(int32_t value)
	{
		___m_TriggerBool_5 = value;
	}

	inline static int32_t get_offset_of_m_InitTime_6() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_InitTime_6)); }
	inline float get_m_InitTime_6() const { return ___m_InitTime_6; }
	inline float* get_address_of_m_InitTime_6() { return &___m_InitTime_6; }
	inline void set_m_InitTime_6(float value)
	{
		___m_InitTime_6 = value;
	}

	inline static int32_t get_offset_of_m_RepeatTime_7() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_RepeatTime_7)); }
	inline float get_m_RepeatTime_7() const { return ___m_RepeatTime_7; }
	inline float* get_address_of_m_RepeatTime_7() { return &___m_RepeatTime_7; }
	inline void set_m_RepeatTime_7(float value)
	{
		___m_RepeatTime_7 = value;
	}

	inline static int32_t get_offset_of_m_Repetitions_8() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Repetitions_8)); }
	inline int32_t get_m_Repetitions_8() const { return ___m_Repetitions_8; }
	inline int32_t* get_address_of_m_Repetitions_8() { return &___m_Repetitions_8; }
	inline void set_m_Repetitions_8(int32_t value)
	{
		___m_Repetitions_8 = value;
	}

	inline static int32_t get_offset_of_repetitionCount_9() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___repetitionCount_9)); }
	inline int32_t get_repetitionCount_9() const { return ___repetitionCount_9; }
	inline int32_t* get_address_of_repetitionCount_9() { return &___repetitionCount_9; }
	inline void set_repetitionCount_9(int32_t value)
	{
		___repetitionCount_9 = value;
	}

	inline static int32_t get_offset_of_m_TriggerFunction_10() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerFunction_10)); }
	inline OnTrigger_t4184125570 * get_m_TriggerFunction_10() const { return ___m_TriggerFunction_10; }
	inline OnTrigger_t4184125570 ** get_address_of_m_TriggerFunction_10() { return &___m_TriggerFunction_10; }
	inline void set_m_TriggerFunction_10(OnTrigger_t4184125570 * value)
	{
		___m_TriggerFunction_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_TriggerFunction_10), value);
	}

	inline static int32_t get_offset_of_m_Method_11() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Method_11)); }
	inline TriggerMethod_t582536534 * get_m_Method_11() const { return ___m_Method_11; }
	inline TriggerMethod_t582536534 ** get_address_of_m_Method_11() { return &___m_Method_11; }
	inline void set_m_Method_11(TriggerMethod_t582536534 * value)
	{
		___m_Method_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Method_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTRIGGER_T2527451695_H
#ifndef TRIGGERRULE_T1946298321_H
#define TRIGGERRULE_T1946298321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerRule
struct  TriggerRule_t1946298321  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.TriggerRule::m_Target
	TrackableField_t1772682203 * ___m_Target_0;
	// UnityEngine.Analytics.TriggerOperator UnityEngine.Analytics.TriggerRule::m_Operator
	int32_t ___m_Operator_1;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value
	ValueProperty_t1868393739 * ___m_Value_2;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value2
	ValueProperty_t1868393739 * ___m_Value2_3;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Target_0)); }
	inline TrackableField_t1772682203 * get_m_Target_0() const { return ___m_Target_0; }
	inline TrackableField_t1772682203 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(TrackableField_t1772682203 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Operator_1() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Operator_1)); }
	inline int32_t get_m_Operator_1() const { return ___m_Operator_1; }
	inline int32_t* get_address_of_m_Operator_1() { return &___m_Operator_1; }
	inline void set_m_Operator_1(int32_t value)
	{
		___m_Operator_1 = value;
	}

	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value_2)); }
	inline ValueProperty_t1868393739 * get_m_Value_2() const { return ___m_Value_2; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(ValueProperty_t1868393739 * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_2), value);
	}

	inline static int32_t get_offset_of_m_Value2_3() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value2_3)); }
	inline ValueProperty_t1868393739 * get_m_Value2_3() const { return ___m_Value2_3; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value2_3() { return &___m_Value2_3; }
	inline void set_m_Value2_3(ValueProperty_t1868393739 * value)
	{
		___m_Value2_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERRULE_T1946298321_H
#ifndef VALUEPROPERTY_T1868393739_H
#define VALUEPROPERTY_T1868393739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.ValueProperty
struct  ValueProperty_t1868393739  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EditingCustomValue
	bool ___m_EditingCustomValue_0;
	// System.Int32 UnityEngine.Analytics.ValueProperty::m_PopupIndex
	int32_t ___m_PopupIndex_1;
	// System.String UnityEngine.Analytics.ValueProperty::m_CustomValue
	String_t* ___m_CustomValue_2;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_FixedType
	bool ___m_FixedType_3;
	// System.String UnityEngine.Analytics.ValueProperty::m_EnumType
	String_t* ___m_EnumType_4;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EnumTypeIsCustomizable
	bool ___m_EnumTypeIsCustomizable_5;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_CanDisable
	bool ___m_CanDisable_6;
	// UnityEngine.Analytics.ValueProperty/PropertyType UnityEngine.Analytics.ValueProperty::m_PropertyType
	int32_t ___m_PropertyType_7;
	// System.String UnityEngine.Analytics.ValueProperty::m_ValueType
	String_t* ___m_ValueType_8;
	// System.String UnityEngine.Analytics.ValueProperty::m_Value
	String_t* ___m_Value_9;
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::m_Target
	TrackableField_t1772682203 * ___m_Target_10;

public:
	inline static int32_t get_offset_of_m_EditingCustomValue_0() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EditingCustomValue_0)); }
	inline bool get_m_EditingCustomValue_0() const { return ___m_EditingCustomValue_0; }
	inline bool* get_address_of_m_EditingCustomValue_0() { return &___m_EditingCustomValue_0; }
	inline void set_m_EditingCustomValue_0(bool value)
	{
		___m_EditingCustomValue_0 = value;
	}

	inline static int32_t get_offset_of_m_PopupIndex_1() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_PopupIndex_1)); }
	inline int32_t get_m_PopupIndex_1() const { return ___m_PopupIndex_1; }
	inline int32_t* get_address_of_m_PopupIndex_1() { return &___m_PopupIndex_1; }
	inline void set_m_PopupIndex_1(int32_t value)
	{
		___m_PopupIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_CustomValue_2() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_CustomValue_2)); }
	inline String_t* get_m_CustomValue_2() const { return ___m_CustomValue_2; }
	inline String_t** get_address_of_m_CustomValue_2() { return &___m_CustomValue_2; }
	inline void set_m_CustomValue_2(String_t* value)
	{
		___m_CustomValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomValue_2), value);
	}

	inline static int32_t get_offset_of_m_FixedType_3() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_FixedType_3)); }
	inline bool get_m_FixedType_3() const { return ___m_FixedType_3; }
	inline bool* get_address_of_m_FixedType_3() { return &___m_FixedType_3; }
	inline void set_m_FixedType_3(bool value)
	{
		___m_FixedType_3 = value;
	}

	inline static int32_t get_offset_of_m_EnumType_4() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EnumType_4)); }
	inline String_t* get_m_EnumType_4() const { return ___m_EnumType_4; }
	inline String_t** get_address_of_m_EnumType_4() { return &___m_EnumType_4; }
	inline void set_m_EnumType_4(String_t* value)
	{
		___m_EnumType_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EnumType_4), value);
	}

	inline static int32_t get_offset_of_m_EnumTypeIsCustomizable_5() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EnumTypeIsCustomizable_5)); }
	inline bool get_m_EnumTypeIsCustomizable_5() const { return ___m_EnumTypeIsCustomizable_5; }
	inline bool* get_address_of_m_EnumTypeIsCustomizable_5() { return &___m_EnumTypeIsCustomizable_5; }
	inline void set_m_EnumTypeIsCustomizable_5(bool value)
	{
		___m_EnumTypeIsCustomizable_5 = value;
	}

	inline static int32_t get_offset_of_m_CanDisable_6() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_CanDisable_6)); }
	inline bool get_m_CanDisable_6() const { return ___m_CanDisable_6; }
	inline bool* get_address_of_m_CanDisable_6() { return &___m_CanDisable_6; }
	inline void set_m_CanDisable_6(bool value)
	{
		___m_CanDisable_6 = value;
	}

	inline static int32_t get_offset_of_m_PropertyType_7() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_PropertyType_7)); }
	inline int32_t get_m_PropertyType_7() const { return ___m_PropertyType_7; }
	inline int32_t* get_address_of_m_PropertyType_7() { return &___m_PropertyType_7; }
	inline void set_m_PropertyType_7(int32_t value)
	{
		___m_PropertyType_7 = value;
	}

	inline static int32_t get_offset_of_m_ValueType_8() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_ValueType_8)); }
	inline String_t* get_m_ValueType_8() const { return ___m_ValueType_8; }
	inline String_t** get_address_of_m_ValueType_8() { return &___m_ValueType_8; }
	inline void set_m_ValueType_8(String_t* value)
	{
		___m_ValueType_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValueType_8), value);
	}

	inline static int32_t get_offset_of_m_Value_9() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_Value_9)); }
	inline String_t* get_m_Value_9() const { return ___m_Value_9; }
	inline String_t** get_address_of_m_Value_9() { return &___m_Value_9; }
	inline void set_m_Value_9(String_t* value)
	{
		___m_Value_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_9), value);
	}

	inline static int32_t get_offset_of_m_Target_10() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_Target_10)); }
	inline TrackableField_t1772682203 * get_m_Target_10() const { return ___m_Target_10; }
	inline TrackableField_t1772682203 ** get_address_of_m_Target_10() { return &___m_Target_10; }
	inline void set_m_Target_10(TrackableField_t1772682203 * value)
	{
		___m_Target_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUEPROPERTY_T1868393739_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef ONTRIGGER_T4184125570_H
#define ONTRIGGER_T4184125570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger/OnTrigger
struct  OnTrigger_t4184125570  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRIGGER_T4184125570_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef COMMONBOTSCRIPT_T3708247472_H
#define COMMONBOTSCRIPT_T3708247472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CommonBotScript
struct  CommonBotScript_t3708247472  : public MonoBehaviour_t3962482529
{
public:
	// System.Single CommonBotScript::stopTime
	float ___stopTime_4;
	// System.Single CommonBotScript::moveTime
	float ___moveTime_5;
	// System.Single CommonBotScript::vel_x
	float ___vel_x_6;
	// System.Single CommonBotScript::vel_y
	float ___vel_y_7;
	// System.Single CommonBotScript::vel_z
	float ___vel_z_8;
	// System.Single CommonBotScript::maxPos_x
	float ___maxPos_x_9;
	// System.Single CommonBotScript::maxPos_y
	float ___maxPos_y_10;
	// System.Single CommonBotScript::minPos_x
	float ___minPos_x_11;
	// System.Single CommonBotScript::minPos_y
	float ___minPos_y_12;
	// System.Single CommonBotScript::timeCounter1
	float ___timeCounter1_13;
	// System.Single CommonBotScript::timeCounter2
	float ___timeCounter2_14;
	// UnityEngine.Animator CommonBotScript::animator
	Animator_t434523843 * ___animator_15;

public:
	inline static int32_t get_offset_of_stopTime_4() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___stopTime_4)); }
	inline float get_stopTime_4() const { return ___stopTime_4; }
	inline float* get_address_of_stopTime_4() { return &___stopTime_4; }
	inline void set_stopTime_4(float value)
	{
		___stopTime_4 = value;
	}

	inline static int32_t get_offset_of_moveTime_5() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___moveTime_5)); }
	inline float get_moveTime_5() const { return ___moveTime_5; }
	inline float* get_address_of_moveTime_5() { return &___moveTime_5; }
	inline void set_moveTime_5(float value)
	{
		___moveTime_5 = value;
	}

	inline static int32_t get_offset_of_vel_x_6() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___vel_x_6)); }
	inline float get_vel_x_6() const { return ___vel_x_6; }
	inline float* get_address_of_vel_x_6() { return &___vel_x_6; }
	inline void set_vel_x_6(float value)
	{
		___vel_x_6 = value;
	}

	inline static int32_t get_offset_of_vel_y_7() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___vel_y_7)); }
	inline float get_vel_y_7() const { return ___vel_y_7; }
	inline float* get_address_of_vel_y_7() { return &___vel_y_7; }
	inline void set_vel_y_7(float value)
	{
		___vel_y_7 = value;
	}

	inline static int32_t get_offset_of_vel_z_8() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___vel_z_8)); }
	inline float get_vel_z_8() const { return ___vel_z_8; }
	inline float* get_address_of_vel_z_8() { return &___vel_z_8; }
	inline void set_vel_z_8(float value)
	{
		___vel_z_8 = value;
	}

	inline static int32_t get_offset_of_maxPos_x_9() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___maxPos_x_9)); }
	inline float get_maxPos_x_9() const { return ___maxPos_x_9; }
	inline float* get_address_of_maxPos_x_9() { return &___maxPos_x_9; }
	inline void set_maxPos_x_9(float value)
	{
		___maxPos_x_9 = value;
	}

	inline static int32_t get_offset_of_maxPos_y_10() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___maxPos_y_10)); }
	inline float get_maxPos_y_10() const { return ___maxPos_y_10; }
	inline float* get_address_of_maxPos_y_10() { return &___maxPos_y_10; }
	inline void set_maxPos_y_10(float value)
	{
		___maxPos_y_10 = value;
	}

	inline static int32_t get_offset_of_minPos_x_11() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___minPos_x_11)); }
	inline float get_minPos_x_11() const { return ___minPos_x_11; }
	inline float* get_address_of_minPos_x_11() { return &___minPos_x_11; }
	inline void set_minPos_x_11(float value)
	{
		___minPos_x_11 = value;
	}

	inline static int32_t get_offset_of_minPos_y_12() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___minPos_y_12)); }
	inline float get_minPos_y_12() const { return ___minPos_y_12; }
	inline float* get_address_of_minPos_y_12() { return &___minPos_y_12; }
	inline void set_minPos_y_12(float value)
	{
		___minPos_y_12 = value;
	}

	inline static int32_t get_offset_of_timeCounter1_13() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___timeCounter1_13)); }
	inline float get_timeCounter1_13() const { return ___timeCounter1_13; }
	inline float* get_address_of_timeCounter1_13() { return &___timeCounter1_13; }
	inline void set_timeCounter1_13(float value)
	{
		___timeCounter1_13 = value;
	}

	inline static int32_t get_offset_of_timeCounter2_14() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___timeCounter2_14)); }
	inline float get_timeCounter2_14() const { return ___timeCounter2_14; }
	inline float* get_address_of_timeCounter2_14() { return &___timeCounter2_14; }
	inline void set_timeCounter2_14(float value)
	{
		___timeCounter2_14 = value;
	}

	inline static int32_t get_offset_of_animator_15() { return static_cast<int32_t>(offsetof(CommonBotScript_t3708247472, ___animator_15)); }
	inline Animator_t434523843 * get_animator_15() const { return ___animator_15; }
	inline Animator_t434523843 ** get_address_of_animator_15() { return &___animator_15; }
	inline void set_animator_15(Animator_t434523843 * value)
	{
		___animator_15 = value;
		Il2CppCodeGenWriteBarrier((&___animator_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONBOTSCRIPT_T3708247472_H
#ifndef GAMECONTROLLER_T2330501625_H
#define GAMECONTROLLER_T2330501625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2330501625  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject GameController::enemySpawn
	GameObject_t1113636619 * ___enemySpawn_4;
	// System.Int32 GameController::enemyCount
	int32_t ___enemyCount_5;

public:
	inline static int32_t get_offset_of_enemySpawn_4() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___enemySpawn_4)); }
	inline GameObject_t1113636619 * get_enemySpawn_4() const { return ___enemySpawn_4; }
	inline GameObject_t1113636619 ** get_address_of_enemySpawn_4() { return &___enemySpawn_4; }
	inline void set_enemySpawn_4(GameObject_t1113636619 * value)
	{
		___enemySpawn_4 = value;
		Il2CppCodeGenWriteBarrier((&___enemySpawn_4), value);
	}

	inline static int32_t get_offset_of_enemyCount_5() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___enemyCount_5)); }
	inline int32_t get_enemyCount_5() const { return ___enemyCount_5; }
	inline int32_t* get_address_of_enemyCount_5() { return &___enemyCount_5; }
	inline void set_enemyCount_5(int32_t value)
	{
		___enemyCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECONTROLLER_T2330501625_H
#ifndef PLAYERSCRIPT_T1783516946_H
#define PLAYERSCRIPT_T1783516946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerScript
struct  PlayerScript_t1783516946  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator PlayerScript::animator
	Animator_t434523843 * ___animator_4;
	// UnityEngine.Transform PlayerScript::_transform
	Transform_t3600365921 * ____transform_5;
	// System.Single PlayerScript::speed
	float ___speed_6;
	// Application.Position PlayerScript::screenPos
	Position_t2320711192 * ___screenPos_7;
	// Application.Position PlayerScript::playerPos
	Position_t2320711192 * ___playerPos_8;
	// UnityEngine.Vector3 PlayerScript::direction
	Vector3_t3722313464  ___direction_9;
	// System.Boolean PlayerScript::hasDirection
	bool ___hasDirection_10;
	// UnityEngine.Vector3 PlayerScript::velocity
	Vector3_t3722313464  ___velocity_11;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(PlayerScript_t1783516946, ___animator_4)); }
	inline Animator_t434523843 * get_animator_4() const { return ___animator_4; }
	inline Animator_t434523843 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t434523843 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((&___animator_4), value);
	}

	inline static int32_t get_offset_of__transform_5() { return static_cast<int32_t>(offsetof(PlayerScript_t1783516946, ____transform_5)); }
	inline Transform_t3600365921 * get__transform_5() const { return ____transform_5; }
	inline Transform_t3600365921 ** get_address_of__transform_5() { return &____transform_5; }
	inline void set__transform_5(Transform_t3600365921 * value)
	{
		____transform_5 = value;
		Il2CppCodeGenWriteBarrier((&____transform_5), value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(PlayerScript_t1783516946, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_screenPos_7() { return static_cast<int32_t>(offsetof(PlayerScript_t1783516946, ___screenPos_7)); }
	inline Position_t2320711192 * get_screenPos_7() const { return ___screenPos_7; }
	inline Position_t2320711192 ** get_address_of_screenPos_7() { return &___screenPos_7; }
	inline void set_screenPos_7(Position_t2320711192 * value)
	{
		___screenPos_7 = value;
		Il2CppCodeGenWriteBarrier((&___screenPos_7), value);
	}

	inline static int32_t get_offset_of_playerPos_8() { return static_cast<int32_t>(offsetof(PlayerScript_t1783516946, ___playerPos_8)); }
	inline Position_t2320711192 * get_playerPos_8() const { return ___playerPos_8; }
	inline Position_t2320711192 ** get_address_of_playerPos_8() { return &___playerPos_8; }
	inline void set_playerPos_8(Position_t2320711192 * value)
	{
		___playerPos_8 = value;
		Il2CppCodeGenWriteBarrier((&___playerPos_8), value);
	}

	inline static int32_t get_offset_of_direction_9() { return static_cast<int32_t>(offsetof(PlayerScript_t1783516946, ___direction_9)); }
	inline Vector3_t3722313464  get_direction_9() const { return ___direction_9; }
	inline Vector3_t3722313464 * get_address_of_direction_9() { return &___direction_9; }
	inline void set_direction_9(Vector3_t3722313464  value)
	{
		___direction_9 = value;
	}

	inline static int32_t get_offset_of_hasDirection_10() { return static_cast<int32_t>(offsetof(PlayerScript_t1783516946, ___hasDirection_10)); }
	inline bool get_hasDirection_10() const { return ___hasDirection_10; }
	inline bool* get_address_of_hasDirection_10() { return &___hasDirection_10; }
	inline void set_hasDirection_10(bool value)
	{
		___hasDirection_10 = value;
	}

	inline static int32_t get_offset_of_velocity_11() { return static_cast<int32_t>(offsetof(PlayerScript_t1783516946, ___velocity_11)); }
	inline Vector3_t3722313464  get_velocity_11() const { return ___velocity_11; }
	inline Vector3_t3722313464 * get_address_of_velocity_11() { return &___velocity_11; }
	inline void set_velocity_11(Vector3_t3722313464  value)
	{
		___velocity_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSCRIPT_T1783516946_H
#ifndef SMOOTHFOLLOW_T2070928547_H
#define SMOOTHFOLLOW_T2070928547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothFollow
struct  SmoothFollow_t2070928547  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform SmoothFollow::target
	Transform_t3600365921 * ___target_4;
	// System.Single SmoothFollow::distance
	float ___distance_5;
	// System.Single SmoothFollow::height
	float ___height_6;
	// System.Single SmoothFollow::rotationDamping
	float ___rotationDamping_7;
	// System.Single SmoothFollow::heightDamping
	float ___heightDamping_8;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(SmoothFollow_t2070928547, ___target_4)); }
	inline Transform_t3600365921 * get_target_4() const { return ___target_4; }
	inline Transform_t3600365921 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t3600365921 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((&___target_4), value);
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(SmoothFollow_t2070928547, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}

	inline static int32_t get_offset_of_height_6() { return static_cast<int32_t>(offsetof(SmoothFollow_t2070928547, ___height_6)); }
	inline float get_height_6() const { return ___height_6; }
	inline float* get_address_of_height_6() { return &___height_6; }
	inline void set_height_6(float value)
	{
		___height_6 = value;
	}

	inline static int32_t get_offset_of_rotationDamping_7() { return static_cast<int32_t>(offsetof(SmoothFollow_t2070928547, ___rotationDamping_7)); }
	inline float get_rotationDamping_7() const { return ___rotationDamping_7; }
	inline float* get_address_of_rotationDamping_7() { return &___rotationDamping_7; }
	inline void set_rotationDamping_7(float value)
	{
		___rotationDamping_7 = value;
	}

	inline static int32_t get_offset_of_heightDamping_8() { return static_cast<int32_t>(offsetof(SmoothFollow_t2070928547, ___heightDamping_8)); }
	inline float get_heightDamping_8() const { return ___heightDamping_8; }
	inline float* get_address_of_heightDamping_8() { return &___heightDamping_8; }
	inline void set_heightDamping_8(float value)
	{
		___heightDamping_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMOOTHFOLLOW_T2070928547_H
#ifndef ANALYTICSTRACKER_T731021378_H
#define ANALYTICSTRACKER_T731021378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker
struct  AnalyticsTracker_t731021378  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityEngine.Analytics.AnalyticsTracker::m_EventName
	String_t* ___m_EventName_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsTracker::m_Dict
	Dictionary_2_t2865362463 * ___m_Dict_5;
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker::m_PrevDictHash
	int32_t ___m_PrevDictHash_6;
	// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::m_TrackableProperty
	TrackableProperty_t3943537984 * ___m_TrackableProperty_7;
	// UnityEngine.Analytics.AnalyticsTracker/Trigger UnityEngine.Analytics.AnalyticsTracker::m_Trigger
	int32_t ___m_Trigger_8;

public:
	inline static int32_t get_offset_of_m_EventName_4() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_EventName_4)); }
	inline String_t* get_m_EventName_4() const { return ___m_EventName_4; }
	inline String_t** get_address_of_m_EventName_4() { return &___m_EventName_4; }
	inline void set_m_EventName_4(String_t* value)
	{
		___m_EventName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventName_4), value);
	}

	inline static int32_t get_offset_of_m_Dict_5() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_Dict_5)); }
	inline Dictionary_2_t2865362463 * get_m_Dict_5() const { return ___m_Dict_5; }
	inline Dictionary_2_t2865362463 ** get_address_of_m_Dict_5() { return &___m_Dict_5; }
	inline void set_m_Dict_5(Dictionary_2_t2865362463 * value)
	{
		___m_Dict_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dict_5), value);
	}

	inline static int32_t get_offset_of_m_PrevDictHash_6() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_PrevDictHash_6)); }
	inline int32_t get_m_PrevDictHash_6() const { return ___m_PrevDictHash_6; }
	inline int32_t* get_address_of_m_PrevDictHash_6() { return &___m_PrevDictHash_6; }
	inline void set_m_PrevDictHash_6(int32_t value)
	{
		___m_PrevDictHash_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackableProperty_7() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_TrackableProperty_7)); }
	inline TrackableProperty_t3943537984 * get_m_TrackableProperty_7() const { return ___m_TrackableProperty_7; }
	inline TrackableProperty_t3943537984 ** get_address_of_m_TrackableProperty_7() { return &___m_TrackableProperty_7; }
	inline void set_m_TrackableProperty_7(TrackableProperty_t3943537984 * value)
	{
		___m_TrackableProperty_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackableProperty_7), value);
	}

	inline static int32_t get_offset_of_m_Trigger_8() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_Trigger_8)); }
	inline int32_t get_m_Trigger_8() const { return ___m_Trigger_8; }
	inline int32_t* get_address_of_m_Trigger_8() { return &___m_Trigger_8; }
	inline void set_m_Trigger_8(int32_t value)
	{
		___m_Trigger_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSTRACKER_T731021378_H
#ifndef SC_T164372247_H
#define SC_T164372247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sc
struct  sc_t164372247  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SC_T164372247_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (StandardEventPayload_t1629891255), -1, sizeof(StandardEventPayload_t1629891255_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1800[6] = 
{
	StandardEventPayload_t1629891255::get_offset_of_m_IsEventExpanded_0(),
	StandardEventPayload_t1629891255::get_offset_of_m_StandardEventType_1(),
	StandardEventPayload_t1629891255::get_offset_of_standardEventType_2(),
	StandardEventPayload_t1629891255::get_offset_of_m_Parameters_3(),
	StandardEventPayload_t1629891255_StaticFields::get_offset_of_m_EventData_4(),
	StandardEventPayload_t1629891255::get_offset_of_m_Name_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (TrackableField_t1772682203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1801[3] = 
{
	TrackableField_t1772682203::get_offset_of_m_ValidTypeNames_2(),
	TrackableField_t1772682203::get_offset_of_m_Type_3(),
	TrackableField_t1772682203::get_offset_of_m_EnumType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (TrackablePropertyBase_t2121532948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1802[2] = 
{
	TrackablePropertyBase_t2121532948::get_offset_of_m_Target_0(),
	TrackablePropertyBase_t2121532948::get_offset_of_m_Path_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (ValueProperty_t1868393739), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1803[11] = 
{
	ValueProperty_t1868393739::get_offset_of_m_EditingCustomValue_0(),
	ValueProperty_t1868393739::get_offset_of_m_PopupIndex_1(),
	ValueProperty_t1868393739::get_offset_of_m_CustomValue_2(),
	ValueProperty_t1868393739::get_offset_of_m_FixedType_3(),
	ValueProperty_t1868393739::get_offset_of_m_EnumType_4(),
	ValueProperty_t1868393739::get_offset_of_m_EnumTypeIsCustomizable_5(),
	ValueProperty_t1868393739::get_offset_of_m_CanDisable_6(),
	ValueProperty_t1868393739::get_offset_of_m_PropertyType_7(),
	ValueProperty_t1868393739::get_offset_of_m_ValueType_8(),
	ValueProperty_t1868393739::get_offset_of_m_Value_9(),
	ValueProperty_t1868393739::get_offset_of_m_Target_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (PropertyType_t4040930247)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1804[4] = 
{
	PropertyType_t4040930247::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (AnalyticsTracker_t731021378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1805[5] = 
{
	AnalyticsTracker_t731021378::get_offset_of_m_EventName_4(),
	AnalyticsTracker_t731021378::get_offset_of_m_Dict_5(),
	AnalyticsTracker_t731021378::get_offset_of_m_PrevDictHash_6(),
	AnalyticsTracker_t731021378::get_offset_of_m_TrackableProperty_7(),
	AnalyticsTracker_t731021378::get_offset_of_m_Trigger_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (Trigger_t4199345191)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1806[8] = 
{
	Trigger_t4199345191::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (TrackableProperty_t3943537984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1807[2] = 
{
	0,
	TrackableProperty_t3943537984::get_offset_of_m_Fields_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (FieldWithTarget_t3058750293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1808[6] = 
{
	FieldWithTarget_t3058750293::get_offset_of_m_ParamName_0(),
	FieldWithTarget_t3058750293::get_offset_of_m_Target_1(),
	FieldWithTarget_t3058750293::get_offset_of_m_FieldPath_2(),
	FieldWithTarget_t3058750293::get_offset_of_m_TypeString_3(),
	FieldWithTarget_t3058750293::get_offset_of_m_DoStatic_4(),
	FieldWithTarget_t3058750293::get_offset_of_m_StaticString_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (TriggerBool_t501031542)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1809[4] = 
{
	TriggerBool_t501031542::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (TriggerLifecycleEvent_t3193146760)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1810[9] = 
{
	TriggerLifecycleEvent_t3193146760::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (TriggerOperator_t3611898925)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1811[9] = 
{
	TriggerOperator_t3611898925::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (TriggerType_t105272677)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1812[5] = 
{
	TriggerType_t105272677::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (TriggerListContainer_t2032715483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1813[1] = 
{
	TriggerListContainer_t2032715483::get_offset_of_m_Rules_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (EventTrigger_t2527451695), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1814[12] = 
{
	EventTrigger_t2527451695::get_offset_of_m_IsTriggerExpanded_0(),
	EventTrigger_t2527451695::get_offset_of_m_Type_1(),
	EventTrigger_t2527451695::get_offset_of_m_LifecycleEvent_2(),
	EventTrigger_t2527451695::get_offset_of_m_ApplyRules_3(),
	EventTrigger_t2527451695::get_offset_of_m_Rules_4(),
	EventTrigger_t2527451695::get_offset_of_m_TriggerBool_5(),
	EventTrigger_t2527451695::get_offset_of_m_InitTime_6(),
	EventTrigger_t2527451695::get_offset_of_m_RepeatTime_7(),
	EventTrigger_t2527451695::get_offset_of_m_Repetitions_8(),
	EventTrigger_t2527451695::get_offset_of_repetitionCount_9(),
	EventTrigger_t2527451695::get_offset_of_m_TriggerFunction_10(),
	EventTrigger_t2527451695::get_offset_of_m_Method_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (OnTrigger_t4184125570), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (TrackableTrigger_t621205209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1816[2] = 
{
	TrackableTrigger_t621205209::get_offset_of_m_Target_0(),
	TrackableTrigger_t621205209::get_offset_of_m_MethodPath_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (TriggerMethod_t582536534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (TriggerRule_t1946298321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1818[4] = 
{
	TriggerRule_t1946298321::get_offset_of_m_Target_0(),
	TriggerRule_t1946298321::get_offset_of_m_Operator_1(),
	TriggerRule_t1946298321::get_offset_of_m_Value_2(),
	TriggerRule_t1946298321::get_offset_of_m_Value2_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (U3CModuleU3E_t692745542), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (CommonBotScript_t3708247472), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1820[12] = 
{
	CommonBotScript_t3708247472::get_offset_of_stopTime_4(),
	CommonBotScript_t3708247472::get_offset_of_moveTime_5(),
	CommonBotScript_t3708247472::get_offset_of_vel_x_6(),
	CommonBotScript_t3708247472::get_offset_of_vel_y_7(),
	CommonBotScript_t3708247472::get_offset_of_vel_z_8(),
	CommonBotScript_t3708247472::get_offset_of_maxPos_x_9(),
	CommonBotScript_t3708247472::get_offset_of_maxPos_y_10(),
	CommonBotScript_t3708247472::get_offset_of_minPos_x_11(),
	CommonBotScript_t3708247472::get_offset_of_minPos_y_12(),
	CommonBotScript_t3708247472::get_offset_of_timeCounter1_13(),
	CommonBotScript_t3708247472::get_offset_of_timeCounter2_14(),
	CommonBotScript_t3708247472::get_offset_of_animator_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (GameController_t2330501625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1821[2] = 
{
	GameController_t2330501625::get_offset_of_enemySpawn_4(),
	GameController_t2330501625::get_offset_of_enemyCount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (Position_t2320711192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1822[4] = 
{
	Position_t2320711192::get_offset_of_p0_0(),
	Position_t2320711192::get_offset_of_hasP0_1(),
	Position_t2320711192::get_offset_of_p1_2(),
	Position_t2320711192::get_offset_of_hasP1_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (PlayerScript_t1783516946), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1823[8] = 
{
	PlayerScript_t1783516946::get_offset_of_animator_4(),
	PlayerScript_t1783516946::get_offset_of__transform_5(),
	PlayerScript_t1783516946::get_offset_of_speed_6(),
	PlayerScript_t1783516946::get_offset_of_screenPos_7(),
	PlayerScript_t1783516946::get_offset_of_playerPos_8(),
	PlayerScript_t1783516946::get_offset_of_direction_9(),
	PlayerScript_t1783516946::get_offset_of_hasDirection_10(),
	PlayerScript_t1783516946::get_offset_of_velocity_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (sc_t164372247), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (SmoothFollow_t2070928547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1825[5] = 
{
	SmoothFollow_t2070928547::get_offset_of_target_4(),
	SmoothFollow_t2070928547::get_offset_of_distance_5(),
	SmoothFollow_t2070928547::get_offset_of_height_6(),
	SmoothFollow_t2070928547::get_offset_of_rotationDamping_7(),
	SmoothFollow_t2070928547::get_offset_of_heightDamping_8(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
