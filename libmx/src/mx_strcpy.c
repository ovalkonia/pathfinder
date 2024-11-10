#include "../inc/libmx.h"

char *mx_strcpy(char *dst, const char *src) {
    mx_stpcpy(dst, src);
    return dst;
}

