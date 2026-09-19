typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

void func_0016D070(Vec *dst, Vec *src, float s)
{
    dst->unk_0 = src->unk_0 * s;
    dst->unk_4 = src->unk_4 * s;
    dst->unk_8 = src->unk_8 * s;
    dst->unk_C = src->unk_C * s;
}
