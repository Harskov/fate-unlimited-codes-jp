typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;

void func_001736B0(s32 *arg0)
{
    s32 v = *arg0;
    if ((v & 3) != 0) {
        *(long long *)1 = 0;
        *(long long *)8 = 0;
    }
    v = (v + 3) & ~3;
    return (void *)((char *)arg0 + v);
}
