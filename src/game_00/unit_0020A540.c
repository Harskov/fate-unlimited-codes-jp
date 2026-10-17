#include "common.h"

extern s32 D_00522DD0[];

void func_0020F180();

int DisableIntc(int intc);

s32 RemoveIntcHandler(s32 cause, s32 handler_id);

extern s32 D_00522D68[];

void func_002E5AC8();

void func_002E5E40();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020A540);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020A590);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020A5F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020A610);

void func_0020A640(s32 arg0)
{
    func_0020F180(D_00522DD0, arg0);
}

// takes down the handler on INTC cause 9 (timer 0); D_00522D68 holds the id AddIntcHandler returned
void func_0020A650(void)
{
    DisableIntc(9);
    RemoveIntcHandler(9, D_00522D68[0]);
    func_002E5AC8();
    func_002E5E40();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020A690);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020AD60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020AF60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020B280);

void func_0020B5A0(void)
{
}

void func_0020B5B0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020B5C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020B6F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020B8E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020BB40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020BC10);
