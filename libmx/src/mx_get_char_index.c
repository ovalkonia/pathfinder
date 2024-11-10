#include "../inc/libmx.h"

int mx_get_char_index(const char *str, char c) {
    if (str == NULL) {
        return -2;
    }

    const char *chr = mx_memchr(str, c, mx_strlen(str));
    if (chr == NULL) {
        return -1;
    }

    return chr - str;
}

