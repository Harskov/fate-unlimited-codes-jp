#include "common.h"
#include "game_00/tbl_00523900.h"

extern s32 D_0051C908[];

extern s32 D_0051C90C[];

extern s32 D_0051C904[];

extern s32 D_0051C900[];

extern s32 D_003D6DA0[][10];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B02A0", func_001B02A0);

int func_001B0380(void)
{
    return 0x384;
}

s32 func_001B0390(void)
{
    return D_0051C908[0];
}

s32 func_001B03A0(void)
{
    return D_0051C90C[0];
}

s32 func_001B03B0(void)
{
    return D_0051C904[0];
}

s32 func_001B03C0(void)
{
    return D_0051C900[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B02A0", func_001B03D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B02A0", func_001B0410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B02A0", func_001B0450);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B02A0", func_001B0490);

void func_001B04D0(s32 arg0, s32 arg1)
{
    s32 i;

    for (i = 0; i < 10; i++)
        D_00523900[6 + arg0 * 10 + i] = D_003D6DA0[arg1][i];
}

s32 func_001B0550(s32 arg0, s32 arg1)
{
    s32 v = 0;

    if (arg1 & 0x11000)
        v |= 1;
    if (arg1 & 0x24000)
        v |= 2;
    if (arg1 & 0x48000)
        v |= 4;
    if (arg1 & 0x82000)
        v |= 8;
    if (arg1 & 0x80)
        v |= D_00523900[6 + arg0 * 10];
    if (arg1 & 0x10)
        v |= D_00523900[6 + arg0 * 10 + 1];
    if (arg1 & 0x20)
        v |= D_00523900[6 + arg0 * 10 + 2];
    if (arg1 & 0x40)
        v |= D_00523900[6 + arg0 * 10 + 3];
    if (arg1 & 4)
        v |= D_00523900[6 + arg0 * 10 + 4];
    if (arg1 & 1)
        v |= D_00523900[6 + arg0 * 10 + 5];
    if (arg1 & 0x200)
        v |= D_00523900[6 + arg0 * 10 + 6];
    if (arg1 & 8)
        v |= D_00523900[6 + arg0 * 10 + 7];
    if (arg1 & 2)
        v |= D_00523900[6 + arg0 * 10 + 8];
    if (arg1 & 0x400)
        v |= D_00523900[6 + arg0 * 10 + 9];

    return v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B02A0", func_001B0770);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B02A0", func_001B0CD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B02A0", func_001B1010);
