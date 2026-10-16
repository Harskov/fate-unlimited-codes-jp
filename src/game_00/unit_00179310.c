#include "common.h"
#include "game_00/vec.h"

/* doubly linked list unlink: prev at +4, next at +8 */
typedef struct Link {
    int unk_0;
    struct Link *prev;
    struct Link *next;
} Link;

typedef struct Node {
    int unk_0;
    void *unk_4;
} Node;

typedef struct Obj {
    unsigned char unk_0[0xC4];
    /* 0xC4 */ u16 counter;
    unsigned char unk_C6[0xA];
    /* 0xD0 */ struct Obj *next;
} Obj;

typedef struct Ent0051AC78 {
    struct Ent0051AC78 *next;
    int unk_4;
    unsigned char unk_8[0x8];
    /* 0x10 */ Vec3 unk_10;
    Vec3 unk_1C;
    /* 0x28 */ Vec3 unk_28;
    unsigned char unk_34[0xC0 - 0x34];
    int unk_C0;
    short unk_C4;
    short unk_C6;
    char unk_C8;
    char unk_C9;
    char unk_CA;
} Ent0051AC78;

void func_00167130();

extern Ent0051AC78 *D_0051AC78[];

extern unsigned int D_0051AE58[];

extern unsigned int D_0051AE40[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_00179310);

void func_00179380(Link *n)
{
    Link *prev = n->prev;
    Link *next = n->next;
    prev->next = next;
    next->prev = prev;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_001793A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_001793E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_00179450);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_00179570);

void func_001795F0(void *arg0, void *arg1, Node *arg2)
{
    func_00167130(arg0, arg1, arg2->unk_4);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_00179600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_00179760);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A1B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A230);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A3C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A460);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A4E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A550);

int func_0017A590(Obj *arg0, Obj *arg1)
{
    if (arg1 == 0 || arg0 == 0 || arg0->next != 0)
        return -1;
    arg0->next = arg1;
    return ++arg1->counter;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A5D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A610);

Ent0051AC78 *func_0017A670(char kind, short id)
{
    Ent0051AC78 *e;
    unsigned int n;

    e = D_0051AC78[0];
    if (e != 0) {
        D_0051AC78[0] = e->next;
        e->next = 0;
        e->unk_C4 = 1;
        e->unk_C9 = 0;
        e->unk_C8 = kind;
        e->unk_10.unk_0 = e->unk_10.unk_4 = e->unk_10.unk_8 = 0.0f;
        e->unk_1C.unk_0 = e->unk_1C.unk_4 = e->unk_1C.unk_8 = 0.0f;
        e->unk_28.unk_0 = e->unk_28.unk_4 = e->unk_28.unk_8 = 1.0f;
        e->unk_C0 = 0;
        e->unk_CA = 0;
        e->unk_4 = 0;
        e->unk_C6 = id;

        n = D_0051AE58[0] + 1;
        D_0051AE58[0] = n;
        if (D_0051AE40[0] < n)
            D_0051AE40[0] = n;
    }
    return e;
}
