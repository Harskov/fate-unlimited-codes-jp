typedef int s32;
typedef float f32;

void func_001B3F70(s32 arg0)
{
    f32 step = 0.0f;
    s32 i = 0;
    f32 limit = 25.5f;
    f32 half = 0.5f;

    do {
        if ((s32)(half + step) >= arg0) {
            break;
        }
        i = i + 1;
        step += limit;
    } while (i < 10);

    while (0) {
        i++;
    }
}
