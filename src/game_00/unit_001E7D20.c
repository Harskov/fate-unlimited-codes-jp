#include "common.h"

void func_001E8F10(s32 arg0, s32 arg1);

extern s32 D_0051F338[];

extern s32 D_0051F340[];

extern s32 D_0051F344[];

extern s32 D_0051F348[];

extern s32 D_0051F34C[];

s32 func_001F1520();

void func_001E7590();

void func_002B20D8();

typedef struct Obj_001E83E0 {
    u8 unk_0[0x60];
    s16 *unk_60;
} Obj_001E83E0;

typedef struct Sub_001E8DB0 {
    u8 unk_0[0x3C];
    s32 unk_3C;
} Sub_001E8DB0;

typedef struct Obj_001E8DB0 {
    u8 unk_0[0xB0];
    Sub_001E8DB0 *unk_B0;
} Obj_001E8DB0;

extern Obj_001E8DB0 *D_0051D8B4[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E7D20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E7DF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E7EC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E7F00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E7FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8270);

s32 func_001E83E0(Obj_001E83E0 *arg0)
{
    s16 *p = arg0->unk_60;

    if (p != 0) {
        return *p;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8400);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8580);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8700);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8870);

void func_001E8AF0(s32 *arg0, s32 arg1, s32 arg2)
{
    s32 flags = *arg0;

    if (flags & 0x40000000) {
        if (flags & 0x80000000) {
            if (arg2 != 0) {
                func_001E7590(arg1, 2);
            } else {
                func_001E7590(arg1, 1);
            }
        } else {
            func_001E7590(arg1, 0);
        }
    } else {
        func_002B20D8(arg1);
    }
}

// stores one result into five globals, the last one first
void func_001E8B70(void)
{
    s32 v = func_001F1520();

    D_0051F34C[0] = v;
    D_0051F348[0] = v;
    D_0051F344[0] = v;
    D_0051F340[0] = v;
    D_0051F338[0] = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8BC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8C60);

s32 func_001E8DB0(void)
{
    Obj_001E8DB0 *o = D_0051D8B4[0];

    if (o != 0) {
        Sub_001E8DB0 *s = o->unk_B0;

        if (s != 0) {
            return s->unk_3C;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8DE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E7D20", func_001E8E20);

void func_001E8F00(s32 arg0)
{
    func_001E8F10(arg0, 0);
}
