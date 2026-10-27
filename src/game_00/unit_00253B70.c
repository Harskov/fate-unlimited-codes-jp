#include "common.h"
#include "libc.h"

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

int func_00252A20();

typedef struct Obj_0015BB20 {
    u8 pad_0[12];
    s32 unk_C;
} Obj_0015BB20;

int func_0015B030(s32 arg0);

Obj_0015BB20 *func_0015BB20(s32 arg0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_00253B70);

int func_00253BD0(void)
{
    if (func_00255590() != 0) {
        return func_00252A20(9, 0);
    }
    return 0;
}

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

int func_00254290(s32 arg0)
{
    if (func_00255590() == 0) {
        return -1;
    }
    if (func_0015B030(arg0) == 0) {
        return -1;
    }
    return func_0015BB20(arg0)->unk_C;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_002542F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00253B70", func_002543F0);
