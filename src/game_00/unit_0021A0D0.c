#include "common.h"
#include "game_00/unit_0021A0D0.h"

typedef struct Unk_0021A870 {
    /* 0x00 */ short unk_0;
    /* 0x02 */ short unk_2;
    /* 0x04 */ int unk_4;
    /* 0x08 */ int unk_8;
} Unk_0021A870;

typedef struct Elem_0021BFD0 {
    u8 pad_0[0x10];
    char unk_10[1];
} Elem_0021BFD0;

typedef struct Sub_0021BFD0 {
    Elem_0021BFD0 *unk_0;
} Sub_0021BFD0;

typedef struct Obj96 {
    u8 pad_0[0x40];
    Sub_0021BFD0 *unk_40;
    u8 pad_44[8];
    s32 unk_4C;
    u8 pad_50[0x10];
} Obj96;

typedef struct Obj_0021BFD0 {
    u8 pad_0[0x1690];
    Obj96 *unk_1690;
    /* 0x1694 */ s32 count;
} Obj_0021BFD0;

int strcmp(const char *, const char *);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A0D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A1B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A2F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A3F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A4B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A5D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A640);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A720);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A7B0);

s32 func_0021A840(s32 arg0, s32 *arg1)
{
    *arg1 += 1;
    return arg0;
}

void func_0021A860(Unk_0021A860 *arg0)
{
    arg0->unk_0 = 0;
    arg0->unk_4 = 0;
}

void func_0021A870(Unk_0021A870 *arg0)
{
    arg0->unk_0 = 0;
    arg0->unk_2 = 0;
    arg0->unk_4 = 0;
    arg0->unk_8 = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A890);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021AF20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021B0D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021B140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021B440);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BA90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BC90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BD50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BE00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BE90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BF20);

void func_0021BFD0(Obj_0021BFD0 *arg0, s32 arg1, s32 arg2, char *arg3)
{
    s32 i;

    for (i = 0; i < arg0->count; i++) {
        if (arg0->unk_1690[i].unk_40 != 0 && strcmp(arg3, arg0->unk_1690[i].unk_40->unk_0->unk_10) == 0) {
            switch (arg2) {
            case 0:
                arg0->unk_1690[i].unk_4C = arg0->unk_1690[i].unk_4C & ~arg1;
                break;
            case 1:
                arg0->unk_1690[i].unk_4C = arg0->unk_1690[i].unk_4C | arg1;
                break;
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C0E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C240);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C360);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C4F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021CA90);
