#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSelectionPage

#include "Basic.hpp"

#include "WBP_OptionSelectionPage_classes.hpp"
#include "WBP_OptionSelectionPage_parameters.hpp"


namespace SDK
{

// Function WBP_OptionSelectionPage.WBP_OptionSelectionPage_C.OnCancelPressed_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_OptionSelectionPage_C::OnCancelPressed_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSelectionPage_C", "OnCancelPressed_0__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionSelectionPage.WBP_OptionSelectionPage_C.ExecuteUbergraph_WBP_OptionSelectionPage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSelectionPage_C::ExecuteUbergraph_WBP_OptionSelectionPage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSelectionPage_C", "ExecuteUbergraph_WBP_OptionSelectionPage");

	Params::WBP_OptionSelectionPage_C_ExecuteUbergraph_WBP_OptionSelectionPage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSelectionPage.WBP_OptionSelectionPage_C.CancelPressed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_OptionSelectionPage_C::CancelPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSelectionPage_C", "CancelPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionSelectionPage.WBP_OptionSelectionPage_C.SetIncreaseDecreaseSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_IncreaseDecrease_C*          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSelectionPage_C::SetIncreaseDecreaseSetting(float Value, class UWBP_IncreaseDecrease_C* Widget, float MaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSelectionPage_C", "SetIncreaseDecreaseSetting");

	Params::WBP_OptionSelectionPage_C_SetIncreaseDecreaseSetting Parms{};

	Parms.Value = Value;
	Parms.Widget = Widget;
	Parms.MaxValue = MaxValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

