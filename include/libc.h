#ifndef LIBC_H
#define LIBC_H

/* the C library's string functions, as the standard declares them */
void *memset(void *s, int c, unsigned int n);
void *memcpy(void *dst, const void *src, unsigned int n);
char *strcpy(char *dst, const char *src);

#endif
