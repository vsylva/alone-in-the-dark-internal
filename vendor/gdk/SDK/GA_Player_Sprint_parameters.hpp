#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Player_Sprint

#include "Basic.hpp"

#include "ObsidianFox_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Player_Sprint.GA_Player_Sprint_C.ExecuteUbergraph_GA_Player_Sprint
// 0x0298 (0x0298 - 0x0000)
struct GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitInputPress*            CallFunc_WaitInputPress_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitInputActionAll*        CallFunc_WaitInputActionTriggered_ReturnValue;     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x00E4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitInputActionAll*        CallFunc_WaitInputActionTriggered_ReturnValue_1;   // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayAbility*                       K2Node_CustomEvent_ActivatedAbility_1;             // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UGameplayAbility* ActivatedAbility)> K2Node_CreateDelegate_OutputDelegate_13;           // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
	class UGameplayAbility*                       Temp_object_Variable;                              // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitAbilityCommit*         CallFunc_WaitForAbilityCommit_ReturnValue;         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x3];                                      // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UGameplayAbility* ActivatedAbility)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x0144(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       K2Node_CustomEvent_ActivatedAbility;               // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayAbility*                       Temp_object_Variable_1;                            // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitAbilityActivate*       CallFunc_WaitForAbilityActivate_ReturnValue;       // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x3];                                      // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_15;           // 0x0174(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_TimeWaited;                     // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitMinVelocity*           CallFunc_CreateWaitMinVelocity_ReturnValue;        // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1AA[0x2];                                      // 0x01AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B5[0x3];                                      // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x01B8(0x0048)(ContainsInstancedReference)
	TDelegate<void(float TimeWaited)>             K2Node_CreateDelegate_OutputDelegate_16;           // 0x0200(0x0010)(ZeroConstructor, NoDestructor)
	class UPlayerCharacterMovementComponent*      K2Node_DynamicCast_AsPlayer_Character_Movement_Component; // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21A[0x6];                                      // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue_1;               // 0x0220(0x0048)(ContainsInstancedReference)
	bool                                          CallFunc_SprintRequiresHeldInput_ReturnValue;      // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_269[0x7];                                      // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterMovementComponent*      K2Node_DynamicCast_AsPlayer_Character_Movement_Component_1; // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SprintRequiresHeldInput_ReturnValue_1;    // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27A[0x2];                                      // 0x027A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_17;           // 0x027C(0x0010)(ZeroConstructor, NoDestructor)
	EPlayerCharacterType                          CallFunc_GetPlayerCharacterType_ReturnValue;       // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28D[0x3];                                      // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint) == 0x000008, "Wrong alignment on GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint");
static_assert(sizeof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint) == 0x000298, "Wrong size on GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, EntryPoint) == 0x000000, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_WaitInputPress_ReturnValue) == 0x000008, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_WaitInputPress_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_3) == 0x000044, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_4) == 0x000054, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_5) == 0x000064, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_6) == 0x000074, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_WaitInputActionTriggered_ReturnValue) == 0x000088, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_WaitInputActionTriggered_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_7) == 0x000094, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000A4, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_9) == 0x0000B4, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_10) == 0x0000C4, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_11) == 0x0000D4, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_12) == 0x0000E4, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_WaitInputActionTriggered_ReturnValue_1) == 0x0000F8, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_WaitInputActionTriggered_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CustomEvent_Loaded) == 0x000100, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_IsValid_ReturnValue_2) == 0x000108, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, Temp_class_Variable) == 0x000110, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CustomEvent_ActivatedAbility_1) == 0x000118, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CustomEvent_ActivatedAbility_1' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_13) == 0x000120, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, Temp_object_Variable) == 0x000130, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_WaitForAbilityCommit_ReturnValue) == 0x000138, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_WaitForAbilityCommit_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_IsValid_ReturnValue_3) == 0x000140, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_14) == 0x000144, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CustomEvent_ActivatedAbility) == 0x000158, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CustomEvent_ActivatedAbility' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, Temp_object_Variable_1) == 0x000160, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_WaitForAbilityActivate_ReturnValue) == 0x000168, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_WaitForAbilityActivate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_IsValid_ReturnValue_4) == 0x000170, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_15) == 0x000174, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x000188, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_IsValid_ReturnValue_5) == 0x000190, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CustomEvent_TimeWaited) == 0x000194, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CustomEvent_TimeWaited' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_K2_CommitAbility_ReturnValue) == 0x000198, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_CreateWaitMinVelocity_ReturnValue) == 0x0001A0, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_CreateWaitMinVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_IsValid_ReturnValue_6) == 0x0001A8, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_IsValid_ReturnValue_7) == 0x0001A9, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x0001AC, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_Add_FloatFloat_ReturnValue) == 0x0001B0, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0001B4, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_GetActorInfo_ReturnValue) == 0x0001B8, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_16) == 0x000200, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_DynamicCast_AsPlayer_Character_Movement_Component) == 0x000210, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_DynamicCast_AsPlayer_Character_Movement_Component' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_DynamicCast_bSuccess) == 0x000218, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_Event_bWasCancelled) == 0x000219, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_GetActorInfo_ReturnValue_1) == 0x000220, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_GetActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_SprintRequiresHeldInput_ReturnValue) == 0x000268, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_SprintRequiresHeldInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_DynamicCast_AsPlayer_Character_Movement_Component_1) == 0x000270, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_DynamicCast_AsPlayer_Character_Movement_Component_1' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_DynamicCast_bSuccess_1) == 0x000278, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_SprintRequiresHeldInput_ReturnValue_1) == 0x000279, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_SprintRequiresHeldInput_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, K2Node_CreateDelegate_OutputDelegate_17) == 0x00027C, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_GetPlayerCharacterType_ReturnValue) == 0x00028C, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_GetPlayerCharacterType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, Temp_float_Variable) == 0x000290, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000294, "Member 'GA_Player_Sprint_C_ExecuteUbergraph_GA_Player_Sprint::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function GA_Player_Sprint.GA_Player_Sprint_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Player_Sprint_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Player_Sprint_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Player_Sprint_C_K2_OnEndAbility");
static_assert(sizeof(GA_Player_Sprint_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Player_Sprint_C_K2_OnEndAbility");
static_assert(offsetof(GA_Player_Sprint_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Player_Sprint_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Player_Sprint.GA_Player_Sprint_C.OnActivate_480591ED487948A9E665D1B8D409A27D
// 0x0008 (0x0008 - 0x0000)
struct GA_Player_Sprint_C_OnActivate_480591ED487948A9E665D1B8D409A27D final
{
public:
	class UGameplayAbility*                       ActivatedAbility;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Player_Sprint_C_OnActivate_480591ED487948A9E665D1B8D409A27D) == 0x000008, "Wrong alignment on GA_Player_Sprint_C_OnActivate_480591ED487948A9E665D1B8D409A27D");
static_assert(sizeof(GA_Player_Sprint_C_OnActivate_480591ED487948A9E665D1B8D409A27D) == 0x000008, "Wrong size on GA_Player_Sprint_C_OnActivate_480591ED487948A9E665D1B8D409A27D");
static_assert(offsetof(GA_Player_Sprint_C_OnActivate_480591ED487948A9E665D1B8D409A27D, ActivatedAbility) == 0x000000, "Member 'GA_Player_Sprint_C_OnActivate_480591ED487948A9E665D1B8D409A27D::ActivatedAbility' has a wrong offset!");

// Function GA_Player_Sprint.GA_Player_Sprint_C.OnCommit_4407EE704C8495F73F9F82B3E7D5F84B
// 0x0008 (0x0008 - 0x0000)
struct GA_Player_Sprint_C_OnCommit_4407EE704C8495F73F9F82B3E7D5F84B final
{
public:
	class UGameplayAbility*                       ActivatedAbility;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Player_Sprint_C_OnCommit_4407EE704C8495F73F9F82B3E7D5F84B) == 0x000008, "Wrong alignment on GA_Player_Sprint_C_OnCommit_4407EE704C8495F73F9F82B3E7D5F84B");
static_assert(sizeof(GA_Player_Sprint_C_OnCommit_4407EE704C8495F73F9F82B3E7D5F84B) == 0x000008, "Wrong size on GA_Player_Sprint_C_OnCommit_4407EE704C8495F73F9F82B3E7D5F84B");
static_assert(offsetof(GA_Player_Sprint_C_OnCommit_4407EE704C8495F73F9F82B3E7D5F84B, ActivatedAbility) == 0x000000, "Member 'GA_Player_Sprint_C_OnCommit_4407EE704C8495F73F9F82B3E7D5F84B::ActivatedAbility' has a wrong offset!");

// Function GA_Player_Sprint.GA_Player_Sprint_C.OnLoaded_AFA62ADB4C74CAC7D8FD898D26E180E4
// 0x0008 (0x0008 - 0x0000)
struct GA_Player_Sprint_C_OnLoaded_AFA62ADB4C74CAC7D8FD898D26E180E4 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(GA_Player_Sprint_C_OnLoaded_AFA62ADB4C74CAC7D8FD898D26E180E4) == 0x000008, "Wrong alignment on GA_Player_Sprint_C_OnLoaded_AFA62ADB4C74CAC7D8FD898D26E180E4");
static_assert(sizeof(GA_Player_Sprint_C_OnLoaded_AFA62ADB4C74CAC7D8FD898D26E180E4) == 0x000008, "Wrong size on GA_Player_Sprint_C_OnLoaded_AFA62ADB4C74CAC7D8FD898D26E180E4");
static_assert(offsetof(GA_Player_Sprint_C_OnLoaded_AFA62ADB4C74CAC7D8FD898D26E180E4, Loaded) == 0x000000, "Member 'GA_Player_Sprint_C_OnLoaded_AFA62ADB4C74CAC7D8FD898D26E180E4::Loaded' has a wrong offset!");

// Function GA_Player_Sprint.GA_Player_Sprint_C.OnPress_40EA5FBC4A342808FDA9599FFE505B7B
// 0x0004 (0x0004 - 0x0000)
struct GA_Player_Sprint_C_OnPress_40EA5FBC4A342808FDA9599FFE505B7B final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Player_Sprint_C_OnPress_40EA5FBC4A342808FDA9599FFE505B7B) == 0x000004, "Wrong alignment on GA_Player_Sprint_C_OnPress_40EA5FBC4A342808FDA9599FFE505B7B");
static_assert(sizeof(GA_Player_Sprint_C_OnPress_40EA5FBC4A342808FDA9599FFE505B7B) == 0x000004, "Wrong size on GA_Player_Sprint_C_OnPress_40EA5FBC4A342808FDA9599FFE505B7B");
static_assert(offsetof(GA_Player_Sprint_C_OnPress_40EA5FBC4A342808FDA9599FFE505B7B, TimeWaited) == 0x000000, "Member 'GA_Player_Sprint_C_OnPress_40EA5FBC4A342808FDA9599FFE505B7B::TimeWaited' has a wrong offset!");

// Function GA_Player_Sprint.GA_Player_Sprint_C.Add Sprint Effect
// 0x000C (0x000C - 0x0000)
struct GA_Player_Sprint_C_Add_Sprint_Effect final
{
public:
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Player_Sprint_C_Add_Sprint_Effect) == 0x000004, "Wrong alignment on GA_Player_Sprint_C_Add_Sprint_Effect");
static_assert(sizeof(GA_Player_Sprint_C_Add_Sprint_Effect) == 0x00000C, "Wrong size on GA_Player_Sprint_C_Add_Sprint_Effect");
static_assert(offsetof(GA_Player_Sprint_C_Add_Sprint_Effect, CallFunc_GetAbilityLevel_ReturnValue) == 0x000000, "Member 'GA_Player_Sprint_C_Add_Sprint_Effect::CallFunc_GetAbilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_Add_Sprint_Effect, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000004, "Member 'GA_Player_Sprint_C_Add_Sprint_Effect::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

// Function GA_Player_Sprint.GA_Player_Sprint_C.Add Sprint Boost Effect
// 0x000C (0x000C - 0x0000)
struct GA_Player_Sprint_C_Add_Sprint_Boost_Effect final
{
public:
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Player_Sprint_C_Add_Sprint_Boost_Effect) == 0x000004, "Wrong alignment on GA_Player_Sprint_C_Add_Sprint_Boost_Effect");
static_assert(sizeof(GA_Player_Sprint_C_Add_Sprint_Boost_Effect) == 0x00000C, "Wrong size on GA_Player_Sprint_C_Add_Sprint_Boost_Effect");
static_assert(offsetof(GA_Player_Sprint_C_Add_Sprint_Boost_Effect, CallFunc_GetAbilityLevel_ReturnValue) == 0x000000, "Member 'GA_Player_Sprint_C_Add_Sprint_Boost_Effect::CallFunc_GetAbilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_Add_Sprint_Boost_Effect, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000004, "Member 'GA_Player_Sprint_C_Add_Sprint_Boost_Effect::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

// Function GA_Player_Sprint.GA_Player_Sprint_C.Add Sprint Boost If Within Boost Restart Window
// 0x0020 (0x0020 - 0x0000)
struct GA_Player_Sprint_C_Add_Sprint_Boost_If_Within_Boost_Restart_Window final
{
public:
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Player_Sprint_C_Add_Sprint_Boost_If_Within_Boost_Restart_Window) == 0x000008, "Wrong alignment on GA_Player_Sprint_C_Add_Sprint_Boost_If_Within_Boost_Restart_Window");
static_assert(sizeof(GA_Player_Sprint_C_Add_Sprint_Boost_If_Within_Boost_Restart_Window) == 0x000020, "Wrong size on GA_Player_Sprint_C_Add_Sprint_Boost_If_Within_Boost_Restart_Window");
static_assert(offsetof(GA_Player_Sprint_C_Add_Sprint_Boost_If_Within_Boost_Restart_Window, CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue) == 0x000000, "Member 'GA_Player_Sprint_C_Add_Sprint_Boost_If_Within_Boost_Restart_Window::CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_Add_Sprint_Boost_If_Within_Boost_Restart_Window, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000008, "Member 'GA_Player_Sprint_C_Add_Sprint_Boost_If_Within_Boost_Restart_Window::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_Add_Sprint_Boost_If_Within_Boost_Restart_Window, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000018, "Member 'GA_Player_Sprint_C_Add_Sprint_Boost_If_Within_Boost_Restart_Window::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");

// Function GA_Player_Sprint.GA_Player_Sprint_C.SprintRequiresHeldInput
// 0x0058 (0x0058 - 0x0000)
struct GA_Player_Sprint_C_SprintRequiresHeldInput final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0048)(ContainsInstancedReference)
	int32                                         CallFunc_GetPlayerControllerID_ReturnValue;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSprintRequireHeldInput_ReturnValue;   // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Player_Sprint_C_SprintRequiresHeldInput) == 0x000008, "Wrong alignment on GA_Player_Sprint_C_SprintRequiresHeldInput");
static_assert(sizeof(GA_Player_Sprint_C_SprintRequiresHeldInput) == 0x000058, "Wrong size on GA_Player_Sprint_C_SprintRequiresHeldInput");
static_assert(offsetof(GA_Player_Sprint_C_SprintRequiresHeldInput, ReturnValue) == 0x000000, "Member 'GA_Player_Sprint_C_SprintRequiresHeldInput::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_SprintRequiresHeldInput, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GA_Player_Sprint_C_SprintRequiresHeldInput::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_SprintRequiresHeldInput, CallFunc_GetPlayerControllerID_ReturnValue) == 0x000050, "Member 'GA_Player_Sprint_C_SprintRequiresHeldInput::CallFunc_GetPlayerControllerID_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Player_Sprint_C_SprintRequiresHeldInput, CallFunc_DoesSprintRequireHeldInput_ReturnValue) == 0x000054, "Member 'GA_Player_Sprint_C_SprintRequiresHeldInput::CallFunc_DoesSprintRequireHeldInput_ReturnValue' has a wrong offset!");

// Function GA_Player_Sprint.GA_Player_Sprint_C.Get Sprint Min Velocity
// 0x0004 (0x0004 - 0x0000)
struct GA_Player_Sprint_C_Get_Sprint_Min_Velocity final
{
public:
	float                                         Min_Velocity_0;                                    // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Player_Sprint_C_Get_Sprint_Min_Velocity) == 0x000004, "Wrong alignment on GA_Player_Sprint_C_Get_Sprint_Min_Velocity");
static_assert(sizeof(GA_Player_Sprint_C_Get_Sprint_Min_Velocity) == 0x000004, "Wrong size on GA_Player_Sprint_C_Get_Sprint_Min_Velocity");
static_assert(offsetof(GA_Player_Sprint_C_Get_Sprint_Min_Velocity, Min_Velocity_0) == 0x000000, "Member 'GA_Player_Sprint_C_Get_Sprint_Min_Velocity::Min_Velocity_0' has a wrong offset!");

}

