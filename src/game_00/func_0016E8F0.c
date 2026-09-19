typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

float func_0016E8F0(Vec *a, Vec *b)
{
    return a->unk_0 * b->unk_0 + a->unk_4 * b->unk_4 + a->unk_8 * b->unk_8;
}
