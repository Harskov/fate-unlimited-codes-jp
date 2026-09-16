extern int D_00528A00[12][6];

int func_001766A0(int arg0, int arg1)
{
    int r = 0;
    int i;
    int *p = &D_00528A00[0][arg1];

    for (i = 0; i < 12; i++) {
        if (p[0] == 1 && p[4] == arg0) {
            r = 1;
            D_00528A00[i][arg1] = 0;
            D_00528A00[i][arg1 + 4] = 0;
            D_00528A00[i][arg1 + 2] = 0;
            break;
        }
        p += 6;
    }
    return r;
}
