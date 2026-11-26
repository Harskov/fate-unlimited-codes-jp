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

typedef struct Obj_001CC010 {
    /* 0x00 */ f32 unk_0;
    u8 pad_4[4];
    /* 0x08 */ f32 unk_8;
} Obj_001CC010;

void func_001CC010();

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

/* Looks like the sine (+0x0) and cosine (+0x8) of an angle in sixteenths of a turn
   (0x10000 a full turn), read from a table of literals; any other angle clears +0x8 only. */
// unk_0 and unk_8 take the sine and cosine of the angle, in sixteenths of a turn (0x1000 each)
void func_001CC010(Obj_001CC010 *arg0, s32 arg1)
{
    switch (arg1) {
    case 0x0:
        arg0->unk_0 = 0.0f;
        arg0->unk_8 = 1.0f;
        break;
    case 0x1000:
        arg0->unk_0 = 0.382683f;
        arg0->unk_8 = 0.92388f;
        break;
    case 0x2000:
        arg0->unk_0 = 0.707107f;
        arg0->unk_8 = 0.707107f;
        break;
    case 0x3000:
        arg0->unk_0 = 0.92388f;
        arg0->unk_8 = 0.382683f;
        break;
    case 0x4000:
        arg0->unk_0 = 1.0f;
        arg0->unk_8 = 0.0f;
        break;
    case 0x5000:
        arg0->unk_0 = 0.92388f;
        arg0->unk_8 = -0.382683f;
        break;
    case 0x6000:
        arg0->unk_0 = 0.707107f;
        arg0->unk_8 = -0.707107f;
        break;
    case 0x7000:
        arg0->unk_0 = 0.382683f;
        arg0->unk_8 = -0.92388f;
        break;
    case 0x8000:
        arg0->unk_0 = 0.0f;
        arg0->unk_8 = -1.0f;
        break;
    case 0x9000:
        arg0->unk_0 = -0.382683f;
        arg0->unk_8 = -0.92388f;
        break;
    case 0xA000:
        arg0->unk_0 = -0.707107f;
        arg0->unk_8 = -0.707107f;
        break;
    case 0xB000:
        arg0->unk_0 = -0.92388f;
        arg0->unk_8 = -0.382683f;
        break;
    case 0xC000:
        arg0->unk_0 = -1.0f;
        arg0->unk_8 = 0.0f;
        break;
    case 0xD000:
        arg0->unk_0 = -0.92388f;
        arg0->unk_8 = 0.382683f;
        break;
    case 0xE000:
        arg0->unk_0 = -0.707107f;
        arg0->unk_8 = 0.707107f;
        break;
    case 0xF000:
        arg0->unk_0 = -0.382683f;
        arg0->unk_8 = 0.92388f;
        break;
    default:
        arg0->unk_8 = 0.0f;
        break;
    }
}

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

void func_001CC290(Obj_001CC220 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
    arg0->unk_2FC = arg1;
    arg0->unk_300 = arg2;
    arg0->unk_304 = arg3;
    arg0->unk_308 = 1;
    arg0->unk_30C = arg4;
    arg0->unk_310 = arg5;
    arg0->unk_314 = arg6;
    func_001CBC70();
    func_001CC220(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CB1F0", func_001CC2E0);
