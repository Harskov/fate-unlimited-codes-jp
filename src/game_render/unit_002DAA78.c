#include "common.h"

typedef struct Obj {
    int unk_0;
    int unk_4;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DAA78", func_002DAA78);

int func_002DAB98(Obj *p)
{
    return p->unk_4;
}
