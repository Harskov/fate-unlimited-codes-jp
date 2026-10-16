#ifndef COMMON_H
#define COMMON_H
/* declarations shared across the units */
#include "types.h"

/* A translation unit names each function not yet written in C with an INCLUDE_ASM line;
   the build puts the function's assembly in its place before the compiler reads the
   file, and these empty definitions keep the file readable to everything else. */
#ifndef INCLUDE_ASM
#define INCLUDE_ASM(FOLDER, NAME)
#endif
#ifndef INCLUDE_RODATA
#define INCLUDE_RODATA(FOLDER, NAME)
#endif
#endif
