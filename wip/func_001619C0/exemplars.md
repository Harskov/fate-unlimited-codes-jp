# Exemplars for func_001619C0 — the 3 matched functions nearest by address

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

## func_001A4960 @ 0x001A4960 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
/* calibration candidate func_001A4960: indexed element of a 28-byte array in an embedded
   sub-structure at 0x220, with a count check. Second form; the first (a->base + i*28 with the
   fields inline in the outer struct) compiled to the same size with the sub-struct pointer
   materialised differently. */
typedef struct Sub { int f0; unsigned char *base; short count; } Sub;
typedef struct Arr { unsigned char pad[0x220]; Sub sub; } Arr;

unsigned char *func_001A4960(Arr *a, int i)
{
    Sub *s = &a->sub;
    if (i >= s->count)
        return 0;
    return s->base + i * 28;
}

```
