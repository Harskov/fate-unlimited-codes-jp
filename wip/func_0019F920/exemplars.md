# Exemplars for func_0019F920 — the 3 matched functions nearest by address

## func_0019DCC0 @ 0x0019DCC0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Sub {
    unsigned char pad[0xC];
    int unkC;
} Sub;

typedef struct Obj {
    unsigned char pad[0x2510];
    Sub *unk2510;
} Obj;

int func_0019DCC0(Obj *arg0)
{
    Sub *s = arg0->unk2510;
    if (s == 0)
        return 0x282;
    if (s->unkC == 1)
        return 0x284;
    return 0x282;
}

```

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
