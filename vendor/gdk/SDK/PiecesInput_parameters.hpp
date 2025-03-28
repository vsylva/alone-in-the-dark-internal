#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesInput

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "InputCore_structs.hpp"
#include "EnhancedInput_structs.hpp"


namespace SDK::Params
{

// Function PiecesInput.PiecesInputBlueprintLibrary.GetInputTriggerTreatedAsHold
// 0x000C (0x000C - 0x0000)
struct PiecesInputBlueprintLibrary_GetInputTriggerTreatedAsHold final
{
public:
	struct FGameplayTag                           InputTriggerTreatAsHoldTag;                        // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PiecesInputBlueprintLibrary_GetInputTriggerTreatedAsHold) == 0x000004, "Wrong alignment on PiecesInputBlueprintLibrary_GetInputTriggerTreatedAsHold");
static_assert(sizeof(PiecesInputBlueprintLibrary_GetInputTriggerTreatedAsHold) == 0x00000C, "Wrong size on PiecesInputBlueprintLibrary_GetInputTriggerTreatedAsHold");
static_assert(offsetof(PiecesInputBlueprintLibrary_GetInputTriggerTreatedAsHold, InputTriggerTreatAsHoldTag) == 0x000000, "Member 'PiecesInputBlueprintLibrary_GetInputTriggerTreatedAsHold::InputTriggerTreatAsHoldTag' has a wrong offset!");
static_assert(offsetof(PiecesInputBlueprintLibrary_GetInputTriggerTreatedAsHold, ReturnValue) == 0x000008, "Member 'PiecesInputBlueprintLibrary_GetInputTriggerTreatedAsHold::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputBlueprintLibrary.SetInputTriggerTreatedAsHold
// 0x000C (0x000C - 0x0000)
struct PiecesInputBlueprintLibrary_SetInputTriggerTreatedAsHold final
{
public:
	struct FGameplayTag                           InputTriggerTreatAsHoldTag;                        // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTreatAsHold;                                      // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PiecesInputBlueprintLibrary_SetInputTriggerTreatedAsHold) == 0x000004, "Wrong alignment on PiecesInputBlueprintLibrary_SetInputTriggerTreatedAsHold");
static_assert(sizeof(PiecesInputBlueprintLibrary_SetInputTriggerTreatedAsHold) == 0x00000C, "Wrong size on PiecesInputBlueprintLibrary_SetInputTriggerTreatedAsHold");
static_assert(offsetof(PiecesInputBlueprintLibrary_SetInputTriggerTreatedAsHold, InputTriggerTreatAsHoldTag) == 0x000000, "Member 'PiecesInputBlueprintLibrary_SetInputTriggerTreatedAsHold::InputTriggerTreatAsHoldTag' has a wrong offset!");
static_assert(offsetof(PiecesInputBlueprintLibrary_SetInputTriggerTreatedAsHold, bTreatAsHold) == 0x000008, "Member 'PiecesInputBlueprintLibrary_SetInputTriggerTreatedAsHold::bTreatAsHold' has a wrong offset!");
static_assert(offsetof(PiecesInputBlueprintLibrary_SetInputTriggerTreatedAsHold, ReturnValue) == 0x000009, "Member 'PiecesInputBlueprintLibrary_SetInputTriggerTreatedAsHold::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.GetActionName
// 0x0010 (0x0010 - 0x0000)
struct PiecesInputSubsystem_GetActionName final
{
public:
	class FName                                   BindingName;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesInputSubsystem_GetActionName) == 0x000004, "Wrong alignment on PiecesInputSubsystem_GetActionName");
static_assert(sizeof(PiecesInputSubsystem_GetActionName) == 0x000010, "Wrong size on PiecesInputSubsystem_GetActionName");
static_assert(offsetof(PiecesInputSubsystem_GetActionName, BindingName) == 0x000000, "Member 'PiecesInputSubsystem_GetActionName::BindingName' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_GetActionName, ReturnValue) == 0x000008, "Member 'PiecesInputSubsystem_GetActionName::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.GetActiveMappingContext
// 0x0008 (0x0008 - 0x0000)
struct PiecesInputSubsystem_GetActiveMappingContext final
{
public:
	class UPiecesInputMappingContext*             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesInputSubsystem_GetActiveMappingContext) == 0x000008, "Wrong alignment on PiecesInputSubsystem_GetActiveMappingContext");
static_assert(sizeof(PiecesInputSubsystem_GetActiveMappingContext) == 0x000008, "Wrong size on PiecesInputSubsystem_GetActiveMappingContext");
static_assert(offsetof(PiecesInputSubsystem_GetActiveMappingContext, ReturnValue) == 0x000000, "Member 'PiecesInputSubsystem_GetActiveMappingContext::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.GetBindingsForKey
// 0x0028 (0x0028 - 0x0000)
struct PiecesInputSubsystem_GetBindingsForKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesInputSubsystem_GetBindingsForKey) == 0x000008, "Wrong alignment on PiecesInputSubsystem_GetBindingsForKey");
static_assert(sizeof(PiecesInputSubsystem_GetBindingsForKey) == 0x000028, "Wrong size on PiecesInputSubsystem_GetBindingsForKey");
static_assert(offsetof(PiecesInputSubsystem_GetBindingsForKey, Key) == 0x000000, "Member 'PiecesInputSubsystem_GetBindingsForKey::Key' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_GetBindingsForKey, ReturnValue) == 0x000018, "Member 'PiecesInputSubsystem_GetBindingsForKey::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.GetCurrentGamepadKeyForAction
// 0x0020 (0x0020 - 0x0000)
struct PiecesInputSubsystem_GetCurrentGamepadKeyForAction final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesInputSubsystem_GetCurrentGamepadKeyForAction) == 0x000008, "Wrong alignment on PiecesInputSubsystem_GetCurrentGamepadKeyForAction");
static_assert(sizeof(PiecesInputSubsystem_GetCurrentGamepadKeyForAction) == 0x000020, "Wrong size on PiecesInputSubsystem_GetCurrentGamepadKeyForAction");
static_assert(offsetof(PiecesInputSubsystem_GetCurrentGamepadKeyForAction, ActionName) == 0x000000, "Member 'PiecesInputSubsystem_GetCurrentGamepadKeyForAction::ActionName' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_GetCurrentGamepadKeyForAction, ReturnValue) == 0x000008, "Member 'PiecesInputSubsystem_GetCurrentGamepadKeyForAction::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.GetCurrentPrimaryKeyForAction
// 0x0020 (0x0020 - 0x0000)
struct PiecesInputSubsystem_GetCurrentPrimaryKeyForAction final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesInputSubsystem_GetCurrentPrimaryKeyForAction) == 0x000008, "Wrong alignment on PiecesInputSubsystem_GetCurrentPrimaryKeyForAction");
static_assert(sizeof(PiecesInputSubsystem_GetCurrentPrimaryKeyForAction) == 0x000020, "Wrong size on PiecesInputSubsystem_GetCurrentPrimaryKeyForAction");
static_assert(offsetof(PiecesInputSubsystem_GetCurrentPrimaryKeyForAction, ActionName) == 0x000000, "Member 'PiecesInputSubsystem_GetCurrentPrimaryKeyForAction::ActionName' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_GetCurrentPrimaryKeyForAction, ReturnValue) == 0x000008, "Member 'PiecesInputSubsystem_GetCurrentPrimaryKeyForAction::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.GetCurrentSecondaryKeyForAction
// 0x0020 (0x0020 - 0x0000)
struct PiecesInputSubsystem_GetCurrentSecondaryKeyForAction final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesInputSubsystem_GetCurrentSecondaryKeyForAction) == 0x000008, "Wrong alignment on PiecesInputSubsystem_GetCurrentSecondaryKeyForAction");
static_assert(sizeof(PiecesInputSubsystem_GetCurrentSecondaryKeyForAction) == 0x000020, "Wrong size on PiecesInputSubsystem_GetCurrentSecondaryKeyForAction");
static_assert(offsetof(PiecesInputSubsystem_GetCurrentSecondaryKeyForAction, ActionName) == 0x000000, "Member 'PiecesInputSubsystem_GetCurrentSecondaryKeyForAction::ActionName' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_GetCurrentSecondaryKeyForAction, ReturnValue) == 0x000008, "Member 'PiecesInputSubsystem_GetCurrentSecondaryKeyForAction::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.IsBindingGamepad
// 0x0018 (0x0018 - 0x0000)
struct PiecesInputSubsystem_IsBindingGamepad final
{
public:
	class FString                                 BindingName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PiecesInputSubsystem_IsBindingGamepad) == 0x000008, "Wrong alignment on PiecesInputSubsystem_IsBindingGamepad");
static_assert(sizeof(PiecesInputSubsystem_IsBindingGamepad) == 0x000018, "Wrong size on PiecesInputSubsystem_IsBindingGamepad");
static_assert(offsetof(PiecesInputSubsystem_IsBindingGamepad, BindingName) == 0x000000, "Member 'PiecesInputSubsystem_IsBindingGamepad::BindingName' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_IsBindingGamepad, ReturnValue) == 0x000010, "Member 'PiecesInputSubsystem_IsBindingGamepad::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.IsBindingPrimary
// 0x0018 (0x0018 - 0x0000)
struct PiecesInputSubsystem_IsBindingPrimary final
{
public:
	class FString                                 BindingName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PiecesInputSubsystem_IsBindingPrimary) == 0x000008, "Wrong alignment on PiecesInputSubsystem_IsBindingPrimary");
static_assert(sizeof(PiecesInputSubsystem_IsBindingPrimary) == 0x000018, "Wrong size on PiecesInputSubsystem_IsBindingPrimary");
static_assert(offsetof(PiecesInputSubsystem_IsBindingPrimary, BindingName) == 0x000000, "Member 'PiecesInputSubsystem_IsBindingPrimary::BindingName' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_IsBindingPrimary, ReturnValue) == 0x000010, "Member 'PiecesInputSubsystem_IsBindingPrimary::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.IsBindingSecondary
// 0x0018 (0x0018 - 0x0000)
struct PiecesInputSubsystem_IsBindingSecondary final
{
public:
	class FString                                 BindingName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PiecesInputSubsystem_IsBindingSecondary) == 0x000008, "Wrong alignment on PiecesInputSubsystem_IsBindingSecondary");
static_assert(sizeof(PiecesInputSubsystem_IsBindingSecondary) == 0x000018, "Wrong size on PiecesInputSubsystem_IsBindingSecondary");
static_assert(offsetof(PiecesInputSubsystem_IsBindingSecondary, BindingName) == 0x000000, "Member 'PiecesInputSubsystem_IsBindingSecondary::BindingName' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_IsBindingSecondary, ReturnValue) == 0x000010, "Member 'PiecesInputSubsystem_IsBindingSecondary::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.KeyAlreadyBound
// 0x0020 (0x0020 - 0x0000)
struct PiecesInputSubsystem_KeyAlreadyBound final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PiecesInputSubsystem_KeyAlreadyBound) == 0x000008, "Wrong alignment on PiecesInputSubsystem_KeyAlreadyBound");
static_assert(sizeof(PiecesInputSubsystem_KeyAlreadyBound) == 0x000020, "Wrong size on PiecesInputSubsystem_KeyAlreadyBound");
static_assert(offsetof(PiecesInputSubsystem_KeyAlreadyBound, Key) == 0x000000, "Member 'PiecesInputSubsystem_KeyAlreadyBound::Key' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_KeyAlreadyBound, ReturnValue) == 0x000018, "Member 'PiecesInputSubsystem_KeyAlreadyBound::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.RemoveCustomKey
// 0x0028 (0x0028 - 0x0000)
struct PiecesInputSubsystem_RemoveCustomKey final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   OldKey;                                            // 0x0008(0x0018)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsPrimaryKey;                                     // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PiecesInputSubsystem_RemoveCustomKey) == 0x000008, "Wrong alignment on PiecesInputSubsystem_RemoveCustomKey");
static_assert(sizeof(PiecesInputSubsystem_RemoveCustomKey) == 0x000028, "Wrong size on PiecesInputSubsystem_RemoveCustomKey");
static_assert(offsetof(PiecesInputSubsystem_RemoveCustomKey, ActionName) == 0x000000, "Member 'PiecesInputSubsystem_RemoveCustomKey::ActionName' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_RemoveCustomKey, OldKey) == 0x000008, "Member 'PiecesInputSubsystem_RemoveCustomKey::OldKey' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_RemoveCustomKey, bIsPrimaryKey) == 0x000020, "Member 'PiecesInputSubsystem_RemoveCustomKey::bIsPrimaryKey' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.UnBindKey
// 0x0018 (0x0018 - 0x0000)
struct PiecesInputSubsystem_UnBindKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesInputSubsystem_UnBindKey) == 0x000008, "Wrong alignment on PiecesInputSubsystem_UnBindKey");
static_assert(sizeof(PiecesInputSubsystem_UnBindKey) == 0x000018, "Wrong size on PiecesInputSubsystem_UnBindKey");
static_assert(offsetof(PiecesInputSubsystem_UnBindKey, Key) == 0x000000, "Member 'PiecesInputSubsystem_UnBindKey::Key' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.UpdateCustomKey
// 0x0028 (0x0028 - 0x0000)
struct PiecesInputSubsystem_UpdateCustomKey final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   NewKey;                                            // 0x0008(0x0018)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsPrimaryKey;                                     // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUnbindExisting;                                   // 0x0021(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PiecesInputSubsystem_UpdateCustomKey) == 0x000008, "Wrong alignment on PiecesInputSubsystem_UpdateCustomKey");
static_assert(sizeof(PiecesInputSubsystem_UpdateCustomKey) == 0x000028, "Wrong size on PiecesInputSubsystem_UpdateCustomKey");
static_assert(offsetof(PiecesInputSubsystem_UpdateCustomKey, ActionName) == 0x000000, "Member 'PiecesInputSubsystem_UpdateCustomKey::ActionName' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_UpdateCustomKey, NewKey) == 0x000008, "Member 'PiecesInputSubsystem_UpdateCustomKey::NewKey' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_UpdateCustomKey, bIsPrimaryKey) == 0x000020, "Member 'PiecesInputSubsystem_UpdateCustomKey::bIsPrimaryKey' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_UpdateCustomKey, bUnbindExisting) == 0x000021, "Member 'PiecesInputSubsystem_UpdateCustomKey::bUnbindExisting' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.GetActionDisplayName
// 0x0028 (0x0028 - 0x0000)
struct PiecesInputSubsystem_GetActionDisplayName final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsGamepadKey;                                     // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesInputSubsystem_GetActionDisplayName) == 0x000008, "Wrong alignment on PiecesInputSubsystem_GetActionDisplayName");
static_assert(sizeof(PiecesInputSubsystem_GetActionDisplayName) == 0x000028, "Wrong size on PiecesInputSubsystem_GetActionDisplayName");
static_assert(offsetof(PiecesInputSubsystem_GetActionDisplayName, ActionName) == 0x000000, "Member 'PiecesInputSubsystem_GetActionDisplayName::ActionName' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_GetActionDisplayName, bIsGamepadKey) == 0x000008, "Member 'PiecesInputSubsystem_GetActionDisplayName::bIsGamepadKey' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_GetActionDisplayName, ReturnValue) == 0x000010, "Member 'PiecesInputSubsystem_GetActionDisplayName::ReturnValue' has a wrong offset!");

// Function PiecesInput.PiecesInputSubsystem.GetActionKeyMappingDefault
// 0x0098 (0x0098 - 0x0000)
struct PiecesInputSubsystem_GetActionKeyMappingDefault final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsGamepadKey;                                     // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEnhancedActionKeyMapping              ReturnValue;                                       // 0x0010(0x0088)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(PiecesInputSubsystem_GetActionKeyMappingDefault) == 0x000008, "Wrong alignment on PiecesInputSubsystem_GetActionKeyMappingDefault");
static_assert(sizeof(PiecesInputSubsystem_GetActionKeyMappingDefault) == 0x000098, "Wrong size on PiecesInputSubsystem_GetActionKeyMappingDefault");
static_assert(offsetof(PiecesInputSubsystem_GetActionKeyMappingDefault, ActionName) == 0x000000, "Member 'PiecesInputSubsystem_GetActionKeyMappingDefault::ActionName' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_GetActionKeyMappingDefault, bIsGamepadKey) == 0x000008, "Member 'PiecesInputSubsystem_GetActionKeyMappingDefault::bIsGamepadKey' has a wrong offset!");
static_assert(offsetof(PiecesInputSubsystem_GetActionKeyMappingDefault, ReturnValue) == 0x000010, "Member 'PiecesInputSubsystem_GetActionKeyMappingDefault::ReturnValue' has a wrong offset!");

// Function PiecesInput.InputTriggerToggleableHold.UpdateStateNonHeld
// 0x0020 (0x0020 - 0x0000)
struct InputTriggerToggleableHold_UpdateStateNonHeld final
{
public:
	const class UEnhancedPlayerInput*             PlayerInput;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionValue                      ModifiedValue;                                     // 0x0008(0x0010)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         DeltaTime;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETriggerState                                 State;                                             // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETriggerState                                 ReturnValue;                                       // 0x001D(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InputTriggerToggleableHold_UpdateStateNonHeld) == 0x000008, "Wrong alignment on InputTriggerToggleableHold_UpdateStateNonHeld");
static_assert(sizeof(InputTriggerToggleableHold_UpdateStateNonHeld) == 0x000020, "Wrong size on InputTriggerToggleableHold_UpdateStateNonHeld");
static_assert(offsetof(InputTriggerToggleableHold_UpdateStateNonHeld, PlayerInput) == 0x000000, "Member 'InputTriggerToggleableHold_UpdateStateNonHeld::PlayerInput' has a wrong offset!");
static_assert(offsetof(InputTriggerToggleableHold_UpdateStateNonHeld, ModifiedValue) == 0x000008, "Member 'InputTriggerToggleableHold_UpdateStateNonHeld::ModifiedValue' has a wrong offset!");
static_assert(offsetof(InputTriggerToggleableHold_UpdateStateNonHeld, DeltaTime) == 0x000018, "Member 'InputTriggerToggleableHold_UpdateStateNonHeld::DeltaTime' has a wrong offset!");
static_assert(offsetof(InputTriggerToggleableHold_UpdateStateNonHeld, State) == 0x00001C, "Member 'InputTriggerToggleableHold_UpdateStateNonHeld::State' has a wrong offset!");
static_assert(offsetof(InputTriggerToggleableHold_UpdateStateNonHeld, ReturnValue) == 0x00001D, "Member 'InputTriggerToggleableHold_UpdateStateNonHeld::ReturnValue' has a wrong offset!");

}

