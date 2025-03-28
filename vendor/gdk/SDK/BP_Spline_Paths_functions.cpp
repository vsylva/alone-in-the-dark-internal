#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Spline_Paths

#include "Basic.hpp"

#include "BP_Spline_Paths_classes.hpp"
#include "BP_Spline_Paths_parameters.hpp"


namespace SDK
{

// Function BP_Spline_Paths.BP_Spline_Paths_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Spline_Paths_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spline_Paths_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Spline_Paths.BP_Spline_Paths_C.AddLastIndexMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                      InputMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Spline_Paths_C::AddLastIndexMesh(class UStaticMesh* InputMesh, const struct FVector& Rotation, const struct FVector& Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spline_Paths_C", "AddLastIndexMesh");

	Params::BP_Spline_Paths_C_AddLastIndexMesh Parms{};

	Parms.InputMesh = InputMesh;
	Parms.Rotation = std::move(Rotation);
	Parms.Scale = std::move(Scale);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Spline_Paths.BP_Spline_Paths_C.SetPathMeshMaterialOverride
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              PathMeshComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_Spline_Paths_C::SetPathMeshMaterialOverride(class UPrimitiveComponent* PathMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spline_Paths_C", "SetPathMeshMaterialOverride");

	Params::BP_Spline_Paths_C_SetPathMeshMaterialOverride Parms{};

	Parms.PathMeshComponent = PathMeshComponent;

	UObject::ProcessEvent(Func, &Parms);
}

}

