#include "common.h"
#include "types.h"

extern s32 D_00536160[];

void func_0036D830(void);

#include "game_model/obj_0036EBE0.h"

extern s32 D_004DCB60[];

extern s32 D_004E0D20[];

extern s32 D_004E0D80[];

extern s32 D_004E0D90[];

extern s32 D_00507D48[];

void func_0036DC20();

extern s32 D_004E0C80[];

extern s32 D_004E0CE0[];

extern s32 D_004E0CF0[];

extern s32 D_00507D50[];

void func_00379940(void)
{
    D_00536160[0] = 0;
}

void func_00379950(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00379940", func_00379960);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00379940", func_00379A60);

void func_00379AC0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00379940", func_00379AD0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00379940", func_00379BE0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00379940", func_00379C40);

void func_00379D50(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xD6, D_004DCB60, D_004E0D20, D_004E0D80, D_004E0D90, 0, D_00507D48);
}

void func_00379DB0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00379940", func_00379DC0);

void func_00379EC0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xDF, D_004DCB60, D_004E0C80, D_004E0CE0, D_004E0CF0, 0, D_00507D50);
}

void func_00379F20(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00379940", func_00379F30);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00379940", func_0037A040);
