typedef int s32;

extern s32 D_003D6DA0[];
extern s32 D_00523900[];

void func_001B04D0(s32 arg0, s32 arg1)
{
    s32 *src;
    s32 *dst;
    s32 i;

    i = 0;
    src = D_003D6DA0 + arg1 * 10;
    dst = D_00523900 + arg0 * 10;
    do {
        dst[0] = src[6];
        dst[1] = src[7];
        dst[2] = src[8];
        dst[3] = src[9];
        dst[4] = src[10];
        dst += 5;
        src += 5;
        i += 5;
    } while (i < 10);
}
