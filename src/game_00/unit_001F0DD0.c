#include "common.h"

extern s32 D_0051FA10[];

extern s16 D_0051FA2C[];

void func_001F1CA0();

typedef struct Obj_001F1F50 {
    s32 unk_0;
    u8 pad_4[0x10];
    s32 unk_14;
    u8 pad_18[0xC];
    s32 unk_24;
    u8 pad_28[0xC];
    s32 unk_34;
    u8 pad_38[0x18];
    s32 unk_50;
    f32 unk_54;
    f32 unk_58;
    s32 unk_5C;
    s32 unk_60;
} Obj_001F1F50;

typedef struct Obj_001F14B0 {
    s32 unk_0;
    u8 pad_4[4];
    /* 0x08 */ struct Obj_001F14B0 *next;
} Obj_001F14B0;

extern Obj_001F14B0 *D_0051FA28[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F0DD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F0F00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F0F50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F0FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F0FF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F1300);

s32 func_001F14B0(s32 arg0)
{
    s32 i;
    Obj_001F14B0 *p;

    if (arg0 < 0)
        return 0;
    if (arg0 >= D_0051FA2C[0])
        return 0;
    p = D_0051FA28[0];
    i = 0;
    while (p->unk_0 != 1) {
        if (i == arg0)
            return p->unk_0;
        p = p->next;
        i++;
    }
    return 0;
}

s16 func_001F1510(void)
{
    return D_0051FA2C[0];
}

s32 func_001F1520(void)
{
    return D_0051FA10[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F1530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F1590);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F16A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F1730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F18A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F18F0);

void func_001F1BE0(void)
{
    void *p;

    while (1) {
        p = (void *)func_001F14B0(0);
        if (p == 0)
            break;
        func_001F1C20(p);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F1C20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F1CA0);

void func_001F1D10(void)
{
    func_001F1CA0(D_0051FA10[0]);
    D_0051FA10[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F1D40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F1DB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F1ED0);

void func_001F1F50(Obj_001F1F50 *arg0)
{
    arg0->unk_0 = arg0->unk_0 & ~0xEFC;
    arg0->unk_14 = 3;
    arg0->unk_60 = 2;
    arg0->unk_34 = -1;
    arg0->unk_50 = -1;
    arg0->unk_54 = 1.0f;
    arg0->unk_58 = 1.0f;
    arg0->unk_5C = 0;
    arg0->unk_24 = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F0DD0", func_001F1FA0);
