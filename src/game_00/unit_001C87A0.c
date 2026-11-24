#include "common.h"

extern int D_00523970[];

extern s32 D_0051D8A0[];

extern s32 D_0052396C[];

typedef struct Sub_0051D970 {
    u8 pad_0[0x53C];
    /* 0x53C */ s32 unk_53C;
} Sub_0051D970;

typedef struct Obj_0051D8B0 {
    u8 pad_0[0xC0];
    /* 0xC0 */ Sub_0051D970 *unk_C0;
    /* 0xC4 */ s32 unk_C4;
} Obj_0051D8B0;

extern Obj_0051D8B0 D_0051D8B0;

extern s32 D_0051E444[];

s32 func_0019A9A0(s32);

void func_001EC6A0(s32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C87A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C8830);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C89A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C8B80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C8D00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C8DA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C8DD0);

// clears bit 0x400 of D_0051D8A0 when func_0019A9A0 refuses D_0051E444, then drops the
// object at +0xC0 (after func_001EC6A0(0x14)) once its +0x53C no longer equals +0xC4
void func_001C8DF0(void)
{
    Obj_0051D8B0 *o = &D_0051D8B0;

    if (func_0019A9A0(D_0051E444[0]) == 0)
        D_0051D8A0[0] &= ~0x400;

    if (o->unk_C0 != 0 && o->unk_C0->unk_53C != o->unk_C4) {
        func_001EC6A0(0x14);
        o->unk_C0 = 0;
    }
}

int func_001C8E80(void)
{
    return 0;
}

void func_001C8E90(void)
{
    if (D_0051D8A0[0] & 2)
        D_0052396C[0] += 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C8ED0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C90B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C9150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C9550);

void func_001C9C00(void)
{
    D_00523970[0]++;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C9C20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C87A0", func_001C9C60);
