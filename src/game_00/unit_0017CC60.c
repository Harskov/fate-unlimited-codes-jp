#include "common.h"
#include "libc.h"

extern int D_0051AE60[];

extern u32 D_0051AE48[];

void func_00183640(s32 arg0, s32 arg1);

extern s32 D_0051AD38[];

extern s32 D_0051AD50[];

extern s32 D_00522DB0[];

void func_0020F230();

extern s32 D_0051AD48[];

void func_0017EA40();

extern s32 D_0051AD28[];

extern s32 D_0051AD30[];

extern s32 D_0051AD40[];

s32 func_0020F180();

s32 *func_0017A820();

typedef struct Obj_0017E770 {
    u8 pad_0[0xB8];
    f32 unk_B8;
} Obj_0017E770;

f32 func_0015DED0(Obj_0017E770 *arg0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017CC60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017CD10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017CDC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0017CC60", func_0017E4D0);

f32 func_0017E770(Obj_0017E770 *arg0)
{
    return arg0->unk_B8 * func_0015DED0(arg0);
}

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

void func_0017F500(s32 arg0)
{
    s32 pool;
    s32 *node;
    s32 i;

    D_0051AD48[0] = 0;
    D_0051AD50[0] = 0;
    pool = func_0020F180(D_00522DB0, arg0 * 0x120);
    D_0051AD38[0] = pool;
    for (i = 0; i < arg0; i++) {
        node = func_0017A820(&pool, 0x120);
        if (node == 0)
            return;
        memset(node, 0, 0x120);
        node[0] = D_0051AD50[0];
        D_0051AD50[0] = (s32)node;
    }
    D_0051AE60[0] = 0;
    D_0051AE48[0] = 0;
    D_0051AD30[0] = 0;
    D_0051AD28[0] = 0;
    D_0051AD40[0] = 0;
}

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
