#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    mx_stpcpy(mx_rawmemchr(s1, '\0'), s2);
    return s1;
}

