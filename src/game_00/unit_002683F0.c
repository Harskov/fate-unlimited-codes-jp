#include "common.h"

typedef struct Obj {
    int unk_0;
    int unk_4;
    int unk_8;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002683F0", func_002683F0);

int func_00268400(Obj *p)
{
    return p->unk_8;
}
