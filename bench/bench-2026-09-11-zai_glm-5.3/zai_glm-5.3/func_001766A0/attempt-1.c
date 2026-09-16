extern int D_00528A00[12][6];

int func_001766A0(int arg0, int arg1)
{
    int i;

    for (i = 0; i < 12; i++) {
        if (D_00528A00[i][arg1] == 1 && D_00528A00[i][arg1 + 4] == arg0) {
            D_00528A00[i][arg1] = 0;
            D_00528A00[i][arg1 + 4] = 0;
            D_00528A00[i][arg1 + 2] = 0;
            return 1;
        }
    }
    return 0;
}
