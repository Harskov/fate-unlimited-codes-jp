#include "common.h"

typedef struct Obj {
    int unk_0;
    int unk_4;
} Obj;

typedef struct Obj_001F8E00 {
    int unk_0;
    f32 unk_4;
} Obj_001F8E00;

extern void func_001F8E30(f32 arg0);

typedef struct Obj_001F8830 {
    /* 0x00 */ int unk_0;
    /* 0x04 */ int unk_4;
    /* 0x08 */ u8 pad_8[0x8];
    /* 0x10 */ f32 unk_10[4];
    /* 0x20 */ f32 unk_20[4];
    /* 0x30 */ f32 unk_30[4];
    /* 0x40 */ f32 unk_40[4];
    /* 0x50 */ u8 pad_50[0x10];
    /* 0x60 */ f32 unk_60[4][4];
    /* 0xA0 */ f32 unk_A0[4][4];
} Obj_001F8830;

extern f32 D_003D7610[];

extern f32 D_003D7620[];

extern f32 D_003D7630[];

extern f32 D_003D7640[];

void func_0020D070(f32 (*)[4]);

void func_0016F640(f32 *arg0, f32 *arg1);

/* resets the object: clears the first two words, sets bits 0xE00 of the first,
   prepares the two 4x4 blocks and fills the four vectors from the constant tables */
void func_001F8830(Obj_001F8830 *arg0)
{
    arg0->unk_0 = 0;
    arg0->unk_4 = 0;
    arg0->unk_0 |= 0xE00;
    func_0020D070(arg0->unk_A0);
    func_0020D070(arg0->unk_60);
    func_0016F640(arg0->unk_10, D_003D7610);
    func_0016F640(arg0->unk_20, D_003D7620);
    func_0016F640(arg0->unk_40, D_003D7630);
    func_0016F640(arg0->unk_30, D_003D7640);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8830", func_001F88C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8830", func_001F8960);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8830", func_001F8AE0);

int func_001F8C60(Obj *arg0)
{
    return arg0->unk_4 * 48;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8830", func_001F8C80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8830", func_001F8D40);

void func_001F8E00(int arg0, Obj_001F8E00 *arg1, Obj_001F8E00 *arg2, f32 arg3)
{
    f32 base = arg1->unk_4;
    func_001F8E30((arg3 - base) / (arg2->unk_4 - base));
}
