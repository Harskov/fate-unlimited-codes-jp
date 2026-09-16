extern int D_00531C58[];

int func_001A3750(int arg0)
{
    int r;

    r = (D_00531C58[0] * 99 - arg0) * 500;
    if (r < 0)
        r = 0;
    return r;
}
