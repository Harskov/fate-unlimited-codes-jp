typedef int s32;

extern s32 D_00523918[];
extern s32 D_0052391C[];
extern s32 D_00523920[];
extern s32 D_00523924[];
extern s32 D_00523928[];
extern s32 D_0052392C[];
extern s32 D_00523930[];
extern s32 D_00523934[];
extern s32 D_00523938[];
extern s32 D_0052393C[];

s32 func_001B0550(s32 arg0, s32 arg1)
{
    s32 v = 0;
    s32 i;

    if (arg1 & 0x11000)
        v |= 1;
    if (arg1 & 0x24000)
        v |= 2;
    if (arg1 & 0x48000)
        v |= 4;
    if (arg1 & 0x82000)
        v |= 8;
    i = arg0 * 9;
    if (arg1 & 0x80)
        v |= D_00523918[i];
    if (arg1 & 0x10)
        v |= D_0052391C[i];
    if (arg1 & 0x20)
        v |= D_00523920[i];
    if (arg1 & 0x40)
        v |= D_00523924[i];
    if (arg1 & 4)
        v |= D_00523928[i];
    if (arg1 & 1)
        v |= D_0052392C[i];
    if (arg1 & 0x200)
        v |= D_00523930[i];
    if (arg1 & 8)
        v |= D_00523934[i];
    if (arg1 & 2)
        v |= D_00523938[i];
    if (arg1 & 0x400)
        v |= D_0052393C[i];

    return v;
}
