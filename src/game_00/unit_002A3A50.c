#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x3C];
    int unk_3C;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A3A50", func_002A3A50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A3A50", func_002A3A60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A3A50", func_002A3A80);

int func_002A3A90(Obj *p)
{
    return p->unk_3C;
}
