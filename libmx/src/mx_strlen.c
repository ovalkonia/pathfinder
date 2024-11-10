#include "../inc/libmx.h"

int mx_strlen(const char *s) {
    return (char *) mx_rawmemchr(s, '\0') - s;
}

