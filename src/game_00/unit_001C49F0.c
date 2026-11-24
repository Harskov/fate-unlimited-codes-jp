#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x14E0];
    int unk_14E0;
} Obj;

void func_001C4C30();

typedef struct Sub_2448 {
    unsigned char unk_0[0x7C];
    /* 0x07C */ int unk_7C;
} Sub_2448;

typedef struct Obj_001C4F90 {
    unsigned char unk_0[0x2448];
    /* 0x2448 */ Sub_2448 *unk_2448;
} Obj_001C4F90;

typedef struct Sub_001C4FA0 {
    unsigned char unk_0[0x78];
    /* 0x78 */ int unk_78;
    /* 0x7C */ int *unk_7C;
} Sub_001C4FA0;

typedef struct Obj_001C4FA0 {
    unsigned char unk_0[0x1E4];
    /* 0x1E4 */ int flags;
    unsigned char pad_1E8[0x2448 - 0x1E8];
    /* 0x2448 */ Sub_001C4FA0 *unk_2448;
} Obj_001C4FA0;

typedef struct Sub_001C4FE0 {
    unsigned char unk_0[0x128];
    /* 0x128 */ int counter_128;
    /* 0x12C */ int counter_12C;
} Sub_001C4FE0;

typedef struct Obj_001C4FE0 {
    unsigned char unk_0[0x244C];
    /* 0x244C */ Sub_001C4FE0 *unk_244C;
    unsigned char pad_2450[0x246C - 0x2450];
    /* 0x246C */ int unk_246C;
} Obj_001C4FE0;

typedef struct Obj_001C4B60 {
    unsigned char unk_0[0x460];
    int unk_460;
} Obj_001C4B60;

int func_001C4BA0(int *arg0, int *arg1);

typedef struct Sub_001C4E70 {
    unsigned char unk_0[0x24];
    /* 0x24 */ unsigned int flags;
} Sub_001C4E70;

typedef struct Obj_001C4E70 {
    unsigned char unk_0[0x484];
    /* 0x484 */ int unk_484;
    unsigned char pad_488[0x2448 - 0x488];
    /* 0x2448 */ Sub_001C4E70 *unk_2448;
} Obj_001C4E70;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C49F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4AA0);

int func_001C4B60(Obj_001C4B60 *arg0, Obj_001C4B60 *arg1)
{
    if (arg0 != 0 && arg1 != 0) {
        return func_001C4BA0(&arg0->unk_460, &arg1->unk_460);
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4BA0);

int func_001C4C20(Obj *p)
{
    return p->unk_14E0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4C30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4D50);

int func_001C4DE0(Obj_001C4E70 *p, Obj_001C4B60 *arg1, int arg2)
{
    if (arg1 == 0)
        return 0;
    if (p != 0 && arg1 != 0 && (p->unk_2448->flags & 0x80000000)) {
        func_001C4C30(p, func_001C4B60((Obj_001C4B60 *)p, arg1), arg2);
        return 1;
    }
    return 0;
}

int func_001C4E70(Obj_001C4E70 *p, int arg1)
{
    if (p != 0 && (p->unk_2448->flags & 0x80000000)) {
        func_001C4C30(p, (int)(float)(0xC0 - (p->unk_484 >> 8)), arg1);
        return 1;
    }
    return 0;
}

void func_001C4EE0(int arg0)
{
    func_001C4C30(arg0, -1, 0x80);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4EF0);

int func_001C4F90(Obj_001C4F90 *p)
{
    return p->unk_2448->unk_7C;
}

int func_001C4FA0(Obj_001C4FA0 *p, int *arg1)
{
    Sub_001C4FA0 *s = p->unk_2448;

    if (!(p->flags & 0x4) && *arg1 != -1) {
        s->unk_7C = arg1;
        s->unk_78 = 0;
        return 1;
    }
    s->unk_7C = 0;
    return 0;
}

int func_001C4FE0(Obj_001C4FE0 *arg0)
{
    Sub_001C4FE0 *s = arg0->unk_244C;

    if (arg0->unk_246C != 0) {
        s->counter_12C = 0;
    }
    if (s->counter_12C != 0) {
        s->counter_12C--;
        return 1;
    }
    if (s->counter_128 != 0) {
        s->counter_128--;
        return 1;
    }
    return 0;
}
