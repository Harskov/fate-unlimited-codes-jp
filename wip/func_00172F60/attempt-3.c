typedef float f32;
typedef int s32;

extern f32 D_00522D98[];

void func_00172F60(f32 *out, s32 a1, s32 a2)
{
    s32 i;
    s32 j;
    f32 v0;
    f32 v1;
    f32 v2;
    f32 v3;

    i = (a1 + 2) >> 2;
    j = (a2 + 2) >> 2;
    v0 = D_00522D98[i & 0x3FFF];
    v1 = D_00522D98[(i + 0x1000) & 0x3FFF];
    v2 = D_00522D98[j & 0x3FFF];
    v3 = D_00522D98[(j + 0x1000) & 0x3FFF];
    out[0] = v1;
    out[1] = v0 * v2;
    out[2] = -v0 * v3;
}
