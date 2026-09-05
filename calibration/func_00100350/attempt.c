/* calibration candidate func_00100350: zero-fill loop, counts down */
void func_00100350(unsigned char *p, unsigned int n)
{
    int cnt;
    if (n == 0)
        return;
    cnt = n - 1;
    do {
        *p++ = 0;
    } while (cnt-- != 0);
}
