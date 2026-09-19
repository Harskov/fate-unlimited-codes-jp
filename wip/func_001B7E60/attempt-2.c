void func_001B7E70();

void func_001B7E60(void)
{
    register int a4 asm("a4");
    register int a5 asm("a5");
    register int a6 asm("a6");

    a5 = a4;
    a6 = 1;
    a4 = 9;
    func_001B7E70();
}
