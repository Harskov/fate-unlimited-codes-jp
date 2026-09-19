typedef int s32;
typedef float f32;

void func_001B3F70(s32 arg0)
{
    f32 f3 = 0.0f;
    s32 ret = 0;

    do {
        if ((s32)(0.5f + f3) >= arg0) {
            break;
        }
        ret = ret + 1;
        f3 += 25.5f;
    } while (ret <= 9);
}
