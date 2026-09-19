typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA4C0(Obj *p)
{
    if (p->flags & 1) {
        p->flags |= 2;
    }
}
