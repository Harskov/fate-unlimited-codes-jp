typedef int s32;

void func_001B5800(s32 *p, s32 v);

void func_001B57E0(s32 *arg1, s32 arg2)
{
    *arg1 += arg2;
    func_001B5800(arg1, arg2);
}
