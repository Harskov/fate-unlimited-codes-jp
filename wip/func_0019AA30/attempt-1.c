typedef struct Obj0019AA30 {
    unsigned char unk_0[0x4];
    int unk_4;
    unsigned char unk_8[0xA0];
    float unk_A8;
    float unk_AC;
    float unk_B0;
} Obj0019AA30;

void func_0019AA30(Obj0019AA30 *o)
{
    o->unk_4 |= 4;
    o->unk_4 &= ~8;
    o->unk_A8 = 0.0f;
    o->unk_AC = 0.0f;
    o->unk_B0 = 4.5f;
}
