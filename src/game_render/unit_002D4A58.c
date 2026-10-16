#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x14];
    int unk_14;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002D4A58", func_002D4A58);

int func_002D4AE8(Obj *p)
{
    return p->unk_14;
}
