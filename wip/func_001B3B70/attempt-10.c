typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct {
    u32 unk_0;
    u32 unk_4;
    u32 *tbl;
} Src;

typedef struct {
    u32 idx_a;
    u32 idx_b;
    u32 idx_c;
    u32 idx_d;
    u32 flags;
    Src *src;
} Ctx;

u32 func_001B3B70(Ctx *ctx)
{
    Src *src;
    u32 *tbl;
    u32 a, b, c, d;
    u32 r0, r1, r2, r3;
    u32 h;
    u32 sum;

    if (ctx == 0) {
        return 0;
    }
    src = ctx->src;
    if (src == 0) {
        return 0;
    }
    tbl = src->tbl;

    if (ctx->flags & 2) {
        a = tbl[ctx->idx_a];
        b = tbl[ctx->idx_b];
        c = tbl[ctx->idx_c];
        d = tbl[ctx->idx_d];

        r0 = ((a & 0xFF) + (b & 0xFF) + (c & 0xFF) + (d & 0xFF)) >> 2;
        r1 = (((a >> 8) & 0xFF) + ((b >> 8) & 0xFF) + ((c >> 8) & 0xFF) + ((d >> 8) & 0xFF)) >> 2;
        r2 = (((a >> 16) & 0xFF) + ((b >> 16) & 0xFF) + ((c >> 16) & 0xFF) + ((d >> 16) & 0xFF)) >> 2;
        r3 = (((a >> 24) & 0xFF) + ((b >> 24) & 0xFF) + ((c >> 24) & 0xFF) + ((d >> 24) & 0xFF)) >> 2;
    } else {
        h = 0xAAAAAAAB;
        a = tbl[ctx->idx_a];
        b = tbl[ctx->idx_b];
        c = tbl[ctx->idx_c];

        sum = (u32)(((u64)h * ((a & 0xFF) + (b & 0xFF) + (c & 0xFF))) >> 32) >> 1;
        r0 = sum;
        sum = (u32)(((u64)h * (((a >> 8) & 0xFF) + ((b >> 8) & 0xFF) + ((c >> 8) & 0xFF))) >> 32) >> 1;
        r1 = sum;
        sum = (u32)(((u64)h * (((a >> 16) & 0xFF) + ((b >> 16) & 0xFF) + ((c >> 16) & 0xFF))) >> 32) >> 1;
        r2 = sum;
        sum = (u32)(((u64)h * (((a >> 24) & 0xFF) + ((b >> 24) & 0xFF) + ((c >> 24) & 0xFF))) >> 32) >> 1;
        r3 = sum;
    }

    return (r0 & 0xFF) | ((r1 & 0xFF) << 8) | ((r2 & 0xFF) << 16) | ((r3 & 0xFF) << 24);
}
