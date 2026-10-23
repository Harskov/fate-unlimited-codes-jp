#include "common.h"
#include "types.h"

extern s32 D_00523A28[];

extern s32 D_00523A40[];

extern void func_0020E040(void *, s32, s32);

extern void func_0020DF80(void *, s32, s32);

extern s32 dpcmp();

typedef struct Obj_00159B60 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
    /* 0x10 */ s32 unk_10[2];
    /* 0x18 */ u8 pad_18[0x50];
    /* 0x68 */ s32 unk_68;
    /* 0x6C */ s32 unk_6C;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ s32 unk_74;
    /* 0x78 */ s32 unk_78[20];
    /* 0xC8 */ s32 unk_C8;
    /* 0xCC */ s32 unk_CC;
    /* 0xD0 */ s32 unk_D0;
    /* 0xD4 */ s32 unk_D4;
    /* 0xD8 */ s32 unk_D8;
    /* 0xDC */ s32 unk_DC;
    /* 0xE0 */ s32 unk_E0;
    /* 0xE4 */ s32 unk_E4;
    /* 0xE8 */ s32 unk_E8;
    /* 0xEC */ s32 unk_EC;
    /* 0xF0 */ s32 unk_F0[2];
    /* 0xF8 */ s32 unk_F8;
    /* 0xFC */ u8 pad_FC[0x2C];
    /* 0x128 */ f32 unk_128;
    /* 0x12C */ f32 unk_12C;
    /* 0x130 */ f32 unk_130;
    /* 0x134 */ f32 unk_134;
    /* 0x138 */ f32 unk_138;
    /* 0x13C */ f32 unk_13C;
    /* 0x140 */ u8 pad_140[0x10];
    /* 0x150 */ u8 unk_150[0x30];
    /* 0x180 */ u8 unk_180[0x70];
} Obj_00159B60;

extern s32 D_00523860[];

extern s32 D_00523890[];

#include "libc.h"

typedef struct Obj_001599B0 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
    /* 0x10 */ u8 pad_10[4];
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ u8 pad_1C[0x2C];
    /* 0x48 */ s32 unk_48[10];
    /* 0x70 */ s32 unk_70[10];
    /* 0x98 */ u8 pad_98[0x2C];
    /* 0xC4 */ s32 unk_C4;
    /* 0xC8 */ u8 pad_C8[4];
    /* 0xCC */ s32 unk_CC;
    /* 0xD0 */ u8 pad_D0[0xC8];
    /* 0x198 */ s32 unk_198[10];
    /* 0x1C0 */ s32 unk_1C0[10];
    /* 0x1E8 */ s32 unk_1E8[10];
    /* 0x210 */ s32 unk_210[10];
    /* 0x238 */ s32 unk_238[10];
} Obj_001599B0;

void func_00159AA0();

void func_00159B60(Obj_00159B60 *arg0);

void func_001C8730();

void func_001D63B0();

void func_0020F530();

void func_00254B30();

void func_00254CB0();

s32 func_00254CA0(void);

void func_00254C20(s32, f32);

void func_001B04D0(s32, s32);

void func_001CE2B0(void);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", _dpfge);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_00159910);

s32 func_00159930(void)
{
    return dpcmp() < 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_00159950);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", _f_ulltof);

void func_001599B0(Obj_001599B0 *arg0)
{
    s32 i;

    arg0->unk_0 = 0;
    arg0->unk_4 = 4;
    arg0->unk_8 = 0;
    arg0->unk_C = 0x79C;
    arg0->unk_14 = 8;
    arg0->unk_18 = 0x18;
    for (i = 0; i < 10; i++) {
        arg0->unk_70[i] = 0;
        arg0->unk_48[i] = 1;
        arg0->unk_198[i] = 0;
        arg0->unk_1C0[i] = 0;
        arg0->unk_1E8[i] = 0;
        arg0->unk_210[i] = 0;
        arg0->unk_238[i] = 0;
    }
    arg0->unk_C4 = 1;
    arg0->unk_CC = 0;
}

// stores the bit pattern of 1.0f; probably a float global, typed as s32 here
void func_00159A90(void)
{
    D_00523A28[0] = 0x3F800000;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_00159AA0);

void func_00159B20(s32 arg0)
{
    func_0020E040(D_00523A40, 0xB0, arg0);
}

void func_00159B40(s32 arg0)
{
    func_0020DF80(D_00523A40, 0xB0, arg0);
}

void func_00159B60(Obj_00159B60 *arg0)
{
    memcpy(arg0->unk_150, D_00523860, 0x30);
    memcpy(arg0->unk_180, D_00523890, 0x70);
}

void func_00159BB0(Obj_00159B60 *arg0, s32 arg1)
{
    s32 i;

    for (i = 0; i < 2; i++) {
        arg0->unk_F0[i] = 0;
        func_0020F530(i, arg0->unk_F0[i]);
    }
    func_00254B30(0, arg0->unk_4);
    func_00254B30(1, arg0->unk_8);
    func_00254B30(2, arg0->unk_C);
    func_00254CB0(arg0->unk_0);
    func_00159AA0();
    if (arg1 == 0) {
        func_001C8730(0);
        func_001D63B0(0);
        func_00159B60(arg0);
    }
    memcpy(D_00523860, arg0->unk_150, 0x30);
    memcpy(D_00523890, arg0->unk_180, 0x70);
}

/* clears the whole object, then sets its starting values */
void func_00159C90(Obj_00159B60 *arg0)
{
    s32 i;

    memset(arg0, 0, 0x1F0);
    arg0->unk_0 = func_00254CA0();
    func_00254C20(5, 1.0f);
    func_00254C20(0, 0.7f);
    func_00254C20(1, 0.95f);
    func_00254B30(2, 1);
    func_00254B30(3, 1);
    func_00254B30(0, 4);
    func_00254B30(1, 4);
    func_00254B30(2, 4);
    for (i = 0; i < 2; i++) {
        arg0->unk_10[i] = 0;
        arg0->unk_F0[i] = 0;
        func_001B04D0(i, 0);
    }
    arg0->unk_68 = 1;
    arg0->unk_6C = 0;
    arg0->unk_70 = 0;
    arg0->unk_74 = 0;
    for (i = 0; i < 20; i++) {
        arg0->unk_78[i] = 0;
    }
    arg0->unk_E4 = 3;
    arg0->unk_C8 = 1;
    arg0->unk_CC = 1;
    arg0->unk_E0 = 3;
    arg0->unk_E8 = 3;
    arg0->unk_EC = 12;
    arg0->unk_DC = 0;
    arg0->unk_D4 = 0;
    arg0->unk_D0 = 1;
    arg0->unk_D8 = 1;
    arg0->unk_F8 = 0;
    arg0->unk_128 = 1.0f;
    arg0->unk_12C = 1.5f;
    arg0->unk_130 = 1.01f;
    arg0->unk_134 = 1.0f;
    arg0->unk_138 = 0.55f;
    arg0->unk_13C = 1.0f;
    func_001CE2B0();
}

void func_00159E30(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_00159E40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_0015A220);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_0015A260);
