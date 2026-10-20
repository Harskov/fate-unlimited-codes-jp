#include "common.h"

void func_00210D60(void);

typedef struct Obj_003575A0 {
    unsigned char unk_0[0x9C];
    int unk_9C;
    int unk_A0;
} Obj_003575A0;

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", sceCdStream);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00355820);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00355FE0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_003560E0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_003562B0);

void func_003565A0(void)
{
    func_00210D60();
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_003565B0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00356630);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00356680);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_003569C0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00356E40);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00357070);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00357290);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00357380);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00357490);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_00357500);

int func_003575A0(Obj_003575A0 *arg0, int *arg1)
{
    *arg1 = 0x12C;
    arg0->unk_9C = 0x360B;
    arg0->unk_A0 = 0;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003556B0", func_003575C0);
