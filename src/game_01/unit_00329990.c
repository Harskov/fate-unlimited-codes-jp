#include "common.h"
#include "types.h"

extern s32 D_00531998[];

typedef struct Obj_0032C980_A {
    u8 unk_0[0x1DC];
    /* 0x1DC */ s32 flags;
    u8 unk_1E0[0x280];
    u8 unk_460[0x10];
} Obj_0032C980_A;

typedef struct Obj_0032C980_B {
    /* 0x00 */ s32 counter;
    u8 unk_4[0xC];
    s32 unk_10;
} Obj_0032C980_B;

void func_0016E9E0(void *a, void *b, void *c);

s32 func_00329990(void)
{
    return D_00531998[0];
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_003299A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032BC30);

void func_0032C0F0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032C100);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032C570);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032C630);

void func_0032C880(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032C890);

void func_0032C980(Obj_0032C980_A *arg0, Obj_0032C980_B *arg1)
{
    if (arg1->unk_10 == 1 && (arg0->flags & 4) == 0) {
        return;
    }
    func_0016E9E0(arg1->unk_4, arg1->unk_4, arg0->unk_460);
    arg1->counter++;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032C9E0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032CD30);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032CEF0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032D1C0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032D3C0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032D780);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00329990", func_0032D7D0);
