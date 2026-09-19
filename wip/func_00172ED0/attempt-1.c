typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef float f32;

extern f32 *D_00522D98;

typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
} Vec;

void func_00172ED0(Vec *out, s32 arg1, s32 arg2)
{
    s32 a;
    s32 b;
    f32 t0;
    f32 t1;

    a = (arg1 + 2) >> 2;
    b = (arg2 + 2) >> 2;
    t0 = D_00522D98[(a & 0x3FFF)];
    t1 = D_00522D98[(b & 0x3FFF)];
    out->unk_0 = t0 * t1;
    out->unk_4 = -t0 * D_00522D98[((b + 0x1000) & 0x3FFF)];
    out->unk_8 = D_00522D98[((a + 0x1000) & 0x3FFF)];
}
