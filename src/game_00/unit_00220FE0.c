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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_00220FE0);

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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_00221D60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_00221DB0);

void func_002222E0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_002222F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_00222370);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_002223E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220FE0", func_00222610);
