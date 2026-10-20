#include "common.h"
#include "types.h"

extern s32 D_00523A28[];

extern s32 D_00523A40[];

extern void func_0020E040(void *, s32, s32);

extern void func_0020DF80(void *, s32, s32);

extern s32 dpcmp();

typedef struct Obj_00159B60 {
    u8 unk_0[0x150];
    u8 unk_150[0x30];
    u8 unk_180[0x70];
} Obj_00159B60;

extern s32 D_00523860[];

extern s32 D_00523890[];

#include "libc.h"

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", _dpfge);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_00159910);

s32 func_00159930(void)
{
    return dpcmp() < 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_00159950);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", _f_ulltof);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_001599B0);

// stores the bit pattern of 1.0f; probably a float global, typed as s32 here
void func_00159A90(void)
{
    D_00523A28[0] = 0x3F800000;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_00159AA0);

void func_00159B20(s32 arg0)
{
    func_0020E040(D_00523A40, 0xB0, arg0);
}

void func_00159B40(s32 arg0)
{
    func_0020DF80(D_00523A40, 0xB0, arg0);
}

void func_00159B60(Obj_00159B60 *arg0)
{
    memcpy(arg0->unk_150, D_00523860, 0x30);
    memcpy(arg0->unk_180, D_00523890, 0x70);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_00159BB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_00159C90);

void func_00159E30(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_00159E40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_0015A220);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001598E0", func_0015A260);
