typedef struct Obj {
    unsigned char pad[0x5C8];
    f32 unk_5C8;
} Obj;

void func_00175B10();

void func_001AB030(Obj *p)
{
    f32 v;
    v = p->unk_5C8;
    func_00175B10(v);
}
