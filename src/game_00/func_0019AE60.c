typedef struct Obj {
    unsigned char unk_0[0x334];
    int unk_334;
} Obj;

extern Obj *D_0051E444[];
extern int D_00524798[];

int func_0019AE60(void)
{
    Obj *p = D_0051E444[0];
    if (p != 0)
        return p->unk_334;
    return D_00524798[0];
}
