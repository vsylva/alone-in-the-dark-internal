#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIDebug_Overseer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIDebug_Overseer.AIDebug_Overseer_C
// 0x0010 (0x00C8 - 0x00B8)
class UAIDebug_Overseer_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           TickTimerHandle;                                   // 0x00C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIDebug_Overseer(int32 EntryPoint);
	void Remove();
	void ReceiveBeginPlay();
	void TimerTick();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIDebug_Overseer_C">();
	}
	static class UAIDebug_Overseer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIDebug_Overseer_C>();
	}
};
static_assert(alignof(UAIDebug_Overseer_C) == 0x000008, "Wrong alignment on UAIDebug_Overseer_C");
static_assert(sizeof(UAIDebug_Overseer_C) == 0x0000C8, "Wrong size on UAIDebug_Overseer_C");
static_assert(offsetof(UAIDebug_Overseer_C, UberGraphFrame) == 0x0000B8, "Member 'UAIDebug_Overseer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAIDebug_Overseer_C, TickTimerHandle) == 0x0000C0, "Member 'UAIDebug_Overseer_C::TickTimerHandle' has a wrong offset!");

}

