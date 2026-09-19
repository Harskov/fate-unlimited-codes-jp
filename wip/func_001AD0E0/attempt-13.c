typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef float f32;

extern s32 D_0051C858;

typedef struct Node {
    unsigned char pad0[0xC];
    struct Node *next;
} Node;

typedef struct Obj {
    unsigned char pad0[0x1F8];
    s32 field_1F8;
    unsigned char pad1[0x23D4 - 0x1F8 - 4];
    s32 field_23D4;
} Obj;

void func_001AD0E0(Obj *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 i;
    s32 end;
    Node **tbl;
    Node *n;
    s32 t2;
    s32 t1;

    if (arg1 < 0) {
        arg1 = 0;
        end = 2;
    } else {
        end = arg1 + 1;
    }

    arg0->field_1F8 |= 1;
    if (arg0->field_23D4 <= 0) {
        arg0->field_23D4 = arg2;
    }

    if (arg1 < end) {
        tbl = (Node **)((char *)&D_0051C858 + arg1 * 4);
        t2 = arg3 & 4;
        t1 = arg3 & 2;
        do {
            if (arg0 != 0 && t2 != 0) {
                if (arg1 == arg0->pad0[8]) {
                    goto next;
                }
            }
            n = *tbl;
            if (n->next != 0) {
                do {
                    if (t1 != 0) {
                        if (arg0 == n->next) {
                            goto skip;
                        }
                    }
                    *(s32 *)((char *)n->next + arg0->pad0[0] * 4 + 0x23AC) = arg2;
                    *(s32 *)((char *)n->next + 0x23A4) = arg3;
                skip:
                    n = n->next;
                } while (n->next != 0);
            }
        next:
            arg1++;
            tbl++;
        } while (arg1 < end);
    }
}
