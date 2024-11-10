#include "../inc/libmx.h"

char *mx_strtok(char *restrict str, const char *restrict delim) {
    static char *token = NULL;
    if (str != NULL) {
        token = str;
    }

    token += mx_strspn(token, delim);
    if (*token == '\0') {
        return NULL;
    }

    str = token;

    token += mx_strcspn(token, delim);
    if (*token != '\0') {
        *(token++) = '\0';
    }

    return str;
}

