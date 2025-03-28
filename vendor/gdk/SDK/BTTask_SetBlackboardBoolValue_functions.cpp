#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_SetBlackboardBoolValue

#include "Basic.hpp"

#include "BTTask_SetBlackboardBoolValue_classes.hpp"
#include "BTTask_SetBlackboardBoolValue_parameters.hpp"


namespace SDK
{

// Function BTTask_SetBlackboardBoolValue.BTTask_SetBlackboardBoolValue_C.ExecuteUbergraph_BTTask_SetBlackboardBoolValue
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetBlackboardBoolValue_C::ExecuteUbergraph_BTTask_SetBlackboardBoolValue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_SetBlackboardBoolValue_C", "ExecuteUbergraph_BTTask_SetBlackboardBoolValue");

	Params::BTTask_SetBlackboardBoolValue_C_ExecuteUbergraph_BTTask_SetBlackboardBoolValue Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTTask_SetBlackboardBoolValue.BTTask_SetBlackboardBoolValue_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetBlackboardBoolValue_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_SetBlackboardBoolValue_C", "ReceiveExecuteAI");

	Params::BTTask_SetBlackboardBoolValue_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

