#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (s == NULL) {
        return NULL;
    }

    char **words = malloc(sizeof(char *) * (mx_count_words(s, c) + 1));
    if (words == NULL) {
        return NULL;
    }

    char **temp = words;
    while (*s != '\0') {
        if (*s == c) {
            ++s;
            continue;
        }

        char *wnul = mx_strchrnul(s, c);
        *(temp++) = mx_strndup(s, wnul - s);
        s = wnul;
    }
    *temp = NULL;

    return words;
}

