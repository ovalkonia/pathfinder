#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    if (arr == NULL || s == NULL) {
        return -1;
    }

    int low = 0;
    int high = size - 1;

    while (low <= high) {
        ++(*count);

        int mid = (low + high) / 2;
        int cmp = mx_strcmp(arr[mid], s);
        if (!cmp) {
            return mid;
        }

        if (cmp < 0) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    *count = 0;
    return -1;
}

