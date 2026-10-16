#include "common.h"
#include "types.h"

extern u64 D_00522D60[];

extern char D_005019A0[];

extern char D_005019C0[];

extern char D_005019E0[];

extern char D_00501A00[];

extern char D_00501A20[];

extern char D_00501A40[];

extern int sceSifRebootIop();

extern int sceSifSyncIop();

extern int func_0010C5E8();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_00209F20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_00209FD0);

void func_0020A100(void)
{
}

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
