#include "common.h"

typedef struct Obj8 {
    int unk_0;
    int unk_4;
} Obj8;

void func_001795F0();

#include "libc.h"

typedef struct Obj_001DCE20 {
    int unk_0;
    unsigned char unk_4[1];
} Obj_001DCE20;

extern s32 D_00501320[];

extern s32 D_0051EE78[];

extern s32 D_0051EE80[];

extern s32 D_0051EF98[];

void func_001D6E30();

void func_001DEC90();

void func_001E2860();

s32 func_0020EC40();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DC530);

void func_001DC5A0(void *arg0, Obj8 *arg1)
{
    func_001795F0(arg1, &arg1->unk_4, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DC5B0);

void func_001DCA30(void *arg0, void *arg1, int arg2)
{
    memcpy(arg0, arg1, D_00501320[arg2]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DCA50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DCC40);

void *func_001DCE20(Obj_001DCE20 *arg0, int arg1)
{
    return memset(arg0->unk_4, 0, arg1 - 4);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DCE30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001DC530", func_001DCEB0);

void func_001DCF40(void)
{
    if (D_0051EE80[0] == 0) {
        D_0051EE80[0] = 1;
        D_0051EE78[0] = func_0020EC40(0x5A, 0xDFC);
        func_001E2860();
    }
    func_001D6E30();
    func_001DEC90();
    D_0051EF98[0] = 0;
}
