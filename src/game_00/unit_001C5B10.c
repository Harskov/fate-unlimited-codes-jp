#include "common.h"

extern s32 D_0051D7F0[];

extern s32 D_0051D800[];

extern s32 D_0051D860[];

typedef struct Obj_001C6720 {
    s32 unk_0;
    u8 pad_4[0x243C];
    s32 unk_2440;
} Obj_001C6720;

typedef struct Elem_001C6720 {
    Obj_001C6720 *unk_0;
    u8 pad_4[8];
    /* 0x0C */ struct Elem_001C6720 *next;
} Elem_001C6720;

typedef struct Sub_001C6720 {
    u8 pad_0[0xC];
    Elem_001C6720 *unk_C;
} Sub_001C6720;

extern Sub_001C6720 *D_0051C858[];

void func_001C6580();

typedef struct Obj_001C66C0 {
    u8 pad_0[0x2448];
    s32 unk_2448;
} Obj_001C66C0;

extern s32 D_00522DB0[];

void func_0020F230();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C5B10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C5B30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C5CD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C5D60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C62A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6440);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C64A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6580);

void func_001C66C0(Obj_001C66C0 *arg0)
{
    if (arg0 != 0) {
        if (arg0->unk_2448 != 0) {
            func_0020F230(D_00522DB0, arg0->unk_2448);
            arg0->unk_2448 = 0;
        }
    }
}

void func_001C6710(void)
{
}

void func_001C6720(void)
{
    Elem_001C6720 *n;
    Obj_001C6720 *o;
    s32 i;

    memset(D_0051D860, 0, 0x28);
    for (i = 0; i < 2; i++) {
        for (n = D_0051C858[i]->unk_C; n != 0; n = n->next) {
            o = n->unk_0;
            D_0051D860[o->unk_0] = (s32)o;
        }
    }
    for (i = 0; i < 10; i++) {
        o = (Obj_001C6720 *)D_0051D860[i];
        if (o != 0 && o->unk_2440 != 0) {
            func_001C6580(o);
        }
    }
}

void func_001C67F0(void)
{
    memset(D_0051D7F0, 0, 0x64);
    D_0051D800[0] = 0x40000000;
    memset(D_0051D860, 0, 0x28);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6840);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C68C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C69E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6A30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5B10", func_001C6B70);
