typedef struct Rec {
    unsigned char pad[0x18];
    int unk18;
} Rec;

typedef struct Sub {
    int f0;
    unsigned char *base;
    short count;
} Sub;

typedef struct Arr {
    unsigned char pad[0x220];
    Sub sub;
} Arr;

void func_001A5450(Arr *a, int i, int v)
{
    Sub *s = &a->sub;
    int end;
    int off;

    if (i < 0) {
        end = s->count;
        i = 0;
    } else {
        if (i >= s->count)
            return;
        end = i + 1;
    }
    if (i < end) {
        off = i * 28;
        do {
            *(int *)(s->base + off + 0x18) = v;
            i++;
            off += 28;
        } while (i < end);
    }
}
