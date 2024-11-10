#include "../inc/libmx.h"

char *mx_strrchr(const char *s, int c) {
    return mx_memrchr(s, c, mx_strlen(s) + 1);
}

