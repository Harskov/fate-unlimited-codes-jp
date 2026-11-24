#include "common.h"
#include "game_00/unit_001FE660.h"

extern s32 D_00501678[];

extern s32 D_0051FA30[];

extern s32 D_00522DB0[];

void func_001F59E0();

void func_0020F230();

typedef struct Obj_001F5500 {
    u8 unk_0[0x60];
    void *unk_60;
    u8 unk_64[0x13C];
    void *unk_1A0;
} Obj_001F5500;

extern s16 D_0051FAC0[];

void func_00179380();

extern s32 D_0051FAC4[];

void func_001795F0();

typedef struct Obj_001F5AD0 {
    /* 0x00 */ s32 flags;
    u8 unk_4[0x1C];
    s16 *unk_20;
    s16 *unk_24;
} Obj_001F5AD0;

void func_001F51B0();

typedef struct Obj_001F5980 {
    s32 unk_0;
    u8 pad_4[4];
    /* 0x08 */ struct Obj_001F5980 *next;
} Obj_001F5980;

extern Obj_001F5980 *D_0051FACC[];

extern f32 D_0051FA80[][4];

extern f32 D_0051FA40[][4];

void func_00178060();

void func_0020D070(f32 (*)[4]);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4AB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4B00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4B50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4BE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4C80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4E20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4FD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F50B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F51B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5280);

void func_001F5300(void)
{
    void *p;

    while (1) {
        p = (void *)func_001F5980(0);
        if (p == 0)
            break;
        func_001F5340(p);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5490);

void func_001F5500(Obj_001F5500 *arg0)
{
    void *p;

    p = arg0->unk_60;
    if (p != 0) {
        func_0020F230(D_00522DB0, p);
    }
    p = arg0->unk_1A0;
    if (p != 0) {
        func_0020F230(D_00522DB0, p);
    }
    func_001F59E0(arg0);
    func_0020F230(D_00522DB0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5570);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F58F0);

s32 func_001F5980(s32 arg0)
{
    s32 i;
    Obj_001F5980 *p;

    if (arg0 < 0)
        return 0;
    if (arg0 >= D_0051FAC0[0])
        return 0;
    p = D_0051FACC[0];
    i = 0;
    while (p->unk_0 != 1) {
        if (i == arg0)
            return p->unk_0;
        p = p->next;
        i++;
    }
    return 0;
}

void func_001F59E0(s32 arg0)
{
    D_0051FAC0[0]--;
    func_00179380(arg0 + 4);
}

void func_001F5A00(s32 arg0)
{
    D_0051FAC0[0]++;
    func_001795F0(arg0, arg0 + 4, D_0051FAC4);
}

void func_001F5A30(void)
{
    D_0051FA30[0] = (s32)func_001FF000(D_00501678, 0x04000040);
}

void func_001F5A60(void)
{
    D_0051FAC0[0] = 0;
    func_00178060(D_0051FAC4);
    func_0020D070(D_0051FA80);
    func_0020D070(D_0051FA40);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5AA0);

void func_001F5AD0(Obj_001F5AD0 *arg0, s32 arg1, s32 arg2)
{
    s16 *table;

    if (arg0->flags & 4) {
        table = arg0->unk_24;
    } else {
        table = arg0->unk_20;
    }
    if (arg2 < table[0]) {
        arg2 = table[arg2 + 1];
    }
    func_001F51B0(arg1, arg2);
}
