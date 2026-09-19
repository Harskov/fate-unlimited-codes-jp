typedef unsigned char u8;
typedef float f32;
typedef signed char s8;

typedef struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

void func_0017A290(u8 *dst, Vec4 *src)
{
    f32 v;
    s32 i;

    v = src->x;
    if (v >= 2147483648.0f) {
        i = (s32)(v - 2147483648.0f) | 0x80000000;
    } else {
        i = (s32)v;
    }
    dst[0] = (u8)i;

    v = src->y;
    if (v >= 2147483648.0f) {
        i = (s32)(v - 2147483648.0f) | 0x80000000;
    } else {
        i = (s32)v;
    }
    dst[1] = (u8)i;

    v = src->z;
    if (v >= 2147483648.0f) {
        i = (s32)(v - 2147483648.0f) | 0x80000000;
    } else {
        i = (s32)v;
    }
    dst[2] = (u8)i;

    v = src->w;
    if (v >= 2147483648.0f) {
        i = (s32)(v - 2147483648.0f) | 0x80000000;
    } else {
        i = (s32)v;
    }
    dst[3] = (u8)i;
}
