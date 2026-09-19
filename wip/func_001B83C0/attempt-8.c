typedef float f32;

typedef struct {
    f32 x, y, z;
} Vec3;

int func_001B83C0(Vec3 *a0, Vec3 *a1, Vec3 *a2, Vec3 *a3, f32 f12)
{
    Vec3 p;
    Vec3 q;
    Vec3 r;
    f32 t;
    f32 s;

    p = *a0;
    q = *a1;
    r = *a2;
    s = 0.0f;

    t = ((r.x - p.x) * (a3->z - p.z) - (r.z - p.z) * (a3->x - p.x)) * f12;
    if (t < s)
        return -1;
    t = ((q.x - r.x) * (a3->z - r.z) - (q.z - r.z) * (a3->x - r.x)) * f12;
    if (t < s)
        return -1;
    t = ((p.x - q.x) * (a3->z - q.z) - (p.z - q.z) * (a3->x - q.x)) * f12;
    if (t < s)
        return 1;
    return 0;
}
