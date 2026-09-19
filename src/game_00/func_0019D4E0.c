typedef struct Rec00522E90 {
    short flags;
    unsigned char unk_2[0x62];
} Rec00522E90;

typedef struct Ctx {
    int unk_0;
    int index;
} Ctx;

extern Rec00522E90 D_00522E90[];

void func_0019D4E0(Ctx *c, int clear)
{
    Rec00522E90 *r;

    if (c->unk_0 < 2) {
        r = &D_00522E90[c->index];
        if (clear != 0) {
            r->flags = r->flags & ~8;
        } else {
            r->flags = r->flags | 8;
        }
    }
}
