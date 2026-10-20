#include "common.h"

typedef struct Obj_0018CB00 {
    u8 unk_0[0x38];
    /* 0x38 */ s32 unk_38;
    u8 unk_3C[0x8];
    /* 0x44 */ s32 unk_44;
} Obj_0018CB00;

extern s32 D_00522DB0[];

void func_0020F230();

void func_00210D60();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018BFB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018C350);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018C5F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018CAA0);

void func_0018CB00(Obj_0018CB00 *arg0)
{
    func_0020F230(D_00522DB0, arg0->unk_38);
    if (arg0->unk_44 != 0) {
        func_0020F230(D_00522DB0, arg0->unk_44);
    }
    func_00210D60(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018CB50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018CDA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018CE70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018D000);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018D060);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018D1A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018D710);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018DD40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018E240);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018E6D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018E740);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0018BFB0", func_0018E8C0);
