#include "common.h"

extern char D_00507258[];

int scePrintf(const char *fmt, ...);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00355180", sceCdMmode);

/* evidence: byte-identical (relocations masked) to persona-4:sceCdChgSys; named there from: debug string D_007546F0 begins with … */
int sceCdChgSys(void)
{
    scePrintf(D_00507258);
    return 2;
}
