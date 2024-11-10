#include "../inc/libmx.h"

int mx_read_line(char *lineptr, char delim, const int fd) {
    if (lineptr == NULL || read(fd, NULL, 0)) {
        return -2;
    }

    int len = 0;

    char buf;
    while (read(fd, &buf, 1)) {
        if (buf == delim) {
            return len;
        }

        lineptr[len++] = buf;
    }

    return -1;
}

