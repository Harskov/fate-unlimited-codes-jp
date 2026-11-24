#include "common.h"

typedef struct Obj_001CA7F0 {
    /* 0x000 */ u32 flags;
    u8 pad_4[4];
    /* 0x008 */ f32 unk_8;
    u8 pad_C[0x25C];
    /* 0x268 */ s32 unk_268[16];
    /* 0x2A8 */ f32 unk_2A8[16];
    u8 pad_2E8[0x1C];
    /* 0x304 */ f32 *unk_304;
} Obj_001CA7F0;

typedef struct Obj_001CAE20 {
    u8 pad_0[0x28];
    /* 0x28 */ u32 flags;
    u8 pad_2C[4];
    /* 0x30 */ s32 unk_30;
    u8 pad_34[4];
    /* 0x38 */ s32 unk_38;
} Obj_001CAE20;

s32 func_001CAC30(Obj_001CAE20 *arg0, Obj_001CAE20 *arg1);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CA0E0", func_001CA0E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CA0E0", func_001CA210);

void func_001CA2D0(s32 *arg0)
{
    func_001CA300();
    *arg0 |= 0x10;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CA0E0", func_001CA300);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CA0E0", func_001CA420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CA0E0", func_001CA550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CA0E0", func_001CA660);

void func_001CA7F0(Obj_001CA7F0 *arg0)
{
    s32 i;

    if (arg0->unk_8 <= -1.0f) {
        return;
    }
    if (arg0->flags & 8) {
        return;
    }
    for (i = 0; i < 16; i++) {
        if (arg0->unk_268[i] >= 0) {
            arg0->unk_2A8[i] = arg0->unk_2A8[i] + *arg0->unk_304;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CA0E0", func_001CA860);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CA0E0", func_001CA920);

/* The same priority ranking as func_001CAE20, with one more bit pair (0x1000 against 0x1002)
   and, when every bit test passes, a tie-break on the words at +0x30: the larger wins,
   equal leaves it undecided (3). */
/* locals: flags0, flags1 = the words at +0x28 of arg0 and arg1, only ever tested against masks */
s32 func_001CAC30(Obj_001CAE20 *arg0, Obj_001CAE20 *arg1)
{
    u32 flags0;
    u32 flags1;
    s32 n1;
    s32 n0;

    flags0 = arg0->flags;
    flags1 = arg1->flags;
    if (flags0 & 0x200) {
        return 3;
    }
    if (flags1 & 0x200) {
        return 3;
    }
    if (flags0 & 0x400) {
        return 0;
    }
    if (flags1 & 0x400) {
        return 0;
    }
    if ((flags0 & 0x2000) && arg1->unk_38 != 3) {
        return 0;
    }
    if ((flags1 & 0x2000) && arg0->unk_38 != 3) {
        return 0;
    }
    if ((flags0 & 0x4000) && arg1->unk_38 == 3) {
        return 0;
    }
    if ((flags1 & 0x4000) && arg0->unk_38 == 3) {
        return 0;
    }
    if ((flags0 & 0x800) && !(flags1 & 0x800)) {
        return 1;
    }
    if (!(flags0 & 0x800) && (flags1 & 0x800)) {
        return 2;
    }
    if ((flags0 & 0x1000) && !(flags1 & 0x1002)) {
        return 1;
    }
    if (!(flags0 & 0x1002) && (flags1 & 0x1000)) {
        return 2;
    }
    if ((flags0 & 0x2) && !(flags1 & 0x2)) {
        return 1;
    }
    if ((flags1 & 0x2) && !(flags0 & 0x2)) {
        return 2;
    }
    if ((flags0 & 0x1) && !(flags1 & 0x3)) {
        return 1;
    }
    if ((flags1 & 0x1) && !(flags0 & 0x3)) {
        return 2;
    }
    n1 = arg1->unk_30;
    n0 = arg0->unk_30;
    if (n0 == n1) {
        return 3;
    }
    if (n0 > n1) {
        return 1;
    }
    if (n0 < n1) {
        return 2;
    }
    return 0;
}

/* Ranks two objects by the bit words at +0x28, checked in a fixed priority order.
   Probably a precedence decision: 1 favours the first object, 2 the second,
   0 rules both out, 3 leaves it undecided. */
/* locals: flags0, flags1 = the words at +0x28 of arg0 and arg1, only ever tested against masks */
s32 func_001CAE20(Obj_001CAE20 *arg0, Obj_001CAE20 *arg1)
{
    u32 flags0;
    u32 flags1;

    flags0 = arg0->flags;
    flags1 = arg1->flags;
    if (flags0 & 0x200) {
        return 3;
    }
    if (flags1 & 0x200) {
        return 3;
    }
    if (flags0 & 0x400) {
        return 0;
    }
    if (flags1 & 0x400) {
        return 0;
    }
    if ((flags0 & 0x2000) && arg1->unk_38 != 3) {
        return 0;
    }
    if ((flags1 & 0x2000) && arg0->unk_38 != 3) {
        return 0;
    }
    if ((flags0 & 0x4000) && arg1->unk_38 == 3) {
        return 0;
    }
    if ((flags1 & 0x4000) && arg0->unk_38 == 3) {
        return 0;
    }
    if ((flags0 & 0x800) && !(flags1 & 0x800)) {
        return 1;
    }
    if (!(flags0 & 0x800) && (flags1 & 0x800)) {
        return 2;
    }
    if ((flags0 & 0x2) && !(flags1 & 0x2)) {
        return 1;
    }
    if ((flags1 & 0x2) && !(flags0 & 0x2)) {
        return 2;
    }
    if ((flags0 & 0x1) && !(flags1 & 0x3)) {
        return 1;
    }
    if ((flags1 & 0x1) && !(flags0 & 0x3)) {
        return 2;
    }
    return 3;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CA0E0", func_001CAFB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CA0E0", func_001CB090);
