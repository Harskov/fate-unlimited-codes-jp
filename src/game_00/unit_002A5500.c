#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x108];
    int unk_108;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A5500", func_002A5500);

int func_002A5550(Obj *p)
{
    return p->unk_108;
}
