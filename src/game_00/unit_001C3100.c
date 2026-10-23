#include "common.h"

typedef struct Obj {
    u8 pad[0x14C];
    s32 unk_14C;
} Obj;

typedef struct Obj_001C42B0 {
    /* 0x00 */ u16 flags;
    u8 unk_2;
    u8 unk_3;
} Obj_001C42B0;

typedef struct Sub_001C33F0 {
    u8 pad[0x90];
    s32 unk_90;
} Sub_001C33F0;

typedef struct Obj_001C33F0 {
    u8 pad[0x2448];
    Sub_001C33F0 *unk_2448;
} Obj_001C33F0;

typedef struct Obj56 {
    s32 unk_0[14];
} Obj56;

typedef struct Obj_001C3940 {
    u8 pad[0x94];
    s16 unk_94;
} Obj_001C3940;

typedef struct Obj_001C41A0 {
    u8 pad_0[0xB4];
    /* 0xB4 */ u8 count;
    u8 pad_B5[0xB];
    Obj_001C42B0 unk_C0[16];
} Obj_001C41A0;

typedef struct Sub_001C42D0 {
    /* 0x00 */ s16 unk_0;
    /* 0x02 */ s16 unk_2;
} Sub_001C42D0;

typedef struct Obj_001C42D0 {
    u8 pad_0[4];
    /* 0x04 */ Sub_001C42D0 unk_4[7];
    /* 0x20 */ Sub_001C42D0 unk_20[6];
} Obj_001C42D0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3100);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3260);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3300);

void func_001C33F0(Obj_001C33F0 *arg0)
{
    Sub_001C33F0 *sub;

    if (arg0 != 0) {
        sub = arg0->unk_2448;
        if (sub != 0) {
            sub->unk_90 |= 1;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C34D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3660);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3770);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C37C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3860);

s32 func_001C3940(Obj_001C3940 *arg0)
{
    if (arg0 == 0)
        return 0;
    switch (arg0->unk_94) {
    case 1:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
        return 0;
    default:
        return 1;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3A10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3B20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C4080);

Obj_001C42B0 *func_001C41A0(Obj_001C41A0 *arg0, Obj_001C42B0 *arg1)
{
    s32 i;
    u8 n;

    if (arg0 == 0) {
        return 0;
    }
    if (arg1 == 0) {
        return 0;
    }
    n = arg0->count;
    if (n >= 0x10) {
        return 0;
    }
    for (i = 0; i < n; i++) {
        if (arg0->unk_C0[i].unk_3 == arg1->unk_3) {
            if (arg1->flags & 8) {
                arg0->unk_C0[i].flags |= 8;
            } else if (arg1->flags & 0x10) {
                arg0->unk_C0[i].flags |= 0x10;
            } else if (arg0->unk_C0[i].unk_2 < arg1->unk_2) {
                arg0->unk_C0[i].unk_2 = arg1->unk_2;
            }
            return 0;
        }
    }
    arg0->unk_C0[n] = *arg1;
    arg0->count++;
    return &arg0->unk_C0[arg0->count - 1];
}

void func_001C42B0(Obj_001C42B0 *arg0)
{
    if (arg0 != 0) {
        arg0->flags = 0;
        arg0->unk_2 = 0;
        arg0->unk_3 = 0xFF;
    }
}

/* averages the second halfword of the entries whose first halfword is a bit set in arg0;
   arg2 == 1 selects the six-entry table at 0x20, anything else the seven-entry one at 0x4;
   100 when nothing is found */
u16 func_001C42D0(u16 arg0, Obj_001C42D0 *arg1, s32 arg2)
{
    s32 count;
    s32 sum;
    s32 i;
    s32 j;

    count = 0;
    sum = 0;
    if (arg1 == 0) {
        return 100;
    }
    if (arg2 != 1) {
        for (i = 0; i < 7; i++) {
            if (arg0 & (1 << i)) {
                for (j = 0; j < 7; j++) {
                    if (arg1->unk_4[j].unk_0 == i) {
                        count++;
                        sum += arg1->unk_4[j].unk_2;
                        break;
                    }
                }
            }
        }
    } else {
        for (i = 0; i < 6; i++) {
            if (arg0 & (1 << i)) {
                for (j = 0; j < 6; j++) {
                    if (arg1->unk_20[j].unk_0 == i) {
                        count++;
                        sum += arg1->unk_20[j].unk_2;
                        break;
                    }
                }
            }
        }
    }
    if (count != 0) {
        return sum / count;
    }
    return 100;
}

void func_001C43F0(Obj56 *arg0, Obj56 *arg1)
{
    *arg0 = *arg1;
}

s32 func_001C4420(Obj *arg0, s32 arg1)
{
    return arg0->unk_14C & arg1;
}
