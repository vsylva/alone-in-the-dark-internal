#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CheatInputActor

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_CheatInputActor.BPI_CheatInputActor_C.SetConsoleCommandRef
// 0x0008 (0x0008 - 0x0000)
struct BPI_CheatInputActor_C_SetConsoleCommandRef final
{
public:
	class AController*                            Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CheatInputActor_C_SetConsoleCommandRef) == 0x000008, "Wrong alignment on BPI_CheatInputActor_C_SetConsoleCommandRef");
static_assert(sizeof(BPI_CheatInputActor_C_SetConsoleCommandRef) == 0x000008, "Wrong size on BPI_CheatInputActor_C_SetConsoleCommandRef");
static_assert(offsetof(BPI_CheatInputActor_C_SetConsoleCommandRef, Controller) == 0x000000, "Member 'BPI_CheatInputActor_C_SetConsoleCommandRef::Controller' has a wrong offset!");

}

