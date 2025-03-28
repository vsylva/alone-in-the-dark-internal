#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CheatSubMenu

#include "Basic.hpp"

#include "WBP_CheatSubMenu_classes.hpp"
#include "WBP_CheatSubMenu_parameters.hpp"


namespace SDK
{

// Function WBP_CheatSubMenu.WBP_CheatSubMenu_C.OptionSelected__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>             ResultChildren                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ChildrenExist                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CheatSubMenu_C::OptionSelected__DelegateSignature(const struct FGameplayTag& Result, TArray<struct FGameplayTag>& ResultChildren, bool ChildrenExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CheatSubMenu_C", "OptionSelected__DelegateSignature");

	Params::WBP_CheatSubMenu_C_OptionSelected__DelegateSignature Parms{};

	Parms.Result = std::move(Result);
	Parms.ResultChildren = std::move(ResultChildren);
	Parms.ChildrenExist = ChildrenExist;

	UObject::ProcessEvent(Func, &Parms);

	ResultChildren = std::move(Parms.ResultChildren);
}


// Function WBP_CheatSubMenu.WBP_CheatSubMenu_C.ExecuteUbergraph_WBP_CheatSubMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CheatSubMenu_C::ExecuteUbergraph_WBP_CheatSubMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CheatSubMenu_C", "ExecuteUbergraph_WBP_CheatSubMenu");

	Params::WBP_CheatSubMenu_C_ExecuteUbergraph_WBP_CheatSubMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CheatSubMenu.WBP_CheatSubMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CheatSubMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CheatSubMenu_C", "Tick");

	Params::WBP_CheatSubMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CheatSubMenu.WBP_CheatSubMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CheatSubMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CheatSubMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CheatSubMenu.WBP_CheatSubMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_CheatSubMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CheatSubMenu_C", "OnKeyDown");

	Params::WBP_CheatSubMenu_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CheatSubMenu.WBP_CheatSubMenu_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_CheatSubMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CheatSubMenu_C", "OnMouseButtonDown");

	Params::WBP_CheatSubMenu_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CheatSubMenu.WBP_CheatSubMenu_C.SliceArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>             Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>             Results                                                (Parm, OutParm)

void UWBP_CheatSubMenu_C::SliceArray(TArray<struct FGameplayTag>& Array, int32 Start, int32 Count, TArray<struct FGameplayTag>* Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CheatSubMenu_C", "SliceArray");

	Params::WBP_CheatSubMenu_C_SliceArray Parms{};

	Parms.Array = std::move(Array);
	Parms.Start = Start;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (Results != nullptr)
		*Results = std::move(Parms.Results);
}


// Function WBP_CheatSubMenu.WBP_CheatSubMenu_C.SetDisplayTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CheatSubMenu_C::SetDisplayTexts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CheatSubMenu_C", "SetDisplayTexts");

	UObject::ProcessEvent(Func, nullptr);
}

}

