#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Archive_Chapter_01

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Archive_Chapter_01.WBP_Archive_Chapter_01_C.OnSlotPressed_Event
// 0x0010 (0x0010 - 0x0000)
struct WBP_Archive_Chapter_01_C_OnSlotPressed_Event final
{
public:
	class UOFSlotWidget*                          SlotWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemData*                              ItemData;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Archive_Chapter_01_C_OnSlotPressed_Event) == 0x000008, "Wrong alignment on WBP_Archive_Chapter_01_C_OnSlotPressed_Event");
static_assert(sizeof(WBP_Archive_Chapter_01_C_OnSlotPressed_Event) == 0x000010, "Wrong size on WBP_Archive_Chapter_01_C_OnSlotPressed_Event");
static_assert(offsetof(WBP_Archive_Chapter_01_C_OnSlotPressed_Event, SlotWidget) == 0x000000, "Member 'WBP_Archive_Chapter_01_C_OnSlotPressed_Event::SlotWidget' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_OnSlotPressed_Event, ItemData) == 0x000008, "Member 'WBP_Archive_Chapter_01_C_OnSlotPressed_Event::ItemData' has a wrong offset!");

// Function WBP_Archive_Chapter_01.WBP_Archive_Chapter_01_C.OnCancelPressed_Event
// 0x0008 (0x0008 - 0x0000)
struct WBP_Archive_Chapter_01_C_OnCancelPressed_Event final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Archive_Chapter_01_C_OnCancelPressed_Event) == 0x000008, "Wrong alignment on WBP_Archive_Chapter_01_C_OnCancelPressed_Event");
static_assert(sizeof(WBP_Archive_Chapter_01_C_OnCancelPressed_Event) == 0x000008, "Wrong size on WBP_Archive_Chapter_01_C_OnCancelPressed_Event");
static_assert(offsetof(WBP_Archive_Chapter_01_C_OnCancelPressed_Event, Widget) == 0x000000, "Member 'WBP_Archive_Chapter_01_C_OnCancelPressed_Event::Widget' has a wrong offset!");

// Function WBP_Archive_Chapter_01.WBP_Archive_Chapter_01_C.ExecuteUbergraph_WBP_Archive_Chapter_01
// 0x0080 (0x0080 - 0x0000)
struct WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UOFSlotWidget* SlotWidget, class UItemData* ItemData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UWidget* Widget)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UOFSlotWidget*                          K2Node_CustomEvent_SlotWidget;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemData*                              K2Node_CustomEvent_ItemData;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOFSlotWidget*                          K2Node_DynamicCast_AsOFSlot_Widget;                // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_CustomEvent_Widget;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOFPlayerController*                    CallFunc_GetObsidianFoxPlayerController_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01) == 0x000008, "Wrong alignment on WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01");
static_assert(sizeof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01) == 0x000080, "Wrong size on WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, EntryPoint) == 0x000000, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, Temp_int_Array_Index_Variable) == 0x000024, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, CallFunc_GetAllChildren_ReturnValue) == 0x000030, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, K2Node_CustomEvent_SlotWidget) == 0x000040, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::K2Node_CustomEvent_SlotWidget' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, K2Node_CustomEvent_ItemData) == 0x000048, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::K2Node_CustomEvent_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, CallFunc_Array_Get_Item) == 0x000050, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, K2Node_DynamicCast_AsOFSlot_Widget) == 0x000058, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::K2Node_DynamicCast_AsOFSlot_Widget' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, K2Node_CustomEvent_Widget) == 0x000070, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01, CallFunc_GetObsidianFoxPlayerController_ReturnValue) == 0x000078, "Member 'WBP_Archive_Chapter_01_C_ExecuteUbergraph_WBP_Archive_Chapter_01::CallFunc_GetObsidianFoxPlayerController_ReturnValue' has a wrong offset!");

// Function WBP_Archive_Chapter_01.WBP_Archive_Chapter_01_C.OnSlotPressed__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_Archive_Chapter_01_C_OnSlotPressed__DelegateSignature final
{
public:
	class UOFSlotWidget*                          SlotWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemData*                              ItemData;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Archive_Chapter_01_C_OnSlotPressed__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Archive_Chapter_01_C_OnSlotPressed__DelegateSignature");
static_assert(sizeof(WBP_Archive_Chapter_01_C_OnSlotPressed__DelegateSignature) == 0x000010, "Wrong size on WBP_Archive_Chapter_01_C_OnSlotPressed__DelegateSignature");
static_assert(offsetof(WBP_Archive_Chapter_01_C_OnSlotPressed__DelegateSignature, SlotWidget) == 0x000000, "Member 'WBP_Archive_Chapter_01_C_OnSlotPressed__DelegateSignature::SlotWidget' has a wrong offset!");
static_assert(offsetof(WBP_Archive_Chapter_01_C_OnSlotPressed__DelegateSignature, ItemData) == 0x000008, "Member 'WBP_Archive_Chapter_01_C_OnSlotPressed__DelegateSignature::ItemData' has a wrong offset!");

}

