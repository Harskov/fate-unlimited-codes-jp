typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

void func_0016F680(Vec *dst, Vec *a, Vec *b)
{
    dst->unk_0 = a->unk_0 * b->unk_0;
    dst->unk_4 = a->unk_4 * b->unk_4;
    dst->unk_8 = a->unk_8 * b->unk_8;
    dst->unk_C = a->unk_C * b->unk_C;
}
