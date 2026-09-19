extern s16 D_00522E90[];

typedef struct Obj {
    int unk_0;
    int unk_4;
} Obj;

void func_0019D4E0(Obj *p, int flag)
{
    s16 *e;
    s16 v;

    if (p->unk_0 >= 2)
        return;
    e = &D_00522E90[p->unk_4 * 0x32];
    if (flag != 0) {
        v = *e;
        v &= ~8;
    } else {
        v = *e;
        v |= 8;
    }
    *e = v;
}
