#include "common.h"

extern s32 D_005240B8[];

void func_0015BD90();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_0015FDE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_0015FE90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_0015FF40);

s32 func_0015FFE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    D_005240B8[0] = arg2;
    func_0015BD90(0x8000, 1);
    return arg3;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_00160020);

s32 func_001600E0(s32 *arg0)
{
    if (arg0 == 0)
        return -1;
    return *arg0 + 100;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_00160100);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_00160220);

void func_00160340(unsigned char *arg0, unsigned int arg1)
{
    arg0[0] = arg1;
    arg0[1] = arg1 >> 8;
    arg0[2] = arg1 >> 16;
    arg0[3] = arg1 >> 24;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_00160360);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_00160500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_00160590);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_001607C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_00160990);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_00160B60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_00161390);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_00161420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015FDE0", func_00161620);
