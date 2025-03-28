#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PauseMenu

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK::Params
{

// Function WBP_PauseMenu.WBP_PauseMenu_C.ExecuteUbergraph_WBP_PauseMenu
// 0x0060 (0x0060 - 0x0000)
struct WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnhancedInputLocalPlayerSubsystem*     CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_RemoveMappingContext_self_CastInput;      // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnhancedInputLocalPlayerSubsystem*     CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_AddMappingContext_self_CastInput;         // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu) == 0x000008, "Wrong alignment on WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu");
static_assert(sizeof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu) == 0x000060, "Wrong size on WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu");
static_assert(offsetof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu, EntryPoint) == 0x000000, "Member 'WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000010, "Member 'WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu, CallFunc_RemoveMappingContext_self_CastInput) == 0x000018, "Member 'WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu::CallFunc_RemoveMappingContext_self_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x000028, "Member 'WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu, CallFunc_GetPlayerController_ReturnValue_2) == 0x000030, "Member 'WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu, CallFunc_PlayEvent2D_ReturnValue) == 0x000038, "Member 'WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu, CallFunc_GetPlayerController_ReturnValue_3) == 0x000040, "Member 'WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1) == 0x000048, "Member 'WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu, CallFunc_AddMappingContext_self_CastInput) == 0x000050, "Member 'WBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu::CallFunc_AddMappingContext_self_CastInput' has a wrong offset!");

// Function WBP_PauseMenu.WBP_PauseMenu_C.Get_StopMouseHoverOverlay_Visibility_0
// 0x0018 (0x0018 - 0x0000)
struct WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AOFPlayerController*                    CallFunc_GetObsidianFoxPlayerController_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGamepadLastInputTypeUsed_ReturnValue;   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0) == 0x000008, "Wrong alignment on WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0");
static_assert(sizeof(WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0) == 0x000018, "Wrong size on WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0");
static_assert(offsetof(WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0, ReturnValue) == 0x000000, "Member 'WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0, Temp_bool_Variable) == 0x000001, "Member 'WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0, Temp_byte_Variable) == 0x000002, "Member 'WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0, CallFunc_GetObsidianFoxPlayerController_ReturnValue) == 0x000008, "Member 'WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0::CallFunc_GetObsidianFoxPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0, CallFunc_IsGamepadLastInputTypeUsed_ReturnValue) == 0x000010, "Member 'WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0::CallFunc_IsGamepadLastInputTypeUsed_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0, K2Node_Select_Default) == 0x000011, "Member 'WBP_PauseMenu_C_Get_StopMouseHoverOverlay_Visibility_0::K2Node_Select_Default' has a wrong offset!");

}

