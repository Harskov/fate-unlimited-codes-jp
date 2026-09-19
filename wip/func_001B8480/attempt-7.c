typedef float f32;

typedef struct Vec {
    f32 x;
    f32 y;
    f32 z;
} Vec;

int func_001B8480(Vec *a0, Vec *a1, Vec *a2, Vec *a3, f32 f12)
{
    f32 g13;
    f32 g7;
    f32 g11;
    f32 g10;
    f32 g9;
    f32 g8;
    f32 g6;
    f32 g1;
    f32 g0;
    f32 g2;
    f32 g3;

    g13 = a0->z;
    g7 = a2->z;
    g11 = a3->z;
    g10 = a0->y;
    g9 = a3->y;
    g8 = a2->y;
    g6 = 0.0f;
    g1 = g7 - g13;
    g0 = g9 - g10;
    g2 = g11 - g13;
    g3 = g8 - g10;
    if ((g1 * g0 - g3 * g2) * f12 < g6)
        return -1;

    g0 = g9 - g8;
    g1 = a1->z - g7;
    g0 = g1 * g0;
    g2 = g11 - g7;
    g3 = a1->y - g8;
    if ((g0 - g3 * g2) * f12 < g6)
        return -1;

    g0 = g9 - a1->y;
    g1 = g13 - a1->z;
    g0 = g1 * g0;
    g3 = g10 - a1->y;
    g2 = g11 - a1->z;
    if ((g0 - g3 * g2) * f12 < g6)
        return 1;

    return 0;
}
