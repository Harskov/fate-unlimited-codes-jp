typedef struct Obj {
    unsigned char pad[0x3C];
    void *field_3C;
} Obj;

void func_002032B0(void *);

void func_001AE7D0(Obj *p)
{
    func_002032B0(p->field_3C);
}
