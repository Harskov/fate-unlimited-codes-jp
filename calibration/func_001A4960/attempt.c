/* calibration candidate func_001A4960: indexed element of a 28-byte array in an embedded
   sub-structure at 0x220, with a count check. Second form; the first (a->base + i*28 with the
   fields inline in the outer struct) compiled to the same size with the sub-struct pointer
   materialised differently. */
typedef struct Sub { int f0; unsigned char *base; short count; } Sub;
typedef struct Arr { unsigned char pad[0x220]; Sub sub; } Arr;

unsigned char *func_001A4960(Arr *a, int i)
{
    Sub *s = &a->sub;
    if (i >= s->count)
        return 0;
    return s->base + i * 28;
}
