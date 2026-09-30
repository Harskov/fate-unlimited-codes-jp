#include "common.h"
#include "types.h"

int sceMpegAddStrCallback(void *mp, u8 strType, int ch, void *cb, void *data);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220790);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_002208D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220950);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220980);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_002209C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_002209F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220C20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220C90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220CD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220DD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220DE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220E20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220E40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220E50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220E90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220EA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220EB0);

/* evidence: forwards its five arguments unchanged to sceMpegAddStrCallback and returns 1; its only caller is func_0021E0F0 (two cal… */
int mpegAddStrCallback(void *mp, int strType, int ch, void *cb, void *data)
{
    sceMpegAddStrCallback(mp, strType, ch, cb, data);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220EE0);
