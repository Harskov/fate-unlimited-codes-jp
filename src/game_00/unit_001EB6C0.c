#include "common.h"

extern s32 D_0051F9A8[];

extern s32 D_0051F9B0[];

extern s32 D_0051F9B8[];

extern s32 D_0051F9C0[];

void func_001EBDC0();

void func_002B1E28();

typedef struct Elem_001EB6C0 {
    /* 0x00 */ s32 flags;
    u8 pad_4[0xEC];
} Elem_001EB6C0;

typedef struct Obj_001EB6C0 {
    u8 pad_0[0x68];
    /* 0x68 */ s32 count;
    Elem_001EB6C0 *unk_6C;
} Obj_001EB6C0;

s32 *func_001EBD90(s32 *arg0);

void func_001EB6C0(Obj_001EB6C0 *arg0, s32 arg1)
{
    s32 i;
    Elem_001EB6C0 *e;
    s32 v;

    for (i = 0; i < arg0->count; i++) {
        e = &arg0->unk_6C[i];
        v = e->flags;
        if ((v & 0x740000) == 0)
            e->flags = v ^ arg1;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EB6C0", func_001EB720);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EB6C0", func_001EB790);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EB6C0", func_001EB7F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EB6C0", func_001EB830);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EB6C0", func_001EBC20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EB6C0", func_001EBC70);

s32 func_001EBCC0(s32 arg0)
{
    if (D_0051F9B0[0] == D_0051F9A8[0])
        D_0051F9B8[0] = arg0;
    D_0051F9B0[0] += 1;
    return arg0;
}

// stores the three arguments into globals, then hands one of two callbacks to
// func_002B1E28 depending on bit 0x100000 of the object's first word; returns
// the global func_002B1E28 fills in
s32 func_001EBD10(u32 *arg0, s32 arg1, s32 arg2)
{
    D_0051F9C0[0] = arg2;
    D_0051F9B8[0] = 0;
    D_0051F9B0[0] = 0;
    D_0051F9A8[0] = arg1;
    if (arg0[0] & 0x100000)
        func_002B1E28((void *)arg0[0xE], func_001EBDC0, 0);
    else
        func_002B1E28((void *)arg0[0xE], func_001EBD90, 0);
    return D_0051F9B8[0];
}

s32 *func_001EBD90(s32 *arg0)
{
    if (D_0051F9C0[0] == arg0[1])
        D_0051F9B8[0] = (s32)arg0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EB6C0", func_001EBDC0);

int func_001EBE10(void)
{
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EB6C0", func_001EBE20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EB6C0", func_001EBEC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EB6C0", func_001EBF60);
