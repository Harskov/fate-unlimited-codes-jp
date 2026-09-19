typedef int s32;
typedef float f32;

void func_001B3F70(s32 arg0)
{
    f32 f3 = 0.0f;
    s32 v0 = 0;

    while ((s32)(0.5f + f3) < arg0) {
        v0 += 1;
        if (v0 >= 10) {
            break;
        }
        f3 += 25.5f;
    }
}
