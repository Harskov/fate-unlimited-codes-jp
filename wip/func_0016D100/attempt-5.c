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
    u8 v;

    v = src[0];
    if (v & 0x80) {
        dst->unk_0 = 2.0f * (f32)((v >> 1) | (v & 1));
    } else {
        dst->unk_0 = (f32)v;
    }

    v = src[1];
    if (v & 0x80) {
        dst->unk_4 = 2.0f * (f32)((v >> 1) | (v & 1));
    } else {
        dst->unk_4 = (f32)v;
    }

    v = src[2];
    if (v & 0x80) {
        dst->unk_8 = 2.0f * (f32)((v >> 1) | (v & 1));
    } else {
        dst->unk_8 = (f32)v;
    }

    v = src[3];
    if (v & 0x80) {
        dst->unk_C = 2.0f * (f32)((v >> 1) | (v & 1));
    } else {
        dst->unk_C = (f32)v;
    }
}
