typedef struct Timer {
    unsigned char pad[0xC];
    float elapsed;
} Timer;

typedef struct Obj {
    unsigned char pad[0x40];
    Timer *timer;
} Obj;

float func_001A47A0(Obj *o)
{
    return o->timer->elapsed / (1.0f / 60.0f);
}
