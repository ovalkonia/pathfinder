#include "../inc/libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    mx_stpncpy(dst, src, len);
    return dst;
}

