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
    s32 base = arg0 * 36;

    if (arg1 & 0x11000)
        v |= 1;
    if (arg1 & 0x24000)
        v |= 2;
    if (arg1 & 0x48000)
        v |= 4;
    if (arg1 & 0x82000)
        v |= 8;
    if (arg1 & 0x80)
        v |= *(s32 *)((char *)D_00523918 + base);
    if (arg1 & 0x10)
        v |= *(s32 *)((char *)D_0052391C + base);
    if (arg1 & 0x20)
        v |= *(s32 *)((char *)D_00523920 + base);
    if (arg1 & 0x40)
        v |= *(s32 *)((char *)D_00523924 + base);
    if (arg1 & 4)
        v |= *(s32 *)((char *)D_00523928 + base);
    if (arg1 & 1)
        v |= *(s32 *)((char *)D_0052392C + base);
    if (arg1 & 0x200)
        v |= *(s32 *)((char *)D_00523930 + base);
    if (arg1 & 8)
        v |= *(s32 *)((char *)D_00523934 + base);
    if (arg1 & 2)
        v |= *(s32 *)((char *)D_00523938 + base);
    if (arg1 & 0x400)
        v |= *(s32 *)((char *)D_0052393C + base);

    return v;
}
