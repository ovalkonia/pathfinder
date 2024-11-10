#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    int len = 1;
    unsigned long temp = nbr;
    while (temp >>= 4) {
        ++len;
    }

    char *hex = mx_strnew(len);
    if (hex == NULL) {
        return NULL;
    }

    while (len--) {
        hex[len] = "0123456789abcdef"[nbr & 15];
        nbr >>= 4;
    }

    return hex;
}

