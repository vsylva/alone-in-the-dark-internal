#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ObsidianFoxDevicePropertyHandling

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ObsidianFoxDevicePropertyHandling.DevicePropertySubsystem.RemoveTriggerEffect
// 0x0001 (0x0001 - 0x0000)
struct DevicePropertySubsystem_RemoveTriggerEffect final
{
public:
	bool                                          bRightTrigger;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DevicePropertySubsystem_RemoveTriggerEffect) == 0x000001, "Wrong alignment on DevicePropertySubsystem_RemoveTriggerEffect");
static_assert(sizeof(DevicePropertySubsystem_RemoveTriggerEffect) == 0x000001, "Wrong size on DevicePropertySubsystem_RemoveTriggerEffect");
static_assert(offsetof(DevicePropertySubsystem_RemoveTriggerEffect, bRightTrigger) == 0x000000, "Member 'DevicePropertySubsystem_RemoveTriggerEffect::bRightTrigger' has a wrong offset!");

// Function ObsidianFoxDevicePropertyHandling.DevicePropertySubsystem.SetLightbarEffect
// 0x0008 (0x0008 - 0x0000)
struct DevicePropertySubsystem_SetLightbarEffect final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 Color;                                             // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DevicePropertySubsystem_SetLightbarEffect) == 0x000004, "Wrong alignment on DevicePropertySubsystem_SetLightbarEffect");
static_assert(sizeof(DevicePropertySubsystem_SetLightbarEffect) == 0x000008, "Wrong size on DevicePropertySubsystem_SetLightbarEffect");
static_assert(offsetof(DevicePropertySubsystem_SetLightbarEffect, bEnabled) == 0x000000, "Member 'DevicePropertySubsystem_SetLightbarEffect::bEnabled' has a wrong offset!");
static_assert(offsetof(DevicePropertySubsystem_SetLightbarEffect, Color) == 0x000004, "Member 'DevicePropertySubsystem_SetLightbarEffect::Color' has a wrong offset!");

// Function ObsidianFoxDevicePropertyHandling.DevicePropertySubsystem.SetTriggerEffect
// 0x0010 (0x0010 - 0x0000)
struct DevicePropertySubsystem_SetTriggerEffect final
{
public:
	bool                                          bRightTrigger;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UControllerTriggerEffectData*           TriggerEffectData;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DevicePropertySubsystem_SetTriggerEffect) == 0x000008, "Wrong alignment on DevicePropertySubsystem_SetTriggerEffect");
static_assert(sizeof(DevicePropertySubsystem_SetTriggerEffect) == 0x000010, "Wrong size on DevicePropertySubsystem_SetTriggerEffect");
static_assert(offsetof(DevicePropertySubsystem_SetTriggerEffect, bRightTrigger) == 0x000000, "Member 'DevicePropertySubsystem_SetTriggerEffect::bRightTrigger' has a wrong offset!");
static_assert(offsetof(DevicePropertySubsystem_SetTriggerEffect, TriggerEffectData) == 0x000008, "Member 'DevicePropertySubsystem_SetTriggerEffect::TriggerEffectData' has a wrong offset!");

}

