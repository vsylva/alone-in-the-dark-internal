#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANS_SpawnEmoteCigarette

#include "Basic.hpp"


namespace SDK::Params
{

// Function ANS_SpawnEmoteCigarette.ANS_SpawnEmoteCigarette_C.Received_NotifyBegin
// 0x0028 (0x0028 - 0x0000)
struct ANS_SpawnEmoteCigarette_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EmoteCigaretteSpawnerComponent_C*   CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_SpawnEmoteCigarette_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on ANS_SpawnEmoteCigarette_C_Received_NotifyBegin");
static_assert(sizeof(ANS_SpawnEmoteCigarette_C_Received_NotifyBegin) == 0x000028, "Wrong size on ANS_SpawnEmoteCigarette_C_Received_NotifyBegin");
static_assert(offsetof(ANS_SpawnEmoteCigarette_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'ANS_SpawnEmoteCigarette_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(ANS_SpawnEmoteCigarette_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'ANS_SpawnEmoteCigarette_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(ANS_SpawnEmoteCigarette_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'ANS_SpawnEmoteCigarette_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(ANS_SpawnEmoteCigarette_C_Received_NotifyBegin, ReturnValue) == 0x000014, "Member 'ANS_SpawnEmoteCigarette_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_SpawnEmoteCigarette_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'ANS_SpawnEmoteCigarette_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_SpawnEmoteCigarette_C_Received_NotifyBegin, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'ANS_SpawnEmoteCigarette_C_Received_NotifyBegin::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function ANS_SpawnEmoteCigarette.ANS_SpawnEmoteCigarette_C.Received_NotifyEnd
// 0x0028 (0x0028 - 0x0000)
struct ANS_SpawnEmoteCigarette_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EmoteCigaretteSpawnerComponent_C*   CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANS_SpawnEmoteCigarette_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on ANS_SpawnEmoteCigarette_C_Received_NotifyEnd");
static_assert(sizeof(ANS_SpawnEmoteCigarette_C_Received_NotifyEnd) == 0x000028, "Wrong size on ANS_SpawnEmoteCigarette_C_Received_NotifyEnd");
static_assert(offsetof(ANS_SpawnEmoteCigarette_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'ANS_SpawnEmoteCigarette_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(ANS_SpawnEmoteCigarette_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'ANS_SpawnEmoteCigarette_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(ANS_SpawnEmoteCigarette_C_Received_NotifyEnd, ReturnValue) == 0x000010, "Member 'ANS_SpawnEmoteCigarette_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_SpawnEmoteCigarette_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'ANS_SpawnEmoteCigarette_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_SpawnEmoteCigarette_C_Received_NotifyEnd, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'ANS_SpawnEmoteCigarette_C_Received_NotifyEnd::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

}

