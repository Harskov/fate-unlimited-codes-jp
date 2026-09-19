typedef struct Obj {
    unsigned char pad[0x1E0];
    unsigned int flags;
    unsigned char pad2[8];
    unsigned int flags2;
} Obj;

int func_001A9A00(Obj *p)
{
    unsigned int v = p->flags;
    if (v & 0x20000)
        return 1;
    if (v & ~0x1107)
        return 0;
    return !(p->flags2 & 0x10000100);
}
