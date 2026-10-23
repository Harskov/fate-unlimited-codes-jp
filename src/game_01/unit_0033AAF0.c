#include "common.h"

typedef struct Obj_0033F840 {
    u8 pad_0[0xC];
    s32 unk_C;
    u8 pad_10[0x60];
    f32 unk_70;
    u8 pad_74[0x28];
    f32 unk_9C;
    u8 pad_A0[0x170];
    s32 unk_210;
    u8 pad_214[0xC4];
    s32 unk_2D8;
} Obj_0033F840;

extern char gFormat_5068B0[];

extern char gFormat_5068B8[];

int sprintf(char *, const char *, ...);

void func_002146B0(s32, s32 *, s32, s32, s32, char *, f32, f32, s32);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033AAF0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033B8A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033B920);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033BA00);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033BB30);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033BD10);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033C3F0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033C8C0);

void func_0033CC20(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033CC30);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033DC80);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033DE30);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033F2A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0033AAF0", func_0033F4E0);

void func_0033F840(Obj_0033F840 *arg0)
{
    char buf[16];
    s32 col[4];

    if (arg0->unk_2D8 > 0) {
        col[0] = col[1] = col[2] = col[3] = arg0->unk_210;
        sprintf(buf, gFormat_5068B0, arg0->unk_2D8);
        func_002146B0(0, col, 0, 4, 0, buf, arg0->unk_70, arg0->unk_9C, arg0->unk_C);
    } else {
        col[0] = col[1] = col[2] = col[3] = arg0->unk_210;
        sprintf(buf, gFormat_5068B8);
        func_002146B0(0, col, 0, 4, 0, buf, arg0->unk_70, arg0->unk_9C, arg0->unk_C);
    }
}
