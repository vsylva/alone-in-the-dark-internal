#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EnemyThreat

#include "Basic.hpp"

#include "WBP_EnemyThreat_classes.hpp"
#include "WBP_EnemyThreat_parameters.hpp"


namespace SDK
{

// Function WBP_EnemyThreat.WBP_EnemyThreat_C.GetFillColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWBP_EnemyThreat_C::GetFillColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyThreat_C", "GetFillColorAndOpacity_0");

	Params::WBP_EnemyThreat_C_GetFillColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_EnemyThreat.WBP_EnemyThreat_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWBP_EnemyThreat_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyThreat_C", "GetVisibility_0");

	Params::WBP_EnemyThreat_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_EnemyThreat.WBP_EnemyThreat_C.GetPercent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWBP_EnemyThreat_C::GetPercent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyThreat_C", "GetPercent_0");

	Params::WBP_EnemyThreat_C_GetPercent_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_EnemyThreat.WBP_EnemyThreat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EnemyThreat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyThreat_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyThreat.WBP_EnemyThreat_C.AggroChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_EnemyThreat_C::AggroChange(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyThreat_C", "AggroChange");

	Params::WBP_EnemyThreat_C_AggroChange Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyThreat.WBP_EnemyThreat_C.ExecuteUbergraph_WBP_EnemyThreat
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyThreat_C::ExecuteUbergraph_WBP_EnemyThreat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyThreat_C", "ExecuteUbergraph_WBP_EnemyThreat");

	Params::WBP_EnemyThreat_C_ExecuteUbergraph_WBP_EnemyThreat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

