#include "../inc/libmx.h"

int mx_strcmp(const char *s1, const char *s2) {
    return mx_memcmp(s1, s2, mx_strlen(s1) + 1);
}

