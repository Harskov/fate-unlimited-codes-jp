typedef float f32;

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

int func_001B83C0(Vec3 *a0, Vec3 *a1, Vec3 *a2, Vec3 *a3, f32 f12)
{
    f32 f13;
    f32 f7;
    f32 f11;
    f32 f10;
    f32 f9;
    f32 f8;
    f32 f6;
    f32 f1;
    f32 f0;
    f32 f2;
    f32 f3;
    f32 t;
    f32 f4;
    f32 f5;

    f13 = a0->x;
    f7 = a2->x;
    f11 = a3->x;
    f10 = a0->z;
    f9 = a3->z;
    f8 = a2->z;
    f6 = 0.0f;
    f1 = f7 - f13;
    f0 = f9 - f10;
    f2 = f11 - f13;
    f3 = f8 - f10;
    t = (f1 * f0 - f3 * f2) * f12;
    if (t < f6)
        return -1;
    f4 = a1->x;
    f5 = a1->z;
    f0 = f9 - f8;
    f1 = f4 - f7;
    f0 = f1 * f0;
    f2 = f11 - f7;
    f3 = f5 - f8;
    t = (f0 - f3 * f2) * f12;
    if (t < f6)
        return -1;
    f0 = f9 - f5;
    f1 = f13 - f4;
    f0 = f1 * f0;
    f3 = f10 - f5;
    f2 = f11 - f4;
    t = (f0 - f3 * f2) * f12;
    if (t < f6)
        return 1;
    return 0;
}
