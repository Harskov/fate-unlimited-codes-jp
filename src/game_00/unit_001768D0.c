#include "common.h"

typedef int (*Handler)(int, int, unsigned char *);

typedef struct Ent {
    int flags;
} Ent;

typedef struct Node {
    int unk_0;
    Ent *cur;
    Ent *end;
} Node;

typedef struct Mgr {
    unsigned char unk_0[0x3C];
    Node *nodes[10];
    int count;
} Mgr;

/* free-list node: func_00177B00 pops the head of a singly linked list */
typedef struct Node_00177B00 { struct Node_00177B00 *next; } Node_00177B00;

typedef struct Node_00178060 {
    int f0;
    struct Node_00178060 *next;
    struct Node_00178060 *prev;
} Node_00178060;

extern Handler jtbl_003D66B0[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_001768D0);

int func_00176BC0(int *table, int i, int v)
{
    table[i] = v;
    return table[i];
}

int func_00176BE0(int a0, int a1, unsigned char *cmd)
{
    return jtbl_003D66B0[*cmd](a0, a1, cmd);
}

int func_00176C00(int *table, int i)
{
    return table[i];
}

int func_00176C10(int *table, int i, int v)
{
    table[i] = v;
    return table[i];
}

int func_00176C30(int *table, int i, int v)
{
    table[i] += v;
    return table[i];
}

int func_00176C50(int *table, int i)
{
    return table[i];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_00176C60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_00177080);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_001771D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_00177370);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_00177580);

void func_001775A0(Mgr *m)
{
    int i;

    for (i = 0; i < m->count; i++) {
        Node *n = m->nodes[i];
        if (n != 0) {
            Ent *e = n->cur;
            if (e != n->end) {
                e->flags &= ~0x20000;
                m->nodes[i]->cur->flags |= 1;
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_00177620);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_001777F0);

void *func_00177B00(Node_00177B00 **head)
{
    Node_00177B00 *n = *head;
    if (n == 0)
        return 0;
    *head = n->next;
    return (void *)(n + 1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_00177B20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_00177FE0);

void func_00178060(Node_00178060 *n)
{
    n->f0 = 1;
    n->next = n;
    n->prev = n;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_00178080);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_00178380);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_001785D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_00178730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_001787E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_001788E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001768D0", func_00178A00);
