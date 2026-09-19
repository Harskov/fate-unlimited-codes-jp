typedef float f32;

void func_001B6F00(f32 *out, f32 *a, f32 *b, f32 *c)
{
    f32 ax, ay, az;
    f32 bx, by, bz;
    f32 cx, cy, cz;

    if (out == 0)
        return;
    if (a == 0)
        return;
    if (b == 0)
        return;
    if (c == 0)
        return;

    ax = a[0]; ay = a[1]; az = a[2];
    bx = b[0]; by = b[1]; bz = b[2];
    cx = c[0]; cy = c[1]; cz = c[2];

    out[0] = (by - ay) * (cz - az) - (bz - az) * (cy - ay);
    out[1] = (bz - az) * (cx - ax) - (bx - ax) * (cz - az);
    out[2] = (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);
}
