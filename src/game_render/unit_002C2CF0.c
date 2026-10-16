#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x68];
    int unk_68;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002C2CF0", func_002C2CF0);

int func_002C2D10(Obj *p)
{
    return p->unk_68;
}
