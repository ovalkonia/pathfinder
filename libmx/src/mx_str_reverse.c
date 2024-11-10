#include "../inc/libmx.h"

void mx_str_reverse(char *s) {
    if (s == NULL) {
        return;
    }

    char *e = (char *) mx_rawmemchr(s, '\0') - 1;
    while (s < e) {
        mx_swap_char(s++, e--);
    }
}

