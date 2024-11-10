#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    if (str == NULL || sub == NULL) {
        return -2;
    }

    const char *strstr = mx_strstr(str, sub);
    if (strstr == NULL) {
        return -1;
    }

    return strstr - str;
}

