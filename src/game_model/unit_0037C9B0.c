#include "common.h"

void func_0036D830(void);

typedef struct Obj_0037C9E0 {
    u8 pad_0[0x10];
    s32 unk_10;
} Obj_0037C9E0;

typedef struct Obj_0037C9B0 {
    u8 pad_0[0x14];
    s32 unk_14[0x18];
} Obj_0037C9B0;

#include "game_model/obj_0036EBE0.h"

extern s32 D_004DCB60[];

extern s32 D_004E1140[];

extern s32 D_004E1170[];

extern s32 D_004E1180[];

extern s32 D_00507E28[];

void func_0036DC20();

extern s32 D_004E10E0[];

extern s32 D_004E1110[];

extern s32 D_004E1120[];

extern s32 D_00507E30[];

extern s32 D_004E1020[];

extern s32 D_004E1050[];

extern s32 D_004E1060[];

extern s32 D_00507E40[];

void func_0037C9B0(Obj_0037C9B0 *arg0, s32 arg1, s32 arg2)
{
    if (arg0 != 0 && arg1 >= 0 && arg1 < 0x18) {
        arg0->unk_14[arg1] = arg2;
    }
}

void func_0037C9E0(Obj_0037C9E0 *arg0, s32 arg1)
{
    if (arg0 != 0) {
        arg0->unk_10 = arg1;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037C9B0", func_0037CA00);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037C9B0", func_0037CAC0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037C9B0", func_0037CB60);

void func_0037CBB0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037C9B0", func_0037CBC0);

void func_0037CC60(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xDA, D_004DCB60, D_004E1140, D_004E1170, D_004E1180, 0, D_00507E28);
}

void func_0037CCC0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037C9B0", func_0037CCD0);

void func_0037CD70(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xD6, D_004DCB60, D_004E10E0, D_004E1110, D_004E1120, 0, D_00507E30);
}

void func_0037CDD0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037C9B0", func_0037CDE0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037C9B0", func_0037CE80);

void func_0037CEE0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037C9B0", func_0037CEF0);

void func_0037CF90(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xD4, D_004DCB60, D_004E1020, D_004E1050, D_004E1060, 0, D_00507E40);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037C9B0", func_0037CFF0);
