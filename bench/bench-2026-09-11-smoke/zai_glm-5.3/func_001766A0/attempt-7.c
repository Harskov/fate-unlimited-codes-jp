extern int D_00528A00[][6];
extern int D_00528A08[][6];
extern int D_00528A10[][6];

int func_001766A0(int arg0, int arg1)
{
    int r;
    int i;
    int *p;

    r = 0;
    i = 0;
    p = &D_00528A00[0][arg1];
    do {
        if (p[0] == 1 && arg0 == p[4]) {
            D_00528A00[i][arg1] = 0;
            D_00528A10[i][arg1] = 0;
            D_00528A08[i][arg1] = 0;
            r = 1;
            break;
        }
        i = i + 1;
        p = p + 6;
    } while (i < 12);
    return r;
}
