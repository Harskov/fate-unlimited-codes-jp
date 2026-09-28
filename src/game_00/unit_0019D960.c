#include "common.h"

typedef struct Obj {
    unsigned char pad[0x1E8];
    unsigned int unk1E8;
    unsigned int unk1EC;
    unsigned int unk1F0;
} Obj;

typedef struct Sub {
    unsigned char pad[0xC];
    int unkC;
} Sub;

typedef struct Obj_0019DCC0 {
    unsigned char pad[0x2510];
    Sub *unk2510;
} Obj_0019DCC0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019D960);

void func_0019DA00(Obj *arg0)
{
    if ((arg0->unk1EC & 0x02000000) || (arg0->unk1E8 & 0x200000)) {
        arg0->unk1F0 |= 0x20;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019DA50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019DAF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019DB50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019DC10);

int func_0019DCC0(Obj_0019DCC0 *arg0)
{
    Sub *s = arg0->unk2510;
    if (s == 0)
        return 0x282;
    if (s->unkC == 1)
        return 0x284;
    return 0x282;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019DCF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019DDB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019E000);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019E200);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019E2D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019E3C0);
