typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct {
    u32 unk_0;
    u32 unk_4;
    u32 *tbl;
} Pair;

typedef struct {
    u32 pad[4];
    u32 *pair;
} Arg0;

u32 func_001B3B70(char *arg0)
{
    Pair *pair;
    u32 *tbl;
    u32 a, b, c, d;
    u32 r0, r1, r2, r3;
    u32 sum;

    if (arg0 == 0)
        return 0;
    pair = *(Pair **)(arg0 + 0x24);
    if (pair == 0)
        return 0;
    tbl = pair->tbl;

    if (*(u32 *)(arg0 + 0x20) & 2) {
        a = tbl[*(u32 *)(arg0 + 0x10)];
        b = tbl[*(u32 *)(arg0 + 0x14)];
        c = tbl[*(u32 *)(arg0 + 0x18)];
        d = tbl[*(u32 *)(arg0 + 0x1C)];

        r0 = ((a & 0xFF) + (b & 0xFF) + (c & 0xFF) + (d & 0xFF)) >> 2;
        r1 = (((a >> 8) & 0xFF) + ((b >> 8) & 0xFF) + ((c >> 8) & 0xFF) + ((d >> 8) & 0xFF)) >> 2;
        r2 = (((a >> 16) & 0xFF) + ((b >> 16) & 0xFF) + ((c >> 16) & 0xFF) + ((d >> 16) & 0xFF)) >> 2;
        r3 = (((a >> 24) & 0xFF) + ((b >> 24) & 0xFF) + ((c >> 24) & 0xFF) + ((d >> 24) & 0xFF)) >> 2;
    } else {
        a = tbl[*(u32 *)(arg0 + 0x10)];
        b = tbl[*(u32 *)(arg0 + 0x14)];
        c = tbl[*(u32 *)(arg0 + 0x18)];

        sum = (u32)(((u64)0xAAAAAAAB * ((a & 0xFF) + (b & 0xFF) + (c & 0xFF))) >> 32) >> 1;
        r0 = sum;
        sum = (u32)(((u64)0xAAAAAAAB * (((a >> 8) & 0xFF) + ((b >> 8) & 0xFF) + ((c >> 8) & 0xFF))) >> 32) >> 1;
        r1 = sum;
        sum = (u32)(((u64)0xAAAAAAAB * (((a >> 16) & 0xFF) + ((b >> 16) & 0xFF) + ((c >> 16) & 0xFF))) >> 32) >> 1;
        r2 = sum;
        sum = (u32)(((u64)0xAAAAAAAB * (((a >> 24) & 0xFF) + ((b >> 24) & 0xFF) + ((c >> 24) & 0xFF))) >> 32) >> 1;
        r3 = sum;
    }

    return (r0 & 0xFF) | ((r1 & 0xFF) << 8) | ((r2 & 0xFF) << 16) | ((r3 & 0xFF) << 24);
}
