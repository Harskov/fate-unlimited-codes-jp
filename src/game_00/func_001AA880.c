typedef struct Obj {
    unsigned char pad[0x1E4];
    unsigned int flags;
} Obj;

void func_001AA880(Obj *p)
{
    p->flags &= ~0x20;
}
