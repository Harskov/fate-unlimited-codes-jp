#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x5C];
    int unk_5C;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A5F28", func_002A5F28);

int func_002A5F38(Obj *p)
{
    return p->unk_5C;
}
