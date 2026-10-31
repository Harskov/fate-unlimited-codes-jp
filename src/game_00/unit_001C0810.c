#include "common.h"

typedef struct Sub_001C1290 {
    u8 unk_0[0x10];
    s32 unk_10;
    u8 unk_14[0x78];
} Sub_001C1290;

typedef struct Obj1D0 {
    u8 unk_0[0xC];
    struct Obj_001C0A80 *unk_C;
    u8 unk_10[0x4];
    Sub_001C1290 unk_14;
    s32 unk_A0;
    s32 unk_A4;
    u8 unk_A8[0x8];
    /* 0xB0 */ s16 counter;
    u8 unk_B2[0x9A];
    s32 unk_14C;
} Obj1D0;

typedef struct Obj2524 {
    u8 unk_0[0x220];
    s32 unk_220;
    u8 unk_224[0x2224];
    Obj1D0 *unk_2448;
} Obj2524;

typedef struct Obj_001C0B08 {
    u8 unk_0[0x1C];
    s32 unk_1C;
} Obj_001C0B08;

typedef struct Obj_001C0A80 {
    u8 unk_0[0x40];
    struct Obj_001C0B08 *unk_40;
    u8 unk_44[0xBD0];
    f32 unk_C14;
    u8 unk_C18[0x18F0];
    /* 0x2508 */ struct Obj_001C0A80 *next;
} Obj_001C0A80;

void func_001C1000(Obj2524 *arg0);

void func_001C1030(Obj2524 *arg0, s64 v, s32 w);

void func_001C0810(Obj2524 *arg0)
{
    Obj1D0 *c;

    if (arg0 != 0) {
        c = arg0->unk_2448;
        if (c != 0)
            c->counter++;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C0840);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C09C0);

int func_001C0A60(Obj2524 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    int r = 2;
    Obj1D0 *c;
    Obj_001C0A80 *p;
    Obj_001C0A80 *q;

    if (arg0 == 0)
        return 0;
    c = arg0->unk_2448;
    if (c == 0)
        return 0;
    if (&c->unk_14C == 0)
        return 0;
    p = c->unk_C;
    if (p == 0)
        return 0;
    q = p->next;
    if (q == 0)
        return 0;
    if (&arg0->unk_220 == 0)
        return 0;
    q = arg3 != 0 ? q : p;
    if (q == 0)
        return 0;
    if (c->counter > 30000) {
        c->counter = 0;
        return 1;
    }
    switch (arg1) {
    case 0x5B:
        if (q->unk_C14 <= (f32)arg2)
            r = 1;
        else
            r = 0;
        break;
    case 0x5C:
        if (q->unk_40->unk_1C == arg2)
            r = 1;
        else
            r = 0;
        break;
    }
    return r;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C0B80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C0F00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C0FA0);

void func_001C1000(Obj2524 *arg0)
{
    Obj1D0 *c;

    if (arg0 != 0) {
        c = arg0->unk_2448;
        if (c != 0) {
            c->unk_A0 = 0;
            c->unk_A4 = 0;
        }
    }
}

void func_001C1030(Obj2524 *arg0, s64 v, s32 w)
{
    Obj1D0 *c;

    if (arg0 != 0) {
        c = arg0->unk_2448;
        if (c != 0) {
            c->unk_A0 = w;
            c->unk_A4 = (short)v;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C1060);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C1140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C11D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C1210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C1250);

void func_001C1290(Obj2524 *arg0, s32 arg1)
{
    Obj1D0 *c;
    Sub_001C1290 *p;

    if (arg0 != 0) {
        c = arg0->unk_2448;
        if (c != 0) {
            p = &c->unk_14;
            if (p != 0) {
                p->unk_10 = arg1;
            }
        }
    }
}
