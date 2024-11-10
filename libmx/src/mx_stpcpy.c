#include "../inc/libmx.h"

char *mx_stpcpy(char *dst, const char *src) {
    dst = mx_mempcpy(dst, src, mx_strlen(src));
    *dst = '\0';
    return dst;
}

