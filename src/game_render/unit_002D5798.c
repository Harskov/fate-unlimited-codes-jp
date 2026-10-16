#include "common.h"

typedef struct Obj_002D5798 {
    unsigned char pad[0x48];
    s32 unk_48;
    s32 unk_4C;
} Obj_002D5798;

void func_002D5798(Obj_002D5798 *p, s32 arg1, s32 arg2)
{
    p->unk_4C = arg2;
    p->unk_48 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002D5798", func_002D57A8);
