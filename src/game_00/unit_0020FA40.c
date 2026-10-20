#include "common.h"
#include "types.h"

extern s32 D_003D7BC8[];

extern u32 D_00522E08[];

extern u32 D_00522E18[];

extern s32 DelayThread(s32 usec);

extern s32 D_00522E10[];

extern s32 D_005231F0[];

void func_00210C10(s32 a, s32 b);

typedef struct Obj_0020FC50 {
    u8 pad_0[0xA];
    /* 0x0A */ s16 counter;
    s32 unk_C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} Obj_0020FC50;

s32 func_0020FA40(void)
{
    return D_00522E10[0];
}

void func_0020FA50(void)
{
    if (D_003D7BC8[0] != -1 && D_00522E08[0] <= D_00522E18[0]) {
        do {
            DelayThread(1);
        } while (D_00522E08[0] <= D_00522E18[0]);
    }
}

void func_0020FAC0(u32 v)
{
    D_00522E18[0] = v;
}

void func_0020FAD0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_0020FAE0);

void func_0020FC50(Obj_0020FC50 *o, s32 a, s32 b)
{
    s32 diff;
    s32 v;

    diff = b ^ a;
    o->unk_14 = b & diff;
    o->unk_18 = a & diff;
    o->unk_1C = o->unk_14;
    v = o->unk_10;
    if (v != 0 && v == o->unk_C) {
        if (--o->counter == 0) {
            o->unk_1C = o->unk_10;
            o->counter = 2;
        }
    } else {
        o->counter = 0x10;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_0020FCD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_0020FFD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_002108E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_00210AF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_00210B30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_00210BB0);

void func_00210C00(s32 arg0)
{
    func_00210C10(D_005231F0[0], arg0);
}
