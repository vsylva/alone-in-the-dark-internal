#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesFactsDB

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "PiecesFactsDB_structs.hpp"


namespace SDK::Params
{

// Function PiecesFactsDB.FactsDB.IncrementFact
// 0x0010 (0x0010 - 0x0000)
struct FactsDB_IncrementFact final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAddIfMissing;                                     // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FactsDB_IncrementFact) == 0x000004, "Wrong alignment on FactsDB_IncrementFact");
static_assert(sizeof(FactsDB_IncrementFact) == 0x000010, "Wrong size on FactsDB_IncrementFact");
static_assert(offsetof(FactsDB_IncrementFact, Tag) == 0x000000, "Member 'FactsDB_IncrementFact::Tag' has a wrong offset!");
static_assert(offsetof(FactsDB_IncrementFact, Value) == 0x000008, "Member 'FactsDB_IncrementFact::Value' has a wrong offset!");
static_assert(offsetof(FactsDB_IncrementFact, bAddIfMissing) == 0x00000C, "Member 'FactsDB_IncrementFact::bAddIfMissing' has a wrong offset!");

// Function PiecesFactsDB.FactsDB.RemoveFact
// 0x0008 (0x0008 - 0x0000)
struct FactsDB_RemoveFact final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FactsDB_RemoveFact) == 0x000004, "Wrong alignment on FactsDB_RemoveFact");
static_assert(sizeof(FactsDB_RemoveFact) == 0x000008, "Wrong size on FactsDB_RemoveFact");
static_assert(offsetof(FactsDB_RemoveFact, Tag) == 0x000000, "Member 'FactsDB_RemoveFact::Tag' has a wrong offset!");

// Function PiecesFactsDB.FactsDB.SetFact
// 0x000C (0x000C - 0x0000)
struct FactsDB_SetFact final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FactsDB_SetFact) == 0x000004, "Wrong alignment on FactsDB_SetFact");
static_assert(sizeof(FactsDB_SetFact) == 0x00000C, "Wrong size on FactsDB_SetFact");
static_assert(offsetof(FactsDB_SetFact, Tag) == 0x000000, "Member 'FactsDB_SetFact::Tag' has a wrong offset!");
static_assert(offsetof(FactsDB_SetFact, Value) == 0x000008, "Member 'FactsDB_SetFact::Value' has a wrong offset!");

// Function PiecesFactsDB.FactsDB.SetFactAsBool
// 0x000C (0x000C - 0x0000)
struct FactsDB_SetFactAsBool final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Value;                                             // 0x0008(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FactsDB_SetFactAsBool) == 0x000004, "Wrong alignment on FactsDB_SetFactAsBool");
static_assert(sizeof(FactsDB_SetFactAsBool) == 0x00000C, "Wrong size on FactsDB_SetFactAsBool");
static_assert(offsetof(FactsDB_SetFactAsBool, Tag) == 0x000000, "Member 'FactsDB_SetFactAsBool::Tag' has a wrong offset!");
static_assert(offsetof(FactsDB_SetFactAsBool, Value) == 0x000008, "Member 'FactsDB_SetFactAsBool::Value' has a wrong offset!");

// Function PiecesFactsDB.FactsDB.SubscribeToFactChanges
// 0x0018 (0x0018 - 0x0000)
struct FactsDB_SubscribeToFactChanges final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(struct FGameplayTag& Tag, ESubscriptionTagChangeType ChangeType)> Event;                                             // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FactsDB_SubscribeToFactChanges) == 0x000004, "Wrong alignment on FactsDB_SubscribeToFactChanges");
static_assert(sizeof(FactsDB_SubscribeToFactChanges) == 0x000018, "Wrong size on FactsDB_SubscribeToFactChanges");
static_assert(offsetof(FactsDB_SubscribeToFactChanges, Tag) == 0x000000, "Member 'FactsDB_SubscribeToFactChanges::Tag' has a wrong offset!");
static_assert(offsetof(FactsDB_SubscribeToFactChanges, Event) == 0x000008, "Member 'FactsDB_SubscribeToFactChanges::Event' has a wrong offset!");

// Function PiecesFactsDB.FactsDB.UnsubscribeFromFactChanges
// 0x0010 (0x0010 - 0x0000)
struct FactsDB_UnsubscribeFromFactChanges final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          Subscriber;                                        // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FactsDB_UnsubscribeFromFactChanges) == 0x000008, "Wrong alignment on FactsDB_UnsubscribeFromFactChanges");
static_assert(sizeof(FactsDB_UnsubscribeFromFactChanges) == 0x000010, "Wrong size on FactsDB_UnsubscribeFromFactChanges");
static_assert(offsetof(FactsDB_UnsubscribeFromFactChanges, Tag) == 0x000000, "Member 'FactsDB_UnsubscribeFromFactChanges::Tag' has a wrong offset!");
static_assert(offsetof(FactsDB_UnsubscribeFromFactChanges, Subscriber) == 0x000008, "Member 'FactsDB_UnsubscribeFromFactChanges::Subscriber' has a wrong offset!");

// Function PiecesFactsDB.FactsDB.WriteFactsToFile
// 0x0018 (0x0018 - 0x0000)
struct FactsDB_WriteFactsToFile final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowOverwriting;                                 // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportForUnreal;                                  // 0x0011(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0012(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FactsDB_WriteFactsToFile) == 0x000008, "Wrong alignment on FactsDB_WriteFactsToFile");
static_assert(sizeof(FactsDB_WriteFactsToFile) == 0x000018, "Wrong size on FactsDB_WriteFactsToFile");
static_assert(offsetof(FactsDB_WriteFactsToFile, Filename) == 0x000000, "Member 'FactsDB_WriteFactsToFile::Filename' has a wrong offset!");
static_assert(offsetof(FactsDB_WriteFactsToFile, bAllowOverwriting) == 0x000010, "Member 'FactsDB_WriteFactsToFile::bAllowOverwriting' has a wrong offset!");
static_assert(offsetof(FactsDB_WriteFactsToFile, bExportForUnreal) == 0x000011, "Member 'FactsDB_WriteFactsToFile::bExportForUnreal' has a wrong offset!");
static_assert(offsetof(FactsDB_WriteFactsToFile, ReturnValue) == 0x000012, "Member 'FactsDB_WriteFactsToFile::ReturnValue' has a wrong offset!");

// Function PiecesFactsDB.FactsDB.DoesFactExist
// 0x000C (0x000C - 0x0000)
struct FactsDB_DoesFactExist final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FactsDB_DoesFactExist) == 0x000004, "Wrong alignment on FactsDB_DoesFactExist");
static_assert(sizeof(FactsDB_DoesFactExist) == 0x00000C, "Wrong size on FactsDB_DoesFactExist");
static_assert(offsetof(FactsDB_DoesFactExist, Tag) == 0x000000, "Member 'FactsDB_DoesFactExist::Tag' has a wrong offset!");
static_assert(offsetof(FactsDB_DoesFactExist, ReturnValue) == 0x000008, "Member 'FactsDB_DoesFactExist::ReturnValue' has a wrong offset!");

// Function PiecesFactsDB.FactsDB.GetFactValue
// 0x0014 (0x0014 - 0x0000)
struct FactsDB_GetFactValue final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFactExists;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DefaultIfNoExist;                                  // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FactsDB_GetFactValue) == 0x000004, "Wrong alignment on FactsDB_GetFactValue");
static_assert(sizeof(FactsDB_GetFactValue) == 0x000014, "Wrong size on FactsDB_GetFactValue");
static_assert(offsetof(FactsDB_GetFactValue, Tag) == 0x000000, "Member 'FactsDB_GetFactValue::Tag' has a wrong offset!");
static_assert(offsetof(FactsDB_GetFactValue, bFactExists) == 0x000008, "Member 'FactsDB_GetFactValue::bFactExists' has a wrong offset!");
static_assert(offsetof(FactsDB_GetFactValue, DefaultIfNoExist) == 0x00000C, "Member 'FactsDB_GetFactValue::DefaultIfNoExist' has a wrong offset!");
static_assert(offsetof(FactsDB_GetFactValue, ReturnValue) == 0x000010, "Member 'FactsDB_GetFactValue::ReturnValue' has a wrong offset!");

// Function PiecesFactsDB.FactsDB.IsFactTrue
// 0x000C (0x000C - 0x0000)
struct FactsDB_IsFactTrue final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FactsDB_IsFactTrue) == 0x000004, "Wrong alignment on FactsDB_IsFactTrue");
static_assert(sizeof(FactsDB_IsFactTrue) == 0x00000C, "Wrong size on FactsDB_IsFactTrue");
static_assert(offsetof(FactsDB_IsFactTrue, Tag) == 0x000000, "Member 'FactsDB_IsFactTrue::Tag' has a wrong offset!");
static_assert(offsetof(FactsDB_IsFactTrue, ReturnValue) == 0x000008, "Member 'FactsDB_IsFactTrue::ReturnValue' has a wrong offset!");

}

