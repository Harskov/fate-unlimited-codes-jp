#include "common.h"
#include "game_00/unit_00211170.h"

extern s32 D_0051F130[];

void func_001E1AD0();

void func_002112D0();


extern s32 D_00522DB0[];

void func_0020F230();

typedef struct Obj_001E2C90 {
    u8 unk_0[0x158];
    void *unk_158;
    u8 unk_15C[0x38];
    s32 *unk_194;
} Obj_001E2C90;

void func_001DCE30(void *);

void func_00210D60(s32 *);

void func_001E1270(void)
{
}

void func_001E1280(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E1270", func_001E1290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E1270", func_001E1450);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E1270", func_001E1630);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E1270", func_001E17B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E1270", func_001E1920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E1270", func_001E1AD0);

void func_001E2800(void)
{
    func_002112D0(0x12, func_001E1AD0, D_0051F130[0]);
}

void func_001E2820(void)
{
    if (D_0051F130[0] == 0)
        return;
    func_0020F230(D_00522DB0, D_0051F130[0]);
    D_0051F130[0] = 0;
}

void func_001E2860(void)
{
    D_0051F130[0] = (s32)func_00211400(0x5A, 0x1B0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E1270", func_001E2890);

void func_001E2C90(s32 *arg0)
{
    Obj_001E2C90 *obj = (Obj_001E2C90 *)func_0018A100(arg0);

    if (obj->unk_158 != 0) {
        func_001DCE30(obj->unk_158);
    }
    if (obj->unk_194 != 0) {
        *obj->unk_194 = 9;
    }
    func_00210D60(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E1270", func_001E2CF0);

void func_001E2EA0(void)
{
}

void func_001E2EB0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E1270", func_001E2EC0);
