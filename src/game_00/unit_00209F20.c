#include "common.h"
#include "types.h"

extern u64 D_00522D60[];

extern s32 D_00522DB0[];

void func_00207630();

void func_00207F00();

void func_0020EE60();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_00209F20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_00209FD0);

void func_0020A100(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A110);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A1B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A260);

void func_0020A380(s32 arg0)
{
    // !FAKE: the bytes store zero into the argument when it is already zero (bnez over a daddu); the author's form behind that redundant store is unknown
    if (arg0 == 0) {
        arg0 = 0;
    }
    if (arg0 != 0) {
        if (arg0 > 2) {
            func_0020EE60(D_00522DB0);
        }
        func_00207F00(1);
        func_00207630(1);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A3D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A440);

int func_0020A4E0(int cause)
{
    if (cause == 9 && (*(volatile u32 *)0x10000010 & 0x800)) {
        *(volatile u32 *)0x10000010 |= 0x800;
        D_00522D60[0] += 0x10000;
    }
    asm {
        sync
        ei
    }
    return 0;
}
