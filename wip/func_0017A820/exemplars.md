# Exemplars for func_0017A820 — the 3 matched functions nearest by address

## func_0017A590 @ 0x0017A590 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef unsigned short u16;

typedef struct Obj {
    unsigned char pad[0xC4];
    u16 count;
    unsigned char pad2[0xA];
    struct Obj *link;
} Obj;

int func_0017A590(Obj *a, Obj *b)
{
    u16 c;
    if (b == 0)
        goto fail;
    if (a == 0)
        goto fail;
    if (a->link != 0)
        goto fail;
    a->link = b;
    c = b->count + 1;
    b->count = c;
    return c;
fail:
    return -1;
}

```

## func_001795F0 @ 0x001795F0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Node {
    int unk_0;
    struct Node *next;
} Node;

void func_00167130();

void func_001795F0(Node *n, Node *m, Node *p)
{
    func_00167130(n, m, p->next);
}

```

## func_00179380 @ 0x00179380 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
/* doubly linked list unlink: prev at +4, next at +8 */
typedef struct Link {
    int unk_0;
    struct Link *prev;
    struct Link *next;
} Link;

void func_00179380(Link *n)
{
    Link *prev = n->prev;
    Link *next = n->next;
    prev->next = next;
    next->prev = prev;
}

```
