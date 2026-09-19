typedef int s32;

void func_001B5800();

void func_001B57E0(s32 *arg0, s32 arg1)
{
    *arg0 += arg1;
    func_001B5800(arg0, arg1);
}
