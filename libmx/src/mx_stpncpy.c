#include "../inc/libmx.h"

char *mx_stpncpy(char *dst, const char *src, int len) {
    int dlen = mx_strnlen(src, len);
    return mx_memset(mx_mempcpy(dst, src, dlen), '\0', len - dlen);
}

