#include "common.h"

extern s32 D_003D6FB0[];

extern s32 D_003D7130[];

extern s32 D_003D7BD0[];

extern s32 D_003D70F0[];

extern s32 D_003D7120[];

extern s32 D_003D7050[];

extern s32 D_003D70A0[];

extern s32 D_003D7000[];

extern s32 D_0051E4D0[];

void func_001F1BE0();

extern s32 D_0051E4E0[][25];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CC430", func_001CC430);

s32 *func_001CC470(s32 arg0)
{
    return &D_0051E4E0[arg0][1];
}

void func_001CC4A0(void)
{
    func_001F1BE0();
    D_0051E4D0[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CC430", func_001CC4D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CC430", func_001CC5D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CC430", func_001CCFD0);

s32 func_001CDC70(s32 arg0)
{
    return D_003D7000[arg0];
}

s32 func_001CDC90(s32 arg0)
{
    return D_003D6FB0[arg0];
}

s32 func_001CDCB0(s32 arg0)
{
    if (arg0 < 0 || arg0 >= 0x14)
        return D_003D7BD0[0];
    return D_003D7130[arg0];
}

s32 func_001CDCF0(s32 arg0)
{
    if (arg0 < 0 || arg0 >= 0xB)
        return D_003D7BD0[0];
    return D_003D70F0[arg0];
}

s32 func_001CDD30(s32 arg0)
{
    if (arg0 < 0 || arg0 >= 3)
        return D_003D7BD0[0];
    return D_003D7120[arg0];
}

s32 func_001CDD70(s32 arg0)
{
    if (arg0 < 0 || arg0 >= 0xB)
        return D_003D7BD0[0];
    return D_003D70F0[arg0];
}

s32 func_001CDDB0(s32 arg0)
{
    if (arg0 < 0 || arg0 >= 0x14)
        return D_003D7BD0[0];
    return D_003D70A0[arg0];
}

s32 func_001CDDF0(s32 arg0)
{
    if (arg0 < 0 || arg0 >= 0x14)
        return D_003D7BD0[0];
    return D_003D7050[arg0];
}
