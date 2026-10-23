#include "common.h"
#include "game_01/unit_00327D30.h"

extern s32 D_00522DB0[];

void func_0020F230();

void func_00327D30(s32 *arg0, s32 arg1)
{
    arg0[3] = arg1;
    *arg0 |= 0x402;
}

void func_00327D50(s32 *arg0, s32 arg1)
{
    arg0[4] = arg1;
    *arg0 |= 0x402;
}

void func_00327D70(s32 *arg0, s32 arg1)
{
    arg0[1] = arg1;
    *arg0 |= 0x402;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_00327D90);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_00327E80);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_00328090);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_003280F0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_003281E0);

void func_00328250(Obj_00328250 *arg0)
{
    memset(arg0, 0, 0x370);
    arg0->unk_4 = -1;
    arg0->unk_1C = -1;
    arg0->unk_28 = -1;
    arg0->unk_2D0 = 0;
    arg0->unk_54 = 0;
    arg0->unk_6C = 0;
    arg0->unk_80 = 0;
    arg0->unk_98 = 0;
    arg0->unk_AC = 0;
    arg0->unk_C4 = 0;
    arg0->unk_D8 = 0;
    arg0->unk_F0 = 100.0f;
    arg0->unk_F8 = 0;
    arg0->unk_110 = 100.0f;
    arg0->unk_118 = 0;
    arg0->unk_130 = 100.0f;
    arg0->unk_18C = 0;
    arg0->unk_1AC = 0;
    arg0->unk_1CC = 0;
    arg0->unk_13C = 0;
    arg0->unk_138 = 0;
    arg0->unk_158 = 0;
    arg0->unk_154 = 0;
    arg0->unk_174 = 0;
    arg0->unk_170 = 0;
    arg0->unk_210 = -1;
    arg0->unk_238 = -1;
    arg0->unk_260 = -1;
    arg0->unk_288 = -1;
}

void func_00328300(s32 *arg0)
{
    s32 v = *arg0;
    if (v == 0) {
        return;
    }
    func_0020F230(D_00522DB0, v);
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_00328330);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_003283A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_003284D0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_00328730);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_00328860);

void func_00328990(s32 *arg0, s32 *arg1, s32 arg2)
{
    if (*arg0 <= 0) {
        *arg1 += arg2;
    } else {
        *arg0 -= arg2;
    }
    if (*arg0 < 0) {
        *arg1 -= *arg0;
        *arg0 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_003289E0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327D30", func_00328AA0);
