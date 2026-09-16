typedef struct Sub {
    int unk_0;
    unsigned char *unk_4;
    short unk_8;
    short unk_A;
} Sub;

typedef struct Slot {
    unsigned char unk_0[0x18];
    int unk_18;
} Slot;

typedef struct Arr {
    unsigned char unk_0[0x220];
    Sub sub;
} Arr;

void func_001A5450(Arr *a, int i, int v)
{
    Sub *s = &a->sub;
    int j;
    int t1;
    int off;

    if (i < 0) {
        t1 = s->unk_8;
        j = 0;
    } else {
        if (i >= s->unk_8)
            return;
        t1 = i + 1;
        j = i;
    }
    if (j < t1) {
        off = j * 28;
        do {
            ((Slot *)((unsigned char *)s->unk_4 + off))->unk_18 = v;
            j++;
            off += 28;
        } while (j < t1);
    }
}
