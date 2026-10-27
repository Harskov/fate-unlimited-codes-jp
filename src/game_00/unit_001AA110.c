#include "common.h"

#include "game_00/kindflags.h"

typedef struct Elem_001AA250 {
    Obj8 unk_0;
    u8 unk_8[0x14];
} Elem_001AA250;

typedef struct Obj_001AA250 {
    u8 unk_0[0x12AC];
    Elem_001AA250 unk_12AC[16];
} Obj_001AA250;

typedef struct Obj_001AA630 {
    u8 unk_0[0x10EC];
    Elem_001AA250 unk_10EC[16];
} Obj_001AA630;

void func_001AA180();

void func_001AA110(Obj_001AA250 *arg0)
{
    int i;

    for (i = 0; i < 16; i++) {
        if (arg0->unk_12AC[i].unk_0.flags & 0x1000) {
            func_001AA180(&arg0->unk_12AC[i].unk_0);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA180);

void func_001AA1F0(Obj8 *p)
{
    p->flags &= ~1;
}

void func_001AA210(Obj8 *p)
{
    p->flags = p->flags & 0xFFFFFFFE;
}

void func_001AA230(Obj8 *p)
{
    p->flags = p->flags & 0xFFFFFFFE;
}

void func_001AA250(Obj_001AA250 *arg0)
{
    int i;

    for (i = 0; i < 16; i++) {
        func_001AA2A0(&arg0->unk_12AC[i]);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA2A0);

void func_001AA310(Obj8 *p)
{
    if (p->flags & 1) {
        p->flags &= ~2;
    }
}

void func_001AA340(Obj8 *p)
{
    if (p->flags & 1) {
        p->flags &= ~2;
    }
}

void func_001AA370(Obj8 *p)
{
    if (p->flags & 1) {
        p->flags &= ~2;
    }
}

void func_001AA3A0(Obj_001AA250 *arg0)
{
    int i;

    for (i = 0; i < 16; i++) {
        func_001AA3F0(&arg0->unk_12AC[i]);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA3F0);

void func_001AA460(Obj8 *p)
{
    if (p->flags & 1) {
        p->flags |= 2;
    }
}

void func_001AA490(Obj8 *p)
{
    if (p->flags & 1) {
        p->flags |= 2;
    }
}

void func_001AA4C0(Obj8 *p)
{
    if (p->flags & 1) {
        p->flags |= 2;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA4F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA540);

void func_001AA630(Obj_001AA630 *arg0)
{
    int i;

    for (i = 0; i < 16; i++) {
        if (arg0->unk_10EC[i].unk_0.flags & 0x1000) {
            func_001AA180(&arg0->unk_10EC[i].unk_0);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA6A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA110", func_001AA6F0);
