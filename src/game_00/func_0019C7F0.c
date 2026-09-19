extern int D_00523EB4[];
extern int D_00523EB8[];
extern int D_00523EBC[];
extern int D_00523EC0[];
extern int D_00523EC4[];

extern void func_00211130(int size);

void func_0019C7F0(int a, int b, int c)
{
    D_00523EB4[0] = a;
    D_00523EB8[0] = b;
    D_00523EBC[0] = c;
    D_00523EC0[0] = 0;
    D_00523EC4[0] = 0;
    func_00211130(0x1000);
}
