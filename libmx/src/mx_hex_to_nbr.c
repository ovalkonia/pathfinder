#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    if (hex == NULL) {
        return 0;
    }

    unsigned long nbr = 0;
    while (*hex != '\0') {
        if (!mx_isxdigit(*hex)) {
            return 0;
        }

        nbr <<= 4;
        nbr |= mx_tolower(*hex) - '0' - 39 * !mx_isdigit(*hex);
        ++hex;
    }

    return nbr;
}

