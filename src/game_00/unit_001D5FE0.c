#include "common.h"

void func_0019CA40();

void func_001D6790();

extern s32 D_0051EFA0[];

extern s32 D_0051EE90[];

extern s32 D_0051EF10[];

s32 func_001A27C0();

typedef struct Elem_001D6790 {
    u8 unk_0[0x10];
    /* 0x10 */ u32 flags_10;
    u8 unk_14[0x8];
    /* 0x1C */ u32 flags_1C;
} Elem_001D6790;

typedef struct Sub_001D6790 {
    Elem_001D6790 *unk_0;
    s32 unk_4;
    /* 0x08 */ struct Sub_001D6790 *next;
} Sub_001D6790;

typedef struct Obj_001D6790 {
    u8 unk_0[0x23E8];
    Sub_001D6790 *unk_23E8;
} Obj_001D6790;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D5FE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D6050);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D63B0);

s32 func_001D6550(s32 arg0, s32 arg1, s32 arg2)
{
    s32 *slot;
    s32 v;

    if (arg1 < 0 || arg1 >= 0x20) {
        *(long long *)1 = 0;
    }
    slot = &D_0051EE90[arg1];
    if (*slot == 0) {
        *(long long *)1 = 0;
    }
    v = ((s32 *)*slot)[arg2];
    if (v == -1) {
        return 0;
    }
    return func_001A27C0(arg0, v);
}

s32 func_001D65D0(s32 arg0, s32 arg1, s32 arg2)
{
    s32 *slot;
    s32 v;

    if (arg1 < 0 || arg1 >= 0x20) {
        *(long long *)1 = 0;
    }
    slot = &D_0051EF10[arg1];
    if (*slot == 0) {
        *(long long *)1 = 0;
    }
    v = ((s32 *)*slot)[arg2];
    if (v == -1) {
        return 0;
    }
    return func_001A27C0(arg0, v);
}

void func_001D6650(void)
{
}

void func_001D6660(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg2 < 0 || arg2 >= 0x20) {
        *(long long *)1 = 0;
    }
    D_0051EE90[arg2] = arg1;
}

void func_001D66A0(void)
{
}

void func_001D66B0(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg2 < 0 || arg2 >= 0x20) {
        *(long long *)1 = 0;
    }
    D_0051EF10[arg2] = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D66F0);

void func_001D6790(Obj_001D6790 *arg0, Obj_001D6790 *arg1)
{
    Sub_001D6790 *link;
    Elem_001D6790 *item;

    if (arg0 != arg1) {
        link = arg0->unk_23E8;
        item = link->unk_0;
        while (item != (Elem_001D6790 *)1) {
            if (!(item->flags_1C & 0x80000000) && !(item->flags_10 & 0x80000000)) {
                item->flags_1C = item->flags_1C | 0x08000000;
            }
            link = link->next;
            item = link->unk_0;
        }
    }
}

void func_001D6800(s32 arg0)
{
    func_0019CA40(func_001D6790, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D6810);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D68E0);

void func_001D6DA0(s32 arg0)
{
    s32 i;

    for (i = 0; i < 100; i++) {
        if (arg0 == D_0051EFA0[i])
            D_0051EFA0[i] = -1;
    }
}

s32 func_001D6DE0(void)
{
    s32 i;

    for (i = 0; i < 100; i++) {
        if (D_0051EFA0[i] == -1) {
            D_0051EFA0[i] = i + 1000;
            return D_0051EFA0[i];
        }
    }
    return -1;
}

void func_001D6E30(void)
{
    s32 i;

    for (i = 0; i < 100; i++) {
        D_0051EFA0[i] = -1;
    }
}
