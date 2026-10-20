#include "common.h"

extern s32 D_0051F190[];

typedef struct Obj_001E3D00 {
    u8 unk_0[0xB0];
    s32 unk_B0;
} Obj_001E3D00;

typedef struct Obj_001E4E00 {
    u8 pad_0[0x4];
    s32 unk_4;
    u8 pad_8[0x3C];
    s32 unk_44;
} Obj_001E4E00;

typedef struct Obj_001E3CC0 {
    u8 pad_0[0xC];
    s32 unk_C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
} Obj_001E3CC0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3A10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3AA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3B30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3C20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3CA0);

s32 func_001E3CC0(Obj_001E3CC0 *p)
{
    s32 v = p->unk_10;

    if (v == -1) {
        return 0;
    }
    p->unk_C = v;
    p->unk_18 = p->unk_14;
    p->unk_10 = -1;
    p->unk_14 = 0;
    return 1;
}

void func_001E3D00(Obj_001E3D00 *p, s32 arg1)
{
    if (p != 0 && arg1 != 0) {
        p->unk_B0 = arg1;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3D20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3DA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3F50);

s32 *func_001E3FE0(void)
{
    return D_0051F190;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E3FF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4330);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E43B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4400);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4430);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4470);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E44A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E44D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4650);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4910);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4950);

f32 func_001E4B60(f32 a, f32 b, f32 c, f32 d, f32 e)
{
    f32 x;
    f32 diff;

    diff = b - d;
    if (a + c < e) {
        if (!(diff <= e)) {
            return 1.0f;
        }
        x = b - e;
    } else {
        x = a - e;
        d = c;
    }
    if (x < 0.0f) {
        x = -x;
    }
    if (d == 0.0f) {
        return 1.0f;
    }
    return x / d;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4BF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4CD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4D00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4D30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4DA0);

void func_001E4E00(Obj_001E4E00 *arg0, s32 arg1)
{
    if (arg0 != 0) {
        arg0->unk_4 |= 8;
        arg0->unk_44 = arg1;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4E20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4E60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4EC0);

s32 func_001E4FA0(s32 arg0)
{
    if (arg0 != 0) {
        D_0051F190[0] += arg0;
    }
    return D_0051F190[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E4FE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E3A10", func_001E50E0);
