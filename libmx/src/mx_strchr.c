#include "../inc/libmx.h"

char *mx_strchr(const char *s, int c) {
    return mx_memchr(s, c, mx_strlen(s) + 1);
}

