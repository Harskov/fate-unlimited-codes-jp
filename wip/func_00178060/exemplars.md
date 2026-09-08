# Exemplars for func_00178060 — the 3 matched functions nearest by address

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

## func_001990B0 @ 0x001990B0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
void func_001990B0(void)
{
}

```

## func_001990C0 @ 0x001990C0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
/* calibration candidate func_001990C0: flag bits */
typedef struct Flags { int f0; unsigned char pad[0xC]; int f10; } Flags;

void func_001990C0(Flags *f)
{
    f->f10 |= 4;
    if (f->f0 & 0x20)
        f->f10 |= 0x80;
}

```
