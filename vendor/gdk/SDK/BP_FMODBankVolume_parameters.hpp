#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FMODBankVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FMODBankVolume.BP_FMODBankVolume_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_FMODBankVolume_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FMODBankVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_FMODBankVolume_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_FMODBankVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_FMODBankVolume_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_FMODBankVolume_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_FMODBankVolume_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_FMODBankVolume.BP_FMODBankVolume_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_FMODBankVolume_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FMODBankVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_FMODBankVolume_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_FMODBankVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_FMODBankVolume_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_FMODBankVolume_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_FMODBankVolume_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function BP_FMODBankVolume.BP_FMODBankVolume_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_FMODBankVolume_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FMODBankVolume_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_FMODBankVolume_C_ReceiveEndPlay");
static_assert(sizeof(BP_FMODBankVolume_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_FMODBankVolume_C_ReceiveEndPlay");
static_assert(offsetof(BP_FMODBankVolume_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_FMODBankVolume_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_FMODBankVolume.BP_FMODBankVolume_C.ExecuteUbergraph_BP_FMODBankVolume
// 0x0020 (0x0020 - 0x0000)
struct BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume) == 0x000008, "Wrong alignment on BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume");
static_assert(sizeof(BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume) == 0x000020, "Wrong size on BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume");
static_assert(offsetof(BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume, EntryPoint) == 0x000000, "Member 'BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume, K2Node_Event_OtherActor_1) == 0x000008, "Member 'BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume, K2Node_Event_OtherActor) == 0x000010, "Member 'BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume, K2Node_Event_EndPlayReason) == 0x000018, "Member 'BP_FMODBankVolume_C_ExecuteUbergraph_BP_FMODBankVolume::K2Node_Event_EndPlayReason' has a wrong offset!");

}

