#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_WalkToLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BTTask_WalkToLocation.BTTask_WalkToLocation_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_WalkToLocation_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_WalkToLocation_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_WalkToLocation_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_WalkToLocation_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_WalkToLocation_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_WalkToLocation_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_WalkToLocation_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_WalkToLocation_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_WalkToLocation_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

// Function BTTask_WalkToLocation.BTTask_WalkToLocation_C.ReceiveAbortAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_WalkToLocation_C_ReceiveAbortAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_WalkToLocation_C_ReceiveAbortAI) == 0x000008, "Wrong alignment on BTTask_WalkToLocation_C_ReceiveAbortAI");
static_assert(sizeof(BTTask_WalkToLocation_C_ReceiveAbortAI) == 0x000010, "Wrong size on BTTask_WalkToLocation_C_ReceiveAbortAI");
static_assert(offsetof(BTTask_WalkToLocation_C_ReceiveAbortAI, OwnerController) == 0x000000, "Member 'BTTask_WalkToLocation_C_ReceiveAbortAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_WalkToLocation_C_ReceiveAbortAI, ControlledPawn) == 0x000008, "Member 'BTTask_WalkToLocation_C_ReceiveAbortAI::ControlledPawn' has a wrong offset!");

// Function BTTask_WalkToLocation.BTTask_WalkToLocation_C.ExecuteUbergraph_BTTask_WalkToLocation
// 0x0038 (0x0038 - 0x0000)
struct BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingRequestResult                   CallFunc_MoveToLocation_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation) == 0x000008, "Wrong alignment on BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation");
static_assert(sizeof(BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation) == 0x000038, "Wrong size on BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation");
static_assert(offsetof(BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation, EntryPoint) == 0x000000, "Member 'BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000004, "Member 'BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation, K2Node_Event_OwnerController_1) == 0x000010, "Member 'BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation, K2Node_Event_ControlledPawn_1) == 0x000018, "Member 'BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation, K2Node_Event_OwnerController) == 0x000020, "Member 'BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation, K2Node_Event_ControlledPawn) == 0x000028, "Member 'BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation, CallFunc_MoveToLocation_ReturnValue) == 0x000030, "Member 'BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation::CallFunc_MoveToLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation, K2Node_SwitchEnum_CmpSuccess) == 0x000031, "Member 'BTTask_WalkToLocation_C_ExecuteUbergraph_BTTask_WalkToLocation::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

