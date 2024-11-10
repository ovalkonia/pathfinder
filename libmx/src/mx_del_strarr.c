#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    char **temp = *arr;
    while (*temp != NULL) {
        free(*(temp++));
    }
    free(*arr);
    *arr = NULL;
}

