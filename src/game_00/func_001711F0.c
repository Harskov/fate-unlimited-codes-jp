typedef unsigned int u32;

extern u32 D_0051D8A0[];

int func_001711F0(void)
{
    u32 v = D_0051D8A0[0] & 0x20000000;
    return (v != 0) ^ 1;
}
