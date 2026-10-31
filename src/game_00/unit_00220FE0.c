#include "common.h"
#include "types.h"
#include "game_00/unit_001FE660.h"

typedef struct Obj00221190 {
    unsigned char unk_0[0x8];
    int unk_8;
    int unk_C;
} Obj00221190;

typedef struct Obj00221080 {
    u8 unk_0[0xC];
    s32 unk_C;
} Obj00221080;

typedef struct Obj00221170 {
    u8 unk_0[0xC];
    s32 unk_C;
    s32 unk_10;
} Obj00221170;

typedef struct Obj001FF000 {
    u8 unk_0[0x38];
    s32 unk_38;
} Obj001FF000;

typedef struct Elem_002210E0 {
    s32 unk_0;
    u8 pad_4[0x3563C];
} Elem_002210E0;

typedef struct Obj_002210E0 {
    u8 unk_0[4];
    Elem_002210E0 *unk_4;
    s32 unk_8;
    s32 unk_C;
    s32 unk_10;
} Obj_002210E0;

extern int DIntr();

extern int EIntr();

extern int func_002E6C10();

extern int func_002683F0();

extern void func_00221DB0();

typedef struct Obj_00222370 {
    u8 unk_0[0xC];
    f32 unk_C;
} Obj_00222370;

extern Obj_00222370 *func_002B06A8();

extern void func_0015D130(void *, void *);

extern void func_001E7960(void *, s32, f32);

void func_00220FE0(volatile Obj00221080 *arg0)
{
    // !FAKE: the counter is loaded again before the decrement; a volatile view of the object forces the reload
    if (arg0->unk_C > 0) {
        arg0->unk_C = arg0->unk_C - 1;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_00221000);

int func_00221080(Obj00221080 *o)
{
    return o->unk_C == 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_00221090);

void func_002210E0(Obj_002210E0 *o)
{
    DIntr();
    o->unk_4[o->unk_8].unk_0 = 2;
    o->unk_C = o->unk_C + 1;
    o->unk_8 = (o->unk_8 + 1) % o->unk_10;
    EIntr();
}

int func_00221170(Obj00221170 *o)
{
    return o->unk_C == o->unk_10;
}

void func_00221190(Obj00221190 *o)
{
    o->unk_C = 0;
    o->unk_8 = 0;
}

void func_002211A0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_002211B0);

s32 func_00221360(void *arg0, s32 arg1)
{
    Obj001FF000 *obj = func_001FF000(arg0, arg1 | 0x10);
    if (obj != 0)
    {
        return obj->unk_38;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_00221390);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_00221C20);

void *func_00221D60(void *arg0)
{
    int a = func_002E6C10(arg0);
    func_00221DB0(a, func_002683F0(arg0));
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_00221DB0);

void func_002222E0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_002222F0);

void *func_00222370(void *arg0)
{
    u128 buf;
    Obj_00222370 *o;

    o = func_002B06A8();
    func_0015D130(&buf, o);
    func_001E7960(&buf, 0xFF00FFFF, o->unk_C);
    func_001E7960(&buf, -1, 0.001f);
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_002223E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_00222610);
