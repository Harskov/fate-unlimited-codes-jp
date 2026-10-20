#include "common.h"

extern s32 D_00532050[];

extern s32 D_00532058[];

extern s32 D_00522DB0[];

void func_0015A2E0();

void func_0020F230();

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00366280", func_00366280);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00366280", func_00366D30);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00366280", func_00367150);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00366280", func_00367C90);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00366280", func_00368670);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00366280", func_00368AA0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00366280", func_00369610);

void func_00369A40(void)
{
    s32 *node;

    for (node = (s32 *)D_00532058[0]; node != 0; node = (s32 *)node[2])
        func_0020F230(D_00522DB0, node[3]);
    func_0015A2E0(D_00532058[0]);
    D_00532058[0] = 0;
    func_0015A2E0(D_00532050[0]);
    D_00532050[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00366280", func_00369AB0);

int func_00369C00(void)
{
    return 0;
}

int func_00369C10(void)
{
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00366280", func_00369C20);

void func_00369CE0(void)
{
    D_00532050[0] = 0;
    D_00532058[0] = 0;
}
