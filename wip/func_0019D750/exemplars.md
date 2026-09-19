# Exemplars for func_0019D750 — the 3 matched functions nearest by address

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

## func_0019D6A0 @ 0x0019D6A0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
#include "game_00/tbl_0051C870.h"

void func_0019D6A0(int *p)
{
    int i = *p;

    D_0051C870[i].used = 0;
    D_0051C874[*p].owner = 0;
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
