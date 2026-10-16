#include "common.h"
#include "types.h"

#include "game_00/adxowner.h"

int func_0013B9C8(void *p);

extern s32 D_00527820[];

extern void func_0021D030(void *);

extern s32 D_003D3418[];

void RotateThreadReadyQueue(s32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021D690);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021D870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021D890);

u64 func_0021DC70(u64 arg0)
{
    return (arg0 << 36) >> 36;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021DC80);

int func_0021DF20(Obj38 *obj)
{
    switch (func_0013B9C8(obj->unk34)) {
    case 4:
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021DF50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021DFE0);

void func_0021E020(void)
{
    func_0021D030(D_00527820);
}

void func_0021E030(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E040);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E0F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E300);

void func_0021E330(void)
{
    RotateThreadReadyQueue(D_003D3418[0]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E760);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E7B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021E8E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021EB20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021ECC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021EE00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021EEE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021F000);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021F040);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021F0A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021D690", func_0021F110);
