typedef int s32;

extern s32 D_0051D760[];

s32 func_001B7230(s32 *arg0)
{
    if (arg0 != 0) {
        D_0051D760[0] += 1;
        *arg0 |= 0x100;
    }
    return D_0051D760[0];
}
