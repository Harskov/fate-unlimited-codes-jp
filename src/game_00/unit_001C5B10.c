#include "common.h"

extern s32 D_0051D7F0[];

extern s32 D_0051D800[];

extern s32 D_0051D860[];

typedef struct Obj_001C6720 {
    s32 unk_0;
    u8 pad_4[0x243C];
    s32 unk_2440;
} Obj_001C6720;

typedef struct Elem_001C6720 {
    Obj_001C6720 *unk_0;
    u8 pad_4[8];
    /* 0x0C */ struct Elem_001C6720 *next;
} Elem_001C6720;

typedef struct Sub_001C6720 {
    u8 pad_0[0xC];
    Elem_001C6720 *unk_C;
} Sub_001C6720;

extern Sub_001C6720 *D_0051C858[];

void func_001C6580();

typedef struct Obj_001C66C0 {
    u8 pad_0[0x2448];
    s32 unk_2448;
} Obj_001C66C0;

extern s32 D_00522DB0[];

void func_0020F230();

typedef struct Obj_001C5B10 {
    u8 pad_0[0x2450];
    s32 unk_2450;
} Obj_001C5B10;

typedef struct Obj_00531B60 {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
    u8 pad_C[0x30];
    s32 unk_3C;
    s32 unk_40[4];
    u8 pad_50[0x24];
} Obj_00531B60;

extern Obj_00531B60 D_00531B60[];

s32 func_0019D540(s32 arg0, s32 arg1, s32 arg2);

extern s32 D_0051D890[];

extern s32 D_0051D894[];

s32 func_001C5B10(Obj_001C5B10 *arg0, s32 arg1)
{
    if (arg0 == 0)
        return 0;
    arg0->unk_2450 = arg1;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C5B30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C5CD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C5D60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C62A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6440);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C64A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6580);

void func_001C66C0(Obj_001C66C0 *arg0)
{
    if (arg0 != 0) {
        if (arg0->unk_2448 != 0) {
            func_0020F230(D_00522DB0, arg0->unk_2448);
            arg0->unk_2448 = 0;
        }
    }
}

void func_001C6710(void)
{
}

void func_001C6720(void)
{
    Elem_001C6720 *n;
    Obj_001C6720 *o;
    s32 i;

    memset(D_0051D860, 0, 0x28);
    for (i = 0; i < 2; i++) {
        for (n = D_0051C858[i]->unk_C; n != 0; n = n->next) {
            o = n->unk_0;
            D_0051D860[o->unk_0] = (s32)o;
        }
    }
    for (i = 0; i < 10; i++) {
        o = (Obj_001C6720 *)D_0051D860[i];
        if (o != 0 && o->unk_2440 != 0) {
            func_001C6580(o);
        }
    }
}

void func_001C67F0(void)
{
    memset(D_0051D7F0, 0, 0x64);
    D_0051D800[0] = 0x40000000;
    memset(D_0051D860, 0, 0x28);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6840);

/* Sets bit 0x80 of D_0051D890, then clears it again when the mode in D_0051D894 is 7,
   when it is 8 with bit 0x20000000 set, or when either entry of D_00531B60 holds a 2
   in any of its checked slots. */
void func_001C68C0(void)
{
    s32 v;
    s32 i;
    s32 j;
    s32 r;
    Obj_00531B60 *p;

    v = D_0051D890[0] | 0x80;
    D_0051D890[0] = v;
    switch (D_0051D894[0]) {
    case 7:
        D_0051D890[0] &= ~0x80;
        return;
    case 8:
        if (v & 0x20000000) {
            D_0051D890[0] = v & ~0x80;
            return;
        }
        break;
    }

    p = D_00531B60;
    for (i = 0; i < 2; i++, p++) {
        r = 0;
        if (p->unk_8 == 2)
            r = 1;
        if (p->unk_3C == 2)
            r = 1;
        for (j = 0; j < 4; j++) {
            if (p->unk_40[j] == 2) {
                r = 1;
                break;
            }
        }
        if (r != 0) {
            D_0051D890[0] &= ~0x80;
            return;
        }
    }
}

s32 func_001C69E0(s32 arg0)
{
    Obj_00531B60 *p = &D_00531B60[arg0];
    return func_0019D540(0, p->unk_8, 1) != 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6A30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6B70);
