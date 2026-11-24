#include "common.h"

typedef struct Obj_00326D90 {
    u8 pad_0[0x18];
    s32 unk_18;
    u8 pad_1C[0x8];
    s32 unk_24;
} Obj_00326D90;

// a ratio of two integers chosen by mode: 2 plain, 4 squared, 8 one minus the squared ratio of
// their difference; both squares are halved together until the denominator is at most 512 squared
f32 func_00325D40(s32 arg0, s32 arg1, s32 arg2)
{
    f32 r;
    f32 n;
    f32 d;

    r = 0.0f;
    switch (arg2) {
    case 2:
        r = (f32)arg0 / (f32)arg1;
        break;
    case 4:
        n = (f32)arg0;
        d = (f32)arg1;
        n = n * n;
        d = d * d;
        while (d > 262144.0f) {
            n /= 2.0f;
            d /= 2.0f;
        }
        r = n / d;
        break;
    case 8:
        n = (f32)(arg1 - arg0);
        d = (f32)arg1;
        n = n * n;
        d = d * d;
        while (d > 262144.0f) {
            n /= 2.0f;
            d /= 2.0f;
        }
        r = 1.0f - n / d;
        break;
    }
    return r;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00325EC0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00325FC0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326170);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_003262A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326370);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_003263F0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_003264A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326560);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326620);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_003266C0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326780);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_003269A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326B40);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326CD0);

void func_00326D90(Obj_00326D90 *arg0)
{
    arg0->unk_24 &= ~2;
    arg0->unk_18 = 0;
}
