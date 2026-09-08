typedef struct Ent {
    int flags;
} Ent;

typedef struct Node {
    int unk_0;
    Ent *cur;
    Ent *end;
} Node;

typedef struct Mgr {
    unsigned char unk_0[0x3C];
    Node *nodes[10];
    int count;
} Mgr;

void func_001775A0(Mgr *m)
{
    int i;

    for (i = 0; i < m->count; i++) {
        Node *n = m->nodes[i];
        if (n != 0) {
            Ent *e = n->cur;
            if (e != n->end) {
                e->flags &= ~0x20000;
                m->nodes[i]->cur->flags |= 1;
            }
        }
    }
}
