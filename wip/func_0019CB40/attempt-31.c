extern int D_00531B60[];

int func_0019CB40(void)
{
    int i;
    int j;
    int *p;
    int *q;

    for (i = 0; i < 2; i++) {
        p = D_00531B60 + i * 29;
        if (p[15] != 0)
            return 1;
        q = p;
        for (j = 0; j < 4; j++) {
            if (q[16] != 0)
                return 1;
            q += 1;
        }
    }
    return 0;
}
