#include "../inc/libmx.h"

int mx_strcspn(const char *str, const char *reject) {
    int len = 0;

    while (*str != '\0') {
        if (mx_strchr(reject, *(str++)) != NULL) {
            break;
        }

        ++len;
    }

    return len;
}

