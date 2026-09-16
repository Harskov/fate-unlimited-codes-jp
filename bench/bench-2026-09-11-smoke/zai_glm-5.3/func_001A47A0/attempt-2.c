typedef float f32;

typedef struct Inner {
    unsigned char unk_0[0xC];
    f32 unk_C;
} Inner;

typedef struct Outer {
    unsigned char unk_0[0x40];
    Inner *unk_40;
} Outer;

f32 func_001A47A0(Outer *a)
{
    return a->unk_40->unk_C / 0.016666667f;
}
