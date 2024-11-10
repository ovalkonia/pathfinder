#include "../inc/libmx.h"

bool mx_isalpha(char c) {
    return mx_isupper(c) || mx_islower(c);
}

