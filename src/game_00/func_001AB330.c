typedef struct Obj {
    unsigned char pad[0x3C];
    void *field_3C;
} Obj;

void func_001F27D0();

void func_001AB330(Obj *p)
{
    func_001F27D0(p->field_3C);
}
