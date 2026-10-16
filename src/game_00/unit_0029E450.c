#include "common.h"

typedef struct Obj {
    unsigned char pad[0x30];
    int unk_30;
} Obj;

int func_0029E450(Obj *p)
{
    return p->unk_30 != 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0029E450", func_0029E460);
