extern s32 D_00528A00[];
extern s32 D_00528A08[];
extern s32 D_00528A10[];

int func_001766A0(int arg0, int arg1)
{
    int i;

    for (i = 0; i < 12; i++) {
        if (D_00528A00[i * 6 + arg1] == 1 && D_00528A10[i * 6 + arg1] == arg0) {
            D_00528A00[i * 6 + arg1] = 0;
            D_00528A10[i * 6 + arg1] = 0;
            D_00528A08[i * 6 + arg1] = 0;
            return 1;
        }
    }
    return 0;
}
