typedef struct Vec {
    float x;
    float y;
    float z;
    float w;
} Vec;

void func_00173550(Vec *out, Vec *in)
{
    float y;
    float x;
    float z;
    float len2;
    float inv;

    y = in->y;
    x = in->x;
    z = in->z;
    len2 = y * y + x * x + z * z;
    if (len2 == 0.0f)
        return;
    inv = 1.0f / len2;
    out->x = x * inv;
    out->y = y * inv;
    out->z = z * inv;
    out->w = 0.0f;
}
