#include "../inc/libmx.h"

char mx_toupper(char c) {
    return c - 32 * mx_islower(c);
}

