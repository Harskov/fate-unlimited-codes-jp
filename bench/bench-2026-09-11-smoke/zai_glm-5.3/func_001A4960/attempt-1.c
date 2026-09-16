typedef struct Sub {
    int f0;
    unsigned char *base;
    short count;
} Sub;

typedef struct Arr {
    unsigned char pad[0x220];
    Sub sub;
} Arr;

unsigned char *func_001A4960(Arr *a, int i)
{
    Sub *s = &a->sub;
    if (i >= s->count)
        return 0;
    return s->base + i * 28;
}
