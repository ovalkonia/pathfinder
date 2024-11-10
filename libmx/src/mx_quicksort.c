#include "../inc/libmx.h"

int mx_hoares_partition(char **arr, int left, int right, int *count) {
    int pivot_len = mx_strlen(arr[(left + right) / 2]);

    while (true) {
        while (mx_strlen(arr[left]) < pivot_len) { ++left; }
        while (mx_strlen(arr[right]) > pivot_len) { --right; }
        if (left >= right) { return right; }
        if (mx_strlen(arr[left]) != mx_strlen(arr[right])) {
            char *temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            ++(*count);
        }

        ++left;
        --right;
    }
}

int mx_quicksort(char **arr, int left, int right) {
    if (arr == NULL) {
        return -1;
    }

    int count = 0;

    if (left < right) {
        int p = mx_hoares_partition(arr, left, right, &count);
        count += mx_quicksort(arr, left, p);
        count += mx_quicksort(arr, p + 1, right);
    }

    return count;
}

