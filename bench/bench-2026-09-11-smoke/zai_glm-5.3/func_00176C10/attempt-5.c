typedef signed int s32;

extern s32 func_00176C10(s32 *a0, s32 a1, s32 a2);

s32 func_00176C10(s32 *a0, s32 a1, s32 a2)
{
    s32 *p = &a0[a1];
    *p = a2;
    return *p;
}
