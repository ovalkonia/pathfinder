#include "../inc/libmx.h"

int mx_strspn(const char *str, const char *accept) {
    int len = 0;

    while (*str != '\0') {
        if (mx_strchr(accept, *(str++)) == NULL) {
            break;
        }

        ++len;
    }

    return len;
}

