#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    const unsigned char *pb = big;

    while (big_len >= little_len) {
        if (!mx_memcmp(pb, little, little_len)) {
            return (void *) pb;
        }

        --big_len;
        ++pb;
    }

    return NULL;
}

