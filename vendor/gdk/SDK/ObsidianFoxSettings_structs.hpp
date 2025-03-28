#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ObsidianFoxSettings

#include "Basic.hpp"

#include "PiecesPlatform_structs.hpp"


namespace SDK
{

// Enum ObsidianFoxSettings.EMotionBlurQuality
// NumValues: 0x0006
enum class EMotionBlurQuality : uint8
{
	Off                                      = 0,
	Low                                      = 1,
	Medium                                   = 2,
	High                                     = 3,
	Ultra                                    = 4,
	EMotionBlurQuality_MAX                   = 5,
};

// Enum ObsidianFoxSettings.FGraphicsMode
// NumValues: 0x0003
enum class EFGraphicsMode : uint8
{
	Performance                              = 0,
	Quality                                  = 1,
	FGraphicsMode_MAX                        = 2,
};

// Enum ObsidianFoxSettings.EPostEffectExtra
// NumValues: 0x0006
enum class EPostEffectExtra : uint8
{
	Off                                      = 0,
	EightBit                                 = 1,
	Letterbox                                = 2,
	ClassicNoir                              = 3,
	Sepia                                    = 4,
	EPostEffectExtra_MAX                     = 5,
};

// Enum ObsidianFoxSettings.ESubtitleSizes
// NumValues: 0x0004
enum class ESubtitleSizes : uint8
{
	Small                                    = 0,
	Medium                                   = 1,
	Large                                    = 2,
	ESubtitleSizes_MAX                       = 3,
};

// Enum ObsidianFoxSettings.FOptionsSection
// NumValues: 0x0007
enum class EFOptionsSection : uint8
{
	Gameplay                                 = 0,
	Controls                                 = 1,
	Audio                                    = 2,
	Display                                  = 3,
	Video                                    = 4,
	MAX_COUNT                                = 5,
	FOptionsSection_MAX                      = 6,
};

// Enum ObsidianFoxSettings.EPlayerGuidanceSystem
// NumValues: 0x0008
enum class EPlayerGuidanceSystem : uint8
{
	None                                     = 0,
	MapHighlight                             = 1,
	DynamicObjectives                        = 2,
	ClueHighlight                            = 4,
	InteractionHighlight                     = 8,
	UnSet                                    = 16,
	AllSystems                               = 15,
	EPlayerGuidanceSystem_MAX                = 17,
};

// Enum ObsidianFoxSettings.EDifficulty
// NumValues: 0x0006
enum class EDifficulty : uint8
{
	Easy                                     = 0,
	Medium                                   = 1,
	Hard                                     = 2,
	NewGamePlus                              = 3,
	None                                     = 4,
	EDifficulty_MAX                          = 5,
};

// Enum ObsidianFoxSettings.EPlayerGuidanceLevel
// NumValues: 0x0004
enum class EPlayerGuidanceLevel : uint8
{
	OldSchool                                = 0,
	Modern                                   = 1,
	Custom                                   = 2,
	EPlayerGuidanceLevel_MAX                 = 3,
};

// Enum ObsidianFoxSettings.EProjectType
// NumValues: 0x0003
enum class EProjectType : uint8
{
	FullGame                                 = 0,
	PlayableTeaser                           = 1,
	EProjectType_MAX                         = 2,
};

// ScriptStruct ObsidianFoxSettings.PostProcessEffectSelector
// 0x00A0 (0x00A0 - 0x0000)
struct FPostProcessEffectSelector final
{
public:
	TMap<EPlatformtype, TSoftClassPtr<class UClass>> SDREffects;                                        // 0x0000(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<EPlatformtype, TSoftClassPtr<class UClass>> HDREffects;                                        // 0x0050(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPostProcessEffectSelector) == 0x000008, "Wrong alignment on FPostProcessEffectSelector");
static_assert(sizeof(FPostProcessEffectSelector) == 0x0000A0, "Wrong size on FPostProcessEffectSelector");
static_assert(offsetof(FPostProcessEffectSelector, SDREffects) == 0x000000, "Member 'FPostProcessEffectSelector::SDREffects' has a wrong offset!");
static_assert(offsetof(FPostProcessEffectSelector, HDREffects) == 0x000050, "Member 'FPostProcessEffectSelector::HDREffects' has a wrong offset!");

// ScriptStruct ObsidianFoxSettings.OFGraphicsModeSettings
// 0x0010 (0x0010 - 0x0000)
struct FOFGraphicsModeSettings final
{
public:
	int32                                         MaxDynamicRes;                                     // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinDynamicRes;                                     // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameRate;                                         // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVSync;                                            // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDynamicResolutionEnabled;                         // 0x000D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FOFGraphicsModeSettings) == 0x000004, "Wrong alignment on FOFGraphicsModeSettings");
static_assert(sizeof(FOFGraphicsModeSettings) == 0x000010, "Wrong size on FOFGraphicsModeSettings");
static_assert(offsetof(FOFGraphicsModeSettings, MaxDynamicRes) == 0x000000, "Member 'FOFGraphicsModeSettings::MaxDynamicRes' has a wrong offset!");
static_assert(offsetof(FOFGraphicsModeSettings, MinDynamicRes) == 0x000004, "Member 'FOFGraphicsModeSettings::MinDynamicRes' has a wrong offset!");
static_assert(offsetof(FOFGraphicsModeSettings, FrameRate) == 0x000008, "Member 'FOFGraphicsModeSettings::FrameRate' has a wrong offset!");
static_assert(offsetof(FOFGraphicsModeSettings, bVSync) == 0x00000C, "Member 'FOFGraphicsModeSettings::bVSync' has a wrong offset!");
static_assert(offsetof(FOFGraphicsModeSettings, bDynamicResolutionEnabled) == 0x00000D, "Member 'FOFGraphicsModeSettings::bDynamicResolutionEnabled' has a wrong offset!");

// ScriptStruct ObsidianFoxSettings.OFSlowHDDModeSettings
// 0x0004 (0x0004 - 0x0000)
struct FOFSlowHDDModeSettings final
{
public:
	float                                         PriorityAsyncLoadingExtraTime;                     // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOFSlowHDDModeSettings) == 0x000004, "Wrong alignment on FOFSlowHDDModeSettings");
static_assert(sizeof(FOFSlowHDDModeSettings) == 0x000004, "Wrong size on FOFSlowHDDModeSettings");
static_assert(offsetof(FOFSlowHDDModeSettings, PriorityAsyncLoadingExtraTime) == 0x000000, "Member 'FOFSlowHDDModeSettings::PriorityAsyncLoadingExtraTime' has a wrong offset!");

}

