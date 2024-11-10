#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    if (str == NULL) {
        return NULL;
    }

    while (*str != '\0' && mx_isspace(*str)) {
        ++str;
    }

    int len = mx_strlen(str);
    while (len && mx_isspace(str[len - 1])) {
        --len;
    }

    char *trim = mx_strnew(len);
    if (trim == NULL) {
        return NULL;
    }

    return mx_strncpy(trim, str, len);
}

