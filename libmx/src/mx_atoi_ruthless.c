#include "../inc/libmx.h"

int mx_atoi_ruthless(const char *str) {
    int integer = 0;
    int mul = -1;

    switch (*str) {
        case '-': mul = 1;
        case '+': ++str;
    }

    if (*str == '0') {
        return 0;
    }

    while (*str != '\0') {
        if (!mx_isdigit(*str)) {
            return 0;
        }

        integer *= 10;
        integer -= *(str++) - '0';
    }

    return integer * mul;
}

