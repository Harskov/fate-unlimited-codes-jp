extern int D_0051C874[];

int func_0019D0B0(int i)
{
    if (i < 0)
        goto fail;
    if (i >= 10)
        goto fail;
    return D_0051C874[i * 2];
fail:
    return 0;
}
