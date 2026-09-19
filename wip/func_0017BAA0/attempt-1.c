typedef float f32;
typedef int s32;

extern s32 D_00522D98;
void func_0020D0C0();

void func_0017BAA0(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4)
{
    f32 f3, f2, f1, f0;
    f32 f9, f8, f10, f11, f12, f13;
    f32 f19, f7, f4, f6, f5;
    f32 f18, f17, f14, f15, f16;
    s32 v1, a1;
    f32 *p;
    f32 *q;
    f32 *r;
    f32 *s;

    f3 = arg2[0];
    f2 = arg1[0];
    f1 = arg1[1];
    f0 = arg1[2];
    f9 = arg2[1];
    f8 = arg2[2];

    v1 = (s32)(10430.378f * f3 + 2.0f) >> 2;
    a1 = (v1 & 0x3FFF) * 4;
    v1 = (v1 + 0x1000) & 0x3FFF;
    p = (f32 *)(D_00522D98 + a1);
    q = (f32 *)(D_00522D98 + v1 * 4);
    f12 = q[0];
    f13 = p[0];

    v1 = (s32)(10430.378f * f9 + 2.0f) >> 2;
    a1 = (v1 & 0x3FFF) * 4;
    v1 = (v1 + 0x1000) & 0x3FFF;
    r = (f32 *)(D_00522D98 + a1);
    s = (f32 *)(D_00522D98 + v1 * 4);
    f10 = s[0];
    f11 = r[0];

    f19 = f2;
    f7 = f2;
    f4 = f1;
    f6 = f1;
    f3 = f0;
    f5 = f0;

    v1 = (s32)(10430.378f * f8 + 2.0f) >> 2;
    a1 = (v1 & 0x3FFF) * 4;
    v1 = (v1 + 0x1000) & 0x3FFF;
    r = (f32 *)(D_00522D98 + a1);
    s = (f32 *)(D_00522D98 + v1 * 4);
    f9 = r[0];
    f8 = s[0];

    if (arg4 != 0) {
        f18 = arg4[0];
        f17 = arg4[1];
        f14 = arg4[2];
        f5 = 1.0f / f18;
        f15 = 1.0f / f17;
        f16 = 1.0f / f14;
        f6 = f1 * (f17 * f5);
        f5 = f0 * (f14 * f5);
        f19 = f2 * (f18 * f15);
        f15 = f18 * f16;
        f14 = f17 * f16;
        f3 = f0 * (f14 * f15);
        f2 = f2 * f15;
        f1 = f1 * f14;
    }

    f7 = f7 * f10;
    f7 = f8 * f7;
    f1 = f1 * f13;
    f0 = f0 * f12;
    arg0[0] = f7;
    f7 = f19 * f10;
    f7 = f9 * f7;
    f2 = -f2;
    f1 = f10 * f1;
    f0 = f10 * f0;
    f10 = f13 * f11;
    arg0[1] = f7;
    f10 = f8 * f10;
    f10 = f10 - f12 * f9;
    f2 = f2 * f11;
    arg0[2] = f2;
    f6 = f6 * f10;
    arg0[4] = f6;
    f10 = f12 * f8;
    f10 = f10 + f9 * f10;
    f4 = f4 * f10;
    arg0[5] = f4;
    f2 = f12 * f11;
    arg0[6] = f1;
    f10 = f13 * f9;
    f10 = f10 + f8 * f2;
    f2 = f9 * f2;
    f2 = f5 * f10;
    f10 = f10 - f13 * f8;
    f1 = f3 * f10;
    arg0[8] = f2;
    arg0[9] = f1;
    arg0[10] = f0;
    arg0[12] = arg3[0];
    arg0[13] = arg3[1];
    arg0[14] = arg3[2];
    func_0020D0C0();
}
