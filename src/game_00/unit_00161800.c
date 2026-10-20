#include "common.h"

/* 0x60 */ typedef struct Holder { unsigned char pad[0x60]; short *unk_60; } Holder;

void func_002E01C8(void);

extern s32 D_00523DA8[];

extern s32 D_00523DAC[];

extern s32 D_005240B4[];

void func_0015BD90();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161800);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161970);

int func_001619C0(Holder *h, int i)
{
    short *t = h->unk_60;
    if (t == 0)
        return -1;
    if (i < 0)
        return -1;
    return (t[0] <= i) ? -1 : t[i + 1];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161A00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161B70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161E60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161F40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_001620E0);

void func_00162340(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    D_005240B4[0] = arg0;
    D_00523DA8[0] = arg1;
    D_00523DAC[0] = arg2;
    func_0015BD90(arg3, arg4);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00162370);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00162380);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00165E40);

void func_00165EA0(float *arg0, float *arg1, float *arg2)
{
    arg0[0] = arg1[0] - arg2[0];
    arg0[1] = arg1[1] - arg2[1];
    arg0[2] = arg1[2] - arg2[2];
}

void func_00165EE0(void)
{
    func_002E01C8();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00165EF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00166AF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00166B90);
