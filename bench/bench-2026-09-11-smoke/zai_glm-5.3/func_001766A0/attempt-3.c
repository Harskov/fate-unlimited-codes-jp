extern s32 D_00528A00[];

int func_001766A0(int arg0, int arg1)
{
    s32 *row;
    int i;

    row = &D_00528A00[arg1];
    i = 0;
    do {
        if (row[0] == 1 && row[4] == arg0) {
            row[0] = 0;
            row[4] = 0;
            row[2] = 0;
            return 1;
        }
        i++;
        row += 6;
    } while (i < 12);
    return 0;
}
