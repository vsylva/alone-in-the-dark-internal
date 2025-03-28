#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Player_Sprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_structs.hpp"
#include "PiecesGameplayAbilities_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Player_Sprint.GA_Player_Sprint_C
// 0x0060 (0x0418 - 0x03B8)
class UGA_Player_Sprint_C final : public UPiecesGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle            Sprint_GE;                                         // 0x03C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Min_Velocity;                                      // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_Velocity_to_end;                               // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   Sprint_Camera_Modifier_Class;                      // 0x03D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	class UCameraModifier*                        Sprint_Camera_Modifier;                            // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoInputTimeThreshold;                              // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoInputTime;                                       // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SprintBoostActivateTime;                           // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            SprintBoostGE;                                     // 0x040C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Player_Sprint(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void Wait_For_Move_Input_Released();
	void Wait_Min_Speed();
	void Removed_55788FF043044CAD4272B2906E703B21();
	void OnActivate_480591ED487948A9E665D1B8D409A27D(class UGameplayAbility* ActivatedAbility);
	void OnCommit_4407EE704C8495F73F9F82B3E7D5F84B(class UGameplayAbility* ActivatedAbility);
	void OnLoaded_AFA62ADB4C74CAC7D8FD898D26E180E4(TSubclassOf<class UObject> Loaded);
	void Started_BEFDFF91401B97748F9B0AB90406E292();
	void Ongoing_BEFDFF91401B97748F9B0AB90406E292();
	void Canceled_BEFDFF91401B97748F9B0AB90406E292();
	void Triggered_BEFDFF91401B97748F9B0AB90406E292();
	void Completed_BEFDFF91401B97748F9B0AB90406E292();
	void NoInput_BEFDFF91401B97748F9B0AB90406E292();
	void Started_25DDF60E44F5EAF25A998D96E5F49B85();
	void Ongoing_25DDF60E44F5EAF25A998D96E5F49B85();
	void Canceled_25DDF60E44F5EAF25A998D96E5F49B85();
	void Triggered_25DDF60E44F5EAF25A998D96E5F49B85();
	void Completed_25DDF60E44F5EAF25A998D96E5F49B85();
	void NoInput_25DDF60E44F5EAF25A998D96E5F49B85();
	void OnVelocityReached_5D415D024674A366FFDBF6BB0D3BB4BC();
	void OnPress_40EA5FBC4A342808FDA9599FFE505B7B(float TimeWaited);
	void Add_Sprint_Effect();
	void Remove_Sprint_Effect();
	void Add_Sprint_Boost_Effect();
	void Add_Sprint_Boost_If_Within_Boost_Restart_Window();

	bool SprintRequiresHeldInput() const;
	void Get_Sprint_Min_Velocity(float* Min_Velocity_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Player_Sprint_C">();
	}
	static class UGA_Player_Sprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Player_Sprint_C>();
	}
};
static_assert(alignof(UGA_Player_Sprint_C) == 0x000008, "Wrong alignment on UGA_Player_Sprint_C");
static_assert(sizeof(UGA_Player_Sprint_C) == 0x000418, "Wrong size on UGA_Player_Sprint_C");
static_assert(offsetof(UGA_Player_Sprint_C, UberGraphFrame) == 0x0003B8, "Member 'UGA_Player_Sprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Player_Sprint_C, Sprint_GE) == 0x0003C0, "Member 'UGA_Player_Sprint_C::Sprint_GE' has a wrong offset!");
static_assert(offsetof(UGA_Player_Sprint_C, Min_Velocity) == 0x0003C8, "Member 'UGA_Player_Sprint_C::Min_Velocity' has a wrong offset!");
static_assert(offsetof(UGA_Player_Sprint_C, Max_Velocity_to_end) == 0x0003CC, "Member 'UGA_Player_Sprint_C::Max_Velocity_to_end' has a wrong offset!");
static_assert(offsetof(UGA_Player_Sprint_C, Sprint_Camera_Modifier_Class) == 0x0003D0, "Member 'UGA_Player_Sprint_C::Sprint_Camera_Modifier_Class' has a wrong offset!");
static_assert(offsetof(UGA_Player_Sprint_C, Sprint_Camera_Modifier) == 0x0003F8, "Member 'UGA_Player_Sprint_C::Sprint_Camera_Modifier' has a wrong offset!");
static_assert(offsetof(UGA_Player_Sprint_C, NoInputTimeThreshold) == 0x000400, "Member 'UGA_Player_Sprint_C::NoInputTimeThreshold' has a wrong offset!");
static_assert(offsetof(UGA_Player_Sprint_C, NoInputTime) == 0x000404, "Member 'UGA_Player_Sprint_C::NoInputTime' has a wrong offset!");
static_assert(offsetof(UGA_Player_Sprint_C, SprintBoostActivateTime) == 0x000408, "Member 'UGA_Player_Sprint_C::SprintBoostActivateTime' has a wrong offset!");
static_assert(offsetof(UGA_Player_Sprint_C, SprintBoostGE) == 0x00040C, "Member 'UGA_Player_Sprint_C::SprintBoostGE' has a wrong offset!");

}

