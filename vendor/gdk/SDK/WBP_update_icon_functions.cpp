#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_update_icon

#include "Basic.hpp"

#include "WBP_update_icon_classes.hpp"
#include "WBP_update_icon_parameters.hpp"


namespace SDK
{

// Function WBP_update_icon.WBP_update_icon_C.PlayPulseAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumLoops                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_update_icon_C::PlayPulseAnimation(int32 NumLoops)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_update_icon_C", "PlayPulseAnimation");

	Params::WBP_update_icon_C_PlayPulseAnimation Parms{};

	Parms.NumLoops = NumLoops;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_update_icon.WBP_update_icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_update_icon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_update_icon_C", "PreConstruct");

	Params::WBP_update_icon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_update_icon.WBP_update_icon_C.ExecuteUbergraph_WBP_update_icon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_update_icon_C::ExecuteUbergraph_WBP_update_icon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_update_icon_C", "ExecuteUbergraph_WBP_update_icon");

	Params::WBP_update_icon_C_ExecuteUbergraph_WBP_update_icon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

