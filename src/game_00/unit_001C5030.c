#include "common.h"

typedef struct Sub_001C5380 {
    u8 unk_0[0x24];
    s32 unk_24;
} Sub_001C5380;

typedef struct Obj_001C5380 {
    u8 unk_0[0x2448];
    Sub_001C5380 *unk_2448;
    struct Sub_001C5630 *unk_244C;
} Obj_001C5380;

s32 func_001C4B60();

void func_001C4C30();

s32 func_001C4BA0();

typedef struct Elem_001C5630 {
    f32 unk_0;
    u8 unk_4[0x14];
} Elem_001C5630;

typedef struct Sub_001C5630 {
    u8 unk_0[0x4C];
    Elem_001C5630 unk_4C[1];
} Sub_001C5630;

typedef struct Elem_001C5880 {
    f32 unk_0;
    u8 unk_4[0x14];
} Elem_001C5880;

typedef struct Sub_001C5880 {
    u8 unk_0[0x14];
    Elem_001C5880 unk_14[1];
} Sub_001C5880;

typedef struct Obj_001C5880 {
    u8 unk_0[0x2450];
    Sub_001C5880 *unk_2450;
} Obj_001C5880;

typedef struct Elem_001C57E0 {
    s32 unk_0;
    u8 unk_4[0x14];
} Elem_001C57E0;

typedef struct Sub_001C57E0 {
    u8 unk_0[4];
    Elem_001C57E0 unk_4[1];
} Sub_001C57E0;

typedef struct Obj_001C57E0 {
    u8 unk_0[0x2450];
    Sub_001C57E0 *unk_2450;
} Obj_001C57E0;

typedef struct Elem_001C5830 {
    s32 unk_0;
    u8 unk_4[0x14];
} Elem_001C5830;

typedef struct Sub_001C5830 {
    Elem_001C5830 unk_0[1];
} Sub_001C5830;

typedef struct Obj_001C5830 {
    u8 unk_0[0x2450];
    Sub_001C5830 *unk_2450;
} Obj_001C5830;

typedef struct Elem_001C58D0 {
    s32 unk_0;
    u8 unk_4[0x14];
} Elem_001C58D0;

typedef struct Sub_001C58D0 {
    u8 unk_0[0xC];
    Elem_001C58D0 unk_C[1];
} Sub_001C58D0;

typedef struct Obj_001C58D0 {
    u8 unk_0[0x2450];
    Sub_001C58D0 *unk_2450;
} Obj_001C58D0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5030);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C51C0);

void func_001C5360(Obj_001C5380 *arg0, s32 arg1)
{
    Sub_001C5380 *s = arg0->unk_2448;
    if (s != 0) {
        s->unk_24 = s->unk_24 | arg1;
    }
}

void func_001C5380(Obj_001C5380 *arg0, s32 arg1)
{
    Sub_001C5380 *s = arg0->unk_2448;
    s->unk_24 = s->unk_24 & ~arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C53A0);

void func_001C53F0(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r = func_001C4BA0(arg0 + 0x460);
    func_001C4C30(arg0, r, arg2);
}

void func_001C5440(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r;

    r = func_001C4B60(arg1, arg0);
    func_001C4C30(arg0, r, arg2);
}

void func_001C5490(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r;

    r = func_001C4B60(arg0, arg1);
    func_001C4C30(arg0, arg2 + r, arg3);
}

void func_001C54E0(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r;

    r = func_001C4B60(arg0, arg1);
    func_001C4C30(arg0, r, arg2);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5520);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C55A0);

f32 func_001C5630(Obj_001C5380 *arg0, s32 *arg1)
{
    Sub_001C5630 *t;
    f32 r;

    if (arg1 != 0) {
        t = arg0->unk_244C;
        if (t != 0) {
            r = t->unk_4C[*arg1].unk_0;
        } else {
            r = 0.0f;
        }
        return r;
    }
    return 0.0f;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5680);

s32 func_001C57E0(Obj_001C57E0 *arg0, s32 arg1)
{
    Sub_001C57E0 *t;

    if (arg0 != 0) {
        t = arg0->unk_2450;
        if (t != 0 && arg1 >= 0x80 && arg1 < 0xB0) {
            return t->unk_4[arg1 - 0x80].unk_0;
        }
    }
    return 0;
}

s32 func_001C5830(Obj_001C5830 *arg0, s32 arg1)
{
    Sub_001C5830 *t;

    if (arg0 != 0) {
        t = arg0->unk_2450;
        if (t != 0 && arg1 >= 0x80 && arg1 < 0xB0) {
            return t->unk_0[arg1 - 0x80].unk_0;
        }
    }
    return 0;
}

f32 func_001C5880(Obj_001C5880 *arg0, s32 arg1)
{
    Sub_001C5880 *t;

    if (arg0 != 0) {
        t = arg0->unk_2450;
        if (t != 0 && arg1 >= 0x80 && arg1 < 0xB0) {
            return t->unk_14[arg1 - 0x80].unk_0;
        }
    }
    return 0.0f;
}

s32 func_001C58D0(Obj_001C58D0 *arg0, s32 arg1)
{
    Sub_001C58D0 *t;

    if (arg0 != 0) {
        t = arg0->unk_2450;
        if (t != 0 && arg1 >= 0x80 && arg1 < 0xB0) {
            return t->unk_C[arg1 - 0x80].unk_0;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5970);
