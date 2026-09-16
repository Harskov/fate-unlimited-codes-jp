typedef unsigned int u32;
typedef float f32;

typedef struct Inner {
    unsigned char pad[0xC];
    f32 unk_C;
} Inner;

typedef struct Outer {
    unsigned char pad[0x40];
    Inner *inner;
} Outer;

f32 func_001A47A0(Outer *a)
{
    return a->inner->unk_C / 0.016666667f;
}
