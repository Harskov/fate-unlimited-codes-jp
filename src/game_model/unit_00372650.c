#include "common.h"
#include "game_model/obj_0036EBE0.h"

void func_0036D830(void);

extern s32 D_004DCB60[];

extern s32 D_004DECA0[];

extern s32 D_004DECC0[];

extern s32 D_004DEDB0[];

extern s32 D_004DEDD0[];

extern s32 D_00507AF0[];

void func_0036D890();

extern s32 D_004DEB90[];

extern s32 D_004DEBA0[];

extern s32 D_004DEC60[];

extern s32 D_004DEC70[];

extern s32 D_00507AF8[];

extern s32 D_004DE6B0[];

extern s32 D_004DE770[];

extern s32 D_004DE780[];

extern s32 D_00507AE0[];

void func_0036DC20();

extern s32 D_004DEE00[];

extern s32 D_004DEE10[];

extern s32 D_004DEED0[];

extern s32 D_004DEEE0[];

extern s32 D_00507AE8[];

void func_00372650(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00372650", func_00372660);

void func_00372770(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 4, 0xC8, D_004DCB60, D_004DE6B0, D_004DE770, D_004DE780, 4, D_00507AE0);
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00372650", func_003727D0);

void func_003728B0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00372650", func_003728C0);

void func_003729C0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036D890(arg0, arg1, arg0->unk_4->unk_3C, 4, D_004DEE00, D_004DCB60, D_004DEE10, D_004DEED0, D_004DEEE0, 0x40, D_00507AE8);
}

void func_00372A30(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00372650", func_00372A40);

void func_00372B50(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036D890(arg0, arg1, arg0->unk_4->unk_3C, 5, D_004DECA0, D_004DCB60, D_004DECC0, D_004DEDB0, D_004DEDD0, 0x40, D_00507AF0);
}

void func_00372BC0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00372650", func_00372BD0);

void func_00372CD0(Obj_0036EBE0_A *arg0, s32 arg1)
{
    func_0036D890(arg0, arg1, arg0->unk_4->unk_3C, 4, D_004DEB90, D_004DCB60, D_004DEBA0, D_004DEC60, D_004DEC70, 0x40, D_00507AF8);
}
