#include "common.h"

void func_0036D830(void);

#include "game_model/obj_0036EBE0.h"

extern s32 D_004DCB60[];

extern s32 D_004DFBB0[];

extern s32 D_004DFC10[];

extern s32 D_004DFC20[];

extern s32 D_00507BB0[];

void func_0036DC20();

extern s32 D_004DF050[];

extern s32 D_004DF0E0[];

extern s32 D_004DF0F0[];

extern s32 D_00507B88[];

extern s32 D_004DEFB0[];

extern s32 D_004DEFE0[];

extern s32 D_004DEFE8[];

extern s32 D_00507B98[];

void func_0036CE00();

void func_00373E00(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373E00", func_00373E10);

void func_00373F30(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 3, 0xCC, D_004DCB60, D_004DF050, D_004DF0E0, D_004DF0F0, 0x10, D_00507B88);
}

void func_00373F90(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373E00", func_00373FA0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373E00", func_00373FE0);

void func_00374040(void)
{
    func_0036D830();
}

void func_00374050(Obj_0036EBE0_A *arg0, s32 *arg1)
{
    s32 v = *arg1;
    if ((v & 1) && (v & 2)) {
        func_0036CE00(arg0, arg1, arg0->unk_4->unk_3C, 1);
    }
}

void func_00374090(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 1, 0xCA, D_004DCB60, D_004DEFB0, D_004DEFE0, D_004DEFE8, 0x10, D_00507B98);
}

void func_003740F0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373E00", func_00374100);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373E00", func_003741B0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373E00", func_00374210);

void func_00374480(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373E00", func_00374490);

void func_003745A0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 2, 0xE4, D_004DCB60, D_004DFBB0, D_004DFC10, D_004DFC20, 0, D_00507BB0);
}
