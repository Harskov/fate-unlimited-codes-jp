typedef unsigned char u8;
typedef signed char s8;
typedef float f32;

typedef struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

void func_0017A290(u8 *arg0, Vec4 *arg1)
{
    f32 v;
    s32 r;

    v = arg1->x;
    if (v >= 2147483648.0f) {
        r = (s32)(v - 2147483648.0f) | 0x80000000;
    } else {
        r = (s32)v;
    }
    arg0[0] = (u8)(r & 0xFF);

    v = arg1->y;
    if (v >= 2147483648.0f) {
        r = (s32)(v - 2147483648.0f) | 0x80000000;
    } else {
        r = (s32)v;
    }
    arg0[1] = (u8)(r & 0xFF);

    v = arg1->z;
    if (v >= 2147483648.0f) {
        r = (s32)(v - 2147483648.0f) | 0x80000000;
    } else {
        r = (s32)v;
    }
    arg0[2] = (u8)(r & 0xFF);

    v = arg1->w;
    if (v >= 2147483648.0f) {
        r = (s32)(v - 2147483648.0f) | 0x80000000;
    } else {
        r = (s32)v;
    }
    arg0[3] = (u8)(r & 0xFF);
}
