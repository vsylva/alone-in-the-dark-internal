#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WhiteFade

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_WhiteFade.WBP_WhiteFade_C.ExecuteUbergraph_WBP_WhiteFade
// 0x0028 (0x0028 - 0x0000)
struct WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade) == 0x000008, "Wrong alignment on WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade");
static_assert(sizeof(WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade) == 0x000028, "Wrong size on WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade");
static_assert(offsetof(WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade, EntryPoint) == 0x000000, "Member 'WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade, K2Node_MakeArray_Array) == 0x000018, "Member 'WBP_WhiteFade_C_ExecuteUbergraph_WBP_WhiteFade::K2Node_MakeArray_Array' has a wrong offset!");

}

