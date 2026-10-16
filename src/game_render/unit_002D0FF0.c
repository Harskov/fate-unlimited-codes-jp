#include "common.h"

typedef struct Obj_002D0FF0 {
    unsigned char pad[0x18];
    s32 unk_18;
    s32 unk_1C;
} Obj_002D0FF0;

void func_002D0FF0(Obj_002D0FF0 *p, s32 arg1, s32 arg2)
{
    p->unk_1C = arg2;
    p->unk_18 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002D0FF0", func_002D1000);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002D0FF0", func_002D1010);
