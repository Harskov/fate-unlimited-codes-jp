typedef struct Ent {
    int unk_0;
    int unk_4;
    int unk_8;
    int unk_C;
    int unk_10;
} Ent;

void func_001990C0(Ent *e)
{
    e->unk_10 |= 4;
    if (e->unk_0 & 0x20) {
        e->unk_10 |= 0x80;
    }
}
