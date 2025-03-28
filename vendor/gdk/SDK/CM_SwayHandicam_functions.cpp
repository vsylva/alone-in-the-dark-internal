#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_SwayHandicam

#include "Basic.hpp"

#include "CM_SwayHandicam_classes.hpp"
#include "CM_SwayHandicam_parameters.hpp"


namespace SDK
{

// Function CM_SwayHandicam.CM_SwayHandicam_C.GetSwayModifiedRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         View_Rotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                         Modified_View_Rotation                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCM_SwayHandicam_C::GetSwayModifiedRotation(struct FRotator& View_Rotation, struct FRotator* Modified_View_Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_SwayHandicam_C", "GetSwayModifiedRotation");

	Params::CM_SwayHandicam_C_GetSwayModifiedRotation Parms{};

	Parms.View_Rotation = std::move(View_Rotation);

	UObject::ProcessEvent(Func, &Parms);

	View_Rotation = std::move(Parms.View_Rotation);

	if (Modified_View_Rotation != nullptr)
		*Modified_View_Rotation = std::move(Parms.Modified_View_Rotation);
}


// Function CM_SwayHandicam.CM_SwayHandicam_C.GetSwayModifiedLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          View_Location                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Modified_View_Location                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_SwayHandicam_C::GetSwayModifiedLocation(struct FVector& View_Location, struct FVector* Modified_View_Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_SwayHandicam_C", "GetSwayModifiedLocation");

	Params::CM_SwayHandicam_C_GetSwayModifiedLocation Parms{};

	Parms.View_Location = std::move(View_Location);

	UObject::ProcessEvent(Func, &Parms);

	View_Location = std::move(Parms.View_Location);

	if (Modified_View_Location != nullptr)
		*Modified_View_Location = std::move(Parms.Modified_View_Location);
}


// Function CM_SwayHandicam.CM_SwayHandicam_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ViewLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   FOV                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NewViewLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         NewViewRotation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   NewFOV                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_SwayHandicam_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_SwayHandicam_C", "BlueprintModifyCamera");

	Params::CM_SwayHandicam_C_BlueprintModifyCamera Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ViewLocation = std::move(ViewLocation);
	Parms.ViewRotation = std::move(ViewRotation);
	Parms.FOV = FOV;

	UObject::ProcessEvent(Func, &Parms);

	if (NewViewLocation != nullptr)
		*NewViewLocation = std::move(Parms.NewViewLocation);

	if (NewViewRotation != nullptr)
		*NewViewRotation = std::move(Parms.NewViewRotation);

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;
}

}

