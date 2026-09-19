int func_001B8300(float *a0, float *a1, float *a2, float *a3, float f12)
{
    float f13 = 0.0f;
    float f7 = a0[0];
    float f8 = 0.0f;
    float f11 = a2[0];
    float f10 = a3[0];
    float f9 = 0.0f;
    float f1 = 0.0f;
    float f2 = 0.0f;
    float f3 = 0.0f;
    float f0 = 0.0f;
    float f4 = 0.0f;
    float f5 = 0.0f;
    float f6 = 0.0f;

    f13 = f7 - f7;
    f1 = a0[1] - f8;
    f8 = a2[1];
    f2 = f8 - f7;
    f11 = a3[1];
    f3 = f11 - f10;
    f0 = f2 * f1;
    f0 = f0 - f3 * f9;
    f0 = f0 * f12;
    if (f0 < f6)
        return -1;

    f4 = a1[0];
    f5 = a1[1];
    f9 = f11 - f8;
    f1 = f4 - f7;
    f0 = f1 * f9;
    f2 = f9 + f7 - f7;
    f3 = f5 - f8;
    f0 = f0 - f3 * f2;
    f0 = f0 * f12;
    if (f0 < f6)
        return -1;

    f0 = f11 - f5;
    f1 = f7 - f4;
    f0 = f1 * f0;
    f3 = f10 - f5;
    f2 = f9 + f7 - f4;
    f0 = f0 - f3 * f2;
    f0 = f0 * f12;
    if (f0 < f6)
        return 1;
    return 0;
}
