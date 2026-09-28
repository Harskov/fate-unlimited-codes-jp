#include "common.h"

extern s32 D_0051C908[];

extern s32 D_0051C90C[];

extern s32 D_0051C904[];

extern s32 D_0051C900[];

extern s32 D_003D6DA0[];

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
    s32 *src;
    s32 *dst;

    i = 0;
    src = D_003D6DA0 + arg1 * 10;
    dst = D_00523900 + arg0 * 10;
    do {
        i += 5;
        dst[6] = src[0];
        dst[7] = src[1];
        dst[8] = src[2];
        dst[9] = src[3];
        dst[10] = src[4];
        src += 5;
        dst += 5;
    } while (i < 10);
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
