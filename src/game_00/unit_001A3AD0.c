#include "common.h"
#include "game_00/tbl_0051C858.h"
#include "game_00/arr220.h"

typedef struct Obj {
    unsigned char unk_0[0x1F0];
    int unk_1F0;
    unsigned char unk_1F4[0x24C0 - 0x1F4];
    int unk_24C0;
} Obj;

typedef struct Obj_001A3EA0 {
    unsigned char unk_0[0x1F4];
    int unk_1F4;
    unsigned char unk_1F8[0x24BC - 0x1F8];
    int unk_24BC;
} Obj_001A3EA0;

typedef struct Timer {
    unsigned char pad[0xC];
    float elapsed;
} Timer;

typedef struct Obj_001A47A0 {
    unsigned char pad[0x40];
    Timer *timer;
} Obj_001A47A0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A3AD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A3BA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A3C10);

int func_001A3E30(Ctx0051C858 *c)
{
    Node0051C858 *n;

    for (n = D_0051C858[c->index]->list; n != 0; n = n->next) {
        Obj *o = (Obj *)n->obj;
        if (o->unk_1F0 & 0x10)
            return 0;
        if (o->unk_24C0 > 0)
            return 0;
    }
    return 1;
}

int func_001A3EA0(Ctx0051C858 *c)
{
    Node0051C858 *n;

    for (n = D_0051C858[c->index]->list; n != 0; n = n->next) {
        Obj_001A3EA0 *o = (Obj_001A3EA0 *)n->obj;
        if (o->unk_1F4 & 0x18000)
            return 0;
        if (o->unk_24BC > 0)
            return 0;
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A3F20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A40B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A4120);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A44A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A44F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A45B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A4640);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A46A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A4730);

float func_001A47A0(Obj_001A47A0 *o)
{
    return o->timer->elapsed / (1.0f / 60.0f);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A47D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A4870);

unsigned char *func_001A4960(Arr220 *a, int i)
{
    Sub220 *s = &a->sub;

    if (i >= s->count)
        return 0;
    return s->base + i * 28;
}

void func_001A49A0(Arr220 *a, int i)
{
    Sub220 *s = &a->sub;

    if (i >= s->count)
        return;

    s->index = i;
    s->cur = s->base + i * 28;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A49E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A5130);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A53F0);

void func_001A5450(Arr220 *a, int i, int val)
{
    Sub220 *s = &a->sub;
    int end;

    if (i < 0) {
        end = s->count;
        i = 0;
    } else {
        if (i >= s->count)
            return;
        end = i + 1;
    }

    for (; i < end; i++)
        ((Elem220 *)s->base)[i].unk_18 = val;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A54C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A5550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A55D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A56C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A3AD0", func_001A5750);
