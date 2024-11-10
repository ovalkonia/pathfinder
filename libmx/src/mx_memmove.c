#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    if (dst < src) {
        return mx_memcpy(dst, src, len);
    }

    if (dst > src) {
        return mx_memrcpy(dst, src, len);
    }

    return dst;
}

