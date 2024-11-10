#include "../inc/libmx.h"

void *mx_rawmemchr(const void *s, int c) {
    const unsigned char *p = s;

    while (*p != (unsigned char) c) {
        ++p;
    }

    return (void *) p;
}

