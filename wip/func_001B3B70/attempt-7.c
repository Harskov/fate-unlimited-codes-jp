typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;

void func_001B3B70(char *arg0)
{
    char *o24;
    u32 *tbl;
    u32 a, b, c, d;
    u32 r0, r1, r2, r3;
    u32 m;
    u32 sum;

    if (arg0 == 0)
        return;
    o24 = *(char **)(arg0 + 0x24);
    if (o24 == 0)
        return;
    tbl = *(u32 **)(o24 + 0x8);

    if (*(u32 *)(arg0 + 0x20) & 2) {
        a = tbl[*(u32 *)(arg0 + 0x1C)];
        b = tbl[*(u32 *)(arg0 + 0x10)];
        c = tbl[*(u32 *)(arg0 + 0x14)];
        d = tbl[*(u32 *)(arg0 + 0x18)];

        r0 = ((b & 0xFF) + (c & 0xFF) + (d & 0xFF) + (a & 0xFF)) >> 2;
        r1 = (((b >> 8) & 0xFF) + ((c >> 8) & 0xFF) + ((d >> 8) & 0xFF) + ((a >> 8) & 0xFF)) >> 2;
        r2 = (((b >> 16) & 0xFF) + ((c >> 16) & 0xFF) + ((d >> 16) & 0xFF) + ((a >> 16) & 0xFF)) >> 2;
        r3 = (((b >> 24) & 0xFF) + ((c >> 24) & 0xFF) + ((d >> 24) & 0xFF) + ((a >> 24) & 0xFF)) >> 2;
    } else {
        b = tbl[*(u32 *)(arg0 + 0x10)];
        c = tbl[*(u32 *)(arg0 + 0x14)];
        d = tbl[*(u32 *)(arg0 + 0x18)];

        sum = (u32)(((u64)0xAAAAAAAB * ((b & 0xFF) + (c & 0xFF) + (d & 0xFF))) >> 32) >> 1;
        r0 = sum;
        sum = (u32)(((u64)0xAAAAAAAB * (((b >> 8) & 0xFF) + ((c >> 8) & 0xFF) + ((d >> 8) & 0xFF))) >> 32) >> 1;
        r1 = sum;
        sum = (u32)(((u64)0xAAAAAAAB * (((b >> 16) & 0xFF) + ((c >> 16) & 0xFF) + ((d >> 16) & 0xFF))) >> 32) >> 1;
        r2 = sum;
        sum = (u32)(((u64)0xAAAAAAAB * (((b >> 24) & 0xFF) + ((c >> 24) & 0xFF) + ((d >> 24) & 0xFF))) >> 32) >> 1;
        r3 = sum;
    }

    *(u32 *)(arg0 + 0x28) = (r0 & 0xFF) | ((r1 & 0xFF) << 8) | ((r2 & 0xFF) << 16) | ((r3 & 0xFF) << 24);
}
