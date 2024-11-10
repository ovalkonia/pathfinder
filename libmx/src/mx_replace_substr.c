#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    if (str == NULL || sub == NULL || replace == NULL) {
        return NULL;
    }

    int sub_len = mx_strlen(sub);

    char *newstr = mx_strnew(mx_strlen(str) + (mx_strlen(replace) - sub_len) * mx_count_substr(str, sub));
    if (newstr == NULL) {
        return NULL;
    }

    char *temp = newstr;
    while (*str != '\0') {
        if (!mx_strncmp(str, sub, sub_len)) {
            temp = mx_stpcpy(temp, replace);
            str += sub_len;
            continue;
        }

        *(temp++) = *(str++);
    }

    return newstr;
}

