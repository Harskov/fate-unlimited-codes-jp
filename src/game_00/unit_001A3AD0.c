#include "common.h"
#include "game_00/tbl_0051C858.h"
#include "game_00/arr220.h"

typedef struct Obj {
    unsigned char unk_0[0x1F0];
    /* 0x1F0 */ int flags;
    unsigned char unk_1F4[0x24C0 - 0x1F4];
    int unk_24C0;
} Obj;

typedef struct Obj_001A3EA0 {
    unsigned char unk_0[0x1F4];
    /* 0x1F4 */ int flags;
    unsigned char unk_1F8[0x24BC - 0x1F8];
    int unk_24BC;
} Obj_001A3EA0;

typedef struct Obj_001A3AD0 {
    unsigned char pad[0xC];
    /* 0x0C */ float unk_C;
} Obj_001A3AD0;

typedef struct Obj_001A47A0 {
    unsigned char pad[0x40];
    /* 0x40 */ Obj_001A3AD0 *unk_40;
} Obj_001A47A0;

typedef struct Obj_001A44A0 {
    unsigned char unk_0[0x1DC];
    /* 0x1DC */ int flags;
    unsigned char unk_1E0[0x234 - 0x1E0];
    int unk_234;
    int unk_238;
    int unk_23C;
    int unk_240;
} Obj_001A44A0;

Obj_001A44A0 *func_0019CFF0();

int func_0020E5F0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A3AD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A3BA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A3C10);

int func_001A3E30(Ctx0051C858 *c)
{
    Node0051C858 *n;

    for (n = D_0051C858[c->unk_8]->unk_C; n != 0; n = n->next) {
        Obj *o = (Obj *)n->unk_0;
        if (o->flags & 0x10)
            return 0;
        if (o->unk_24C0 > 0)
            return 0;
    }
    return 1;
}

int func_001A3EA0(Ctx0051C858 *c)
{
    Node0051C858 *n;

    for (n = D_0051C858[c->unk_8]->unk_C; n != 0; n = n->next) {
        Obj_001A3EA0 *o = (Obj_001A3EA0 *)n->unk_0;
        if (o->flags & 0x18000)
            return 0;
        if (o->unk_24BC > 0)
            return 0;
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A3F20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A40B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A4120);

void func_001A44A0(Obj_001A44A0 *arg0, int arg1)
{
    if (arg0->flags & 0x20)
        arg0 = func_0019CFF0();
    arg0->unk_240 += arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A44F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A45B0);

void func_001A4640(Obj_001A44A0 *arg0, int arg1)
{
    if (arg0->flags & 0x20)
        arg0 = func_0019CFF0();
    arg0->unk_23C = func_0020E5F0(arg0->unk_234 - arg1, 0, arg0->unk_238, arg0->unk_234);
    arg0->unk_240 = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A46A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A4730);

float func_001A47A0(Obj_001A47A0 *o)
{
    return o->unk_40->unk_C / (1.0f / 60.0f);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A47D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A4870);

unsigned char *func_001A4960(Arr220 *a, int i)
{
    Sub220 *s = &a->unk_220;

    if (i >= s->unk_8)
        return 0;
    return s->unk_4 + i * 28;
}

void func_001A49A0(Arr220 *a, int i)
{
    Sub220 *s = &a->unk_220;

    if (i >= s->unk_8)
        return;

    s->unk_A = i;
    s->unk_C = s->unk_4 + i * 28;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A49E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A5130);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A53F0);

void func_001A5450(Arr220 *a, int i, int val)
{
    Sub220 *s = &a->unk_220;
    int end;

    if (i < 0) {
        end = s->unk_8;
        i = 0;
    } else {
        if (i >= s->unk_8)
            return;
        end = i + 1;
    }

    for (; i < end; i++)
        ((Elem220 *)s->unk_4)[i].unk_18 = val;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A54C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A5550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A55D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A56C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A5750);
