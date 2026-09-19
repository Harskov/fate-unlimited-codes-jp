typedef float f32;

typedef struct Vec {
    f32 x;
    f32 y;
    f32 z;
} Vec;

int func_001B8480(Vec *a0, Vec *a1, Vec *a2, Vec *a3, f32 f12)
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

    f13 = a0->z;
    f7 = a2->z;
    f11 = a3->z;
    f10 = a0->y;
    f9 = a3->y;
    f8 = a2->y;
    f6 = 0.0f;
    f1 = f7 - f13;
    f0 = f9 - f10;
    f2 = f11 - f13;
    f3 = f8 - f10;
    f0 = (f1 * f0 - f3 * f2) * f12;
    if (f0 < f6)
        return -1;

    {
        f32 f4 = a1->z;
        f32 f5 = a1->y;
        f32 g0 = f9 - f8;
        f32 g1 = f4 - f7;
        f32 g2 = f11 - f7;
        f32 g3 = f5 - f8;
        f32 r = (g1 * g0 - g3 * g2) * f12;
        if (r < f6)
            return -1;
        {
            f32 h0 = f9 - f5;
            f32 h1 = f13 - f4;
            f32 h3 = f10 - f5;
            f32 h2 = f11 - f4;
            f32 s = (h1 * h0 - h3 * h2) * f12;
            if (s < f6)
                return 1;
        }
    }

    return 0;
}
