#include "common.h"
#include "types.h"

extern s32 D_00529530[];

#include "libc.h"

typedef struct Obj_00251710 {
    /* 0x00 */ int *unk_0;
    /* 0x04 */ int unk_4;
} Obj_00251710;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00251710);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00251CE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00251D80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00251F00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00251FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00252040);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_002520E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00252160);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_002521E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00252220);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00252260);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_002522A0);

s32 func_002522E0(void)
{
    return D_00529530[0];
}

void func_002522F0(int v)
{
    D_00529530[0] = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00252300);

void func_00252330(void *arg0)
{
    memset(arg0, 0, 16);
}

int func_00252340(int *arg0)
{
    int v = *arg0;
    if (v >= 0x7FFFFF00)
        v += 0x80000100;
    return v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00252370);

void func_002523B0(Obj_00251710 *arg0)
{
    memset(arg0->unk_0, 0, arg0->unk_4 * 4);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_002523D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00251710", func_00252410);
