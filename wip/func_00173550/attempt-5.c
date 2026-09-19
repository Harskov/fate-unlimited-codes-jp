typedef struct Vec {
    float x;
    float y;
    float z;
    float w;
} Vec;

void func_00173550(Vec *out, Vec *in)
{
    float len2;
    float inv;

    len2 = in->x * in->x + in->y * in->y + in->z * in->z;
    if (len2 == 0.0f)
        return;
    inv = 1.0f / len2;
    out->x = in->x * inv;
    out->y = in->y * inv;
    out->z = in->z * inv;
    out->w = 0.0f;
}
