#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Cem_Emote_Stun

#include "Basic.hpp"

#include "GA_Emote_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Cem_Emote_Stun.GA_Cem_Emote_Stun_C
// 0x0008 (0x03D0 - 0x03C8)
class UGA_Cem_Emote_Stun_C final : public UGA_Emote_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Cem_Emote_Stun_C;                // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Cem_Emote_Stun(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Cem_Emote_Stun_C">();
	}
	static class UGA_Cem_Emote_Stun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Cem_Emote_Stun_C>();
	}
};
static_assert(alignof(UGA_Cem_Emote_Stun_C) == 0x000008, "Wrong alignment on UGA_Cem_Emote_Stun_C");
static_assert(sizeof(UGA_Cem_Emote_Stun_C) == 0x0003D0, "Wrong size on UGA_Cem_Emote_Stun_C");
static_assert(offsetof(UGA_Cem_Emote_Stun_C, UberGraphFrame_GA_Cem_Emote_Stun_C) == 0x0003C8, "Member 'UGA_Cem_Emote_Stun_C::UberGraphFrame_GA_Cem_Emote_Stun_C' has a wrong offset!");

}

