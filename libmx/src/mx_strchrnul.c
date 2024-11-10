#include "../inc/libmx.h"

char *mx_strchrnul(const char *s, int c) {
    int len = mx_strlen(s);

    char *chr = mx_memchr(s, c, len);
    if (chr == NULL) {
        return (char *) s + len;
    }

    return chr;
}

