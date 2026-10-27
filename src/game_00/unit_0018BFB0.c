#include "common.h"

typedef struct Obj_0018CB00 {
    u8 unk_0[0x38];
    /* 0x38 */ s32 unk_38;
    u8 unk_3C[0x8];
    /* 0x44 */ s32 unk_44;
} Obj_0018CB00;

extern s32 D_00522DB0[];

void func_0020F230();

void func_00210D60();

typedef struct Sub_0018D000 {
    u8 unk_0[0x40];
    /* 0x40 */ s32 unk_40;
} Sub_0018D000;

typedef struct Obj_0018D000 {
    /* 0x00 */ s32 flags;
    u8 unk_4[0x18];
    /* 0x1C */ Sub_0018D000 *unk_1C;
    u8 unk_20[0x10];
    /* 0x30 */ s32 unk_30;
} Obj_0018D000;

typedef struct Elem_0018D000 {
    u8 unk_0[0x14];
    /* 0x14 */ s32 unk_14;
    u8 unk_18[0x4];
    /* 0x1C */ s32 unk_1C;
} Elem_0018D000;

s32 func_001F4FA0();

s32 func_001F5AA0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018BFB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018C350);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018C5F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018CAA0);

void func_0018CB00(Obj_0018CB00 *arg0)
{
    func_0020F230(D_00522DB0, arg0->unk_38);
    if (arg0->unk_44 != 0) {
        func_0020F230(D_00522DB0, arg0->unk_44);
    }
    func_00210D60(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018CB50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018CDA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018CE70);

s32 func_0018D000(Obj_0018D000 *arg0, Elem_0018D000 *arg1)
{
    if (arg0->flags & 0x400000) {
        if (arg0->flags & 0x800000) {
            return func_001F5AA0(arg0->unk_1C->unk_40, arg0->unk_30, arg1->unk_14);
        }
        return func_001F4FA0(arg0->unk_30, arg1->unk_14);
    }
    return arg1->unk_1C;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018D060);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018D1A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018D710);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018DD40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018E240);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018E6D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018E740);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018E8C0);
