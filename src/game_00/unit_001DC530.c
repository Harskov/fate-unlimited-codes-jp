#include "common.h"

typedef struct Obj8 {
    int unk_0;
    int unk_4;
} Obj8;

void func_001795F0();

extern void *memset(void *s, int c, unsigned int n);

typedef struct Obj_001DCE20 {
    int unk_0;
    unsigned char unk_4[1];
} Obj_001DCE20;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DC530);

void func_001DC5A0(void *arg0, Obj8 *arg1)
{
    func_001795F0(arg1, &arg1->unk_4, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DC5B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DCA30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DCA50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DCC40);

void *func_001DCE20(Obj_001DCE20 *arg0, int arg1)
{
    return memset(arg0->unk_4, 0, arg1 - 4);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DCE30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DCEB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DCF40);
