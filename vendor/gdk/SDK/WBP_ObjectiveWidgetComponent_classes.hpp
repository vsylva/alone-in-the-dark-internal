#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ObjectiveWidgetComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ObjectiveWidgetComponent.WBP_ObjectiveWidgetComponent_C
// 0x0008 (0x02F8 - 0x02F0)
class UWBP_ObjectiveWidgetComponent_C final : public UObjectiveListWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Construct();
	void ExecuteUbergraph_WBP_ObjectiveWidgetComponent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ObjectiveWidgetComponent_C">();
	}
	static class UWBP_ObjectiveWidgetComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ObjectiveWidgetComponent_C>();
	}
};
static_assert(alignof(UWBP_ObjectiveWidgetComponent_C) == 0x000008, "Wrong alignment on UWBP_ObjectiveWidgetComponent_C");
static_assert(sizeof(UWBP_ObjectiveWidgetComponent_C) == 0x0002F8, "Wrong size on UWBP_ObjectiveWidgetComponent_C");
static_assert(offsetof(UWBP_ObjectiveWidgetComponent_C, UberGraphFrame) == 0x0002F0, "Member 'UWBP_ObjectiveWidgetComponent_C::UberGraphFrame' has a wrong offset!");

}

