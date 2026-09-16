typedef struct Sub {
    int unk_0;
    unsigned char *unk_4;
    short unk_8;
    short unk_A;
    void *unk_C;
} Sub;

typedef struct Arr {
    unsigned char pad[0x220];
    Sub sub;
} Arr;

void func_001A49A0(Arr *a, int i)
{
    Sub *s = &a->sub;

    if (i < s->unk_8) {
        s->unk_A = i;
        s->unk_C = s->unk_4 + i * 28;
    }
}
