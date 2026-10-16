#include "common.h"
#include "types.h"

extern s32 D_00527A08[];

typedef struct Obj_002240B0 {
    u8 unk_0[0x5C];
    s32 unk_5C;
} Obj_002240B0;

typedef struct Obj_00225720 {
    u8 unk_0[0xC];
    Obj_002240B0 *unk_C;
} Obj_00225720;

extern s32 D_00527A00[];

extern s32 D_00527A04[];

void func_002240C0(void);

s32 func_002240B0(void)
{
    return D_00527A08[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_002240C0);

void func_002240F0(void)
{
    D_00527A00[0] = 0;
    D_00527A04[0] = 0;
    func_002240C0();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224110);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_002246D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224E10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224E50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224E90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_002256E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00225700);

s32 func_00225720(Obj_00225720 *arg0, s32 arg1)
{
    return arg1 - arg0->unk_C->unk_5C;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00225730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00225E80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_002267A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00227080);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00227AD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00227CD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00228510);

int *func_00229500(int *base, int i)
{
    return &base[i * 2 + 1];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", sys_bp);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00229800);
