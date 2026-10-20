#include "common.h"

void func_0036D830(void);

extern s32 D_004DCB60[];

extern s32 D_004DF120[];

extern s32 D_004DF1B0[];

extern s32 D_004DF1C0[];

extern s32 D_00507B80[];

void func_0036DC20();

typedef struct Obj_00373DA0_Inner {
    u8 unk_0[0x3C];
    s32 unk_3C;
} Obj_00373DA0_Inner;

typedef struct Obj_00373DA0 {
    s32 unk_0;
    Obj_00373DA0_Inner *unk_4;
} Obj_00373DA0;

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373500", func_00373500);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373500", func_00373610);

void func_003736D0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373500", func_003736E0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373500", func_003737F0);

void func_003738B0(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373500", func_003738C0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373500", func_003739D0);

void func_00373A90(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373500", func_00373AA0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373500", func_00373BB0);

void func_00373C70(void)
{
    func_0036D830();
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00373500", func_00373C80);

void func_00373DA0(Obj_00373DA0 *arg0, s32 arg1)
{
    func_0036DC20(arg0, arg1, arg0->unk_4->unk_3C, 3, 0xCF, D_004DCB60, D_004DF120, D_004DF1B0, D_004DF1C0, 0x10, D_00507B80);
}
