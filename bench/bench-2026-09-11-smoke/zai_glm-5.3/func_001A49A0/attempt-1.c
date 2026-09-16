typedef struct Sub {
    int f0;
    unsigned char *base;
    short f8;
    short idx;
    unsigned char *cur;
    unsigned char pad[0x14];
    short count;
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
    s->idx = i;
    s->cur = s->base + i * 28;
}
