#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CemeteryCreature_TentacleSwipe

#include "Basic.hpp"

#include "GA_AttackMelee_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_CemeteryCreature_TentacleSwipe.GA_CemeteryCreature_TentacleSwipe_C
// 0x0010 (0x0440 - 0x0430)
class UGA_CemeteryCreature_TentacleSwipe_C final : public UGA_AttackMelee_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_CemeteryCreature_TentacleSwipe_C; // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          AttackHit;                                         // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EventReceived_28B194D94DA5848B45DFA59249110FF1(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_28B194D94DA5848B45DFA59249110FF1(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_28B194D94DA5848B45DFA59249110FF1(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_28B194D94DA5848B45DFA59249110FF1(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_28B194D94DA5848B45DFA59249110FF1(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void PlayAttackMontage();
	void ExecuteUbergraph_GA_CemeteryCreature_TentacleSwipe(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_CemeteryCreature_TentacleSwipe_C">();
	}
	static class UGA_CemeteryCreature_TentacleSwipe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_CemeteryCreature_TentacleSwipe_C>();
	}
};
static_assert(alignof(UGA_CemeteryCreature_TentacleSwipe_C) == 0x000008, "Wrong alignment on UGA_CemeteryCreature_TentacleSwipe_C");
static_assert(sizeof(UGA_CemeteryCreature_TentacleSwipe_C) == 0x000440, "Wrong size on UGA_CemeteryCreature_TentacleSwipe_C");
static_assert(offsetof(UGA_CemeteryCreature_TentacleSwipe_C, UberGraphFrame_GA_CemeteryCreature_TentacleSwipe_C) == 0x000430, "Member 'UGA_CemeteryCreature_TentacleSwipe_C::UberGraphFrame_GA_CemeteryCreature_TentacleSwipe_C' has a wrong offset!");
static_assert(offsetof(UGA_CemeteryCreature_TentacleSwipe_C, AttackHit) == 0x000438, "Member 'UGA_CemeteryCreature_TentacleSwipe_C::AttackHit' has a wrong offset!");

}

