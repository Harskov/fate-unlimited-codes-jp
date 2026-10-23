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

typedef struct Sub_0015AA40 {
    unsigned char pad_0[0x38];
    /* 0x38 */ s32 unk_38;
} Sub_0015AA40;

typedef struct Obj_0015AA40 {
    unsigned char pad_0[0x14];
    /* 0x14 */ Sub_0015AA40 *unk_14;
} Obj_0015AA40;

extern s32 D_004EA660[];

extern s32 D_0051D890[];

extern s32 D_0051FA30[];

extern s32 D_0051FAD0[];

extern s32 D_00524798[];

void func_0013E828();

void func_001E8B70();

void func_001F5A30();

void func_002009A0();

s32 func_00209870(s32 arg0);

void func_002098B0();

void func_00209A30();

void func_00209A70();

void func_00209AB0();

void func_00209B60();

void func_00211190();

void func_00211260();

Obj_0015AA40 *func_00223CA0();

s32 func_00223EA0();

void func_00223FD0();

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

s32 func_0015AA40(void)
{
    Obj_0015AA40 *obj;
    s32 handle;

    D_0051FA30[0] = 0;
    D_0051FAD0[0] = 0;
    func_00209B60();
    D_0051D890[0] |= 0x20;
    obj = func_00223CA0(D_004EA660, 0, 0);
    if (obj != 0) {
        handle = obj->unk_14->unk_38;
        func_00223FD0(handle);
        func_00211190(obj);
        while (func_00223EA0(handle) != 0) {
            func_00211260();
            func_00209870(0);
            func_0013E828();
            func_00209A70();
            func_00209A30(D_00524798[0], 0);
            func_002098B0(D_00524798[0], 1);
            func_001E8B70(0);
        }
    }
    func_001F5A30();
    D_0051D890[0] &= ~0x20;
    func_002009A0(1, 0x04000000, -1);
    func_002009A0(2, 0x04000000, -1);
    func_002009A0(0x020F7FFF, 0x04000000, -1);
    func_00209AB0();
    return 0;
}
