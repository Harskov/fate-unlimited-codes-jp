extern s32 D_00528A00[];
extern s32 D_00528A08[];

s32 func_00176740(s32 arg0, s32 arg1)
{
    s32 *e = &D_00528A00[arg1];
    int i;

    for (i = 0; i < 12; i++) {
        if (e[0] == 1 && e[4] == arg0)
            return *(s32 *)((char *)&D_00528A08[i * 6] + arg1 * 4);
        e += 6;
    }
    return 0;
}
