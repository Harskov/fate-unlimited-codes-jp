extern int D_0051C870[];
extern int D_0051C874[];

void func_0019D6E0(int *p)
{
    int i;

    for (i = 0; i < 10; i++) {
        if (D_0051C870[i * 2] == 0) {
            D_0051C870[i * 2] = 1;
            D_0051C874[i * 2] = (int)p;
            *p = i;
            goto done;
        }
    }
done:
    return;
}
