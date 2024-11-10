#include "../inc/libmx.h"

void *mx_memrcpy(void *restrict dst, const void *restrict src, size_t n) {
    unsigned char *pd = (unsigned char *) dst + n - 1;
    const unsigned char *ps = (unsigned char *) src + n - 1;

    while (n--) {
        *(pd--) = *(ps--);
    }

    return dst;
}

