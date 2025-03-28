#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ContextualTraverse_Base

#include "Basic.hpp"

#include "BP_ContextualTraverse_Base_classes.hpp"
#include "BP_ContextualTraverse_Base_parameters.hpp"


namespace SDK
{

// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.UnlinkPreviousABP
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::UnlinkPreviousABP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "UnlinkPreviousABP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.EndInteractionIfInteracting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractionFlowComponent*        InteractionComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::EndInteractionIfInteracting(class UInteractionFlowComponent* InteractionComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "EndInteractionIfInteracting");

	Params::BP_ContextualTraverse_Base_C_EndInteractionIfInteracting Parms{};

	Parms.InteractionComponent = InteractionComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.DetermineSavingEnabledAfterFinishingTraversal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::DetermineSavingEnabledAfterFinishingTraversal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "DetermineSavingEnabledAfterFinishingTraversal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.ActivateInteractionOnOverlap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Collider                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractionFlowComponent*        InteractionComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::ActivateInteractionOnOverlap(class UPrimitiveComponent* Collider, class UInteractionFlowComponent* InteractionComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "ActivateInteractionOnOverlap");

	Params::BP_ContextualTraverse_Base_C_ActivateInteractionOnOverlap Parms{};

	Parms.Collider = Collider;
	Parms.InteractionComponent = InteractionComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.RemoveMotionWarpingStartData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::RemoveMotionWarpingStartData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "RemoveMotionWarpingStartData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.SetupStartMotionWarping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingCharacter_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  StartRotationComponent                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::SetupStartMotionWarping(class AActor* InteractingCharacter_0, class USceneComponent* StartRotationComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "SetupStartMotionWarping");

	Params::BP_ContextualTraverse_Base_C_SetupStartMotionWarping Parms{};

	Parms.InteractingCharacter_0 = InteractingCharacter_0;
	Parms.StartRotationComponent = StartRotationComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.StopReposition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    StopTranslation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    StopRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ContextualTraverse_Base_C::StopReposition(bool StopTranslation, bool StopRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "StopReposition");

	Params::BP_ContextualTraverse_Base_C_StopReposition Parms{};

	Parms.StopTranslation = StopTranslation;
	Parms.StopRotation = StopRotation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.TryHolsterWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Instant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ContextualTraverse_Base_C::TryHolsterWeapon(class ACharacter* Character, bool Instant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "TryHolsterWeapon");

	Params::BP_ContextualTraverse_Base_C_TryHolsterWeapon Parms{};

	Parms.Character = Character;
	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.EnableInteractionCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::EnableInteractionCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "EnableInteractionCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.CacheInteractionCollision
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::CacheInteractionCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "CacheInteractionCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.ResetRotationOnAffectedPitch
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::ResetRotationOnAffectedPitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "ResetRotationOnAffectedPitch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.RemoveGameEffect
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::RemoveGameEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "RemoveGameEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.DEPRECATED_DeactivateInteractionComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::DEPRECATED_DeactivateInteractionComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "DEPRECATED_DeactivateInteractionComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.ApplyContextualTraverseGameEffect
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::ApplyContextualTraverseGameEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "ApplyContextualTraverseGameEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.SetupInteraction
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       InteractingCharacter_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::SetupInteraction(class ACharacter* InteractingCharacter_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "SetupInteraction");

	Params::BP_ContextualTraverse_Base_C_SetupInteraction Parms{};

	Parms.InteractingCharacter_0 = InteractingCharacter_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.MakeRotationFromRotComponent
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*                  StartRotation_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FRotator                         OutRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ContextualTraverse_Base_C::MakeRotationFromRotComponent(class USceneComponent* StartRotation_0, struct FRotator* OutRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "MakeRotationFromRotComponent");

	Params::BP_ContextualTraverse_Base_C_MakeRotationFromRotComponent Parms{};

	Parms.StartRotation_0 = StartRotation_0;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.CalculatePlayerMovement
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  StartLocation_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class USceneComponent*                  StartRotation_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                                   Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::CalculatePlayerMovement(class USceneComponent* StartLocation_0, class USceneComponent* StartRotation_0, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "CalculatePlayerMovement");

	Params::BP_ContextualTraverse_Base_C_CalculatePlayerMovement Parms{};

	Parms.StartLocation_0 = StartLocation_0;
	Parms.StartRotation_0 = StartRotation_0;
	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.CachePlayerLocAndRot
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::CachePlayerLocAndRot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "CachePlayerLocAndRot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.OnInterrupted_408291ED4EB6D2D6072FC58EE5F21B87
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       TransformedCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::OnInterrupted_408291ED4EB6D2D6072FC58EE5F21B87(class ACharacter* TransformedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "OnInterrupted_408291ED4EB6D2D6072FC58EE5F21B87");

	Params::BP_ContextualTraverse_Base_C_OnInterrupted_408291ED4EB6D2D6072FC58EE5F21B87 Parms{};

	Parms.TransformedCharacter = TransformedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.OnCloseEnough_408291ED4EB6D2D6072FC58EE5F21B87
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       TransformedCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::OnCloseEnough_408291ED4EB6D2D6072FC58EE5F21B87(class ACharacter* TransformedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "OnCloseEnough_408291ED4EB6D2D6072FC58EE5F21B87");

	Params::BP_ContextualTraverse_Base_C_OnCloseEnough_408291ED4EB6D2D6072FC58EE5F21B87 Parms{};

	Parms.TransformedCharacter = TransformedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.OnCompleted_408291ED4EB6D2D6072FC58EE5F21B87
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       TransformedCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::OnCompleted_408291ED4EB6D2D6072FC58EE5F21B87(class ACharacter* TransformedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "OnCompleted_408291ED4EB6D2D6072FC58EE5F21B87");

	Params::BP_ContextualTraverse_Base_C_OnCompleted_408291ED4EB6D2D6072FC58EE5F21B87 Parms{};

	Parms.TransformedCharacter = TransformedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.MoveToStartPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  StartLocationComponent                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  StartRotationComponent                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::MoveToStartPosition(class USceneComponent* StartLocationComponent, class USceneComponent* StartRotationComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "MoveToStartPosition");

	Params::BP_ContextualTraverse_Base_C_MoveToStartPosition Parms{};

	Parms.StartLocationComponent = StartLocationComponent;
	Parms.StartRotationComponent = StartRotationComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.StartPositionReached
// (BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::StartPositionReached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "StartPositionReached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.OnStartInteract
// (BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::OnStartInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "OnStartInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.OnTraverseEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::OnTraverseEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "OnTraverseEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.TraverseFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::TraverseFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "TraverseFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.BndEvt__BP_ContextualTraverse_Base_InteractionFlow_K2Node_ComponentBoundEvent_3_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ACharacter*                       InteractionCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::BndEvt__BP_ContextualTraverse_Base_InteractionFlow_K2Node_ComponentBoundEvent_3_InteractionSignature__DelegateSignature(class ACharacter* InteractionCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "BndEvt__BP_ContextualTraverse_Base_InteractionFlow_K2Node_ComponentBoundEvent_3_InteractionSignature__DelegateSignature");

	Params::BP_ContextualTraverse_Base_C_BndEvt__BP_ContextualTraverse_Base_InteractionFlow_K2Node_ComponentBoundEvent_3_InteractionSignature__DelegateSignature Parms{};

	Parms.InteractionCharacter = InteractionCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.DisableTraversal
// (BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::DisableTraversal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "DisableTraversal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.BndEvt__InteractActivateColl_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ContextualTraverse_Base_C::BndEvt__InteractActivateColl_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "BndEvt__InteractActivateColl_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_ContextualTraverse_Base_C_BndEvt__InteractActivateColl_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.BndEvt__InteractActivateColl_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::BndEvt__InteractActivateColl_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "BndEvt__InteractActivateColl_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_ContextualTraverse_Base_C_BndEvt__InteractActivateColl_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.EnableTraversal
// (BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::EnableTraversal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "EnableTraversal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.StartPositionCloseEnough
// (BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::StartPositionCloseEnough()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "StartPositionCloseEnough");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.BndEvt__BP_ContextualTraverse_Base_Flow_K2Node_ComponentBoundEvent_2_FlowComponentDynamicNotify__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UFlowComponent*                   FlowComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     NotifyTag                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::BndEvt__BP_ContextualTraverse_Base_Flow_K2Node_ComponentBoundEvent_2_FlowComponentDynamicNotify__DelegateSignature(class UFlowComponent* FlowComponent, const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "BndEvt__BP_ContextualTraverse_Base_Flow_K2Node_ComponentBoundEvent_2_FlowComponentDynamicNotify__DelegateSignature");

	Params::BP_ContextualTraverse_Base_C_BndEvt__BP_ContextualTraverse_Base_Flow_K2Node_ComponentBoundEvent_2_FlowComponentDynamicNotify__DelegateSignature Parms{};

	Parms.FlowComponent = FlowComponent;
	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.ForcedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       InteractingCharacter_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::ForcedInteraction(class ACharacter* InteractingCharacter_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "ForcedInteraction");

	Params::BP_ContextualTraverse_Base_C_ForcedInteraction Parms{};

	Parms.InteractingCharacter_0 = InteractingCharacter_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.BndEvt__BP_ContextualTraverse_Base_InteractionFlow_K2Node_ComponentBoundEvent_5_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ACharacter*                       InteractionCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::BndEvt__BP_ContextualTraverse_Base_InteractionFlow_K2Node_ComponentBoundEvent_5_InteractionSignature__DelegateSignature(class ACharacter* InteractionCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "BndEvt__BP_ContextualTraverse_Base_InteractionFlow_K2Node_ComponentBoundEvent_5_InteractionSignature__DelegateSignature");

	Params::BP_ContextualTraverse_Base_C_BndEvt__BP_ContextualTraverse_Base_InteractionFlow_K2Node_ComponentBoundEvent_5_InteractionSignature__DelegateSignature Parms{};

	Parms.InteractionCharacter = InteractionCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.RepositionFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::RepositionFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "RepositionFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.ResetReposition
// (BlueprintCallable, BlueprintEvent)

void ABP_ContextualTraverse_Base_C::ResetReposition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "ResetReposition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextualTraverse_Base.BP_ContextualTraverse_Base_C.ExecuteUbergraph_BP_ContextualTraverse_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextualTraverse_Base_C::ExecuteUbergraph_BP_ContextualTraverse_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextualTraverse_Base_C", "ExecuteUbergraph_BP_ContextualTraverse_Base");

	Params::BP_ContextualTraverse_Base_C_ExecuteUbergraph_BP_ContextualTraverse_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

