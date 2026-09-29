#include "common.h"

extern s32 D_0051D728[];

typedef struct Entry {
    char pad[0x20];
    s32 flags;      /* 0x20 */
    char pad2[0x34 - 0x24];
} Entry;

typedef struct Holder {
    s32 count;      /* 0x0 */
    char pad[0x28];
    Entry *entries; /* 0x2C */
} Holder;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B3DA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B3E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B3EC0);

s32 func_001B3F70(s32 arg0)
{
    f32 step = 0.0f;
    s32 i;
    f32 limit = 25.5f;
    f32 half = 0.5f;

    for (i = 0; i < 10; i++) {
        if ((s32)(half + step) >= arg0) {
            break;
        }
        step += limit;
    }
    return i;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B3FC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B4090);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B4150);

void func_001B4240(char *arg0)
{
    D_0051D728[0] -= 1;
    *(s32 *)(arg0 + 0x14) = -1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B4260);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B42A0);

void func_001B4320(void)
{
    D_0051D728[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B4330);

void func_001B43A0(Holder *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 i;

    Entry *e;

    for (i = 0; i < arg0->count; i++) {
        e = &arg0->entries[i];
            if (arg1 >= 0) {
                if (arg1 == i) {
                    e->flags |= arg2;
                    e->flags &= ~arg3;
                    break;
                }
            } else {
                e->flags |= arg2;
                e->flags &= ~arg3;
            }
    }
}
