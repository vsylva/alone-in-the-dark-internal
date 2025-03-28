#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TalismanComponent

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TalismanComponent.BP_TalismanComponent_C
// 0x0060 (0x0118 - 0x00B8)
class UBP_TalismanComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   AttachSocket;                                      // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Montage_Tag;                                       // 0x00C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             TalismanExit;                                      // 0x00D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             TalismanEnter;                                     // 0x00E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             TalismanReleasedControl;                           // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTalismanEntered;                                 // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          FadeToBlackOnExit;                                 // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Open_And_Set_Talisman_by_Tag(const struct FGameplayTag& Tag, bool bMakeInteractableOnAutoRotateEnd, float Initial_Delay, bool FadeToBlackOnExit_0);
	void OnNotifyEnd_F799CDC14F50C92998E95680D19B8093(class FName NotifyName);
	void OnNotifyBegin_F799CDC14F50C92998E95680D19B8093(class FName NotifyName);
	void OnInterrupted_F799CDC14F50C92998E95680D19B8093(class FName NotifyName);
	void Toggle_Camera_Depth_Fade(bool bCameraDepthFadeDisabled);
	void OnBlendOut_F799CDC14F50C92998E95680D19B8093(class FName NotifyName);
	void OnCompleted_F799CDC14F50C92998E95680D19B8093(class FName NotifyName);
	void Failed_E55CA3DA4403BA6DB7CE24BF1B4ABC01(class UAnimMontage* Montage);
	void Completed_E55CA3DA4403BA6DB7CE24BF1B4ABC01(class UAnimMontage* Montage);
	void Finished_With_Talisman(class APuzzleActor* PuzzleActor, class AOFPlayerController* InteractingController);
	void Open_And_Set_Talisman(int32 Combination, bool bMakeInteractableOnAutoRotateEnd, float Initial_Delay);
	void Start_auto_rotation(class ABP_Talisman_IP_C* Spawned_Talisman);
	void ExecuteUbergraph_BP_TalismanComponent(int32 EntryPoint);
	void OnTalismanEntered__DelegateSignature(class ABP_Talisman_IP_C* Spawned_Talisman);
	void TalismanReleasedControl__DelegateSignature(class UBP_TalismanComponent_C* TalismanComponent);
	void TalismanEnter__DelegateSignature(class UBP_TalismanComponent_C* TalismanComponent);
	void TalismanExit__DelegateSignature(class UBP_TalismanComponent_C* Talisman_Component, float DelayBeforeControlRelease);
	void UseTalisman();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TalismanComponent_C">();
	}
	static class UBP_TalismanComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TalismanComponent_C>();
	}
};
static_assert(alignof(UBP_TalismanComponent_C) == 0x000008, "Wrong alignment on UBP_TalismanComponent_C");
static_assert(sizeof(UBP_TalismanComponent_C) == 0x000118, "Wrong size on UBP_TalismanComponent_C");
static_assert(offsetof(UBP_TalismanComponent_C, UberGraphFrame) == 0x0000B8, "Member 'UBP_TalismanComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TalismanComponent_C, AttachSocket) == 0x0000C0, "Member 'UBP_TalismanComponent_C::AttachSocket' has a wrong offset!");
static_assert(offsetof(UBP_TalismanComponent_C, Montage_Tag) == 0x0000C8, "Member 'UBP_TalismanComponent_C::Montage_Tag' has a wrong offset!");
static_assert(offsetof(UBP_TalismanComponent_C, TalismanExit) == 0x0000D0, "Member 'UBP_TalismanComponent_C::TalismanExit' has a wrong offset!");
static_assert(offsetof(UBP_TalismanComponent_C, TalismanEnter) == 0x0000E0, "Member 'UBP_TalismanComponent_C::TalismanEnter' has a wrong offset!");
static_assert(offsetof(UBP_TalismanComponent_C, TalismanReleasedControl) == 0x0000F0, "Member 'UBP_TalismanComponent_C::TalismanReleasedControl' has a wrong offset!");
static_assert(offsetof(UBP_TalismanComponent_C, OnTalismanEntered) == 0x000100, "Member 'UBP_TalismanComponent_C::OnTalismanEntered' has a wrong offset!");
static_assert(offsetof(UBP_TalismanComponent_C, FadeToBlackOnExit) == 0x000110, "Member 'UBP_TalismanComponent_C::FadeToBlackOnExit' has a wrong offset!");

}

