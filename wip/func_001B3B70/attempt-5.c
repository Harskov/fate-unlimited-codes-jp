typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef int s32;

typedef struct {
    u32 pad[0x9];
    u32 *tbl;
} Obj0C;

typedef struct {
    u32 pad[0x4];
    u32 *tbl;
} Obj24;

u32 func_001B3B70(char *arg0)
{
    Obj24 *o24;
    Obj0C *o0C;
    u32 *tbl;
    u32 a, b, c, d;
    u32 r0, r1, r2, r3;
    u32 m;
    u32 sum;

    if (arg0 == 0)
        return 0;
    o24 = *(Obj24 **)(arg0 + 0x24);
    if (o24 == 0)
        return 0;
    o0C = (Obj0C *)o24;
    tbl = *(u32 **)((char *)o24 + 0x8);

    if (*(u32 *)(arg0 + 0x20) & 2) {
        a = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x10) << 2));
        b = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x14) << 2));
        c = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x18) << 2));
        d = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x1C) << 2));

        r0 = ((a & 0xFF) + (b & 0xFF) + (c & 0xFF) + (d & 0xFF)) >> 2;
        r1 = (((a >> 8) & 0xFF) + ((b >> 8) & 0xFF) + ((c >> 8) & 0xFF) + ((d >> 8) & 0xFF)) >> 2;
        r2 = (((a >> 16) & 0xFF) + ((b >> 16) & 0xFF) + ((c >> 16) & 0xFF) + ((d >> 16) & 0xFF)) >> 2;
        r3 = (((a >> 24) & 0xFF) + ((b >> 24) & 0xFF) + ((c >> 24) & 0xFF) + ((d >> 24) & 0xFF)) >> 2;
    } else {
        a = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x10) << 2));
        b = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x14) << 2));
        c = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x18) << 2));

        m = 0xAAAAAAAB;
        sum = (u32)(((u64)m * ((a & 0xFF) + (b & 0xFF) + (c & 0xFF))) >> 32) >> 1;
        r0 = sum;
        sum = (u32)(((u64)m * (((a >> 8) & 0xFF) + ((b >> 8) & 0xFF) + ((c >> 8) & 0xFF))) >> 32) >> 1;
        r1 = sum;
        sum = (u32)(((u64)m * (((a >> 16) & 0xFF) + ((b >> 16) & 0xFF) + ((c >> 16) & 0xFF))) >> 32) >> 1;
        r2 = sum;
        sum = (u32)(((u64)m * (((a >> 24) & 0xFF) + ((b >> 24) & 0xFF) + ((c >> 24) & 0xFF))) >> 32) >> 1;
        r3 = sum;
    }

    return (r0 & 0xFF) | ((r1 & 0xFF) << 8) | ((r2 & 0xFF) << 16) | ((r3 & 0xFF) << 24);
}
