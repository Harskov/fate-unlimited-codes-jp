typedef int s32;

extern s32 D_0051D754;
extern s32 D_0051D758;
extern s32 D_0051D75C;
extern s32 D_0051D760;
extern s32 D_0051D764;
extern s32 D_0051D768;
extern s32 D_0051D77C[];

void func_001B7560(s32 arg0)
{
    s32 *p;
    s32 i;

    if (arg0 < 0)
        return;
    if (arg0 >= 4)
        return;
    D_0051D758 = 0;
    D_0051D75C = 0;
    D_0051D764 = 0;
    D_0051D760 = -1;
    D_0051D768 = 0x47C34F80;
    p = &D_0051D77C[arg0];
    i = 0;
    if (D_0051D754 > 0) {
        do {
            *p = 0;
            i += 1;
            p += 0x30;
        } while (D_0051D754 > i);
    }
}
