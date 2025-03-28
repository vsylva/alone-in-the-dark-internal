#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IncreaseDecrease

#include "Basic.hpp"

#include "FMODStudio_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_IncreaseDecrease.WBP_IncreaseDecrease_C.DefaultValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_IncreaseDecrease_C_DefaultValueChanged__DelegateSignature final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IncreaseDecrease_C_DefaultValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on WBP_IncreaseDecrease_C_DefaultValueChanged__DelegateSignature");
static_assert(sizeof(WBP_IncreaseDecrease_C_DefaultValueChanged__DelegateSignature) == 0x000004, "Wrong size on WBP_IncreaseDecrease_C_DefaultValueChanged__DelegateSignature");
static_assert(offsetof(WBP_IncreaseDecrease_C_DefaultValueChanged__DelegateSignature, NewValue) == 0x000000, "Member 'WBP_IncreaseDecrease_C_DefaultValueChanged__DelegateSignature::NewValue' has a wrong offset!");

// Function WBP_IncreaseDecrease.WBP_IncreaseDecrease_C.ExecuteUbergraph_WBP_IncreaseDecrease
// 0x0080 (0x0080 - 0x0000)
struct WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             K2Node_DynamicCast_AsFMODEvent;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetInputHandlingBase*               CallFunc_GetParentWidgetInputHandlingBase_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasBeenSetup_ReturnValue;                 // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_1;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_2;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease) == 0x000008, "Wrong alignment on WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease");
static_assert(sizeof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease) == 0x000080, "Wrong size on WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, EntryPoint) == 0x000000, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000018, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, K2Node_DynamicCast_AsFMODEvent) == 0x000020, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::K2Node_DynamicCast_AsFMODEvent' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_PlayEvent2D_ReturnValue) == 0x000030, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, Temp_object_Variable) == 0x000038, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_GetParentWidgetInputHandlingBase_ReturnValue) == 0x000040, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_GetParentWidgetInputHandlingBase_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_HasBeenSetup_ReturnValue) == 0x000049, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_HasBeenSetup_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_PlayEvent2D_ReturnValue_1) == 0x000050, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_PlayEvent2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_PlayEvent2D_ReturnValue_2) == 0x000060, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_PlayEvent2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_Add_FloatFloat_ReturnValue) == 0x000068, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_FClamp_ReturnValue) == 0x00006C, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000070, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, CallFunc_FClamp_ReturnValue_1) == 0x000074, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease, K2Node_CustomEvent_Loaded) == 0x000078, "Member 'WBP_IncreaseDecrease_C_ExecuteUbergraph_WBP_IncreaseDecrease::K2Node_CustomEvent_Loaded' has a wrong offset!");

// Function WBP_IncreaseDecrease.WBP_IncreaseDecrease_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_IncreaseDecrease_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_IncreaseDecrease_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_IncreaseDecrease_C_PreConstruct");
static_assert(sizeof(WBP_IncreaseDecrease_C_PreConstruct) == 0x000001, "Wrong size on WBP_IncreaseDecrease_C_PreConstruct");
static_assert(offsetof(WBP_IncreaseDecrease_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_IncreaseDecrease_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_IncreaseDecrease.WBP_IncreaseDecrease_C.OnLoaded_2C5BE80940AE44C1561706A175151845
// 0x0008 (0x0008 - 0x0000)
struct WBP_IncreaseDecrease_C_OnLoaded_2C5BE80940AE44C1561706A175151845 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IncreaseDecrease_C_OnLoaded_2C5BE80940AE44C1561706A175151845) == 0x000008, "Wrong alignment on WBP_IncreaseDecrease_C_OnLoaded_2C5BE80940AE44C1561706A175151845");
static_assert(sizeof(WBP_IncreaseDecrease_C_OnLoaded_2C5BE80940AE44C1561706A175151845) == 0x000008, "Wrong size on WBP_IncreaseDecrease_C_OnLoaded_2C5BE80940AE44C1561706A175151845");
static_assert(offsetof(WBP_IncreaseDecrease_C_OnLoaded_2C5BE80940AE44C1561706A175151845, Loaded) == 0x000000, "Member 'WBP_IncreaseDecrease_C_OnLoaded_2C5BE80940AE44C1561706A175151845::Loaded' has a wrong offset!");

// Function WBP_IncreaseDecrease.WBP_IncreaseDecrease_C.UpdateButtonState
// 0x0078 (0x0078 - 0x0000)
struct WBP_IncreaseDecrease_C_UpdateButtonState final
{
public:
	bool                                          InHoovered;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0020(0x0058)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_IncreaseDecrease_C_UpdateButtonState) == 0x000008, "Wrong alignment on WBP_IncreaseDecrease_C_UpdateButtonState");
static_assert(sizeof(WBP_IncreaseDecrease_C_UpdateButtonState) == 0x000078, "Wrong size on WBP_IncreaseDecrease_C_UpdateButtonState");
static_assert(offsetof(WBP_IncreaseDecrease_C_UpdateButtonState, InHoovered) == 0x000000, "Member 'WBP_IncreaseDecrease_C_UpdateButtonState::InHoovered' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_UpdateButtonState, Temp_bool_Variable) == 0x000001, "Member 'WBP_IncreaseDecrease_C_UpdateButtonState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_UpdateButtonState, Temp_name_Variable) == 0x000004, "Member 'WBP_IncreaseDecrease_C_UpdateButtonState::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_UpdateButtonState, Temp_name_Variable_1) == 0x00000C, "Member 'WBP_IncreaseDecrease_C_UpdateButtonState::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_UpdateButtonState, K2Node_Select_Default) == 0x000014, "Member 'WBP_IncreaseDecrease_C_UpdateButtonState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_UpdateButtonState, K2Node_MakeStruct_SlateFontInfo) == 0x000020, "Member 'WBP_IncreaseDecrease_C_UpdateButtonState::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function WBP_IncreaseDecrease.WBP_IncreaseDecrease_C.UpdateValue
// 0x0028 (0x0028 - 0x0000)
struct WBP_IncreaseDecrease_C_UpdateValue final
{
public:
	float                                         Value_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0008(0x0018)()
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IncreaseDecrease_C_UpdateValue) == 0x000008, "Wrong alignment on WBP_IncreaseDecrease_C_UpdateValue");
static_assert(sizeof(WBP_IncreaseDecrease_C_UpdateValue) == 0x000028, "Wrong size on WBP_IncreaseDecrease_C_UpdateValue");
static_assert(offsetof(WBP_IncreaseDecrease_C_UpdateValue, Value_0) == 0x000000, "Member 'WBP_IncreaseDecrease_C_UpdateValue::Value_0' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_UpdateValue, CallFunc_Conv_FloatToText_ReturnValue) == 0x000008, "Member 'WBP_IncreaseDecrease_C_UpdateValue::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IncreaseDecrease_C_UpdateValue, CallFunc_MapRangeClamped_ReturnValue) == 0x000020, "Member 'WBP_IncreaseDecrease_C_UpdateValue::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");

// Function WBP_IncreaseDecrease.WBP_IncreaseDecrease_C.SetDefaultValue
// 0x0004 (0x0004 - 0x0000)
struct WBP_IncreaseDecrease_C_SetDefaultValue final
{
public:
	float                                         Value_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IncreaseDecrease_C_SetDefaultValue) == 0x000004, "Wrong alignment on WBP_IncreaseDecrease_C_SetDefaultValue");
static_assert(sizeof(WBP_IncreaseDecrease_C_SetDefaultValue) == 0x000004, "Wrong size on WBP_IncreaseDecrease_C_SetDefaultValue");
static_assert(offsetof(WBP_IncreaseDecrease_C_SetDefaultValue, Value_0) == 0x000000, "Member 'WBP_IncreaseDecrease_C_SetDefaultValue::Value_0' has a wrong offset!");

}

