#include "common.h"

typedef struct Obj_002D0FF0 {
    unsigned char pad[0x18];
    s32 unk_18;
    s32 unk_1C;
} Obj_002D0FF0;

typedef struct Obj_002D1000 {
    u8 unk_0[0xC];
    s32 unk_C;
    s32 unk_10;
    f32 unk_14;
} Obj_002D1000;

void func_002D0FF0(Obj_002D0FF0 *p, s32 arg1, s32 arg2)
{
    p->unk_1C = arg2;
    p->unk_18 = arg1;
}

void func_002D1000(Obj_002D1000 *p, s32 arg1, s32 arg2, f32 arg3)
{
    p->unk_10 = arg2;
    p->unk_C = arg1;
    p->unk_14 = arg3;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002D0FF0", func_002D1010);
