typedef int s32;

extern s32 D_0051D728[];
extern s32 D_0051D748[];

void func_001B42A0(void)
{
    s32 *node;
    s32 *list;
    s32 *cur;
    s32 i;
    s32 found;

    node = (s32 *)D_0051D748[0];
    list = node;
    i = 0;
    do {
        i++;
        found = 0;
        cur = node;
        if (*node != 1) {
            do {
                cur = (s32 *)cur[5];
                if (cur == (s32 *)-1)
                    break;
                if (cur == (s32 *)i) {
                    found = 1;
                    break;
                }
                list = (s32 *)list[2];
                cur = (s32 *)list[0];
            } while (cur != (s32 *)1);
        }
    } while (found != 0);
    D_0051D728[0] += 1;
}
