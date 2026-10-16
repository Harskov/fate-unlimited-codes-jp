#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x20];
    int unk_20;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00316128", func_00316128);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00316128", func_00316148);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00316128", func_003161E8);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00316128", func_00316328);

int func_00316408(Obj *p)
{
    return p->unk_20;
}
