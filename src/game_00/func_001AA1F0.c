typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA1F0(Obj *p)
{
    p->flags &= ~1;
}
