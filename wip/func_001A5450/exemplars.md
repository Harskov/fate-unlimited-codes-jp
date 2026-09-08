# Exemplars for func_001A5450 — the 3 matched functions nearest by address

## func_001A49A0 @ 0x001A49A0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Sub {
    int f0;
    unsigned char *base;
    short count;
    short index;
    unsigned char *cur;
} Sub;

typedef struct Arr {
    unsigned char pad[0x220];
    Sub sub;
} Arr;

void func_001A49A0(Arr *a, int i)
{
    Sub *s = &a->sub;

    if (i >= s->count)
        return;

    s->index = i;
    s->cur = s->base + i * 28;
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

## func_001A47A0 @ 0x001A47A0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Timer {
    unsigned char pad[0xC];
    float elapsed;
} Timer;

typedef struct Obj {
    unsigned char pad[0x40];
    Timer *timer;
} Obj;

float func_001A47A0(Obj *o)
{
    return o->timer->elapsed / (1.0f / 60.0f);
}

```
