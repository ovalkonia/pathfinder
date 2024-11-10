#include "../inc/libmx.h"

char mx_tolower(char c) {
    return c + 32 * mx_isupper(c);
}

