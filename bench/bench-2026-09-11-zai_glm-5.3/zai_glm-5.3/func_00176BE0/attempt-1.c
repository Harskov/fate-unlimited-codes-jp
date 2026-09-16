typedef int (*Handler)(void *, void *, void *);

extern Handler jtbl_003D66B0[];

int func_00176BE0(void *a0, void *a1, unsigned char *cmd)
{
    return jtbl_003D66B0[*cmd](a0, a1, cmd);
}
