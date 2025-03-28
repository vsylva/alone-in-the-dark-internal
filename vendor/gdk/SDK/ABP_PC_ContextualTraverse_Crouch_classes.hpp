#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PC_ContextualTraverse_Crouch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ObsidianFox_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_PC_ContextualTraverse_Crouch.ABP_PC_ContextualTraverse_Crouch_C
// 0x0980 (0x1D30 - 0x13B0)
class UABP_PC_ContextualTraverse_Crouch_C final : public UContextualTraverseAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x13B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x13B8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x13E8(0x0118)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x1500(0x0158)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x1658(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x1680(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x16A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x16D0(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x16F8(0x0128)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x1820(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1850(0x00B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x1900(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1930(0x00B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x19E0(0x0030)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1A10(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1A38(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1A68(0x00B0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1B18(0x0030)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x1B48(0x00B0)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x1BF8(0x0118)()
	bool                                          IsCrouching;                                       // 0x1D10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D11[0x7];                                     // 0x1D11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PlayerCharacterContextualMovementAnimations_C* Animations;                                        // 0x1D18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EndTraverse;                                       // 0x1D20(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ContextualMovement(const struct FPoseLink& ContextualMovementInputPose, struct FPoseLink* ContextualMovement_0);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Crouch_AnimGraphNode_SequencePlayer_0F7DBAEB4E1D0F9301450FAAF482F646();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Crouch_AnimGraphNode_SequencePlayer_EAC0B5ED414EFD0C2DB95BB662C21EBC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_ContextualTraverse_Crouch_AnimGraphNode_BlendSpacePlayer_5F5407FA4E9ADAC49B1B3FB8B05E6230();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintLinkedAnimationLayersInitialized();
	void AnimNotify_EndTraverse();
	void ExecuteUbergraph_ABP_PC_ContextualTraverse_Crouch(int32 EntryPoint);
	void EndTraverse__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_PC_ContextualTraverse_Crouch_C">();
	}
	static class UABP_PC_ContextualTraverse_Crouch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_PC_ContextualTraverse_Crouch_C>();
	}
};
static_assert(alignof(UABP_PC_ContextualTraverse_Crouch_C) == 0x000010, "Wrong alignment on UABP_PC_ContextualTraverse_Crouch_C");
static_assert(sizeof(UABP_PC_ContextualTraverse_Crouch_C) == 0x001D30, "Wrong size on UABP_PC_ContextualTraverse_Crouch_C");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, UberGraphFrame) == 0x0013B0, "Member 'UABP_PC_ContextualTraverse_Crouch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_Root_1) == 0x0013B8, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_LinkedInputPose_1) == 0x0013E8, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_SaveCachedPose) == 0x001500, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_TransitionResult_3) == 0x001658, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_TransitionResult_2) == 0x001680, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_TransitionResult_1) == 0x0016A8, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_TransitionResult) == 0x0016D0, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_BlendSpacePlayer) == 0x0016F8, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_StateResult_3) == 0x001820, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_SequencePlayer_1) == 0x001850, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_StateResult_2) == 0x001900, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_SequencePlayer) == 0x001930, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_StateResult_1) == 0x0019E0, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_UseCachedPose) == 0x001A10, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_StateResult) == 0x001A38, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_StateMachine) == 0x001A68, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_Root) == 0x001B18, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_LinkedAnimLayer) == 0x001B48, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, AnimGraphNode_LinkedInputPose) == 0x001BF8, "Member 'UABP_PC_ContextualTraverse_Crouch_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, IsCrouching) == 0x001D10, "Member 'UABP_PC_ContextualTraverse_Crouch_C::IsCrouching' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, Animations) == 0x001D18, "Member 'UABP_PC_ContextualTraverse_Crouch_C::Animations' has a wrong offset!");
static_assert(offsetof(UABP_PC_ContextualTraverse_Crouch_C, EndTraverse) == 0x001D20, "Member 'UABP_PC_ContextualTraverse_Crouch_C::EndTraverse' has a wrong offset!");

}

