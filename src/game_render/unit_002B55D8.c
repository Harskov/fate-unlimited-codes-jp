#include "common.h"

typedef struct Obj_002B5698 {
    u8 pad_0[0xE];
    u16 unk_E;
} Obj_002B5698;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002B55D8", func_002B55D8);

Obj_002B5698 *func_002B5698(Obj_002B5698 *arg0)
{
    arg0->unk_E = arg0->unk_E + 1;
    return arg0;
}
