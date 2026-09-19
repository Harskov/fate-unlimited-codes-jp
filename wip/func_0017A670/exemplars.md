# Exemplars for func_0017A670 — the 3 matched functions nearest by address

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

## func_0017A820 @ 0x0017A820 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
int func_0017A820(int *p, int v)
{
    int old = *p;
    *p = old + v;
    return old;
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
