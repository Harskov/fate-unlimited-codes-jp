/* calibration candidate func_00121558: three-way early return, conditional-move destination */
int func_00121558(int unused, int *out, unsigned char *s, int flag)
{
    int tmp;
    int *p = out ? out : &tmp;
    if (s == 0)
        return 0;
    if (flag == 0)
        return -1;
    *p = *s;
    return *s != 0;
}
