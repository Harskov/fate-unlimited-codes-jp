typedef int s32;
typedef float f32;

void func_001B3F70(s32 arg0)
{
    s32 i;
    f32 g = 0.0f;
    f32 h = 25.5f;
    f32 k = 0.5f;

    for (i = 0; i < 10; i++) {
        if ((s32)(k + g) < arg0) {
            continue;
        }
        break;
    }
    (void)i;
}
