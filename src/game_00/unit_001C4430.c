#include "common.h"
#include "libc.h"
#include "types.h"

void func_001A46A0(void);

typedef struct Obj {
    u8 unk_0[0x14C];
    s32 unk_14C;
} Obj;

typedef struct Obj_001C46F0 {
    u8 unk_0[0x2448];
    s32 unk_2448;
} Obj_001C46F0;

void func_001C3770(s32 arg0);

typedef struct Obj_001C4470 {
    s32 unk_0;
    s32 unk_4;
    s16 unk_8;
    u8 unk_A;
    u8 unk_B;
    u8 unk_C;
    u8 unk_D;
    s16 unk_E;
    s16 unk_10;
    s16 unk_12;
    s16 unk_14;
    u8 pad_16[2];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    /* 0x34 */ u8 unk_34[4];
    s32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
    s32 unk_70;
    s32 unk_74;
    s32 unk_78;
    s32 unk_7C;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    u8 pad_8C[0x44];
    s32 unk_D0;
    s32 unk_D4;
    s32 unk_D8;
    u8 unk_DC[0x20];
} Obj_001C4470;

void func_001C4590();

s32 func_001C4430(Obj *arg0, s32 arg1)
{
    arg0->unk_14C &= arg1;
    return arg0->unk_14C;
}

s32 func_001C4450(Obj *arg0, s32 arg1)
{
    arg0->unk_14C |= arg1;
    return arg0->unk_14C;
}

void func_001C4470(Obj_001C4470 *arg0, s32 arg1, s32 arg2)
{
    if (arg0 != 0) {
        arg0->unk_0 = 0x10;
        arg0->unk_4 = 0;
        arg0->unk_8 = 0;
        arg0->unk_60 = 0;
        arg0->unk_64 = 0;
        arg0->unk_68 = 0;
        arg0->unk_A = 0;
        arg0->unk_C = 0;
        arg0->unk_D = 0;
        arg0->unk_E = 0;
        arg0->unk_10 = 0;
        arg0->unk_12 = 0;
        arg0->unk_14 = 0;
        arg0->unk_18 = 0;
        arg0->unk_1C = 0;
        arg0->unk_20 = 0;
        arg0->unk_28 = 0;
        arg0->unk_2C = 0;
        arg0->unk_30 = 0;
        arg0->unk_24 = 0;
        arg0->unk_B = 0;
        arg0->unk_38 = 0;
        arg0->unk_3C = 0;
        arg0->unk_40 = 0;
        arg0->unk_44 = 0;
        arg0->unk_84 = 0;
        arg0->unk_88 = 0;
        arg0->unk_48 = 0;
        arg0->unk_4C = 0;
        arg0->unk_50 = 0;
        arg0->unk_54 = 0;
        arg0->unk_58 = 0;
        arg0->unk_5C = 0;
        arg0->unk_6C = 0;
        arg0->unk_70 = 0;
        arg0->unk_74 = 0;
        arg0->unk_78 = 0;
        arg0->unk_7C = 0;
        arg0->unk_80 = 0;
        arg0->unk_D0 = 0;
        arg0->unk_D4 = 0;
        arg0->unk_D8 = 0;
        memset(arg0->unk_DC, 0, 0x20);
        if (arg2 == 0 && arg1 != 0) {
            func_001C4590(arg0->unk_34, arg1);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C4590);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C45B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C4660);

void func_001C46F0(Obj_001C46F0 *arg0)
{
    s32 v;

    if (arg0 != 0) {
        v = arg0->unk_2448;
        if (v != 0) {
            func_001C3770(v);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C4720);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C4770);

void func_001C4890(void)
{
    func_001A46A0();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C48A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C48D0);

int func_001C4980(void)
{
    return 0;
}

int func_001C4990(void)
{
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C49A0);
