#include "common.h"

/* free-list node: func_002113E0 pops the head of a singly linked list (derived from func_00177B00) */
typedef struct Node_002113E0 { struct Node_002113E0 *next; } Node_002113E0;

typedef struct Obj {
    unsigned char pad[4];
    void *unk_04;
} Obj;

void func_00211370();
void func_0020EC40();

typedef struct Obj_00211400 {
    u8 pad[0x30];
    s32 unk_30;
} Obj_00211400;

extern s32 D_005231F0[];

void func_002111E0(s32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211170);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_002111E0);

void func_00211260(void)
{
    func_002111E0(D_005231F0[0]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211270);

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

void func_00211400(int a0, Obj_00211400 *a1)
{
    func_0020EC40(a0, &a1->unk_30);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211490);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211510);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211580);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_002115C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211600);
