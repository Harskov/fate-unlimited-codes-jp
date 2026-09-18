typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;

extern s16 D_00522E90[];

typedef struct Obj {
    int unk_0;
    int unk_4;
} Obj;

void func_0019D4E0(Obj *p, int flag)
{
    s16 *e;
    s16 v;

    if (p->unk_0 < 2) {
        e = &D_00522E90[p->unk_4 * 0x64];
        v = *e;
        if (flag != 0) {
            v &= -9;
        } else {
            v |= 8;
        }
        *e = v;
    }
}
