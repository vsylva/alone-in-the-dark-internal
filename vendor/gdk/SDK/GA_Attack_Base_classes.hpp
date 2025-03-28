#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Attack_Base

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "SpecialHitReactions_structs.hpp"
#include "CharacterSize_structs.hpp"
#include "ObsidianFox_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Attack_Base.GA_Attack_Base_C
// 0x0050 (0x0418 - 0x03C8)
class UGA_Attack_Base_C : public UGameplayAbility_WeaponAttack
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           MontageToPlay;                                     // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AttackEvent;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Gameplay_Effect_on_Hit;                            // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CancelAbilityTags;                                 // 0x03E8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	ECharacterSize                                Size;                                              // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHitReactionType                              Desired_Hit_Reaction;                              // 0x0409(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESpecialHitReactions                          Special_Hit_Reaction;                              // 0x040A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40B[0x1];                                      // 0x040B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           BaseHitReactionTag_DEPRECATED;                     // 0x040C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void MakeEffectSpecFromTargetData(TSubclassOf<class UGameplayEffect> GameplayEffectClass, const struct FGameplayAbilityTargetDataHandle& TargetData, int32 Level, struct FGameplayEffectSpecHandle* Effect_Spec_Handle, struct FGameplayEffectContextHandle* Effect_Context_Handle);
	void TryStopAnimationTimers();
	void AddSpecHitReaction(ECharacterSize A);
	void HeightModifiedAttack(class FName Input, ECharacterSize Size_0, class FName* ReturnSection);
	void TriggerHitReactionAbilityOnHitActors(const struct FGameplayEventData& GameplayEventData, const struct FGameplayEffectContextHandle& Gameplay_Effect_Context_Handle);
	void AttackRotations();
	void HandleEventData(const struct FGameplayTag& Event_Tag, const struct FGameplayEventData& GameplayEventData, class UClass* GameplayEffect, int32 GameplayEffectLevel, struct FGameplayEffectContextHandle* Gameplay_Effect_Context_Handle);
	void EventReceived_36EEB0394AE6BB9D8B15A2B392FEACBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_36EEB0394AE6BB9D8B15A2B392FEACBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_36EEB0394AE6BB9D8B15A2B392FEACBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_36EEB0394AE6BB9D8B15A2B392FEACBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_36EEB0394AE6BB9D8B15A2B392FEACBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void Added_C07DDACE4BA3C51E7D2C6E96036D77A2();
	void Added_A6AAF0A3491B0AB0CCD2A59F44C94FDD();
	void Added_CEAE85434DB35EE771071898276C19CB();
	void K2_ActivateAbility();
	void PlayAttackMontage();
	void K2_OnEndAbility(bool bWasCancelled);
	void Interrupt_On_HitReactions();
	void ExecuteUbergraph_GA_Attack_Base(int32 EntryPoint);

	void GetSourceWeapon(class AOFWeaponActor** WeaponActor) const;
	class UHitReactionDataObject_C* MakeHitReactionDataObject() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Attack_Base_C">();
	}
	static class UGA_Attack_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Attack_Base_C>();
	}
};
static_assert(alignof(UGA_Attack_Base_C) == 0x000008, "Wrong alignment on UGA_Attack_Base_C");
static_assert(sizeof(UGA_Attack_Base_C) == 0x000418, "Wrong size on UGA_Attack_Base_C");
static_assert(offsetof(UGA_Attack_Base_C, UberGraphFrame) == 0x0003C8, "Member 'UGA_Attack_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_C, MontageToPlay) == 0x0003D0, "Member 'UGA_Attack_Base_C::MontageToPlay' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_C, AttackEvent) == 0x0003D8, "Member 'UGA_Attack_Base_C::AttackEvent' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_C, Gameplay_Effect_on_Hit) == 0x0003E0, "Member 'UGA_Attack_Base_C::Gameplay_Effect_on_Hit' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_C, CancelAbilityTags) == 0x0003E8, "Member 'UGA_Attack_Base_C::CancelAbilityTags' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_C, Size) == 0x000408, "Member 'UGA_Attack_Base_C::Size' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_C, Desired_Hit_Reaction) == 0x000409, "Member 'UGA_Attack_Base_C::Desired_Hit_Reaction' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_C, Special_Hit_Reaction) == 0x00040A, "Member 'UGA_Attack_Base_C::Special_Hit_Reaction' has a wrong offset!");
static_assert(offsetof(UGA_Attack_Base_C, BaseHitReactionTag_DEPRECATED) == 0x00040C, "Member 'UGA_Attack_Base_C::BaseHitReactionTag_DEPRECATED' has a wrong offset!");

}

