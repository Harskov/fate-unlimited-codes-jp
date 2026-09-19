typedef struct Obj {
    int unk_0;
    int unk_4;
} Obj;

extern s16 D_00522E90[];

void func_0019D4E0(Obj *p, int flag)
{
    s16 *e;

    if (p->unk_0 < 2) {
        e = &D_00522E90[p->unk_4 * 0x32];
        if (flag != 0)
            *e = *e & ~8;
        else
            *e = *e | 8;
    }
}
