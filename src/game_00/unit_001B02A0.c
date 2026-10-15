#include "common.h"

extern s32 D_0051C908[];

extern s32 D_0051C90C[];

extern s32 D_0051C904[];

extern s32 D_0051C900[];

extern s32 D_00523900[];

extern s32 D_00523918[];

extern s32 D_0052391C[];

extern s32 D_00523920[];

extern s32 D_00523924[];

extern s32 D_00523928[];

extern s32 D_0052392C[];

extern s32 D_00523930[];

extern s32 D_00523934[];

extern s32 D_00523938[];

extern s32 D_0052393C[];

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
    // !FAKE: the author read one table, D_00523900[6 + arg0 * 10 + k]; the symbol map names each
    // of the ten folded addresses separately, so the reads stay per symbol until the data map
    // merges them
    if (arg1 & 0x80)
        v |= D_00523918[arg0 * 10];
    if (arg1 & 0x10)
        v |= D_0052391C[arg0 * 10];
    if (arg1 & 0x20)
        v |= D_00523920[arg0 * 10];
    if (arg1 & 0x40)
        v |= D_00523924[arg0 * 10];
    if (arg1 & 4)
        v |= D_00523928[arg0 * 10];
    if (arg1 & 1)
        v |= D_0052392C[arg0 * 10];
    if (arg1 & 0x200)
        v |= D_00523930[arg0 * 10];
    if (arg1 & 8)
        v |= D_00523934[arg0 * 10];
    if (arg1 & 2)
        v |= D_00523938[arg0 * 10];
    if (arg1 & 0x400)
        v |= D_0052393C[arg0 * 10];

    return v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B02A0", func_001B0770);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B02A0", func_001B0CD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B02A0", func_001B1010);
