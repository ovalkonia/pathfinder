#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
    int count = 0;
    int cword = 1;

    while (*str != '\0') { 
        if (*(str++) == c) {
            cword = 1;
            continue;
        }

        if (cword) {
            cword = 0;
            ++count;
        }
    }

    return count;
}

