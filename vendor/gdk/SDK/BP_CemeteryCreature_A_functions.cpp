#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CemeteryCreature_A

#include "Basic.hpp"

#include "BP_CemeteryCreature_A_classes.hpp"


namespace SDK
{

// Function BP_CemeteryCreature_A.BP_CemeteryCreature_A_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CemeteryCreature_A_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CemeteryCreature_A_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

