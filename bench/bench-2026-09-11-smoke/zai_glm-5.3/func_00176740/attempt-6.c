extern s32 D_00528A00[][6];
extern s32 D_00528A08[][6];

s32 func_00176740(s32 arg0, s32 arg1)
{
    s32 *p;
    int i;

    p = &D_00528A00[0][arg1];
    for (i = 0; i < 12; i++) {
        if (p[0] == 1 && p[4] == arg0)
            return D_00528A08[i][arg1];
        p += 6;
    }
    return 0;
}
