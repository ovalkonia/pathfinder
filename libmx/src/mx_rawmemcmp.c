#include "../inc/libmx.h"

int mx_rawmemcmp(const void *s1, const void *s2) {
    const unsigned char *p1 = s1;
    const unsigned char *p2 = s2;

    while (*p1 == *p2) {
        ++p1;
        ++p2;
    }

    return *p1 - *p2;
}

