#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_ThirdPerson

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_ThirdPerson.ABP_ThirdPerson_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_ThirdPerson_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_ThirdPerson_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_ThirdPerson_C_AnimGraph");
static_assert(sizeof(ABP_ThirdPerson_C_AnimGraph) == 0x000010, "Wrong size on ABP_ThirdPerson_C_AnimGraph");
static_assert(offsetof(ABP_ThirdPerson_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_ThirdPerson_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_ThirdPerson.ABP_ThirdPerson_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_ThirdPerson_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_ThirdPerson_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_ThirdPerson_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_ThirdPerson_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_ThirdPerson_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_ThirdPerson_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_ThirdPerson_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_ThirdPerson.ABP_ThirdPerson_C.ExecuteUbergraph_ABP_ThirdPerson
// 0x0060 (0x0060 - 0x0000)
struct ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson) == 0x000008, "Wrong alignment on ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson");
static_assert(sizeof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson) == 0x000060, "Wrong size on ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, EntryPoint) == 0x000000, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_MakeVector_ReturnValue) == 0x000004, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue) == 0x000010, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_Less_FloatFloat_ReturnValue) == 0x000014, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, K2Node_Event_DeltaTimeX) == 0x000018, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000020, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1) == 0x000028, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x00002D, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_GetVelocity_ReturnValue) == 0x000030, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_GetMovementComponent_ReturnValue) == 0x000040, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_VSize_ReturnValue) == 0x000048, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_IsFalling_ReturnValue) == 0x00004C, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000050, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson, CallFunc_RInterpTo_ReturnValue) == 0x000054, "Member 'ABP_ThirdPerson_C_ExecuteUbergraph_ABP_ThirdPerson::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");

}

