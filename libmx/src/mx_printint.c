#include "../inc/libmx.h"

void mx_printint(int n) {
    char digit = n % 10;

    if (n < 0) {
        n /= -10;
        digit = -digit;
        mx_printchar('-');
    } else {
        n /= 10;
    }

    if (n) {
        mx_printint(n);
    }

    mx_printchar(digit + '0');
}

