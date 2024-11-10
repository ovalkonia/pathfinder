#include "../inc/libmx.h"

int mx_strncmp(const char *s1, const char *s2, int n) {
    return mx_memcmp(s1, s2, n);
}

