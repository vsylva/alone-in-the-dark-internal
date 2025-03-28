#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GoreStaticMeshComponent

#include "Basic.hpp"

#include "BP_GoreStaticMeshComponent_classes.hpp"
#include "BP_GoreStaticMeshComponent_parameters.hpp"


namespace SDK
{

// Function BP_GoreStaticMeshComponent.BP_GoreStaticMeshComponent_C.SpawnDecal
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GoreStaticMeshComponent_C::SpawnDecal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GoreStaticMeshComponent_C", "SpawnDecal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GoreStaticMeshComponent.BP_GoreStaticMeshComponent_C.LoadCompleteDelegate_505C20B546D318066106E8BA8AD5165B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>                  LoadedAssets                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_GoreStaticMeshComponent_C::LoadCompleteDelegate_505C20B546D318066106E8BA8AD5165B(const TArray<class UObject*>& LoadedAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GoreStaticMeshComponent_C", "LoadCompleteDelegate_505C20B546D318066106E8BA8AD5165B");

	Params::BP_GoreStaticMeshComponent_C_LoadCompleteDelegate_505C20B546D318066106E8BA8AD5165B Parms{};

	Parms.LoadedAssets = std::move(LoadedAssets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GoreStaticMeshComponent.BP_GoreStaticMeshComponent_C.ReceiveBeginPlay
// (Exec, Event, Public, BlueprintEvent)

void UBP_GoreStaticMeshComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GoreStaticMeshComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GoreStaticMeshComponent.BP_GoreStaticMeshComponent_C.OnCollision
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_GoreStaticMeshComponent_C::OnCollision(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GoreStaticMeshComponent_C", "OnCollision");

	Params::BP_GoreStaticMeshComponent_C_OnCollision Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GoreStaticMeshComponent.BP_GoreStaticMeshComponent_C.SpawnParticleSystem
// (BlueprintCallable, BlueprintEvent)

void UBP_GoreStaticMeshComponent_C::SpawnParticleSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GoreStaticMeshComponent_C", "SpawnParticleSystem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GoreStaticMeshComponent.BP_GoreStaticMeshComponent_C.ExecuteUbergraph_BP_GoreStaticMeshComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GoreStaticMeshComponent_C::ExecuteUbergraph_BP_GoreStaticMeshComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GoreStaticMeshComponent_C", "ExecuteUbergraph_BP_GoreStaticMeshComponent");

	Params::BP_GoreStaticMeshComponent_C_ExecuteUbergraph_BP_GoreStaticMeshComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

