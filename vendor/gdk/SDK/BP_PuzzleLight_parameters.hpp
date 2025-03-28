#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PuzzleLight

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PuzzleLight.BP_PuzzleLight_C.OnPuzzleEntered
// 0x0010 (0x0010 - 0x0000)
struct BP_PuzzleLight_C_OnPuzzleEntered final
{
public:
	class APuzzleActor*                           PuzzleActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             InteractingCharacter;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PuzzleLight_C_OnPuzzleEntered) == 0x000008, "Wrong alignment on BP_PuzzleLight_C_OnPuzzleEntered");
static_assert(sizeof(BP_PuzzleLight_C_OnPuzzleEntered) == 0x000010, "Wrong size on BP_PuzzleLight_C_OnPuzzleEntered");
static_assert(offsetof(BP_PuzzleLight_C_OnPuzzleEntered, PuzzleActor) == 0x000000, "Member 'BP_PuzzleLight_C_OnPuzzleEntered::PuzzleActor' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_OnPuzzleEntered, InteractingCharacter) == 0x000008, "Member 'BP_PuzzleLight_C_OnPuzzleEntered::InteractingCharacter' has a wrong offset!");

// Function BP_PuzzleLight.BP_PuzzleLight_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PuzzleLight_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PuzzleLight_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PuzzleLight_C_ReceiveEndPlay");
static_assert(sizeof(BP_PuzzleLight_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PuzzleLight_C_ReceiveEndPlay");
static_assert(offsetof(BP_PuzzleLight_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PuzzleLight_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PuzzleLight.BP_PuzzleLight_C.OnPuzzleExit
// 0x0010 (0x0010 - 0x0000)
struct BP_PuzzleLight_C_OnPuzzleExit final
{
public:
	class APuzzleActor*                           PuzzleActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOFPlayerController*                    InteractingController;                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PuzzleLight_C_OnPuzzleExit) == 0x000008, "Wrong alignment on BP_PuzzleLight_C_OnPuzzleExit");
static_assert(sizeof(BP_PuzzleLight_C_OnPuzzleExit) == 0x000010, "Wrong size on BP_PuzzleLight_C_OnPuzzleExit");
static_assert(offsetof(BP_PuzzleLight_C_OnPuzzleExit, PuzzleActor) == 0x000000, "Member 'BP_PuzzleLight_C_OnPuzzleExit::PuzzleActor' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_OnPuzzleExit, InteractingController) == 0x000008, "Member 'BP_PuzzleLight_C_OnPuzzleExit::InteractingController' has a wrong offset!");

// Function BP_PuzzleLight.BP_PuzzleLight_C.ExecuteUbergraph_BP_PuzzleLight
// 0x0098 (0x0098 - 0x0000)
struct BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APuzzleActor* PuzzleActor, class ACharacter* InteractingCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class APuzzleActor* PuzzleActor, class AOFPlayerController* InteractingController)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APuzzleActor*                           K2Node_CustomEvent_PuzzleActor_1;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_CustomEvent_InteractingCharacter;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APuzzleActor*                           K2Node_DynamicCast_AsPuzzle_Actor;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APuzzleActor* PuzzleActor, class ACharacter* InteractingCharacter)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class APuzzleActor*                           K2Node_DynamicCast_AsPuzzle_Actor_1;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APuzzleActor*                           K2Node_CustomEvent_PuzzleActor;                    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOFPlayerController*                    K2Node_CustomEvent_InteractingController;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APuzzleActor* PuzzleActor, class AOFPlayerController* InteractingController)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight) == 0x000008, "Wrong alignment on BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight");
static_assert(sizeof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight) == 0x000098, "Wrong size on BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, EntryPoint) == 0x000000, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_CustomEvent_PuzzleActor_1) == 0x000030, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_CustomEvent_PuzzleActor_1' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_CustomEvent_InteractingCharacter) == 0x000038, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_CustomEvent_InteractingCharacter' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_DynamicCast_AsPuzzle_Actor) == 0x000040, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_DynamicCast_AsPuzzle_Actor' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_Event_EndPlayReason) == 0x000049, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, CallFunc_GetOwner_ReturnValue_1) == 0x000050, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_CreateDelegate_OutputDelegate_2) == 0x000058, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_DynamicCast_AsPuzzle_Actor_1) == 0x000068, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_DynamicCast_AsPuzzle_Actor_1' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_CustomEvent_PuzzleActor) == 0x000078, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_CustomEvent_PuzzleActor' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_CustomEvent_InteractingController) == 0x000080, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_CustomEvent_InteractingController' has a wrong offset!");
static_assert(offsetof(BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight, K2Node_CreateDelegate_OutputDelegate_3) == 0x000088, "Member 'BP_PuzzleLight_C_ExecuteUbergraph_BP_PuzzleLight::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

}

