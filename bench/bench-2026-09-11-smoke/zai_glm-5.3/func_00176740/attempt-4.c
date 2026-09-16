extern s32 D_00528A00[];
extern s32 D_00528A08[];

s32 func_00176740(s32 arg0, s32 arg1)
{
    s32 *p;
    s32 i;

    p = &D_00528A00[arg1];
    i = 0;
    do {
        if (p[0] == 1 && p[4] == arg0)
            return D_00528A08[6 * i + arg1];
        i++;
        p += 6;
    } while (i < 12);
    return 0;
}
