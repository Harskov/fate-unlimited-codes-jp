void func_001B7E70();

void func_001B7E60(void)
{
    register int a4;
    register int a5;
    register int a6;
    register int t0;
    register int t1;
    register int t2;

    t1 = t0;
    t2 = 1;
    t0 = 9;
    asm {
        j func_001B7E70
        addiu a4, zero, 9
    }
}
