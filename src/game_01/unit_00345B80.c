#include "common.h"

extern u32 D_0051D8A0[];

typedef struct Sub_00346AB0 {
    u8 unk_0[0x1E8];
    /* 0x1E8 */ u32 flags;
} Sub_00346AB0;

typedef struct Obj_00346AB0 {
    u8 unk_0[0x2454];
    s32 unk_2454;
    u8 unk_2458[0xB4];
    Sub_00346AB0 *unk_250C;
} Obj_00346AB0;

s32 func_0019E000(void *);

void func_00345B80(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00345B90);

void func_00346050(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00346060);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_003462B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00346620);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00346760);

void func_003469B0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_003469C0);

s32 func_00346AB0(Obj_00346AB0 *arg0)
{
    s32 r;

    if (arg0->unk_250C == 0) {
        return 0;
    }
    r = func_0019E000(arg0->unk_250C);
    if ((r != 0 && arg0->unk_2454 >= 2) || (r != 0 && (arg0->unk_250C->flags & 0x8000000))) {
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00346B30);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00347290);

// the same empty early return on bits 0x12000000 of D_0051D8A0 as func_0034DD10
void func_00348DA0(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00348DC0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00348FF0);
