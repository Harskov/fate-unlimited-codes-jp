typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA210(Obj *p)
{
    unsigned int v = p->flags;
    v &= ~2;
    p->flags = v;
}
