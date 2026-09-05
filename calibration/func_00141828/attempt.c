/* calibration candidate func_00141828: field initialisation with one ternary */
typedef struct Obj {
    unsigned char b0; unsigned char b1; unsigned char b2; unsigned char pad3[0x15];
    int f18; unsigned char pad1C[0xC];
    int f28; int f2C; unsigned char pad30[0x8];
    int f38; unsigned char pad3C[0xF]; unsigned char b4B; unsigned char pad4C[0x4];
    int f50;
} Obj;

void func_00141828(Obj *o)
{
    int v = o->f18;
    o->f38 = 0;
    o->f50 = 0;
    o->b1 = v ? 2 : 3;
    o->b2 = 0;
    o->f28 = 0;
    o->f2C = 0;
    o->b4B = 1;
}
