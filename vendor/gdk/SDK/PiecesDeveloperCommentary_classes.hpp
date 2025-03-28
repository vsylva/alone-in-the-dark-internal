#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesDeveloperCommentary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class PiecesDeveloperCommentary.DeveloperCommentaryGizmo
// 0x0028 (0x0260 - 0x0238)
class ADeveloperCommentaryGizmo : public AActor
{
public:
	TSoftObjectPtr<class UFMODEvent>              Commentary;                                        // 0x0238(0x0028)(Edit, BlueprintVisible, DisableEditOnTemplate, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void OnCommentaryAllowedChanged(bool bDevCommentsEnabled);
	bool StartCommentaryPlayback();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeveloperCommentaryGizmo">();
	}
	static class ADeveloperCommentaryGizmo* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADeveloperCommentaryGizmo>();
	}
};
static_assert(alignof(ADeveloperCommentaryGizmo) == 0x000008, "Wrong alignment on ADeveloperCommentaryGizmo");
static_assert(sizeof(ADeveloperCommentaryGizmo) == 0x000260, "Wrong size on ADeveloperCommentaryGizmo");
static_assert(offsetof(ADeveloperCommentaryGizmo, Commentary) == 0x000238, "Member 'ADeveloperCommentaryGizmo::Commentary' has a wrong offset!");

// Class PiecesDeveloperCommentary.PiecesDevCommentsGameUserSettingsInterface
// 0x0000 (0x0028 - 0x0028)
class IPiecesDevCommentsGameUserSettingsInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesDevCommentsGameUserSettingsInterface">();
	}
	static class IPiecesDevCommentsGameUserSettingsInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPiecesDevCommentsGameUserSettingsInterface>();
	}
};
static_assert(alignof(IPiecesDevCommentsGameUserSettingsInterface) == 0x000008, "Wrong alignment on IPiecesDevCommentsGameUserSettingsInterface");
static_assert(sizeof(IPiecesDevCommentsGameUserSettingsInterface) == 0x000028, "Wrong size on IPiecesDevCommentsGameUserSettingsInterface");

// Class PiecesDeveloperCommentary.PiecesDeveloperCommentarySubsystem
// 0x0048 (0x0078 - 0x0030)
class UPiecesDeveloperCommentarySubsystem final : public UWorldSubsystem
{
public:
	FMulticastInlineDelegateProperty_             OnDevCommentsAllowedChanged;                       // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x38];                                      // 0x0040(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CommentaryPlaybackChanged__DelegateSignature(class UFMODEvent* NewCommentary);
	void DevCommentsAllowedChanged__DelegateSignature(bool bDevCommentsEnabled);
	void StopCurrentCommentary();
	bool UpdateDevCommentsEnabled();

	bool AreCommentsAllowed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesDeveloperCommentarySubsystem">();
	}
	static class UPiecesDeveloperCommentarySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesDeveloperCommentarySubsystem>();
	}
};
static_assert(alignof(UPiecesDeveloperCommentarySubsystem) == 0x000008, "Wrong alignment on UPiecesDeveloperCommentarySubsystem");
static_assert(sizeof(UPiecesDeveloperCommentarySubsystem) == 0x000078, "Wrong size on UPiecesDeveloperCommentarySubsystem");
static_assert(offsetof(UPiecesDeveloperCommentarySubsystem, OnDevCommentsAllowedChanged) == 0x000030, "Member 'UPiecesDeveloperCommentarySubsystem::OnDevCommentsAllowedChanged' has a wrong offset!");

}

