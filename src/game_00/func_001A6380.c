typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

int func_001A6380(Obj *p)
{
    return p->flags & 1;
}
