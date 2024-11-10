#include "../inc/libmx.h"

int mx_bubble_sort(char **arr, int size) {
    if (arr == NULL) {
        return 0;
    }

    int count = 0;

    int i = 0;
    while (i < size - 1) {
        bool swap = false;

        int j = 0;
        while (j < size - i - 1) {
            if (mx_strcmp(arr[j], arr[j + 1]) > 0) {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swap = true;
                ++count;
            }

            ++j;
        }

        if (!swap) {
            break;
        }

        ++i;
    }

    return count;
}

