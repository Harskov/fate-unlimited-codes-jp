typedef int s32;
typedef float f32;

s32 func_001B3F70(s32 arg0)
{
    f32 step = 0.0f;
    s32 i;
    f32 limit = 25.5f;
    f32 half = 0.5f;

    for (i = 0; i < 10; i++) {
        if ((s32)(half + step) >= arg0) {
            break;
        }
        step += limit;
    }
    return i;
}
