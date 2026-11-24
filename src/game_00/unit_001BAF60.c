#include "common.h"
#include "game_00/obj2524.h"

int func_00333630(void *arg0, int arg1);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BAF60", func_001BAF60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BAF60", func_001BB0F0);

int func_001BB140(Obj2524 *arg0)
{
    Sub2524 *p;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 0x11)
        return 0;
    p = &arg0->unk_2524;
    if (p != 0)
        return p->unk_0 > 0;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BAF60", func_001BB180);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BAF60", func_001BB1D0);

int func_001BB220(Obj2524 *arg0)
{
    Obj53C *p;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 0xD)
        return 0;
    p = arg0->unk_2508;
    if (p == 0)
        return 0;
    if (arg0->unk_C == 0xD && p->unk_53C == 0x10FA)
        return 1;
    return 0;
}

int func_001BB270(Obj2524 *arg0)
{
    Sub2524 *p;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 0xC)
        return 0;
    p = &arg0->unk_2524;
    if (p != 0)
        return p->unk_0 > 0;
    return 0;
}

int func_001BB2B0(Obj2524 *arg0)
{
    Sub2524 *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 5)
        return 0;
    p = &arg0->unk_2524;
    if (p != 0) {
        v = p->unk_0;
        v ^= 0;
        return v == 0;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BAF60", func_001BB2F0);

int func_001BB380(Obj2524 *arg0)
{
    Sub220 *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 8)
        return 0;
    p = &arg0->unk_220;
    if (p != 0) {
        v = p->unk_A;
        return v == 1;
    }
    return 0;
}

int func_001BB3C0(Obj2524 *arg0)
{
    Obj53C *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 7)
        return 0;
    p = arg0->unk_2508;
    if (p == 0)
        return 0;
    v = p->unk_53C;
    if (v == 0xB4 && v == 0x38)
        return 1;
    return 0;
}

/* A func_001BB* predicate: true for state 6 when the +0x2508 object's +0x53C
   is 0x10F0 or 0x10ED, or when func_00333630 accepts that object with 0x100. */
int func_001BB420(Obj2524 *arg0)
{
    Obj53C *p;
    int c;

    if (arg0 == 0)
        return 0;
    c = arg0->unk_C;
    if (c != 6)
        return 0;
    p = arg0->unk_2508;
    if (p == 0)
        return 0;
    /* the state is tested a second time here; probably a guard the author's
       helper or macro carried */
    if (c == 6) {
        switch (p->unk_53C) {
        case 0x10ED:
        case 0x10F0:
            return 1;
        }
        if (func_00333630(p, 0x100) != 0)
            return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BAF60", func_001BB4B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BAF60", func_001BB560);

int func_001BB5B0(Obj2524 *arg0)
{
    Sub2524 *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 3)
        return 0;
    p = &arg0->unk_2524;
    if (p != 0) {
        v = p->unk_0;
        return (v != 0) ^ 1;
    }
    return 0;
}
