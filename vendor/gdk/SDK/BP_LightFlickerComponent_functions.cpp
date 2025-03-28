#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LightFlickerComponent

#include "Basic.hpp"

#include "BP_LightFlickerComponent_classes.hpp"
#include "BP_LightFlickerComponent_parameters.hpp"


namespace SDK
{

// Function BP_LightFlickerComponent.BP_LightFlickerComponent_C.ExecuteUbergraph_BP_LightFlickerComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LightFlickerComponent_C::ExecuteUbergraph_BP_LightFlickerComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightFlickerComponent_C", "ExecuteUbergraph_BP_LightFlickerComponent");

	Params::BP_LightFlickerComponent_C_ExecuteUbergraph_BP_LightFlickerComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LightFlickerComponent.BP_LightFlickerComponent_C.ReceiveTick
// (Exec, Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LightFlickerComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightFlickerComponent_C", "ReceiveTick");

	Params::BP_LightFlickerComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LightFlickerComponent.BP_LightFlickerComponent_C.ReceiveBeginPlay
// (Exec, Event, Public, BlueprintEvent)

void UBP_LightFlickerComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightFlickerComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LightFlickerComponent.BP_LightFlickerComponent_C.ValidateMobilityOfLights
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ULightComponent*>          Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    Problem                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LightFlickerComponent_C::ValidateMobilityOfLights(TArray<class ULightComponent*>& Array, bool* Problem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightFlickerComponent_C", "ValidateMobilityOfLights");

	Params::BP_LightFlickerComponent_C_ValidateMobilityOfLights Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (Problem != nullptr)
		*Problem = Parms.Problem;
}

}

