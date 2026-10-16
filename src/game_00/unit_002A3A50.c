#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x3C];
    int unk_3C;
} Obj;

typedef struct Obj002A3A80 {
    unsigned char unk_0[0x48];
    int unk_48;
    int unk_4C;
} Obj002A3A80;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A3A50", func_002A3A50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A3A50", func_002A3A60);

Obj002A3A80 *func_002A3A80(Obj002A3A80 *p, int arg1, int arg2)
{
    p->unk_48 = arg1;
    p->unk_4C = arg2;
    return p;
}

int func_002A3A90(Obj *p)
{
    return p->unk_3C;
}
