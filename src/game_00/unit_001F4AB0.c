#include "common.h"

extern s32 D_00501678[];

extern s32 D_0051FA30[];

extern s32 func_001FF000();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4AB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4B00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4B50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4BE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4C80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4E20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4FD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F50B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F51B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5280);

void func_001F5300(void)
{
    void *p;

    while (1) {
        p = (void *)func_001F5980(0);
        if (p == 0)
            break;
        func_001F5340(p);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5490);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5570);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F58F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5980);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F59E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5A00);

void func_001F5A30(void)
{
    D_0051FA30[0] = func_001FF000(D_00501678, 0x04000040);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5A60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5AA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5AD0);
