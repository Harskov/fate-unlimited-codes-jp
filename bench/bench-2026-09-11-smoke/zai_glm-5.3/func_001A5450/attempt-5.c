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
    int end;
    int off;

    if (i >= 0) {
        if (i >= s->unk_8)
            return;
        end = i + 1;
    } else {
        end = s->unk_8;
        i = 0;
    }
    if (i < end) {
        off = i * 28;
        do {
            ((Slot *)((unsigned char *)s->unk_4 + off))->unk_18 = v;
            i++;
            off += 28;
        } while (i < end);
    }
}
