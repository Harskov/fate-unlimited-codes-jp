typedef int s32;

void func_001795F0();

void func_001B5DC0(s32 arg0, s32 arg1)
{
    register s32 a0 asm("a0") = arg0;
    register s32 a1 asm("a1") = arg1;
    register s32 a2 asm("a2") = arg1;
    a1 = a0 + 4;
    ((void (*)(s32, s32, s32))func_001795F0)(a0, a1, a2);
}
