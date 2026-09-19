typedef int s32;
typedef short s16;

extern s16 D_0051D750[];

s16 *func_001B7460(s32 arg0)
{
    if (arg0 < 0)
        return 0;
    if (arg0 >= 4)
        return 0;
    return D_0051D750 + arg0 + 0x28;
}
