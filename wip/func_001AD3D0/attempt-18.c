typedef struct Node {
    unsigned char pad[0xC];
    struct Node *field_C;
} Node;

typedef struct Obj {
    unsigned char pad[0x238C];
    int field_238C;
    unsigned char pad2[0x2390 - 0x238C - 4];
    int field_2390;
} Obj;

extern Node *D_0051C858[];

void func_001AD3D0(int arg0)
{
    int i;
    int end;
    Node *n;
    Node *m;

    if (arg0 < 0) {
        i = 0;
        end = 2;
    } else {
        i = arg0;
        end = arg0 + 1;
    }
    while (i < end) {
        n = D_0051C858[i];
        m = n->field_C;
        if (m != 0) {
            do {
                m->field_C->field_2390 = 0;
                m->field_C->field_238C = 0;
                m = m->field_C;
            } while (m != 0);
        }
        i += 1;
    }
}
