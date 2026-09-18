extern int D_00531B60[];

int func_0019CB40(void)
{
    int i;
    int j;
    int *p;
    int *q;

    for (i = 0; i < 2; i++) {
        p = &D_00531B60[i * 0x1D];
        if (p[0xF] != 0)
            return 1;
        q = p;
        for (j = 0; j < 4; j++) {
            if (q[0x10] != 0)
                return 1;
            q += 1;
        }
    }
    return 0;
}
