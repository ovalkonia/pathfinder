#include "../inc/libmx.h"

void *mx_mempcpy(void *restrict dst, const void *restrict src, size_t n) {
    unsigned char *pd = dst;
    const unsigned char *ps = src;

    while (n--) {
        *(pd++) = *(ps++);
    }

    return pd;
}

