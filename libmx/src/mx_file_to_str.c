#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    if (file == NULL) {
        return NULL;
    }

    int fd = open(file, O_RDONLY);
    if (fd == -1) {
        return NULL;
    }

    char *str = NULL;
    char buf[1025];
    int buf_len;

    while ((buf_len = read(fd, buf, 1024))) {
        if (buf_len == -1) {
            mx_strdel(&str);
            break;
        }

        buf[buf_len] = '\0';

        char *temp = str;
        str = mx_strjoin(str, buf);
        free(temp);
    }

    close(fd);
    return str;
}

