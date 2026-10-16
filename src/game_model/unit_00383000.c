#include "common.h"

typedef struct Obj_003830F0 {
    u8 unk_0[0x150];
    s32 unk_150;
    u8 unk_154[4];
} Obj_003830F0;

void func_0015D130(u8 *arg0);

typedef struct Obj_00383100 {
    u8 unk_0[0x150];
    s32 unk_150;
    u8 unk_154[4];
} Obj_00383100;

typedef struct Obj_00383390 {
    u8 unk_0[0x60];
    s32 unk_60;
    u8 unk_64[4];
} Obj_00383390;

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383000);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383020);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_003830D0);

void func_003830F0(Obj_003830F0 *arg0)
{
    arg0->unk_150 = 2;
    func_0015D130(arg0->unk_154);
}

void func_00383100(Obj_00383100 *arg0)
{
    arg0->unk_150 = 1;
    func_0015D130(arg0->unk_154);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383110);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383220);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_003832A0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_003832C0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383370);

void func_00383390(Obj_00383390 *arg0)
{
    arg0->unk_60 = 1;
    func_0015D130(arg0->unk_64);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_003833A0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_003833C0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383410);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383470);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_003834B0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383000", func_00383500);
