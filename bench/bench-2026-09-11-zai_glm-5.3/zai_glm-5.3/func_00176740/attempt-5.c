extern unsigned char D_00528A00[];
extern unsigned char D_00528A08[];

int func_00176740(int a0, int a1)
{
    int i = 0;
    unsigned char *p = D_00528A00 + a1 * 4;

    do {
        if (*(int *)p == 1 && a0 == *(int *)(p + 0x10))
            return *(int *)(D_00528A08 + i * 24 + a1 * 4);
        i++;
        p += 0x18;
    } while (i < 12);
    return 0;
}
