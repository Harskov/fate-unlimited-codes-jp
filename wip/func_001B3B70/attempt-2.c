typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef int s32;

void func_001B3B70(char *arg0)
{
    char *p;
    u32 *tbl;
    u32 v0, v1, v2, v3;
    u32 a, b, c, d;
    u32 r0, r1, r2, r3;
    u32 m;
    u32 sum;

    if (arg0 == 0)
        return;
    p = *(char **)(arg0 + 0x24);
    if (p == 0)
        return;
    tbl = *(u32 **)(p + 8);

    if (*(u32 *)(arg0 + 0x20) & 2) {
        v0 = tbl[*(u32 *)(arg0 + 0x1C)];
        v1 = tbl[*(u32 *)(arg0 + 0x10)];
        v2 = tbl[*(u32 *)(arg0 + 0x14)];
        v3 = tbl[*(u32 *)(arg0 + 0x18)];

        a = (v1 & 0xFF) + (v2 & 0xFF) + (v3 & 0xFF) + (v0 & 0xFF);
        b = ((v1 >> 8) & 0xFF) + ((v2 >> 8) & 0xFF) + ((v3 >> 8) & 0xFF) + ((v0 >> 8) & 0xFF);
        c = ((v1 >> 16) & 0xFF) + ((v2 >> 16) & 0xFF) + ((v3 >> 16) & 0xFF) + ((v0 >> 16) & 0xFF);
        d = ((v1 >> 24) & 0xFF) + ((v2 >> 24) & 0xFF) + ((v3 >> 24) & 0xFF) + ((v0 >> 24) & 0xFF);

        r0 = a >> 2;
        r1 = b >> 2;
        r2 = c >> 2;
        r3 = d >> 2;
    } else {
        v1 = tbl[*(u32 *)(arg0 + 0x10)];
        v2 = tbl[*(u32 *)(arg0 + 0x14)];
        v3 = tbl[*(u32 *)(arg0 + 0x18)];

        m = 0xAAAAAAAB;
        a = (v1 & 0xFF) + (v2 & 0xFF) + (v3 & 0xFF);
        sum = (u32)(((u64)m * a) >> 32) >> 1;
        r0 = sum;

        b = ((v1 >> 8) & 0xFF) + ((v2 >> 8) & 0xFF) + ((v3 >> 8) & 0xFF);
        sum = (u32)(((u64)m * b) >> 32) >> 1;
        r1 = sum;

        c = ((v1 >> 16) & 0xFF) + ((v2 >> 16) & 0xFF) + ((v3 >> 16) & 0xFF);
        sum = (u32)(((u64)m * c) >> 32) >> 1;
        r2 = sum;

        d = ((v1 >> 24) & 0xFF) + ((v2 >> 24) & 0xFF) + ((v3 >> 24) & 0xFF);
        sum = (u32)(((u64)m * d) >> 32) >> 1;
        r3 = sum;
    }

    *(u32 *)(arg0 + 0x28) = (r0 & 0xFF) | ((r1 & 0xFF) << 8) | ((r2 & 0xFF) << 16) | ((r3 & 0xFF) << 24);
}
