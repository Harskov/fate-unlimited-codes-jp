#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0xFC];
    int unk_FC;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A3AE0", func_002A3AE0);

int func_002A3AF0(Obj *p)
{
    return p->unk_FC;
}
