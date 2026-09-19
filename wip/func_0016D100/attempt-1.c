typedef unsigned char u8;
typedef float f32;

typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

void func_0016D100(Vec *dst, u8 *src)
{
    int i;
    for (i = 0; i < 4; i++) {
        u8 v = src[i];
        if ((v & 0x80) != 0) {
            dst->unk_0 = 2.0f * (f32)((v >> 1) | (v & 1));
        } else {
            dst->unk_0 = (f32)v;
        }
        dst++;
    }
}
