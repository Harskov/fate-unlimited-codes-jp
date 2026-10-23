#include "common.h"
#include "libc.h"

extern s32 D_00522C70[];

extern s32 D_00522C78[];

extern s32 D_00522DB0[];

s32 func_0020F180(s32 *arg0, s32 arg1);

extern int strcmp(const char *a, const char *b);

extern s32 D_00522CA0[];

void func_00208D10(s32 *arg0, s32 arg1);

// registers the table at D_00522DB0 with the size 0x1C8000 and keeps the result
void func_00208780(void)
{
    D_00522C78[0] = 0x1C8000;
    D_00522C70[0] = func_0020F180(D_00522DB0, 0x1C8000);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_002087C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208840);

int func_002088B0(char *a, char *b)
{
    int len;

    len = strlen(b);
    if (len > 0x3F)
        b += len - 0x3F;
    return strcmp(a, b);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208910);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208970);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208A00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208A80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208B50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208BF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208C40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208CB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208D10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00208EA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00209020);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00209250);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_002095C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00209600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_002096A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00209750);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00208780", func_00209830);

s32 func_00209870(s32 arg0)
{
    func_00208D10(D_00522CA0, 0);
    return 0;
}
