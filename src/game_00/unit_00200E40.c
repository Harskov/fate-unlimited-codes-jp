#include "common.h"

extern int D_0051FDE4[];

extern f32 D_0051FE44[];

extern int D_0051FE40[];

typedef struct Obj_00200E40 {
    unsigned char pad[0x30];
    s32 unk_30;
} Obj_00200E40;

extern s32 D_0051FE10[];

extern s32 D_0051FE24[];

extern s32 D_0051FE28[];

extern s32 D_0051FE2C[];

void func_00200E40(Obj_00200E40 *p, s32 arg1)
{
    p->unk_30 = arg1;
}

void func_00200E50(int v)
{
    D_0051FDE4[0] = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00200E40", func_00200E60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00200E40", func_00200EF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00200E40", func_00200F30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00200E40", func_002012B0);

int func_002013F0(void)
{
    return (D_0051FE10[0] & 0x4) != 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00200E40", func_00201410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00200E40", func_00201450);

void func_00201480(f32 fparg0)
{
    D_0051FE44[0] = fparg0;
}

void func_00201490(int v)
{
    D_0051FE40[0] = v;
}

void func_002014A0(s32 arg0, s32 arg1)
{
    if (D_0051FE10[0] & 3) {
        return;
    }
    D_0051FE10[0] |= 8;
    D_0051FE24[0] = arg0;
    D_0051FE28[0] = arg1;
    D_0051FE2C[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00200E40", func_002014E0);

void func_00201500(void)
{
    D_0051FE10[0] &= ~0x2B;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00200E40", func_00201520);

int func_00201550(int v)
{
    if (v > 0)
        D_0051FE10[0] |= v;
    return D_0051FE10[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00200E40", func_00201580);
