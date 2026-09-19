typedef struct Obj {
    int unk_0;
    int unk_4;
} Obj;

extern s16 D_00522E90[];

void func_0019D4E0(Obj *p, int flag)
{
    s16 *e;
    s16 v;

    if (p->unk_0 < 2) {
        e = &D_00522E90[p->unk_4 * 0x32];
        v = *e;
        if (flag != 0)
            v = v & ~8;
        else
            v = v | 8;
        *e = v;
    }
}
