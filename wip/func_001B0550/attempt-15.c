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
    s32 i = arg0;
    s32 *p;

    if (arg1 & 0x11000)
        v |= 1;
    if (arg1 & 0x24000)
        v |= 2;
    if (arg1 & 0x48000)
        v |= 4;
    if (arg1 & 0x82000)
        v |= 8;
    p = D_00523918;
    if (arg1 & 0x80)
        v |= p[i * 9];
    p = D_0052391C;
    if (arg1 & 0x10)
        v |= p[i * 9];
    p = D_00523920;
    if (arg1 & 0x20)
        v |= p[i * 9];
    p = D_00523924;
    if (arg1 & 0x40)
        v |= p[i * 9];
    p = D_00523928;
    if (arg1 & 4)
        v |= p[i * 9];
    p = D_0052392C;
    if (arg1 & 1)
        v |= p[i * 9];
    p = D_00523930;
    if (arg1 & 0x200)
        v |= p[i * 9];
    p = D_00523934;
    if (arg1 & 8)
        v |= p[i * 9];
    p = D_00523938;
    if (arg1 & 2)
        v |= p[i * 9];
    p = D_0052393C;
    if (arg1 & 0x400)
        v |= p[i * 9];

    return v;
}
