#include "common.h"
#include "types.h"

int iWakeupThread(int thid);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_002530F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253160);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_002531C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_002532C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_002533B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_002534A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253590);

/* evidence: func_00253590 passes its address to SetAlarm as the handler; it has SetAlarm's handler signature (id, time, arg) and ca… */
void alarmWakeupHandler(int id, u16 time, void *arg)
{
    iWakeupThread((int)arg);
    asm {
        sync
        ei
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253610);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253690);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253740);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_002537F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002530F0", func_00253900);
