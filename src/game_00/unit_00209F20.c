#include "common.h"
#include "types.h"

extern u64 D_00522D60[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_00209F20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_00209FD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A100);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A110);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A1B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A260);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A380);

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
