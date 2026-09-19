typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct {
    u32 pad[8];
    u32 *tbl;
} ObjA;

typedef struct {
    u32 pad[23];
    u32 *tbl;
} ObjB;

u32 func_001B3B70(char *arg0)
{
    ObjA *a;
    u32 *tbl;
    u32 p, q, r, s;
    u32 r0, r1, r2, r3;
    u32 sum;

    if (arg0 == 0)
        return 0;
    a = *(ObjA **)(arg0 + 0x24);
    if (a == 0)
        return 0;
    tbl = *(u32 **)((char *)a + 0x8);

    if (*(u32 *)(arg0 + 0x20) & 2) {
        p = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x1C) << 2));
        q = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x10) << 2));
        r = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x14) << 2));
        s = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x18) << 2));

        r0 = ((q & 0xFF) + (r & 0xFF) + (s & 0xFF) + (p & 0xFF)) >> 2;
        r1 = (((q >> 8) & 0xFF) + ((r >> 8) & 0xFF) + ((s >> 8) & 0xFF) + ((p >> 8) & 0xFF)) >> 2;
        r2 = (((q >> 16) & 0xFF) + ((r >> 16) & 0xFF) + ((s >> 16) & 0xFF) + ((p >> 16) & 0xFF)) >> 2;
        r3 = (((q >> 24) & 0xFF) + ((r >> 24) & 0xFF) + ((s >> 24) & 0xFF) + ((p >> 24) & 0xFF)) >> 2;
    } else {
        q = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x10) << 2));
        r = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x14) << 2));
        s = *(u32 *)((char *)tbl + (*(u32 *)(arg0 + 0x18) << 2));
        tbl = (u32 *)0xAAAAAAAB;

        sum = (u32)(((u64)(u32)tbl * ((q & 0xFF) + (r & 0xFF) + (s & 0xFF))) >> 32) >> 1;
        r0 = sum;
        sum = (u32)(((u64)(u32)tbl * (((q >> 8) & 0xFF) + ((r >> 8) & 0xFF) + ((s >> 8) & 0xFF))) >> 32) >> 1;
        r1 = sum;
        sum = (u32)(((u64)(u32)tbl * (((q >> 16) & 0xFF) + ((r >> 16) & 0xFF) + ((s >> 16) & 0xFF))) >> 32) >> 1;
        r2 = sum;
        sum = (u32)(((u64)(u32)tbl * (((q >> 24) & 0xFF) + ((r >> 24) & 0xFF) + ((s >> 24) & 0xFF))) >> 32) >> 1;
        r3 = sum;
    }

    return (r0 & 0xFF) | ((r1 & 0xFF) << 8) | ((r2 & 0xFF) << 16) | ((r3 & 0xFF) << 24);
}
