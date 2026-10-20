#include "common.h"

extern int D_0051AE60[];

extern u32 D_0051AE48[];

void func_00183640(s32 arg0, s32 arg1);

extern s32 D_0051AD38[];

extern s32 D_0051AD50[];

extern s32 D_00522DB0[];

void func_0020F230();

extern s32 D_0051AD48[];

void func_0017EA40();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017CC60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017CD10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017CDC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017E4D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017E770);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017E7A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017E7E0);

void func_0017E920(void)
{
    D_0051AE60[0]--;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017E940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017EA40);

void func_0017EB30(void)
{
    s32 *node;
    s32 *next;

    node = (s32 *)D_0051AD48[0];
    while (node != 0) {
        next = (s32 *)node[0];
        func_0017EA40(node);
        node = next;
    }
}

void func_0017EB80(void)
{
    func_0020F230(D_00522DB0, D_0051AD38[0]);
    D_0051AD50[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017EBB0);

void func_0017EC80(void)
{
    u32 n;

    n = D_0051AE60[0] + 1;
    D_0051AE60[0] = n;
    if (n > D_0051AE48[0])
        D_0051AE48[0] = n;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017ECC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017F3F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017F430);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017F500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017F5F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017F7A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017F840);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_00182A50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_00182B00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_00182B60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_00182C00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_00182D60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_00182E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_00182EC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_00183140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_001833C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_00183420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_00183470);

void func_00183630(s32 arg0, s32 *arg1)
{
    func_00183640(arg0, arg1[1]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_00183640);
