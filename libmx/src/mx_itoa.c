#include "../inc/libmx.h"

char *mx_itoa(int number) {
    int len = 1 + (number < 0);
    int temp = number;
    while (temp /= 10) {
        ++len;
    }

    char *ascii = mx_strnew(len);
    if (ascii == NULL) {
        return NULL;
    }

    *ascii = '-';
    while (true) {
        ascii[--len] = (number % 10) * (1 - 2 * (number < 0)) + '0';
        number /= 10;

        if (!number) {
            break;
        }
    }

    return ascii;
}

