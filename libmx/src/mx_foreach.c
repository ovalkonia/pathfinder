#include "../inc/libmx.h"

void mx_foreach(int *arr, int size, void (*f)(int)) {
    if (arr == NULL || f == NULL) {
        return;
    }

    while (size--) {
        f(*(arr++));
    }
}

