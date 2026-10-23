#include "common.h"
#include "types.h"

typedef struct Obj_00222930 {
    /* 0x00 */ s32 unk_0;
} Obj_00222930;

typedef struct Node {
    /* 0x00 */ Obj_00222930 *unk_0;
    s32 unk_4;
    struct Node *next;
} Node;

extern Node *D_00527A14[];

typedef struct Obj_00223940 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ u8 pad_4[2];
    /* 0x06 */ u16 unk_6;
    /* 0x08 */ u16 unk_8;
    /* 0x0A */ u16 unk_A;
    /* 0x0C */ u8 *unk_C;
    /* 0x10 */ u8 *unk_10;
    /* 0x14 */ u8 *unk_14;
    /* 0x18 */ u8 *unk_18;
} Obj_00223940;

extern s32 D_00522DB0[];

extern u8 *func_0020F180(s32 *pool, s32 size);

extern void *memset(void *s, int c, u32 n);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00222930);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_002229D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00222A70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00222B80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00222C50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223130);

void func_00223240(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223250);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_002235A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223760);

void func_00223840(void)
{
}

void func_00223850(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223860);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_002238B0);

void func_00223940(Obj_00223940 *arg0, s32 arg1, u16 arg2, u16 arg3)
{
    arg0->unk_6 = arg1 + 1;
    arg0->unk_8 = arg2;
    arg0->unk_A = arg3;
    arg0->unk_0 = arg0->unk_8 + ((u32)(arg0->unk_6 * 0x60) >> 2) + arg0->unk_A * arg1;
    arg0->unk_C = func_0020F180(D_00522DB0, arg0->unk_0 * 4 + arg0->unk_6 * 0xC);
    arg0->unk_14 = arg0->unk_C + ((arg0->unk_6 * 0x60) & ~3);
    arg0->unk_18 = arg0->unk_14 + arg0->unk_8 * 4;
    arg0->unk_10 = arg0->unk_18 + arg0->unk_A * arg1 * 4;
    memset(arg0->unk_C, 0, (arg0->unk_6 * 0x60) & ~3);
    memset(arg0->unk_10, 0, arg0->unk_6 * 0xC);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223A60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223BE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223CA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223D60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223E00);

s32 func_00223EA0(s32 arg0)
{
    Node *n;

    n = D_00527A14[0];
    while ((s32)n->unk_0 != 1) {
        if (n->unk_0->unk_0 == arg0) {
            return 1;
        }
        n = n->next;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223EF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223F70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223FD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00224030);
