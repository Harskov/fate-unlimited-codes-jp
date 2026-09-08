typedef int (*Handler)(int, int, unsigned char *);

extern Handler jtbl_003D66B0[];

int func_00176BE0(int a0, int a1, unsigned char *cmd)
{
    return jtbl_003D66B0[*cmd](a0, a1, cmd);
}
