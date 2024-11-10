#include "../inc/libmx.h"

int mx_strnlen(const char *s, int maxlen) {
    const char *nul = mx_memchr(s, '\0', maxlen);
    if (nul == NULL) {
        return maxlen;
    }

    return nul - s;
}

