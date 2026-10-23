#include "common.h"

typedef struct Obj22 {
    u8 pad_0[2];
    u16 unk_2;
    u8 pad_4[18];
} Obj22;

extern Obj22 D_00529DB0[];

extern s8 D_003DF930[];

int func_00255590();

void func_002530F0();

void func_00253160();

void *memset(void *, int, unsigned int);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_00253B70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_00253BD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_00253C00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_00253C70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_00253DB0);

void func_00253E70(s32 arg0)
{
    s32 counts[16];
    int i;
    Obj22 *p;
    s32 *slot;
    s8 first;

    if (func_00255590() == 0) {
        return;
    }
    p = D_00529DB0;
    for (i = 0; i < 0x40; i++, p++) {
        if (p->unk_2 == 2 || p->unk_2 == 3) {
            p->unk_2 = 0;
        }
        if (arg0 == 0 && p->unk_2 == 4) {
            p->unk_2 = 0;
        }
    }
    if (arg0 != 0) {
        memset(counts, 0, 0x40);
        first = D_003DF930[0];
        for (i = 0; i < 0x77; i++) {
            slot = &counts[D_003DF930[i]];
            if (*slot == 0 && D_003DF930[i] != first) {
                func_002530F0(D_003DF930[i] & 0xFF);
                *slot = *slot + 1;
            }
        }
    } else {
        func_00253160();
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_00253FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_002540A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_00254140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_00254290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_002542F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_002543F0);
