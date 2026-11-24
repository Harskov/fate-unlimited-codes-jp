#include "common.h"

typedef struct Obj_001E0C10 {
    u8 unk_0[0x158];
    void *unk_158;
    u8 unk_15C[0x38];
    s32 *unk_194;
} Obj_001E0C10;

void func_001DCE30(void *);

void func_00210D60(s32 *);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DFC70", func_001DFC70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DFC70", func_001DFE70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DFC70", func_001E05B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DFC70", func_001E0640);

int func_001E08B0(void)
{
    return 0;
}

int func_001E08C0(void)
{
    return 0;
}

int func_001E08D0(void)
{
    return 0;
}

int func_001E08E0(void)
{
    return 0;
}

int func_001E08F0(void)
{
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DFC70", func_001E0900);

void func_001E0C10(s32 *arg0)
{
    Obj_001E0C10 *obj = (Obj_001E0C10 *)func_0018A100(arg0);

    if (obj->unk_158 != 0) {
        func_001DCE30(obj->unk_158);
    }
    if (obj->unk_194 != 0) {
        *obj->unk_194 = 9;
    }
    func_00210D60(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DFC70", func_001E0C70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DFC70", func_001E0E00);

void func_001E1220(void)
{
}

void func_001E1230(void)
{
}

void func_001E1240(void)
{
}

void func_001E1250(void)
{
}

void func_001E1260(void)
{
}
