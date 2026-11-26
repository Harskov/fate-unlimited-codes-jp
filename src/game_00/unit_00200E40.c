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

extern s32 D_0051FE34[];

extern s32 D_0051FE38[];

extern s32 D_0051FE3C[];

extern s32 D_0051FE00[];

void func_002EA0B0(s32 arg0);

extern s32 D_0051FE30[];

extern s32 D_0051FDE0[];

extern s16 D_0051FDE8[];

extern s16 D_0051FDEA[];

extern void *D_0051FDEC[];

extern s32 D_0051FDF0[];

void * func_0020EC40(s32, s32);

void func_00178060(s32 *arg0);

void func_00200E40(Obj_00200E40 *p, s32 arg1)
{
    p->unk_30 = arg1;
}

void func_00200E50(int v)
{
    D_0051FDE4[0] = v;
}

void func_00200E60(int v)
{
    if (v == 0) {
        D_0051FDE0[0] = 0;
        D_0051FDE8[0] = 0;
        D_0051FDEA[0] = 0;
        D_0051FDEC[0] = 0;
        return;
    }
    D_0051FDE0[0] = 0;
    D_0051FDE4[0] = -1;
    D_0051FDE8[0] = 0;
    D_0051FDEA[0] = v;
    D_0051FDEC[0] = func_0020EC40(D_0051FDEA[0], 0x48);
    func_00178060(D_0051FDF0);
}

void func_00200EF0(void)
{
    if (D_0051FE00[0] == 0) {
        return;
    }
    func_002EA0B0(D_0051FE00[0]);
    D_0051FE00[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00200E40", func_00200F30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00200E40", func_002012B0);

int func_002013F0(void)
{
    return (D_0051FE10[0] & 0x4) != 0;
}

void func_00201410(s32 arg0, s32 arg1)
{
    if (D_0051FE10[0] & 0x40) {
        return;
    }
    D_0051FE10[0] |= 0x20;
    D_0051FE34[0] = arg0;
    D_0051FE38[0] = arg1;
    D_0051FE3C[0] = 0;
}

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

void func_002014E0(int v)
{
    D_0051FE30[0] = v & 0xFFFFFF;
}

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
