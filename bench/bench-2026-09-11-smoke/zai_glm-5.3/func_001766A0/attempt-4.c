extern s32 D_00528A00[];
extern s32 D_00528A08[];
extern s32 D_00528A10[];

int func_001766A0(int arg0, int arg1)
{
    int i;

    i = 0;
    do {
        if (D_00528A00[arg1 + i * 6] == 1 && D_00528A00[arg1 + i * 6 + 4] == arg0) {
            D_00528A00[arg1 + i * 6] = 0;
            D_00528A10[arg1 + i * 6] = 0;
            D_00528A08[arg1 + i * 6] = 0;
            return 1;
        }
        i++;
    } while (i < 12);
    return 0;
}
