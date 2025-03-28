#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Investigation_Selection_Slot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Investigation_Selection_Slot.WBP_Investigation_Selection_Slot_C
// 0x01C8 (0x0550 - 0x0388)
class UWBP_Investigation_Selection_Slot_C final : public UInvestigationSlotWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ItemHovered_Animation;                             // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DeselectItem;                                      // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HighLightItem;                                     // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowLabelText;                                     // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewItemAnimation;                                  // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 HighlightItemIcon;                                 // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             InfoDescription;                                   // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           ItemIconRetainer;                                  // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           ItemIconRetainerShadow;                            // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Label_Overlay;                                     // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LabelBox;                                          // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LabelImage;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelText;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxIcon;                                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_update_icon_C*                     WBP_update_icon;                                   // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnIconClicked;                                     // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   TextLabel;                                         // 0x0418(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                             SlotTexture;                                       // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstance*                      SlotMaterial;                                      // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SlotMaterialTextureParameterName;                  // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          New;                                               // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Investigation_C*                   InvestigationWIndow;                               // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UInvestigationSelectionWidget*          InvestigationParent;                               // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TSoftObjectPtr<class UFMODEvent>              In_Fmod_Sound;                                     // 0x0460(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SlotHovered;                                       // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   TextDescription;                                   // 0x0498(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UItemData*                              ItemData;                                          // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     OnHighlighSequence;                                // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlotSizeX;                                         // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SlotSizeY;                                         // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              LabelPosition;                                     // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           In_Color_and_Opacity;                              // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowNewItemNotification;                           // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E1[0x7];                                      // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSlotUnhovered;                                   // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                             IconTexture;                                       // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      ItemIconRetainerEffectMaterial;                    // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ItemIconRetainerEffectMDI;                         // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableItemSlotAnimation;                           // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_511[0x7];                                      // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveLinearColor*                      AnimCurveActiveItemStyle;                          // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ElapsedTimer;                                      // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LengthOfCurve;                                     // 0x0524(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionLength;                                  // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          ActiveItemPlaybackOptions;                         // 0x052C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52D[0x3];                                      // 0x052D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OnHoveredMaterialBlend;                            // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         OnUnhoveredMaterialBlend;                          // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             NewEventDispatcher_0;                              // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstance*                      ItemIconRetainerEffectMaterialShadow;              // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PlayItemSlotAnimationBackward();
	void PlayItemSlotAnimationForward();
	void ItemSlotAnimation(bool* Finished);
	void UpdateNewItemNotificationShimmer(bool Enabled);
	void OnUnHoverFunction();
	void UpdateSlotWithItemData(TSoftObjectPtr<class UItemData> ItemData_0);
	void SetLabelPosition();
	void UpdateVisiblity();
	void UpdateSlotSize(float SizeY, float SizeX);
	void UpdateSlot(TSoftObjectPtr<class UTexture2D> NewTexture);
	void Construct();
	void BndEvt__WBP_Investigation_Selection_Slot_SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_Investigation_Selection_Slot_SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void UpdateSlotItemData(TSoftObjectPtr<class UItemData> ItemData_0, bool Active);
	void Destruct();
	void ShowNewItemIcon();
	void ShowNewItemMaterial();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_Investigation_Selection_Slot(int32 EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
	void OnSlotUnhovered__DelegateSignature(class UWBP_Investigation_Selection_Slot_C* NewParam);
	void SlotHovered__DelegateSignature(class UWBP_Investigation_Selection_Slot_C* InvestigationSlot);
	void OnIconClicked__DelegateSignature(class UItemData* ItemData_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Investigation_Selection_Slot_C">();
	}
	static class UWBP_Investigation_Selection_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Investigation_Selection_Slot_C>();
	}
};
static_assert(alignof(UWBP_Investigation_Selection_Slot_C) == 0x000008, "Wrong alignment on UWBP_Investigation_Selection_Slot_C");
static_assert(sizeof(UWBP_Investigation_Selection_Slot_C) == 0x000550, "Wrong size on UWBP_Investigation_Selection_Slot_C");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, UberGraphFrame) == 0x000388, "Member 'UWBP_Investigation_Selection_Slot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, ItemHovered_Animation) == 0x000390, "Member 'UWBP_Investigation_Selection_Slot_C::ItemHovered_Animation' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, DeselectItem) == 0x000398, "Member 'UWBP_Investigation_Selection_Slot_C::DeselectItem' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, HighLightItem) == 0x0003A0, "Member 'UWBP_Investigation_Selection_Slot_C::HighLightItem' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, ShowLabelText) == 0x0003A8, "Member 'UWBP_Investigation_Selection_Slot_C::ShowLabelText' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, NewItemAnimation) == 0x0003B0, "Member 'UWBP_Investigation_Selection_Slot_C::NewItemAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, HighlightItemIcon) == 0x0003B8, "Member 'UWBP_Investigation_Selection_Slot_C::HighlightItemIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, InfoDescription) == 0x0003C0, "Member 'UWBP_Investigation_Selection_Slot_C::InfoDescription' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, ItemIconRetainer) == 0x0003C8, "Member 'UWBP_Investigation_Selection_Slot_C::ItemIconRetainer' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, ItemIconRetainerShadow) == 0x0003D0, "Member 'UWBP_Investigation_Selection_Slot_C::ItemIconRetainerShadow' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, Label_Overlay) == 0x0003D8, "Member 'UWBP_Investigation_Selection_Slot_C::Label_Overlay' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, LabelBox) == 0x0003E0, "Member 'UWBP_Investigation_Selection_Slot_C::LabelBox' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, LabelImage) == 0x0003E8, "Member 'UWBP_Investigation_Selection_Slot_C::LabelImage' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, LabelText) == 0x0003F0, "Member 'UWBP_Investigation_Selection_Slot_C::LabelText' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, SizeBoxIcon) == 0x0003F8, "Member 'UWBP_Investigation_Selection_Slot_C::SizeBoxIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, WBP_update_icon) == 0x000400, "Member 'UWBP_Investigation_Selection_Slot_C::WBP_update_icon' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, OnIconClicked) == 0x000408, "Member 'UWBP_Investigation_Selection_Slot_C::OnIconClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, TextLabel) == 0x000418, "Member 'UWBP_Investigation_Selection_Slot_C::TextLabel' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, SlotTexture) == 0x000430, "Member 'UWBP_Investigation_Selection_Slot_C::SlotTexture' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, SlotMaterial) == 0x000438, "Member 'UWBP_Investigation_Selection_Slot_C::SlotMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, SlotMaterialTextureParameterName) == 0x000440, "Member 'UWBP_Investigation_Selection_Slot_C::SlotMaterialTextureParameterName' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, New) == 0x000448, "Member 'UWBP_Investigation_Selection_Slot_C::New' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, InvestigationWIndow) == 0x000450, "Member 'UWBP_Investigation_Selection_Slot_C::InvestigationWIndow' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, InvestigationParent) == 0x000458, "Member 'UWBP_Investigation_Selection_Slot_C::InvestigationParent' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, In_Fmod_Sound) == 0x000460, "Member 'UWBP_Investigation_Selection_Slot_C::In_Fmod_Sound' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, SlotHovered) == 0x000488, "Member 'UWBP_Investigation_Selection_Slot_C::SlotHovered' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, TextDescription) == 0x000498, "Member 'UWBP_Investigation_Selection_Slot_C::TextDescription' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, ItemData) == 0x0004B0, "Member 'UWBP_Investigation_Selection_Slot_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, OnHighlighSequence) == 0x0004B8, "Member 'UWBP_Investigation_Selection_Slot_C::OnHighlighSequence' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, SlotSizeX) == 0x0004C0, "Member 'UWBP_Investigation_Selection_Slot_C::SlotSizeX' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, SlotSizeY) == 0x0004C4, "Member 'UWBP_Investigation_Selection_Slot_C::SlotSizeY' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, LabelPosition) == 0x0004C8, "Member 'UWBP_Investigation_Selection_Slot_C::LabelPosition' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, In_Color_and_Opacity) == 0x0004D0, "Member 'UWBP_Investigation_Selection_Slot_C::In_Color_and_Opacity' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, ShowNewItemNotification) == 0x0004E0, "Member 'UWBP_Investigation_Selection_Slot_C::ShowNewItemNotification' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, OnSlotUnhovered) == 0x0004E8, "Member 'UWBP_Investigation_Selection_Slot_C::OnSlotUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, IconTexture) == 0x0004F8, "Member 'UWBP_Investigation_Selection_Slot_C::IconTexture' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, ItemIconRetainerEffectMaterial) == 0x000500, "Member 'UWBP_Investigation_Selection_Slot_C::ItemIconRetainerEffectMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, ItemIconRetainerEffectMDI) == 0x000508, "Member 'UWBP_Investigation_Selection_Slot_C::ItemIconRetainerEffectMDI' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, EnableItemSlotAnimation) == 0x000510, "Member 'UWBP_Investigation_Selection_Slot_C::EnableItemSlotAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, AnimCurveActiveItemStyle) == 0x000518, "Member 'UWBP_Investigation_Selection_Slot_C::AnimCurveActiveItemStyle' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, ElapsedTimer) == 0x000520, "Member 'UWBP_Investigation_Selection_Slot_C::ElapsedTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, LengthOfCurve) == 0x000524, "Member 'UWBP_Investigation_Selection_Slot_C::LengthOfCurve' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, TransitionLength) == 0x000528, "Member 'UWBP_Investigation_Selection_Slot_C::TransitionLength' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, ActiveItemPlaybackOptions) == 0x00052C, "Member 'UWBP_Investigation_Selection_Slot_C::ActiveItemPlaybackOptions' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, OnHoveredMaterialBlend) == 0x000530, "Member 'UWBP_Investigation_Selection_Slot_C::OnHoveredMaterialBlend' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, OnUnhoveredMaterialBlend) == 0x000534, "Member 'UWBP_Investigation_Selection_Slot_C::OnUnhoveredMaterialBlend' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, NewEventDispatcher_0) == 0x000538, "Member 'UWBP_Investigation_Selection_Slot_C::NewEventDispatcher_0' has a wrong offset!");
static_assert(offsetof(UWBP_Investigation_Selection_Slot_C, ItemIconRetainerEffectMaterialShadow) == 0x000548, "Member 'UWBP_Investigation_Selection_Slot_C::ItemIconRetainerEffectMaterialShadow' has a wrong offset!");

}

