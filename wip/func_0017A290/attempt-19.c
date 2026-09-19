typedef unsigned char u8;
typedef float f32;

typedef struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

typedef struct Bytes4 {
    u8 b0;
    u8 b1;
    u8 b2;
    u8 b3;
} Bytes4;

void func_0017A290(Bytes4 *out, Vec4 *in)
{
    f32 v;
    f32 c;
    int i;

    c = 2147483648.0f;
    v = in->x;
    if (v >= c) {
        out->b0 = (u8)((int)(v - c) | 0x80000000);
    } else {
        out->b0 = (u8)(int)v;
    }
    v = in->y;
    if (v >= c) {
        out->b1 = (u8)((int)(v - c) | 0x80000000);
    } else {
        out->b1 = (u8)(int)v;
    }
    v = in->z;
    if (v >= c) {
        out->b2 = (u8)((int)(v - c) | 0x80000000);
    } else {
        out->b2 = (u8)(int)v;
    }
    v = in->w;
    if (v >= c) {
        out->b3 = (u8)((int)(v - c) | 0x80000000);
    } else {
        out->b3 = (u8)(int)v;
    }
}
