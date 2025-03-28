#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_SetBlackboardBoolValue

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_SetBlackboardBoolValue.BTTask_SetBlackboardBoolValue_C
// 0x0038 (0x00E0 - 0x00A8)
class UBTTask_SetBlackboardBoolValue_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Value;                                             // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBlackboardKeySelector                 BlackBoardKey;                                     // 0x00B8(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTTask_SetBlackboardBoolValue(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_SetBlackboardBoolValue_C">();
	}
	static class UBTTask_SetBlackboardBoolValue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_SetBlackboardBoolValue_C>();
	}
};
static_assert(alignof(UBTTask_SetBlackboardBoolValue_C) == 0x000008, "Wrong alignment on UBTTask_SetBlackboardBoolValue_C");
static_assert(sizeof(UBTTask_SetBlackboardBoolValue_C) == 0x0000E0, "Wrong size on UBTTask_SetBlackboardBoolValue_C");
static_assert(offsetof(UBTTask_SetBlackboardBoolValue_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_SetBlackboardBoolValue_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_SetBlackboardBoolValue_C, Value) == 0x0000B0, "Member 'UBTTask_SetBlackboardBoolValue_C::Value' has a wrong offset!");
static_assert(offsetof(UBTTask_SetBlackboardBoolValue_C, BlackBoardKey) == 0x0000B8, "Member 'UBTTask_SetBlackboardBoolValue_C::BlackBoardKey' has a wrong offset!");

}

