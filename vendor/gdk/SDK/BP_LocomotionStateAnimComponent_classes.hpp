#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LocomotionStateAnimComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LocomotionStateAnimComponent.BP_LocomotionStateAnimComponent_C
// 0x0020 (0x0118 - 0x00F8)
class UBP_LocomotionStateAnimComponent_C final : public UPlayerLocomotionStateAnimComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         StairTimer;                                        // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StairTimeout;                                      // 0x0104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponAnimationComponent*              OwnerWeaponAnimationController;                    // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOnStairs_DEPRECATED;                             // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOnSlope;                                         // 0x0111(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void IsDarkManObsessionHighEnough(bool* Value);
	bool IsCharacterOnSlope();
	bool IsCombatState();
	bool IsCharacterOnStairs();
	bool IsResistanceWeather();
	void Blueprint_Initialize();
	void ExecuteUbergraph_BP_LocomotionStateAnimComponent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LocomotionStateAnimComponent_C">();
	}
	static class UBP_LocomotionStateAnimComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LocomotionStateAnimComponent_C>();
	}
};
static_assert(alignof(UBP_LocomotionStateAnimComponent_C) == 0x000008, "Wrong alignment on UBP_LocomotionStateAnimComponent_C");
static_assert(sizeof(UBP_LocomotionStateAnimComponent_C) == 0x000118, "Wrong size on UBP_LocomotionStateAnimComponent_C");
static_assert(offsetof(UBP_LocomotionStateAnimComponent_C, UberGraphFrame) == 0x0000F8, "Member 'UBP_LocomotionStateAnimComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_LocomotionStateAnimComponent_C, StairTimer) == 0x000100, "Member 'UBP_LocomotionStateAnimComponent_C::StairTimer' has a wrong offset!");
static_assert(offsetof(UBP_LocomotionStateAnimComponent_C, StairTimeout) == 0x000104, "Member 'UBP_LocomotionStateAnimComponent_C::StairTimeout' has a wrong offset!");
static_assert(offsetof(UBP_LocomotionStateAnimComponent_C, OwnerWeaponAnimationController) == 0x000108, "Member 'UBP_LocomotionStateAnimComponent_C::OwnerWeaponAnimationController' has a wrong offset!");
static_assert(offsetof(UBP_LocomotionStateAnimComponent_C, IsOnStairs_DEPRECATED) == 0x000110, "Member 'UBP_LocomotionStateAnimComponent_C::IsOnStairs_DEPRECATED' has a wrong offset!");
static_assert(offsetof(UBP_LocomotionStateAnimComponent_C, IsOnSlope) == 0x000111, "Member 'UBP_LocomotionStateAnimComponent_C::IsOnSlope' has a wrong offset!");

}

