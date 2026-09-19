typedef int s32;
typedef short s16;

extern s32 D_0051D7A8[];
extern s16 D_0051D750[];
extern s32 D_0051D754;

void func_001B74E0(s32 arg0)
{
    s32 *p;
    s16 *q;
    s32 i;

    if (arg0 >= 0 && arg0 < 4) {
        p = (s32 *)D_0051D7A8[arg0];
        q = D_0051D750 + arg0 + 0x28;
        *q = 0;
        i = 0;
        if (D_0051D754 > 0) {
            do {
                *p = 0;
                i += 1;
                p += 5;
            } while (i < D_0051D754);
        }
    }
}
