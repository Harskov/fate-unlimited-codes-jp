typedef struct Ent {
    unsigned char pad[0x13C];
    int f13C;
    unsigned char pad2[0x28];
    int f168;
} Ent;

void func_00199CF0(Ent *e)
{
    e->f168 = 0;
    e->f13C = 0;
}
