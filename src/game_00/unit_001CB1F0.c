#include "common.h"

typedef struct Obj_001CC220 {
    u8 unk_0[0x2E8];
    s32 unk_2E8;
    s32 unk_2EC;
    s32 unk_2F0;
    s32 unk_2F4;
    s32 unk_2F8;
    s32 unk_2FC;
    s32 unk_300;
    s32 unk_304;
    s32 unk_308;
    s32 unk_30C;
    s32 unk_310;
    s32 unk_314;
} Obj_001CC220;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CB1F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CB2C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CB760);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CBA10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CBB60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CBBB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CBC70);

void func_001CBF00(s32 arg0, s32 arg1, s32 arg2)
{
    func_001CC010(arg0, arg2);
    func_001CBF50(arg0, arg1);
    func_00165EE0(arg0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CBF50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CC010);

void func_001CC220(Obj_001CC220 *arg0)
{
    arg0->unk_2E8 = 0;
    arg0->unk_2EC = 0;
    arg0->unk_2F0 = 0;
    arg0->unk_2F4 = 0;
}

void func_001CC240(Obj_001CC220 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
    arg0->unk_2FC = arg1;
    arg0->unk_300 = arg2;
    arg0->unk_304 = arg3;
    arg0->unk_308 = 2;
    arg0->unk_30C = arg4;
    arg0->unk_310 = arg5;
    arg0->unk_314 = arg6;
    func_001CBC70();
    func_001CC220(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CC290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CC2E0);
