int func_001B8300(float *a0, float *a1, float *a2, float *a3, float f12)
{
    float f13 = a0[0];
    float f7 = a2[0];
    float f11 = a3[0];
    float f10 = a0[1];
    float f9 = a3[1];
    float f8 = a2[1];
    float f6 = 0.0f;
    float f1;
    float f0;
    float f2;
    float f3;

    f1 = f7 - f13;
    f0 = f9 - f10;
    f2 = f11 - f13;
    f3 = f8 - f10;

    f1 = f1 * f0;
    f1 = f1 - f3 * f2;
    f1 = f1 * f12;
    if (f1 < f6)
        return -1;

    f0 = f9 - f8;
    f1 = a1[0] - f7;
    f0 = f1 * f0;
    f2 = f11 - f7;
    f3 = a1[1] - f8;
    f0 = f0 - f3 * f2;
    f0 = f0 * f12;
    if (f0 < f6)
        return -1;

    f0 = f9 - a1[1];
    f1 = f13 - a1[0];
    f0 = f1 * f0;
    f3 = f10 - a1[1];
    f2 = f11 - a1[0];
    f0 = f0 - f3 * f2;
    f0 = f0 * f12;
    if (f0 < f6)
        return 1;
    return 0;
}
