extern s32 D_00523EB4;
extern s32 D_00523EB8;
extern s32 D_00523EBC;
extern s32 D_00523EC0;
extern s32 D_00523EC4;
void func_00211130();

void func_0019C7F0(s32 arg0, s32 arg1, s32 arg2)
{
    D_00523EB4 = arg0;
    D_00523EB8 = arg1;
    D_00523EBC = arg2;
    D_00523EC0 = 0;
    D_00523EC4 = 0;
    func_00211130(4096);
}
