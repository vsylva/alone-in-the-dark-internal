#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CutsceneSkipIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PiecesSequence_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CutsceneSkipIndicator.WBP_CutsceneSkipIndicator_C
// 0x0090 (0x0328 - 0x0298)
class UWBP_CutsceneSkipIndicator_C final : public UPiecesCutsceneWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BackgroundFadeOutOnSkip;                           // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOutBackground;                                 // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BlackScreen;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ButtonHorziontalBox;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HoldToSkipText;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressBar;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlatformSpecificKey_C*             WBP_PlatformSpecificKey;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          SkipCutSceneHolding;                               // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x3];                                      // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HoldTimer;                                         // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HoldTimerEndValue;                                 // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReleaseTimerHold;                                  // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowUI;                                            // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9[0x3];                                      // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ShowUITimer;                                       // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShowUITimerLength;                                 // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_304[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputAction*                           In_Input_Action;                                   // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowSkipIndicator;                                 // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_311[0x3];                                      // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FadeOutHoldAlpha;                                  // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSkipStarted;                                     // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSkipStarted__DelegateSignature();
	void ExecuteUbergraph_WBP_CutsceneSkipIndicator(int32 EntryPoint);
	void OnSkipCutscene(bool bPressed);
	void SetKeyImage(bool InputType);
	void UseFadeOutBlackScreenInTheBeginning();
	void Done();
	void AnyKeyPressed();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnCompleted_06F9B0074858EC5BF2D4C88B1B97B93B(class UTexture2D* Texture, const class FText& KeyString);
	void SetAlphaValueOnProgressBar(float TimerLength, float DeltaTime);
	void UpdateFadeToBlack(float Alpha);
	void FadeOutSkipBlackScreen(bool UseCurrentPositionAsStart);
	ESlateVisibility GetSkipButtonVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CutsceneSkipIndicator_C">();
	}
	static class UWBP_CutsceneSkipIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CutsceneSkipIndicator_C>();
	}
};
static_assert(alignof(UWBP_CutsceneSkipIndicator_C) == 0x000008, "Wrong alignment on UWBP_CutsceneSkipIndicator_C");
static_assert(sizeof(UWBP_CutsceneSkipIndicator_C) == 0x000328, "Wrong size on UWBP_CutsceneSkipIndicator_C");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, UberGraphFrame) == 0x000298, "Member 'UWBP_CutsceneSkipIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, BackgroundFadeOutOnSkip) == 0x0002A0, "Member 'UWBP_CutsceneSkipIndicator_C::BackgroundFadeOutOnSkip' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, FadeOutBackground) == 0x0002A8, "Member 'UWBP_CutsceneSkipIndicator_C::FadeOutBackground' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, FadeOut) == 0x0002B0, "Member 'UWBP_CutsceneSkipIndicator_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, FadeIn) == 0x0002B8, "Member 'UWBP_CutsceneSkipIndicator_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, BlackScreen) == 0x0002C0, "Member 'UWBP_CutsceneSkipIndicator_C::BlackScreen' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, ButtonHorziontalBox) == 0x0002C8, "Member 'UWBP_CutsceneSkipIndicator_C::ButtonHorziontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, HoldToSkipText) == 0x0002D0, "Member 'UWBP_CutsceneSkipIndicator_C::HoldToSkipText' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, ProgressBar) == 0x0002D8, "Member 'UWBP_CutsceneSkipIndicator_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, WBP_PlatformSpecificKey) == 0x0002E0, "Member 'UWBP_CutsceneSkipIndicator_C::WBP_PlatformSpecificKey' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, SkipCutSceneHolding) == 0x0002E8, "Member 'UWBP_CutsceneSkipIndicator_C::SkipCutSceneHolding' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, HoldTimer) == 0x0002EC, "Member 'UWBP_CutsceneSkipIndicator_C::HoldTimer' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, HoldTimerEndValue) == 0x0002F0, "Member 'UWBP_CutsceneSkipIndicator_C::HoldTimerEndValue' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, ReleaseTimerHold) == 0x0002F4, "Member 'UWBP_CutsceneSkipIndicator_C::ReleaseTimerHold' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, ShowUI) == 0x0002F8, "Member 'UWBP_CutsceneSkipIndicator_C::ShowUI' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, ShowUITimer) == 0x0002FC, "Member 'UWBP_CutsceneSkipIndicator_C::ShowUITimer' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, ShowUITimerLength) == 0x000300, "Member 'UWBP_CutsceneSkipIndicator_C::ShowUITimerLength' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, In_Input_Action) == 0x000308, "Member 'UWBP_CutsceneSkipIndicator_C::In_Input_Action' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, ShowSkipIndicator) == 0x000310, "Member 'UWBP_CutsceneSkipIndicator_C::ShowSkipIndicator' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, FadeOutHoldAlpha) == 0x000314, "Member 'UWBP_CutsceneSkipIndicator_C::FadeOutHoldAlpha' has a wrong offset!");
static_assert(offsetof(UWBP_CutsceneSkipIndicator_C, OnSkipStarted) == 0x000318, "Member 'UWBP_CutsceneSkipIndicator_C::OnSkipStarted' has a wrong offset!");

}

