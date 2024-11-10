#include "../inc/libmx.h"

int mx_sqrt(int x) {
    long temp = 0;

    int i = 1;
    while (temp <= x) {
        temp += i * 2 - 1;
        if (temp == x) {
            return i;
        }

        ++i;
    }

    return 0;
}

