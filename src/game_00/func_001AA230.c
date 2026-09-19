typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA230(Obj *p)
{
    p->flags = p->flags & 0xFFFFFFFE;
}
