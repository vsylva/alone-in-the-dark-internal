#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Stool02

#include "Basic.hpp"

#include "BP_ChairDestructible_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Stool02.BP_Stool02_C
// 0x0008 (0x0320 - 0x0318)
class ABP_Stool02_C final : public ABP_ChairDestructible_C
{
public:
	class UCapsuleComponent*                      Capsule;                                           // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Stool02_C">();
	}
	static class ABP_Stool02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Stool02_C>();
	}
};
static_assert(alignof(ABP_Stool02_C) == 0x000008, "Wrong alignment on ABP_Stool02_C");
static_assert(sizeof(ABP_Stool02_C) == 0x000320, "Wrong size on ABP_Stool02_C");
static_assert(offsetof(ABP_Stool02_C, Capsule) == 0x000318, "Member 'ABP_Stool02_C::Capsule' has a wrong offset!");

}

