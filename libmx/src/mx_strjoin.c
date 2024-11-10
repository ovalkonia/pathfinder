#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    if (s1 == NULL && s2 == NULL) {
        return NULL;
    }

    if (s1 == NULL) { return mx_strdup(s2); }
    if (s2 == NULL) { return mx_strdup(s1); }

    char *join = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    if (join == NULL) {
        return NULL;
    }

    return mx_strcat(mx_stpcpy(join, s1), s2);
}

