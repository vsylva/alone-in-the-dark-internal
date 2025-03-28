#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JeanBatiste

#include "Basic.hpp"

#include "BP_NPC_classes.hpp"
#include "Engine_structs.hpp"
#include "ENPCLocation_Batiste_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_JeanBatiste.BP_JeanBatiste_C
// 0x0010 (0x0920 - 0x0910)
class ABP_JeanBatiste_C final : public ABP_NPC_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_JeanBatiste_C;                   // 0x0910(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	ENPCLocation_Batiste                          SetBatisteLocation;                                // 0x0918(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_JeanBatiste(int32 EntryPoint);
	void ReceiveBeginPlay();
	void GetLocation(int32* Location);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_JeanBatiste_C">();
	}
	static class ABP_JeanBatiste_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_JeanBatiste_C>();
	}
};
static_assert(alignof(ABP_JeanBatiste_C) == 0x000010, "Wrong alignment on ABP_JeanBatiste_C");
static_assert(sizeof(ABP_JeanBatiste_C) == 0x000920, "Wrong size on ABP_JeanBatiste_C");
static_assert(offsetof(ABP_JeanBatiste_C, UberGraphFrame_BP_JeanBatiste_C) == 0x000910, "Member 'ABP_JeanBatiste_C::UberGraphFrame_BP_JeanBatiste_C' has a wrong offset!");
static_assert(offsetof(ABP_JeanBatiste_C, SetBatisteLocation) == 0x000918, "Member 'ABP_JeanBatiste_C::SetBatisteLocation' has a wrong offset!");

}

