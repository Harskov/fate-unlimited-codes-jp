# Exemplars for func_001795F0 — the 3 matched functions nearest by address

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

## func_00178060 @ 0x00178060 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Node {
    int f0;
    struct Node *next;
    struct Node *prev;
} Node;

void func_00178060(Node *n)
{
    n->f0 = 1;
    n->next = n;
    n->prev = n;
}

```

## func_00177B00 @ 0x00177B00 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
/* calibration candidate func_00177B00: pop from a singly linked free list */
typedef struct Node { struct Node *next; } Node;

void *func_00177B00(Node **head)
{
    Node *n = *head;
    if (n == 0)
        return 0;
    *head = n->next;
    return (void *)(n + 1);
}

```
