typedef struct S {
    int unk_0;
    int unk_4;
    int unk_8;
    int unk_C;
    int unk_10;
} S;

void func_001990C0(S *a)
{
    a->unk_10 |= 4;
    if (a->unk_0 & 0x20) {
        a->unk_10 |= 0x80;
    }
}
