#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_IsInCombatState

#include "Basic.hpp"


namespace SDK::Params
{

// Function FN_IsInCombatState.FN_IsInCombatState_C.K2_ExecuteInput
// 0x0008 (0x0008 - 0x0000)
struct FN_IsInCombatState_C_K2_ExecuteInput final
{
public:
	class FName                                   PinName;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FN_IsInCombatState_C_K2_ExecuteInput) == 0x000004, "Wrong alignment on FN_IsInCombatState_C_K2_ExecuteInput");
static_assert(sizeof(FN_IsInCombatState_C_K2_ExecuteInput) == 0x000008, "Wrong size on FN_IsInCombatState_C_K2_ExecuteInput");
static_assert(offsetof(FN_IsInCombatState_C_K2_ExecuteInput, PinName) == 0x000000, "Member 'FN_IsInCombatState_C_K2_ExecuteInput::PinName' has a wrong offset!");

// Function FN_IsInCombatState.FN_IsInCombatState_C.ExecuteUbergraph_FN_IsInCombatState
// 0x0010 (0x0010 - 0x0000)
struct FN_IsInCombatState_C_ExecuteUbergraph_FN_IsInCombatState final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_PinName;                              // 0x0004(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsInCombat_ReturnValue;                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FN_IsInCombatState_C_ExecuteUbergraph_FN_IsInCombatState) == 0x000004, "Wrong alignment on FN_IsInCombatState_C_ExecuteUbergraph_FN_IsInCombatState");
static_assert(sizeof(FN_IsInCombatState_C_ExecuteUbergraph_FN_IsInCombatState) == 0x000010, "Wrong size on FN_IsInCombatState_C_ExecuteUbergraph_FN_IsInCombatState");
static_assert(offsetof(FN_IsInCombatState_C_ExecuteUbergraph_FN_IsInCombatState, EntryPoint) == 0x000000, "Member 'FN_IsInCombatState_C_ExecuteUbergraph_FN_IsInCombatState::EntryPoint' has a wrong offset!");
static_assert(offsetof(FN_IsInCombatState_C_ExecuteUbergraph_FN_IsInCombatState, K2Node_Event_PinName) == 0x000004, "Member 'FN_IsInCombatState_C_ExecuteUbergraph_FN_IsInCombatState::K2Node_Event_PinName' has a wrong offset!");
static_assert(offsetof(FN_IsInCombatState_C_ExecuteUbergraph_FN_IsInCombatState, CallFunc_GetIsInCombat_ReturnValue) == 0x00000C, "Member 'FN_IsInCombatState_C_ExecuteUbergraph_FN_IsInCombatState::CallFunc_GetIsInCombat_ReturnValue' has a wrong offset!");

}

