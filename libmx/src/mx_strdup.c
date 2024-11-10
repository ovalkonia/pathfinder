#include "../inc/libmx.h"

char *mx_strdup(const char *s1) {
    char *s2 = mx_strnew(mx_strlen(s1));
    if (s2 == NULL) {
        return NULL;
    }

    return mx_strcpy(s2, s1);
}

