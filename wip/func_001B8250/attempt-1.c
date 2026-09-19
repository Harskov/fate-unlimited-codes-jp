typedef float f32;

int func_001B8250(f32 *a0, f32 *a1, f32 *a2, f32 *a3)
{
    f32 x0 = a0[0];
    f32 x2 = a0[2];
    f32 y0 = a2[0];
    f32 y2 = a2[2];
    f32 z0 = a3[0];
    f32 z2 = a3[2];
    f32 zero = 0.0f;
    f32 d1 = y0 - x0;
    f32 d0 = z2 - x2;
    f32 d2 = z0 - x0;
    f32 d3 = y2 - x2;
    f32 c0 = d1 * d0 - d3 * d2;

    if (c0 < zero)
        return -1;

    f32 w0 = a1[0];
    f32 w2 = a1[2];
    f32 e0 = z2 - y2;
    f32 e1 = w0 - y0;
    f32 c1 = e1 * e0 - (w2 - y2) * (z0 - y0);

    if (c1 < zero)
        return -1;

    f32 f0 = z2 - w2;
    f32 f1 = x0 - w0;
    f32 c2 = f1 * f0 - (x2 - w2) * (z0 - w0);

    if (c2 < zero)
        return 1;

    return 0;
}
