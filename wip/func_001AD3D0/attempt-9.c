typedef struct Node {
    unsigned char pad[0xC];
    struct Node *next;
} Node;

typedef struct Obj {
    unsigned char pad[0x238C];
    int field_238C;
    int field_2390;
} Obj;

typedef struct Entry {
    Obj *obj;
} Entry;

extern Entry D_0051C858[];

void func_001AD3D0(int arg0)
{
    int i;
    int end;
    Entry *e;
    Node *n;

    if (arg0 < 0) {
        i = 0;
        end = 2;
    } else {
        i = arg0;
        end = arg0 + 1;
    }
    if (i < end) {
        e = &D_0051C858[i];
        do {
            n = (Node *)e->obj;
            n = n->next;
            if (n != 0) {
                do {
                    n->next->obj->field_2390 = 0;
                    n->next->obj->field_238C = 0;
                    n = n->next;
                } while (n != 0);
            }
            i++;
            e++;
        } while (i < end);
    }
}
