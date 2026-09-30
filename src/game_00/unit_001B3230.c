#include "common.h"

/* The eight 0xC8-byte slots at +0x5D0 of the object func_001B3B20 resets. func_001B3B20
   clears each slot's flag word and fills its two four-word arrays with -1 and 0xF;
   func_001B3AD0 stores a value into the first slot whose +0x4 word is 0; func_001B3920
   sets bit 0x1 of a slot's flags only when that word is set, and func_001B38F0 clears it. */
typedef struct Slot {
    s32 flags;
    s32 unk_4;
    s32 unk_8[4];
    s32 unk_18[4];
    u8 pad_28[0x9C];
    s32 unk_C4;
} Slot;

typedef struct Obj {
    u8 pad_0[0x5D0];
    Slot slots[8];
} Obj;

void func_001B3A20(Obj *);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3230);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3410);

void func_001B35C0(Obj *o, s32 i, s32 v)
{
    o->slots[i].unk_C4 = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B35E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B36A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3700);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B37A0);

void func_001B38F0(Obj *o, s32 i)
{
    Slot *s = &o->slots[i];

    s->flags &= ~1;
}

void func_001B3920(Obj *o, s32 i)
{
    Slot *s = &o->slots[i];

    if (s->unk_4 == 0) {
        return;
    }
    s->flags |= 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3960);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3A20);

void func_001B3AD0(Obj *o, s32 v)
{
    s32 i;

    if (v != 0) {
        for (i = 0; i < 8; i++) {
            if (o->slots[i].unk_4 == 0) {
                o->slots[i].unk_4 = v;
                return;
            }
        }
    }
}

void func_001B3B20(Obj *o)
{
    s32 i;
    s32 j;

    for (i = 0; i < 8; i++) {
        o->slots[i].flags = 0;
        for (j = 0; j < 4; j++) {
            o->slots[i].unk_8[j] = -1;
            o->slots[i].unk_18[j] = 0xF;
        }
    }
    func_001B3A20(o);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3B70);
