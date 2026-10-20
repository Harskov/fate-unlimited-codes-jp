#include "common.h"
#include "types.h"

extern s32 gChangeThreadPriorityResult[];

s32 GetThreadId(void);

s32 ChangeThreadPriority(s32 threadId, s32 priority);

typedef struct Node_0015A410 {
    unsigned char pad_0[0x4];
    /* 0x04 */ struct Node_0015A410 *next;
} Node_0015A410;

typedef struct Node_0015A3D0 {
    unsigned char pad_0[0x8];
    /* 0x08 */ struct Node_0015A3D0 *next;
} Node_0015A3D0;

extern s32 D_00518410[];

extern s32 D_00518420[];

void func_0015A590();

Node_0015A410 *func_0015A410(Node_0015A410 *arg0);

void func_0015A310(Node_0015A410 *arg0);

void func_0015A2E0(Node_0015A410 *arg0)
{
    if (arg0 != 0) {
        func_0015A310(func_0015A410(arg0));
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A310);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A360);

Node_0015A3D0 *func_0015A3D0(Node_0015A3D0 *arg0)
{
    Node_0015A3D0 *node;

    if (arg0 == 0)
        return 0;
    node = arg0->next;
    while (node != 0) {
        arg0 = node;
        node = node->next;
    }
    return arg0;
}

Node_0015A410 *func_0015A410(Node_0015A410 *arg0)
{
    Node_0015A410 *node;

    if (arg0 == 0)
        return 0;
    node = arg0->next;
    while (node != 0) {
        arg0 = node;
        node = node->next;
    }
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A450);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A4A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A4F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A520);

void func_0015A580(void)
{
}

void func_0015A590(s32 *arg0)
{
    arg0[0] = 0;
    arg0[1] = 0xAAAAAAAA;
    arg0[2] = 0xAAAAAAAA;
    arg0[3] = 0xAAAAAAAA;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A5B0);

void func_0015A690(void)
{
    s32 i;
    s32 *p;

    p = D_00518420;
    for (i = 0; i < 0x200; i++) {
        func_0015A590(p);
        p += 4;
    }
    D_00518410[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A6F0);

void func_0015A7C0(void)
{
    gChangeThreadPriorityResult[0] = ChangeThreadPriority(GetThreadId(), 1);
    ChangeThreadPriority(GetThreadId(), gChangeThreadPriorityResult[0]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015A810);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", main);

void func_0015AA30(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015A2E0", func_0015AA40);
