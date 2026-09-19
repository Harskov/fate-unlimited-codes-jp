# Exemplars for func_0019DCC0 — the 3 matched functions nearest by address

## func_0019DA00 @ 0x0019DA00 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char pad[0x1E8];
    unsigned int unk1E8;
    unsigned int unk1EC;
    unsigned int unk1F0;
} Obj;

void func_0019DA00(Obj *arg0)
{
    if ((arg0->unk1EC & 0x02000000) || (arg0->unk1E8 & 0x200000)) {
        arg0->unk1F0 |= 0x20;
    }
}

```

## func_0019D850 @ 0x0019D850 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Node {
    unsigned char pad[0xC];
    struct Node *next;
    struct Node *prev;
} Node;

Node *func_0019D850(Node *n)
{
    Node *prev = n->prev;
    prev->next = n->next;
    if (n->next != 0)
        n->next->prev = prev;
    return prev->next;
}

```

## func_0019D6E0 @ 0x0019D6E0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
#include "game_00/tbl_0051C870.h"

void func_0019D6E0(int *p)
{
    int i;

    for (i = 0; i < 10; i++) {
        if (D_0051C870[i].used == 0) {
            D_0051C870[i].used = 1;
            D_0051C874[i].owner = p;
            *p = i;
            break;
        }
    }
}

```
