#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned char *pd = dst;
    const unsigned char *ps = src;

    while (n--) {
        if ((*(pd++) = *(ps++)) == (unsigned char) c) {
            return pd;
        }
    }

    return NULL;
}

