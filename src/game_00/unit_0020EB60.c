#include "common.h"
#include "game_00/unit_0020EB60.h"

void func_0020F230(s32 arg0, s32 arg1);

typedef struct Obj {
    unsigned char unk_0[0x14];
    int unk_14;
} Obj;

extern s32 D_00522DB0[];

void func_0020F230();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EB60);

void func_0020EBC0(s32 arg0)
{
    func_0020F230(D_00522DB0, arg0 - 0xC);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EBD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EC40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020ECB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020ECF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020ED50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EDE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EE60);

int func_0020EEE0(Obj *p)
{
    return p->unk_14;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EEF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EF40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EFF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020F0E0);

void func_0020F120(s32 arg0, s32 *arg1)
{
    func_0020F230(arg0, arg1[-1]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020F130);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020F180);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020F230);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020F320);
