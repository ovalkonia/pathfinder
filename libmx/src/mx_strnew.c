#include "../inc/libmx.h"

char *mx_strnew(const int size) {
    if (size < 0) {
        return NULL;
    }

    char *str = malloc(size + 1);
    if (str == NULL) {
        return NULL;
    }

    return mx_memset(str, '\0', size + 1);
}

