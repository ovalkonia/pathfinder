#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
    if (str == NULL) {
        return NULL;
    }

    char *dup = mx_strnew(mx_strlen(str));
    if (dup == NULL) {
        return NULL;
    }

    int space = 0;
    char *temp = dup;
    while (*str != '\0') {
        if (!mx_isspace(*str)) {
            *(temp++) = *(str++);
            space = 1;
            continue;
        }

        if (space) {
            space = 0;
            *(temp++) = ' ';
        }

        ++str;
    }

    temp = dup;
    dup = mx_strtrim(dup);
    free(temp);

    return dup;
}

