#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0xF8];
    int unk_F8;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A3AC8", func_002A3AC8);

int func_002A3AD8(Obj *p)
{
    return p->unk_F8;
}
