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
    int i = 0;
    Entry *e = D_0051C858;

    do {
        Node *n = e->head;
        if (n != 0) {
            do {
                Node *cur = n;
                Node *next = cur->next;
                if (!(*(u32 *)((unsigned char *)next + 0x1DC) & 0x20000000)) {
                    count++;
                }
                n = next;
            } while (n != 0);
        }
        i++;
        e++;
    } while (i < 2);
    return count;
}
