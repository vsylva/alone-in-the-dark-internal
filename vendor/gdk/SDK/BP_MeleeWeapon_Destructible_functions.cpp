#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeleeWeapon_Destructible

#include "Basic.hpp"

#include "BP_MeleeWeapon_Destructible_classes.hpp"
#include "BP_MeleeWeapon_Destructible_parameters.hpp"


namespace SDK
{

// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.GetParentHandBoneName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    RightHand                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_MeleeWeapon_Destructible_C::GetParentHandBoneName(bool RightHand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "GetParentHandBoneName");

	Params::BP_MeleeWeapon_Destructible_C_GetParentHandBoneName Parms{};

	Parms.RightHand = RightHand;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.IsTwoHanded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MeleeWeapon_Destructible_C::IsTwoHanded(bool* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "IsTwoHanded");

	Params::BP_MeleeWeapon_Destructible_C_IsTwoHanded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.GetBlockedSockets
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class FName> ABP_MeleeWeapon_Destructible_C::GetBlockedSockets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "GetBlockedSockets");

	Params::BP_MeleeWeapon_Destructible_C_GetBlockedSockets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.OnLoaded_7CFE516A4B2114B269292F8513C6C79F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MeleeWeapon_Destructible_C::OnLoaded_7CFE516A4B2114B269292F8513C6C79F(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "OnLoaded_7CFE516A4B2114B269292F8513C6C79F");

	Params::BP_MeleeWeapon_Destructible_C_OnLoaded_7CFE516A4B2114B269292F8513C6C79F Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MeleeWeapon_Destructible_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.Break
// (BlueprintCallable, BlueprintEvent)

void ABP_MeleeWeapon_Destructible_C::Break()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "Break");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.Reduce Durability
// (BlueprintCallable, BlueprintEvent)

void ABP_MeleeWeapon_Destructible_C::Reduce_Durability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "Reduce Durability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.Initialize Weapon Settings
// (BlueprintCallable, BlueprintEvent)

void ABP_MeleeWeapon_Destructible_C::Initialize_Weapon_Settings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "Initialize Weapon Settings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.ExecuteUbergraph_BP_MeleeWeapon_Destructible
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MeleeWeapon_Destructible_C::ExecuteUbergraph_BP_MeleeWeapon_Destructible(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "ExecuteUbergraph_BP_MeleeWeapon_Destructible");

	Params::BP_MeleeWeapon_Destructible_C_ExecuteUbergraph_BP_MeleeWeapon_Destructible Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.OnWeaponInitializedFromSettings__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MeleeWeapon_Destructible_C*   Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MeleeWeapon_Destructible_C::OnWeaponInitializedFromSettings__DelegateSignature(class ABP_MeleeWeapon_Destructible_C* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "OnWeaponInitializedFromSettings__DelegateSignature");

	Params::BP_MeleeWeapon_Destructible_C_OnWeaponInitializedFromSettings__DelegateSignature Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.OnReduecedDurability__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   HitsLeft                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MeleeWeapon_Destructible_C::OnReduecedDurability__DelegateSignature(int32 HitsLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "OnReduecedDurability__DelegateSignature");

	Params::BP_MeleeWeapon_Destructible_C_OnReduecedDurability__DelegateSignature Parms{};

	Parms.HitsLeft = HitsLeft;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MeleeWeapon_Destructible.BP_MeleeWeapon_Destructible_C.GetNrOfHitsLeftToShowBreakingIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_MeleeWeapon_Destructible_C::GetNrOfHitsLeftToShowBreakingIcon() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeapon_Destructible_C", "GetNrOfHitsLeftToShowBreakingIcon");

	Params::BP_MeleeWeapon_Destructible_C_GetNrOfHitsLeftToShowBreakingIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

