#include "common.h"

typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA110);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA180);

void func_001AA1F0(Obj *p)
{
    p->flags &= ~1;
}

void func_001AA210(Obj *p)
{
    p->flags = p->flags & 0xFFFFFFFE;
}

void func_001AA230(Obj *p)
{
    p->flags = p->flags & 0xFFFFFFFE;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA250);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA2A0);

void func_001AA310(Obj *p)
{
    if (p->flags & 1) {
        p->flags &= ~2;
    }
}

void func_001AA340(Obj *p)
{
    if (p->flags & 1) {
        p->flags &= ~2;
    }
}

void func_001AA370(Obj *p)
{
    if (p->flags & 1) {
        p->flags &= ~2;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA3A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA3F0);

void func_001AA460(Obj *p)
{
    if (p->flags & 1) {
        p->flags |= 2;
    }
}

void func_001AA490(Obj *p)
{
    if (p->flags & 1) {
        p->flags |= 2;
    }
}

void func_001AA4C0(Obj *p)
{
    if (p->flags & 1) {
        p->flags |= 2;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA4F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA540);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA630);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA6A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA6F0);
