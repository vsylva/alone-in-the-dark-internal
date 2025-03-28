#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GrappleLungeAttack

#include "Basic.hpp"

#include "GA_GrappleLungeAttack_classes.hpp"
#include "GA_GrappleLungeAttack_parameters.hpp"


namespace SDK
{

// Function GA_GrappleLungeAttack.GA_GrappleLungeAttack_C.GrappleAreaClearTrace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ForwardDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   backDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DrawDebug                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    TraceOk                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_GrappleLungeAttack_C::GrappleAreaClearTrace(float ForwardDistance, float backDistance, bool DrawDebug, bool* TraceOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleLungeAttack_C", "GrappleAreaClearTrace");

	Params::GA_GrappleLungeAttack_C_GrappleAreaClearTrace Parms{};

	Parms.ForwardDistance = ForwardDistance;
	Parms.backDistance = backDistance;
	Parms.DrawDebug = DrawDebug;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceOk != nullptr)
		*TraceOk = Parms.TraceOk;
}


// Function GA_GrappleLungeAttack.GA_GrappleLungeAttack_C.EventReceived_9A7E1B5C43A82885622EBD96BCCC7A7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GrappleLungeAttack_C::EventReceived_9A7E1B5C43A82885622EBD96BCCC7A7A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleLungeAttack_C", "EventReceived_9A7E1B5C43A82885622EBD96BCCC7A7A");

	Params::GA_GrappleLungeAttack_C_EventReceived_9A7E1B5C43A82885622EBD96BCCC7A7A Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GrappleLungeAttack.GA_GrappleLungeAttack_C.OnCancelled_9A7E1B5C43A82885622EBD96BCCC7A7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GrappleLungeAttack_C::OnCancelled_9A7E1B5C43A82885622EBD96BCCC7A7A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleLungeAttack_C", "OnCancelled_9A7E1B5C43A82885622EBD96BCCC7A7A");

	Params::GA_GrappleLungeAttack_C_OnCancelled_9A7E1B5C43A82885622EBD96BCCC7A7A Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GrappleLungeAttack.GA_GrappleLungeAttack_C.OnInterrupted_9A7E1B5C43A82885622EBD96BCCC7A7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GrappleLungeAttack_C::OnInterrupted_9A7E1B5C43A82885622EBD96BCCC7A7A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleLungeAttack_C", "OnInterrupted_9A7E1B5C43A82885622EBD96BCCC7A7A");

	Params::GA_GrappleLungeAttack_C_OnInterrupted_9A7E1B5C43A82885622EBD96BCCC7A7A Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GrappleLungeAttack.GA_GrappleLungeAttack_C.OnBlendOut_9A7E1B5C43A82885622EBD96BCCC7A7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GrappleLungeAttack_C::OnBlendOut_9A7E1B5C43A82885622EBD96BCCC7A7A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleLungeAttack_C", "OnBlendOut_9A7E1B5C43A82885622EBD96BCCC7A7A");

	Params::GA_GrappleLungeAttack_C_OnBlendOut_9A7E1B5C43A82885622EBD96BCCC7A7A Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GrappleLungeAttack.GA_GrappleLungeAttack_C.OnCompleted_9A7E1B5C43A82885622EBD96BCCC7A7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GrappleLungeAttack_C::OnCompleted_9A7E1B5C43A82885622EBD96BCCC7A7A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleLungeAttack_C", "OnCompleted_9A7E1B5C43A82885622EBD96BCCC7A7A");

	Params::GA_GrappleLungeAttack_C_OnCompleted_9A7E1B5C43A82885622EBD96BCCC7A7A Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GrappleLungeAttack.GA_GrappleLungeAttack_C.PlayAttackMontage
// (BlueprintCallable, BlueprintEvent)

void UGA_GrappleLungeAttack_C::PlayAttackMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleLungeAttack_C", "PlayAttackMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_GrappleLungeAttack.GA_GrappleLungeAttack_C.ExecuteUbergraph_GA_GrappleLungeAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GrappleLungeAttack_C::ExecuteUbergraph_GA_GrappleLungeAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleLungeAttack_C", "ExecuteUbergraph_GA_GrappleLungeAttack");

	Params::GA_GrappleLungeAttack_C_ExecuteUbergraph_GA_GrappleLungeAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GrappleLungeAttack.GA_GrappleLungeAttack_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle       Handle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_GrappleLungeAttack_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleLungeAttack_C", "K2_CanActivateAbility");

	Params::GA_GrappleLungeAttack_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}

