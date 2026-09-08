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

    if (i < s->count) {
        s->index = i;
        s->cur = s->base + i * 28;
    }
}
