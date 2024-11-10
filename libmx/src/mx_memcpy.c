#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    mx_mempcpy(dst, src, n);
    return dst;
}

