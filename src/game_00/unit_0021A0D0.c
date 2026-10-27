#include "common.h"
#include "libc.h"
#include "game_00/unit_0021A0D0.h"

typedef struct Unk_0021A870 {
    /* 0x00 */ short unk_0;
    /* 0x02 */ short unk_2;
    /* 0x04 */ int unk_4;
    /* 0x08 */ int unk_8;
} Unk_0021A870;

typedef struct Elem_0021BFD0 {
    u8 pad_0[0x10];
    char unk_10[1];
} Elem_0021BFD0;

typedef struct Sub_0021BFD0 {
    Elem_0021BFD0 *unk_0;
} Sub_0021BFD0;

typedef struct Obj96 {
    u8 pad_0[0x40];
    Sub_0021BFD0 *unk_40;
    u8 pad_44[8];
    s32 unk_4C;
    u8 pad_50[0x10];
} Obj96;

typedef struct Obj_0021BFD0 {
    u8 pad_0[0x1690];
    Obj96 *unk_1690;
    /* 0x1694 */ s32 count;
} Obj_0021BFD0;

int strcmp(const char *, const char *);

typedef struct Sub_0021AF20 {
    u8 pad_0[0x38];
    /* 0x38 */ s32 unk_38;
} Sub_0021AF20;

typedef struct Elem_0021AF20 {
    u8 pad_0[0xC];
    /* 0x0C */ s32 unk_C;
    /* 0x10 */ s32 flags;
    /* 0x14 */ s32 unk_14;
} Elem_0021AF20;

typedef struct Obj12 {
    /* 0x00 */ s32 unk_0;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
} Obj12;

typedef struct Obj_0021AF20 {
    u8 pad_0[0x10];
    /* 0x0010 */ Sub_0021AF20 *unk_10;
    u8 pad_14[0x1788];
    /* 0x179C */ Obj12 unk_179C;
    /* 0x17A8 */ Obj12 unk_17A8;
    /* 0x17B4 */ Elem_0021AF20 *unk_17B4;
    /* 0x17B8 */ s32 counter_17B8;
    /* 0x17BC */ s32 counter_17BC;
} Obj_0021AF20;

typedef struct Obj8 {
    /* 0x00 */ Obj_0021AF20 *unk_0;
    /* 0x04 */ s32 unk_4;
} Obj8;

extern s32 D_00522DB0[];


void func_00178060(Obj12 *arg0);

void func_001795F0(Elem_0021AF20 *arg0, Elem_0021AF20 *arg1, Obj12 *arg2);

void *func_0020F180(s32 *arg0, s32 arg1);

void func_0021A890();

void func_002B1E28(s32 arg0, void (*arg1)(), Obj8 *arg2);

s32 func_002B2760(s32 arg0);

extern Unk_0021A870 D_00525960[];

extern s32 D_00525964[];

extern s32 D_00525968[];

void func_00200BB0();

void func_0020F230();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A0D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A1B0);

void func_0021A210(s32 arg0)
{
    s32 *entry;
    void func_0021A870(Unk_0021A870 *arg0);

    entry = &D_00525964[arg0 * 3];
    if (*entry == 0)
        return;
    func_0020F230(D_00522DB0, *entry);
    func_00200BB0(D_00525968[arg0 * 3], 4, -1);
    func_0021A870(&D_00525960[arg0]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A2F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A3F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A4B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A5D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A640);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A720);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A7B0);

s32 func_0021A840(s32 arg0, s32 *arg1)
{
    *arg1 += 1;
    return arg0;
}

void func_0021A860(Unk_0021A860 *arg0)
{
    arg0->unk_0 = 0;
    arg0->unk_4 = 0;
}

void func_0021A870(Unk_0021A870 *arg0)
{
    arg0->unk_0 = 0;
    arg0->unk_2 = 0;
    arg0->unk_4 = 0;
    arg0->unk_8 = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021A890);

// registers: s1 = the entry count func_002B2760 returns (n), sp+0x68 = the block handed to func_002B1E28 with func_0021A890 (ctx), a0 = the entry being visited (e)
// builds the 24-byte entry table, then walks it by the key at +0xC from 0 to 99 twice:
// entries with bit 0x1 clear go to the first list, entries with it set to the second
void func_0021AF20(Obj_0021AF20 *arg0)
{
    Obj8 ctx;
    Elem_0021AF20 *e;
    s32 n;
    s32 size;
    s32 j;
    s32 i;

    n = func_002B2760(arg0->unk_10->unk_38);
    size = n * (s32)sizeof(Elem_0021AF20);
    arg0->unk_17B4 = func_0020F180(D_00522DB0, size);
    memset(arg0->unk_17B4, 0, size);
    ctx.unk_0 = arg0;
    ctx.unk_4 = 0;
    func_002B1E28(arg0->unk_10->unk_38, func_0021A890, &ctx);

    func_00178060(&arg0->unk_179C);
    arg0->counter_17B8 = 0;
    for (i = 0; i < 100; i++) {
        for (j = 0; j < n; j++) {
            e = &arg0->unk_17B4[j];
            if (e->unk_14 != 0 && i == e->unk_C && !(e->flags & 0x1)) {
                func_001795F0(e, e, &arg0->unk_179C);
                arg0->counter_17B8++;
            }
        }
    }

    func_00178060(&arg0->unk_17A8);
    arg0->counter_17BC = 0;
    for (i = 0; i < 100; i++) {
        for (j = 0; j < n; j++) {
            e = &arg0->unk_17B4[j];
            if (e->unk_14 != 0 && i == e->unk_C && (e->flags & 0x1)) {
                func_001795F0(e, e, &arg0->unk_17A8);
                arg0->counter_17BC++;
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021B0D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021B140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021B440);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BA90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BC90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BD50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BE00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BE90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021BF20);

void func_0021BFD0(Obj_0021BFD0 *arg0, s32 arg1, s32 arg2, char *arg3)
{
    s32 i;

    for (i = 0; i < arg0->count; i++) {
        if (arg0->unk_1690[i].unk_40 != 0 && strcmp(arg3, arg0->unk_1690[i].unk_40->unk_0->unk_10) == 0) {
            switch (arg2) {
            case 0:
                arg0->unk_1690[i].unk_4C = arg0->unk_1690[i].unk_4C & ~arg1;
                break;
            case 1:
                arg0->unk_1690[i].unk_4C = arg0->unk_1690[i].unk_4C | arg1;
                break;
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C0E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C240);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C360);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C4F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021C920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021A0D0", func_0021CA90);
