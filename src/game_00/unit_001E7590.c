#include "common.h"

extern short D_0051F350[];

extern void (*D_0052C158[])(int, int);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7590", func_001E7590);

void func_001E7780(void)
{
}

int func_001E7790(void)
{
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7590", func_001E77A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7590", func_001E77F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7590", func_001E7870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7590", func_001E78F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7590", func_001E7960);

void func_001E79D0(int *arg0)
{
    if (*arg0 & 0x1000) {
        func_00302160(0);
        func_00302178(0);
    }
    if (D_0051F350[0] != 0) {
        D_0052C158[0](0xE, 0);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7590", func_001E7A40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7590", func_001E7BB0);
