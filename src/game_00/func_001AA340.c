typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA340(Obj *p)
{
    if (p->flags & 1) {
        p->flags &= ~2;
    }
}
