extern s32 D_00528A00[];
extern s32 D_00528A08[];

s32 func_00176740(s32 arg0, s32 arg1)
{
    s32 *p;
    int i;

    p = (s32 *)((char *)D_00528A00 + arg1 * 4);
    i = 0;
    do {
        if (p[0] == 1 && p[4] == arg0)
            return *(s32 *)((char *)D_00528A08 + i * 24 + arg1 * 4);
        i++;
        p = (s32 *)((char *)p + 0x18);
    } while (i < 12);
    return 0;
}
