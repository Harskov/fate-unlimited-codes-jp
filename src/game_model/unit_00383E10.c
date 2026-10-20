#include "common.h"

extern s32 D_005361E0[];

void func_0036D830(void);

void func_0036CE00();

typedef struct Obj_00383E20_Inner {
    u8 pad_0[0x3C];
    u32 unk_3C;
} Obj_00383E20_Inner;

typedef struct Obj_00383E20 {
    u32 unk_0;
    Obj_00383E20_Inner *unk_4;
} Obj_00383E20;

extern s32 D_004DCB60[];

extern s32 D_004E1A00[];

extern s32 D_004E1A30[];

extern s32 D_004E1A38[];

extern s32 D_005083B0[];

void func_0036DC20();

void func_00383E10(void)
{
    func_0036D830();
}

void func_00383E20(Obj_00383E20 *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

void func_00383E60(Obj_00383E20 *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xCE, D_004DCB60, D_004E1A00, D_004E1A30, D_004E1A38, 0, D_005083B0);
}

void func_00383EC0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383E10", func_00383ED0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383E10", func_00383FD0);

void func_00384030(void)
{
    func_0036D830();
}

void func_00384040(Obj_00383E20 *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 2);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383E10", func_00384080);

void func_003840E0(void)
{
    func_0036D830();
}

void func_003840F0(Obj_00383E20 *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 2);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383E10", func_00384130);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383E10", func_00384190);

void func_00384420(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383E10", func_00384430);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00383E10", func_003844F0);

s32 *func_00384550(void)
{
    return D_005361E0;
}
