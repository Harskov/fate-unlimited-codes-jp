typedef int s32;

extern s32 D_003D6DA0[];
extern s32 D_00523900[];

void func_001B04D0(s32 arg0, s32 arg1)
{
    s32 *src;
    s32 *dst;
    s32 i;

    dst = D_00523900 + arg0 * 10;
    src = D_003D6DA0 + arg1 * 10;
    i = 0;
    do {
        i += 5;
        dst[6] = src[0];
        dst[7] = src[1];
        dst[8] = src[2];
        dst[9] = src[3];
        dst[10] = src[4];
        src += 5;
        dst += 5;
    } while (i < 10);
}
