typedef unsigned int u32;

typedef struct Node {
    unsigned char pad_0[0xC];
    struct Node *next;
} Node;

typedef struct Entry {
    Node *head;
} Entry;

extern Entry D_0051C858[];

int func_0019CAD0(void)
{
    int count = 0;
    int i;
    Entry *e = D_0051C858;

    for (i = 0; i < 2; i++) {
        Node *n = e->head;
        if (n != 0) {
            do {
                if (!(*(u32 *)((unsigned char *)n->next + 0x1DC) & 0x20000000)) {
                    count++;
                }
                n = n->next;
            } while (n != 0);
        }
        e++;
    }
    return count;
}
