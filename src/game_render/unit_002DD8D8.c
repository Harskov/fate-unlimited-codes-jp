#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x18];
    int unk_18;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DD8D8", func_002DD8D8);

int func_002DD8F8(Obj *p)
{
    return p->unk_18;
}
