#include "common.h"

void memset();

extern s32 D_00523B38[];

void func_001E7D20();

/* The object func_001B13B0, func_001B13C0 and func_001B2E60 take as their first argument:
   func_001B13C0 tests flag words at +0x1E0, +0x1E4 and +0x1EC, a count at +0x24B8 and the
   id at +0x53C; func_001B2E60 tests +0x1EC too, indexes D_00523B38 with +0x0 and reads
   through the pointer at +0x3C; func_001B13B0 clears the 0xA8 bytes at +0x14C4. */
typedef struct Obj {
    s32 unk_0;
    u8 pad_4[0x38];
    s32 *unk_3C;
    u8 pad_40[0x1A0];
    s32 unk_1E0;
    s32 unk_1E4;
    u8 pad_1E8[0x4];
    s32 unk_1EC;
    u8 pad_1F0[0x34C];
    s32 unk_53C;
    u8 pad_540[0xF84];
    u8 unk_14C4[0xA8];
    u8 pad_156C[0xF4C];
    s32 unk_24B8;
} Obj;

/* func_001B2E60's second argument: a flag word, and the word it sets bits 0x10 and
   0x1000 in. */
typedef struct FlagsPtr {
    s32 flags;
    s32 *bits;
} FlagsPtr;


INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B1360);

void func_001B13B0(Obj *o)
{
    memset(o->unk_14C4, 0, 0xA8);
}

s32 func_001B13C0(Obj *o)
{
    s32 a1 = o->unk_1E0;

    if (a1 & 0x05008000)
        return 0;
    if (o->unk_1EC & 0xC00000)
        return 0;
    if (o->unk_24B8 > 0)
        return 0;
    if (o->unk_1E4 & 0xA00)
        return 0;
    if ((a1 & 0x02120000) && (o->unk_53C != 0x38))
        return 0;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B1440);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B24C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2660);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B29C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2C30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2D60);

void func_001B2E60(Obj *o, FlagsPtr *m)
{
    if (o->unk_1EC & 0x2000) {
        *m->bits |= 0x10;
    } else {
        *m->bits &= ~0x10;
    }
    if (m->flags & 2) {
        *m->bits |= 0x1000;
    } else {
        *m->bits &= ~0x1000;
    }
    func_001E7D20(m->bits, *o->unk_3C, D_00523B38[o->unk_0]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2EF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B30E0);
