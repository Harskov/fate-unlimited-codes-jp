#include "common.h"
#include "types.h"

extern s32 D_003D3418[];

s32 GetThreadId(void);

s32 ChangeThreadPriority(s32 threadId, s32 priority);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A2E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A310);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A360);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A3D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A450);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A4A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A4F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A520);

void func_0015A580(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A590);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A5B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A690);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A6F0);

void func_0015A7C0(void)
{
    D_003D3418[0] = ChangeThreadPriority(GetThreadId(), 1);
    ChangeThreadPriority(GetThreadId(), D_003D3418[0]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A810);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", main);

void func_0015AA30(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015AA40);
