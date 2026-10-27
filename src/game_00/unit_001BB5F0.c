#include "common.h"
#include "game_00/obj2524.h"
#include "game_00/flags4.h"

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BB5F0", func_001BB5F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BB5F0", func_001BB640);

int func_001BB690(Obj2524 *arg0)
{
    Sub2524 *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 2)
        return 0;
    p = &arg0->unk_2524;
    if (p != 0) {
        v = p->unk_0;
        return (v < 6) ^ 1;
    }
    return 0;
}

int func_001BB6D0(Obj2524 *arg0)
{
    Sub2524 *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 2)
        return 0;
    p = &arg0->unk_2524;
    if (p != 0) {
        v = p->unk_4;
        return (v ^ 0) == 0;
    }
    return 0;
}

int func_001BB710(Obj2524 *arg0)
{
    Sub220 *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 2)
        return 0;
    p = &arg0->unk_220;
    if (p != 0) {
        v = p->unk_A;
        return v == 1;
    }
    return 0;
}

int func_001BB750(Obj2524 *arg0)
{
    Obj53C *p;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 0xA)
        return 0;
    p = arg0->unk_2508;
    if (p == 0)
        return 0;
    if (arg0->unk_C == 0xA && p->unk_53C == 0x10EE)
        return 1;
    return 0;
}

int func_001BB7A0(Obj2524 *arg0)
{
    Sub2524 *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 0xA)
        return 0;
    if (arg0->flags & 0x20000)
        return 1;
    p = &arg0->unk_2524;
    if (p != 0) {
        v = p->unk_0;
        return v > 0;
    }
    return 0;
}

float func_001BB7F0(Obj2524 *arg0)
{
    Obj1D0 *c;
    Sub14C *p;

    if (arg0 == 0)
        return 0.0f;
    c = arg0->unk_2448;
    if (c == 0)
        return 0.0f;
    p = &c->unk_14C;
    if (p != 0)
        return p->unk_6C;
    return 0.0f;
}

int func_001BB840(Obj2524 *arg0)
{
    Obj1D0 *c;
    Sub14C *p;

    if (arg0 == 0)
        return 0;
    c = arg0->unk_2448;
    if (c == 0)
        return 0;
    p = &c->unk_14C;
    if (p == 0)
        return 0;
    if (p->unk_7C < p->unk_1C)
        return 1;
    else if (p->unk_7C > p->unk_1C)
        return -1;
    return 0;
}

int func_001BB890(Obj2524 *arg0, int arg1)
{
    Obj53C *p;
    Node23E8 *n;
    Item150 *it;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_3C == 0)
        return 0;
    p = arg0->unk_2508;
    if (p == 0)
        return 0;
    n = p->unk_23E8;
    while ((it = n->unk_0) != (Item150 *)1) {
        if (it != 0 && it->unk_150 == arg1)
            return 1;
        n = n->next;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BB5F0", func_001BB900);

int func_001BBBB0(Flags4 *arg0)
{
    switch (arg0->unk_0) {
    case 1:
        return func_001BBC80(arg0);
    case 2:
        return func_001BBC50(arg0);
    case 3:
        return func_001BBC20(arg0);
    }
    return 0;
}

int func_001BBC20(Flags4 *arg0)
{
    int r;
    int v;

    r = 0;
    v = arg0->flags;
    if (v & 0x1) {
        if (v & 0x2)
            r = 1;
    }
    return r;
}

int func_001BBC50(Flags4 *arg0)
{
    int r;
    int v;

    r = 0;
    v = arg0->flags;
    if (v & 0x1) {
        if (v & 0x2)
            r = 1;
    }
    return r;
}

int func_001BBC80(Flags4 *arg0)
{
    int r;
    int v;

    r = 0;
    v = arg0->flags;
    if (v & 0x1) {
        if (v & 0x2)
            r = 1;
    }
    return r;
}
