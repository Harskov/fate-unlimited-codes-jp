#include "common.h"

void func_002C2C38(void);

void func_00204EE0(void);

extern s32 D_00522B24[];

extern s16 D_00522B28[];

extern s16 D_00522B2A[];

extern s32 D_00522B2C[];

extern s32 D_00522B30[];

extern s32 D_00522B34[];

void func_002050F0(void);

extern s32 D_00509318[];

extern s32 D_00522B20[];

extern u8 D_0052C138[];

typedef struct Elem_00205050 {
    s32 unk_0;
    s32 unk_4;
} Elem_00205050;

typedef struct Obj_00205050 {
    s32 unk_0;
    Elem_00205050 *unk_4;
} Obj_00205050;

extern s32 D_00522BB8[];

extern s32 D_00522BBC[];

s32 func_0020FA40(void);

void func_002053E0(char *arg0, s32 arg1);

int sprintf(char *s, const char *format, ...);

typedef struct Obj_00205020 {
    u8 pad_0[0x84];
    u16 unk_84;
} Obj_00205020;

typedef struct Sub_00205020 {
    u8 pad_0[0xE];
    s16 unk_E;
    s32 unk_10;
} Sub_00205020;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204AD0", func_00204AD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204AD0", func_00204D80);

void func_00204E10(void)
{
    func_002C2C38();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204AD0", func_00204E20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204AD0", func_00204EE0);

Obj_00205020 *func_00205020(Obj_00205020 *arg0, Sub_00205020 *arg1)
{
    arg1->unk_E = arg1->unk_E + 1;
    arg1->unk_10 = arg1->unk_10 + arg0->unk_84;
    return arg0;
}

s32 func_00205050(s32 arg0, Obj_00205050 *arg1)
{
    s32 i;

    i = arg1->unk_0;
    arg1->unk_4[i].unk_0 = i;
    arg1->unk_4[arg1->unk_0].unk_4 = arg0;
    arg1->unk_0 = arg1->unk_0 + 1;
    return arg0;
}

void func_00205090(void)
{
    func_00204EE0();
}

void func_002050A0(void)
{
    func_002050F0();
    D_00522B24[0] = 0;
    D_00522B28[0] = 1;
    D_00522B2A[0] = 0;
    D_00522B2C[0] = 0;
    D_00522B30[0] = 0;
    D_00522B34[0] = 0;
}

void func_002050F0(void)
{
    D_00522B20[0] = *(s32 *)(D_0052C138 + D_00509318[0] + 0x40);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204AD0", func_00205120);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204AD0", func_002051C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204AD0", func_00205250);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204AD0", func_002052F0);

s32 func_00205390(const char *format)
{
    char buf[256];

    if (func_0020FA40() > 1)
        return 0;
    sprintf(buf, format);
    func_002053E0(buf, 0);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204AD0", func_002053E0);

void func_00205760(s32 arg0, s32 arg1)
{
    if (func_0020FA40() >= 2) {
        return;
    }
    D_00522BB8[0] = arg0;
    D_00522BBC[0] = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204AD0", func_002057B0);
