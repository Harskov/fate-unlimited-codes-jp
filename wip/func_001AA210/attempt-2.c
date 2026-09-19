typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA210(Obj *p)
{
    p->flags &= ~2;
}
