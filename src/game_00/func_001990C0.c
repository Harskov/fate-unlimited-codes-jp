/* calibration candidate func_001990C0: flag bits */
typedef struct Flags { int f0; unsigned char pad[0xC]; int f10; } Flags;

void func_001990C0(Flags *f)
{
    f->f10 |= 4;
    if (f->f0 & 0x20)
        f->f10 |= 0x80;
}
