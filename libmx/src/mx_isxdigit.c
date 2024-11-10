#include "../inc/libmx.h"

bool mx_isxdigit(char c) {
    c = mx_toupper(c);
    return mx_isdigit(c) || (c >= 'A' && c <= 'F');
}

