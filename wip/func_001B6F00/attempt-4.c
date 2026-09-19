typedef float f32;

void func_001B6F00(f32 *out, f32 *a, f32 *b, f32 *c)
{
    f32 a0, a1, a2;
    f32 b0, b1, b2;
    f32 c0, c1, c2;

    if (out == 0)
        return;
    if (a == 0)
        return;
    if (b == 0)
        return;
    if (c == 0)
        return;

    a0 = a[0]; a1 = a[1]; a2 = a[2];
    b0 = b[0]; b1 = b[1]; b2 = b[2];
    c0 = c[0]; c1 = c[1]; c2 = c[2];

    out[0] = (b1 - a1) * (c2 - a2) - (b2 - a2) * (c1 - a1);
    out[1] = (b2 - a2) * (c0 - a0) - (b0 - a0) * (c2 - a2);
    out[2] = (b0 - a0) * (c1 - a1) - (b1 - a1) * (c0 - a0);
}
