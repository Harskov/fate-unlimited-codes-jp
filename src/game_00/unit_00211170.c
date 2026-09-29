#include "common.h"

/* free-list node: func_002113E0 pops the head of a singly linked list (derived from func_00177B00) */
typedef struct Node_002113E0 { struct Node_002113E0 *next; } Node_002113E0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211170);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_002111E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211260);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211270);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_002112A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_002112D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211360);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211370);

void *func_002113E0(Node_002113E0 **head)
{
    Node_002113E0 *n = *head;
    if (n == 0)
        return 0;
    *head = n->next;
    return (void *)(n + 1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211400);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211490);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211510);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211580);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_002115C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00211170", func_00211600);
