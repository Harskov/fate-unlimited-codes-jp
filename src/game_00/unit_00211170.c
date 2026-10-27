#include "common.h"
#include "game_00/unit_0020EB60.h"
#include "game_00/unit_00211170.h"

/* free-list node: func_002113E0 pops the head of a singly linked list (derived from func_00177B00) */
typedef struct Node_002113E0 { struct Node_002113E0 *next; } Node_002113E0;

typedef struct Obj {
    unsigned char pad[4];
    void *unk_04;
} Obj;

void func_00211370();

extern s32 D_005231F0[];

void func_002111E0(s32);

extern s32 D_00523200[];

typedef struct Obj_00210CB0 {
    u8 unk_0[0x2C];
    s32 unk_2C;
} Obj_00210CB0;

Obj_00210CB0 *func_00210CB0(s32);

extern s32 D_005231D8[];

extern s32 D_005231E0[];

void func_00210F70();

void func_00211600();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211170);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_002111E0);

void func_00211260(void)
{
    func_002111E0(D_005231F0[0]);
}

void func_00211270(s32 arg0, s32 arg1)
{
    Obj_00210CB0 *o = func_00210CB0(arg0);
    o->unk_2C = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_002112A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_002112D0);

void func_00211360(Obj *p)
{
    func_00211370(p->unk_04);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211370);

void *func_002113E0(Node_002113E0 **head)
{
    Node_002113E0 *n = *head;
    if (n == 0)
        return 0;
    *head = n->next;
    return (void *)(n + 1);
}

void *func_00211400(s32 a0, s32 a1)
{
    return func_0020EC40(a0, a1 + 0x30);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211490);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211510);

void func_00211580(s32 arg0)
{
    if (arg0 != 0) {
        D_005231F0[0] = arg0;
    } else {
        D_005231F0[0] = (s32)D_00523200;
    }
}

void func_002115C0(void)
{
    D_005231D8[0] = 0;
    func_00211600(D_00523200, 0x1E);
    func_00211580(0);
    func_00210F70(D_005231E0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211600);
