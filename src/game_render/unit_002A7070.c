#include "common.h"

typedef struct Obj002A7160 {
    unsigned char pad[0x24];
    float unk_24;
} Obj002A7160;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002A7070", func_002A7070);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002A7070", func_002A7080);

float func_002A7160(Obj002A7160 *p)
{
    return p->unk_24;
}
