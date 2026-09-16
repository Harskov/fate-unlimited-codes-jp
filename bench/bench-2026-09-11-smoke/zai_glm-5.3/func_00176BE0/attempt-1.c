typedef int (*Handler)(int, int, void *);

extern Handler jtbl_003D66B0[];

int func_00176BE0(int arg0, int arg1, unsigned char *arg2)
{
    return jtbl_003D66B0[*arg2](arg0, arg1, arg2);
}
