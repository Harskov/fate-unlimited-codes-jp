typedef struct Node {
    unsigned char pad[0x8];
    int field_8;
    unsigned char pad2[0xC - 0x8 - 4];
    struct Node *field_C;
} Node;

typedef struct Obj {
    int field_0;
    unsigned char pad2[0x1F8 - 0x0 - 4];
    int field_1F8;
    unsigned char pad3[0x23A4 - 0x1F8 - 4];
    int field_23A4;
    unsigned char pad4[0x23AC - 0x23A4 - 4];
    int field_23AC;
    unsigned char pad5[0x23D4 - 0x23AC - 4];
    int field_23D4;
} Obj;

extern Node *D_0051C858[];

void func_001AD0E0(Obj *arg0, int arg1, int arg2, int arg3)
{
    int i;
    int end;
    Node **tbl;
    Node *n;

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
        tbl = &D_0051C858[arg1];
        do {
            if (arg0 != 0 && (arg3 & 4)) {
                if (arg1 == arg0->field_8) {
                    goto next;
                }
            }
            n = *tbl;
            if (n->field_C != 0) {
                do {
                    if (!(arg3 & 2) || arg0 != n->field_C->field_0) {
                        *(int *)((char *)n->field_C + arg0->field_0 * 4 + 0x23AC) = arg2;
                        *(int *)((char *)n->field_C + 0x23A4) = arg3;
                    }
                    n->field_C = n->field_C->field_C;
                } while (n->field_C != 0);
            }
        next:
            arg1++;
            tbl++;
        } while (arg1 < end);
    }
}
