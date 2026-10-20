#include "common.h"

extern s32 D_00522DD0[];

void func_0020F180();

int DisableIntc(int intc);

s32 RemoveIntcHandler(s32 cause, s32 handler_id);

extern s32 gHandlerId[];

void func_002E5AC8();

void func_002E5E40();

extern s32 D_00522D6C[];

extern s32 D_00522D70[];

extern s32 D_00522D74[];

extern s32 D_00522D78[];

void func_0020A590();

void func_0020A5F0();

void func_0020A610();

void func_0020A640();

void func_0020EF40();

// fills the four handler slots with the timer-0 callbacks and returns the first slot's address
s32 *func_0020A540(void)
{
    D_00522D6C[0] = (s32)func_0020A640;
    D_00522D70[0] = (s32)func_0020A610;
    D_00522D74[0] = (s32)func_0020A5F0;
    D_00522D78[0] = (s32)func_0020A590;
    return D_00522D6C;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020A590);

void func_0020A5F0(s32 arg0, s32 arg1)
{
    func_0020EF40(D_00522DD0, arg0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020A610);

void func_0020A640(s32 arg0)
{
    func_0020F180(D_00522DD0, arg0);
}

// takes down the handler on INTC cause 9 (timer 0); gHandlerId holds the id AddIntcHandler returned
void func_0020A650(void)
{
    DisableIntc(9);
    RemoveIntcHandler(9, gHandlerId[0]);
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
