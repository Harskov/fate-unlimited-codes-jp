typedef struct Elem {
    unsigned char unk_0[0x18];
    int unk_18;
} Elem;

typedef struct Sub {
    int unk_0;
    Elem *base;
    short count;
} Sub;

typedef struct Arr {
    unsigned char unk_0[0x220];
    Sub sub;
} Arr;

void func_001A5450(Arr *a, int i, int val)
{
    Sub *s = &a->sub;
    int end;

    if (i < 0) {
        end = s->count;
        i = 0;
    } else {
        if (i >= s->count)
            return;
        end = i + 1;
    }

    for (; i < end; i++)
        s->base[i].unk_18 = val;
}
