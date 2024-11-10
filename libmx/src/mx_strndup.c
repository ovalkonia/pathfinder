#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    int len = mx_strnlen(s1, n);

    char *s2 = mx_strnew(len);
    if (s2 == NULL) {
        return NULL;
    }

    return mx_memcpy(s2, s1, len);
}

