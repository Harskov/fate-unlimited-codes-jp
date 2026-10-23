#include "common.h"

/* The eight 0xC8-byte slots at +0x5D0 of the object func_001B3B20 resets. func_001B3B20
   clears each slot's flag word and fills its two four-word arrays with -1 and 0xF;
   func_001B3AD0 stores a value into the first slot whose +0x4 word is 0; func_001B3920
   sets bit 0x1 of a slot's flags only when that word is set, and func_001B38F0 clears it. */
typedef struct Sub_001B3960 {
    /* 0x00 */ u8 pad_0[4];
    /* 0x04 */ f32 unk_4[3];
    /* 0x10 */ u8 pad_10[0x24];
} Sub_001B3960;

typedef struct Slot {
    /* 0x00 */ s32 unk_0;
    s32 unk_4;
    s32 unk_8[4];
    s32 unk_18[4];
    /* 0x28 */ Sub_001B3960 unk_28;
    /* 0x5C */ Sub_001B3960 unk_5C;
    /* 0x90 */ Sub_001B3960 unk_90;
    s32 unk_C4;
} Slot;

typedef struct Obj {
    u8 pad_0[0x5D0];
    /* 0x5D0 */ Slot unk_5D0[8];
} Obj;

void func_001B3A20(Obj *);

void func_0015EE20(void *, f32, f32, f32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3230);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3410);

void func_001B35C0(Obj *o, s32 i, s32 v)
{
    o->unk_5D0[i].unk_C4 = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B35E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B36A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3700);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B37A0);

void func_001B38F0(Obj *o, s32 i)
{
    Slot *s = &o->unk_5D0[i];

    s->unk_0 &= ~1;
}

void func_001B3920(Obj *o, s32 i)
{
    Slot *s = &o->unk_5D0[i];

    if (s->unk_4 == 0) {
        return;
    }
    s->unk_0 |= 1;
}

void func_001B3960(Obj *o)
{
    s32 i;

    for (i = 0; i < 8; i++) {
        Slot *s = &o->unk_5D0[i];

        if (s->unk_4 != 0) {
            s->unk_0 &= ~2;
            memset(&s->unk_28, 0, sizeof(Sub_001B3960));
            memset(&s->unk_5C, 0, sizeof(Sub_001B3960));
            memset(&s->unk_90, 0, sizeof(Sub_001B3960));
            func_0015EE20(s->unk_90.unk_4, 1.0f, 1.0f, 1.0f);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3A20);

void func_001B3AD0(Obj *o, s32 v)
{
    s32 i;

    if (v != 0) {
        for (i = 0; i < 8; i++) {
            if (o->unk_5D0[i].unk_4 == 0) {
                o->unk_5D0[i].unk_4 = v;
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
        o->unk_5D0[i].unk_0 = 0;
        for (j = 0; j < 4; j++) {
            o->unk_5D0[i].unk_8[j] = -1;
            o->unk_5D0[i].unk_18[j] = 0xF;
        }
    }
    func_001B3A20(o);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3B70);
