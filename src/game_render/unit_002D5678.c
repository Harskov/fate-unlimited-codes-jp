#include "common.h"

typedef struct Obj {
    int unk_0;
    int unk_4;
    int unk_8;
    int unk_C;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002D5678", func_002D5678);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002D5678", func_002D56D8);

int func_002D5778(Obj *p)
{
    return p->unk_C;
}
