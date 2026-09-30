#include "common.h"
#include "types.h"

typedef struct Flags002A5558 {
    unsigned char unk_0[0xF0];
    unsigned int flags;
} Flags002A5558;

int func_002A5558(Flags002A5558 *p)
{
    return p->flags & 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A5558", func_002A5568);
