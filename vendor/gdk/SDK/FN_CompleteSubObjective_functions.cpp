#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FN_CompleteSubObjective

#include "Basic.hpp"

#include "FN_CompleteSubObjective_classes.hpp"
#include "FN_CompleteSubObjective_parameters.hpp"


namespace SDK
{

// Function FN_CompleteSubObjective.FN_CompleteSubObjective_C.K2_ExecuteInput
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PinName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_CompleteSubObjective_C::K2_ExecuteInput(const class FName& PinName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_CompleteSubObjective_C", "K2_ExecuteInput");

	Params::FN_CompleteSubObjective_C_K2_ExecuteInput Parms{};

	Parms.PinName = PinName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_CompleteSubObjective.FN_CompleteSubObjective_C.ExecuteUbergraph_FN_CompleteSubObjective
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFN_CompleteSubObjective_C::ExecuteUbergraph_FN_CompleteSubObjective(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_CompleteSubObjective_C", "ExecuteUbergraph_FN_CompleteSubObjective");

	Params::FN_CompleteSubObjective_C_ExecuteUbergraph_FN_CompleteSubObjective Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FN_CompleteSubObjective.FN_CompleteSubObjective_C.K2_GetNodeDescription
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UFN_CompleteSubObjective_C::K2_GetNodeDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_CompleteSubObjective_C", "K2_GetNodeDescription");

	Params::FN_CompleteSubObjective_C_K2_GetNodeDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

