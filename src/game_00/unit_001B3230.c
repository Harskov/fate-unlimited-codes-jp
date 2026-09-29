#include "common.h"

typedef struct Slot {
    s32 unk_0;
    u8 pad_4[0xC4];
} Slot;

typedef struct Obj {
    u8 pad_0[0x5D4];
    Slot slots[8];
} Obj;

void func_001B3A20(char *);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3230);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3410);

void func_001B35C0(char *arg0, s32 arg1, s32 arg2)
{
    s32 off = arg1 * 0xC8;

    *(s32 *)(off + (s32)arg0 + 0x694) = arg2;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B35E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B36A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3700);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B37A0);

void func_001B38F0(char *arg0, s32 arg1)
{
    s32 off = arg1 * 0xC8;

    *(s32 *)((s32)arg0 + off + 0x5D0) &= ~1;
}

void func_001B3920(char *arg0, s32 arg1)
{
    s32 off = arg1 * 0xC8;
    char *p = arg0 + off + 0x5D0;

    if (*(s32 *)(p + 4) == 0) {
        return;
    }
    *(s32 *)p |= 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3960);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3A20);

void func_001B3AD0(Obj *o, s32 v)
{
    s32 i;

    if (v != 0) {
        for (i = 0; i < 8; i++) {
            if (o->slots[i].unk_0 == 0) {
                o->slots[i].unk_0 = v;
                return;
            }
        }
    }
}

void func_001B3B20(char *arg0)
{
    s32 i;
    char *p;

    i = 0;
    p = arg0;
    do {
        *(s32 *)(p + 0x5D0) = 0;
        i += 1;
        *(s32 *)(p + 0x5D8) = -1;
        *(s32 *)(p + 0x5E8) = 0xF;
        *(s32 *)(p + 0x5DC) = -1;
        *(s32 *)(p + 0x5EC) = 0xF;
        *(s32 *)(p + 0x5E0) = -1;
        *(s32 *)(p + 0x5F0) = 0xF;
        *(s32 *)(p + 0x5E4) = -1;
        *(s32 *)(p + 0x5F4) = 0xF;
        p += 0xC8;
    } while (i < 8);
    func_001B3A20(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3230", func_001B3B70);
