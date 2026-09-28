#include "common.h"
#include "game_00/obj2524.h"

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BF730", func_001BF730);

int func_001BF7C0(int a, int b)
{
    return a != 0 ? b : 0;
}

float func_001BF7D0(Obj2524 *arg0)
{
    if (arg0 != 0)
        return arg0->unk_2448 != 0 ? arg0->unk_2448->sub14C.unk_24 : 0.0f;
    return 0.0f;
}

int func_001BF810(Obj2524 *arg0)
{
    Cache2448 *c;

    if (arg0 == 0)
        return 0;
    c = arg0->unk_2448;
    if (c != 0)
        return c->sub14C.unk_80;
    return 0;
}

float func_001BF830(Obj2524 *arg0)
{
    if (arg0 != 0)
        return arg0->unk_2448 != 0 ? arg0->unk_2448->sub14C.unk_20 : 0.0f;
    return 0.0f;
}

float func_001BF870(Obj2524 *arg0)
{
    if (arg0 != 0)
        return arg0->unk_2448 != 0 ? arg0->unk_2448->sub14C.unk_1C : 0.0f;
    return 0.0f;
}

float func_001BF8B0(Obj2524 *arg0)
{
    Cache2448 *c;
    Obj2524 *o;

    if (arg0 == 0)
        return 0.0f;
    c = arg0->unk_2448;
    if (c == 0)
        return 0.0f;
    o = c->unk_C;
    if (o == 0)
        return 0.0f;
    return o->unk_2508 != 0 ? o->unk_464 - o->unk_2508->unk_464 : 0.0f;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BF730", func_001BF920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BF730", func_001BFA60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BF730", func_001BFAD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BF730", func_001BFDE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BF730", func_001C0500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001BF730", func_001C0690);

int func_001C0780(Obj2524 *arg0, float a, float b)
{
    int r = 0;

    if (arg0 != 0) {
        if (arg0->unk_2508 != 0) {
            if (a < 0.0f) {
                if (a < -b)
                    r = 1;
            } else if (a > 0.0f) {
                if (a > b)
                    r = -1;
            }
        }
    }
    return r;
}

void func_001C07F0(Obj2524 *arg0, short v)
{
    Cache2448 *c;

    if (arg0 != 0) {
        c = arg0->unk_2448;
        if (c != 0)
            c->unk_B0 = v;
    }
}
