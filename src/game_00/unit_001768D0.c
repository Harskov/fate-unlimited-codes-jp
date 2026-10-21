#include "common.h"

typedef int (*Handler)(int, int, unsigned char *);

typedef struct Ent {
    /* 0x00 */ int unk_0;
} Ent;

typedef struct Node {
    int unk_0;
    /* 0x04 */ Ent *unk_4;
    /* 0x08 */ Ent *unk_8;
} Node;

typedef struct Obj_001768D0 {
    unsigned char unk_0[0x3C];
    /* 0x3C */ Node *unk_3C[10];
    int count;
} Obj_001768D0;

/* free-list node: func_00177B00 pops the head of a singly linked list */
typedef struct Node_00177B00 { struct Node_00177B00 *next; } Node_00177B00;

typedef struct Node_00178060 {
    /* 0x00 */ int unk_0;
    struct Node_00178060 *next;
    struct Node_00178060 *prev;
} Node_00178060;

extern Handler jtbl_003D66B0[];

/* the object func_00178380 hands back: a header word, then two list nodes at +0x78 and +0x84 */
typedef struct Obj_00177FE0 {
    /* 0x00 */ int unk_0;
    /* 0x04 */ int unk_4;
    unsigned char unk_8[0x70];
    /* 0x78 */ Node_00178060 unk_78;
    /* 0x84 */ Node_00178060 unk_84;
} Obj_00177FE0;

Obj_00177FE0 *func_00178380(int arg0, int arg1, int arg2, int arg3);

void func_00178060(Node_00178060 *n);

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

void func_00177580(void **head, void **p)
{
    void *old;
    void **slot;

    old = *head;
    slot = p - 1;
    *slot = old;
    *head = slot;
}

void func_001775A0(Obj_001768D0 *m)
{
    int i;

    for (i = 0; i < m->count; i++) {
        Node *n = m->unk_3C[i];
        if (n != 0) {
            Ent *e = n->unk_4;
            if (e != n->unk_8) {
                e->unk_0 &= ~0x20000;
                m->unk_3C[i]->unk_4->unk_0 |= 1;
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

Obj_00177FE0 *func_00177FE0(int arg0, int arg1, int arg2, int arg3)
{
    Obj_00177FE0 *o;

    o = func_00178380(arg3, arg0, arg1, arg2);
    if (o == 0)
        return 0;
    o->unk_0 = 0;
    o->unk_4 = 0;
    o->unk_0 |= 8;
    o->unk_0 |= 0x400000;
    func_00178060(&o->unk_78);
    func_00178060(&o->unk_84);
    return o;
}

void func_00178060(Node_00178060 *n)
{
    n->unk_0 = 1;
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
