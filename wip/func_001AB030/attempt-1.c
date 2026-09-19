typedef struct Obj {
    unsigned char pad[0x5C8];
    float unk_5C8;
} Obj;

void func_00175B10();

void func_001AB030(Obj *p)
{
    func_00175B10(p->unk_5C8);
}
