typedef float f32;
typedef int s32;

extern f32 D_00522D98[];

typedef struct Vec {
    f32 x;
    f32 y;
    f32 z;
} Vec;

void func_00172F60(Vec *out, s32 a, s32 b)
{
    s32 i = (a + 2) >> 2;
    s32 j = (b + 2) >> 2;
    f32 c = D_00522D98[i & 0x3FFF];
    f32 s = D_00522D98[(i + 0x1000) & 0x3FFF];
    out->x = s;
    out->y = c * D_00522D98[j & 0x3FFF];
    out->z = -c * D_00522D98[(j + 0x1000) & 0x3FFF];
}
