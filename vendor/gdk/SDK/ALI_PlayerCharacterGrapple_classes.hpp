#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_PlayerCharacterGrapple

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ALI_PlayerCharacterGrapple.ALI_PlayerCharacterGrapple_C
// 0x0000 (0x0028 - 0x0028)
class IALI_PlayerCharacterGrapple_C final : public IAnimLayerInterface
{
public:
	void GrappleWalkLayer(const struct FPoseLink& GrappleWalkLayerInputPose, struct FPoseLink* GrappleWalkLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_PlayerCharacterGrapple_C">();
	}
	static class IALI_PlayerCharacterGrapple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_PlayerCharacterGrapple_C>();
	}
};
static_assert(alignof(IALI_PlayerCharacterGrapple_C) == 0x000008, "Wrong alignment on IALI_PlayerCharacterGrapple_C");
static_assert(sizeof(IALI_PlayerCharacterGrapple_C) == 0x000028, "Wrong size on IALI_PlayerCharacterGrapple_C");

}

