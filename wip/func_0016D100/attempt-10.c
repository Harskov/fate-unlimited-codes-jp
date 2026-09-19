typedef unsigned char u8;
typedef signed char s8;
typedef float f32;

typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

void func_0016D100(Vec *dst, u8 *src)
{
    s8 c;
    u8 v;

    c = src[0];
    v = c & 0xFF;
    if (c < 0) {
        dst->unk_0 = 2.0f * (f32)((v >> 1) | (v & 1));
    } else {
        dst->unk_0 = (f32)v;
    }

    c = src[1];
    v = c & 0xFF;
    if (c < 0) {
        dst->unk_4 = 2.0f * (f32)((v >> 1) | (v & 1));
    } else {
        dst->unk_4 = (f32)v;
    }

    c = src[2];
    v = c & 0xFF;
    if (c < 0) {
        dst->unk_8 = 2.0f * (f32)((v >> 1) | (v & 1));
    } else {
        dst->unk_8 = (f32)v;
    }

    c = src[3];
    v = c & 0xFF;
    if (c < 0) {
        dst->unk_C = 2.0f * (f32)((v >> 1) | (v & 1));
    } else {
        dst->unk_C = (f32)v;
    }
}
