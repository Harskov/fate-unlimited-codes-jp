#include "common.h"
#include "types.h"

extern s32 D_005361A8[];

extern s32 D_00522DB0[];

void func_0020F230();

void func_0037FA80();

void func_00381F00();

void func_00383470();

s32 func_0020F180();

void func_003834B0();

void func_00381F40();

extern s32 D_005361B0[];

s32 func_0020E5F0(s32, s32, s32, s32);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380720", func_00380720);

void func_003808B0(void)
{
}

s64 func_003808C0(void)
{
    s32 v = D_005361B0[0] + 1;

    D_005361B0[0] = v;
    if (v >= 0x65) {
        v = 0;
        D_005361B0[0] = 0;
    }
    return v;
}

// !FAKE: the word at D_005361A8 holds a pointer the unit declares as s32; read as a pointer the store through it may reach the global, so the second statement reloads it as the reference does
void func_00380900(s32 arg0)
{
    ((s32 **)D_005361A8)[0][14] = arg0;
    ((s32 **)D_005361A8)[0][0] |= 0x100;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380720", func_00380930);

void func_00380C60(s32 arg0)
{
    ((s32 *)D_005361A8[0])[4] = func_0020E5F0(((s32 *)D_005361A8[0])[4], arg0, 0, 0x98967F);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00380720", func_00380CA0);

void func_00380D30(void)
{
    s32 v = D_005361A8[0];

    if (v == 0) {
        return;
    }
    func_0020F230(D_00522DB0, v);
    D_005361A8[0] = 0;
    func_00381F00();
    func_0037FA80();
    func_00383470();
}

s32 func_00380D80(void)
{
    return D_005361A8[0];
}

void func_00380D90(void)
{
    memset(D_005361A8[0], 0, 0x3C);
}

s32 func_00380DB0(void)
{
    if (D_005361A8[0] != 0) {
        return D_005361A8[0];
    }
    D_005361A8[0] = func_0020F180(D_00522DB0, 0x3C);
    func_00380D90();
    func_003834B0();
    func_00381F40();
    return D_005361A8[0];
}
