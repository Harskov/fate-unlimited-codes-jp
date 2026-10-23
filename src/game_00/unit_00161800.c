#include "common.h"
#include "libc.h"

/* 0x60 */ typedef struct Holder { unsigned char pad[0x60]; short *unk_60; } Holder;

void func_002E01C8(void);

extern s32 D_00523DA8[];

extern s32 D_00523DAC[];

extern s32 D_005240B4[];

void func_0015BD90();

typedef struct Obj_00161E60 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    u8 pad_C[4];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ u8 unk_1C[0x10];
    /* 0x2C */ u8 unk_2C[0x10];
    /* 0x3C */ u8 unk_3C[0x10];
    /* 0x4C */ u8 unk_4C[0xC];
    /* 0x58 */ s32 unk_58;
    /* 0x5C */ s32 unk_5C;
    /* 0x60 */ f32 unk_60;
    /* 0x64 */ f32 unk_64;
    /* 0x68 */ s32 unk_68;
} Obj_00161E60;

typedef struct Sub_00161E60 {
    u8 pad_0[4];
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    u8 pad_C[0x34];
    /* 0x40 */ u8 unk_40[0x10];
    u8 pad_50[0x50];
    /* 0xA0 */ s32 unk_A0;
    /* 0xA4 */ u8 unk_A4[0xC];
    /* 0xB0 */ s32 unk_B0;
    /* 0xB4 */ s32 unk_B4;
    /* 0xB8 */ f32 unk_B8;
    /* 0xBC */ s32 unk_BC;
    /* 0xC0 */ s32 unk_C0;
    /* 0xC4 */ f32 unk_C4;
    /* 0xC8 */ f32 unk_C8;
} Sub_00161E60;

extern Sub_00161E60 *func_0018A110(s32, void *, void *);

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

Sub_00161E60 *func_00161E60(Obj_00161E60 *arg0)
{
    Sub_00161E60 *result = 0;
    Sub_00161E60 *p = func_0018A110(arg0->unk_8, arg0->unk_1C, arg0->unk_2C);
    if (p != 0) {
        p->unk_4 = arg0->unk_0;
        p->unk_8 = arg0->unk_4;
        p->unk_B4 = arg0->unk_14;
        p->unk_B8 = arg0->unk_18;
        p->unk_A0 = arg0->unk_10;
        p->unk_B0 = arg0->unk_68;
        memcpy(p->unk_40, arg0->unk_3C, 0x10);
        memcpy(p->unk_A4, arg0->unk_4C, 0xC);
        result = p;
        p->unk_BC = arg0->unk_58;
        p->unk_C0 = arg0->unk_5C;
        p->unk_C4 = arg0->unk_60;
        p->unk_C8 = (arg0->unk_64 - arg0->unk_60) / (f32)arg0->unk_10;
    }
    return result;
}

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
