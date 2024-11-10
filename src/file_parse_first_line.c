#include "../inc/pathfinder.h"

int file_parse_first_line(int fd, const char *filename) {
    // Check if empty
    char buf[1024];
    int buf_len = mx_read_line(buf, '\n', fd);
    if (buf_len == -1) {
        print_error(FILE_EMPTY, (void *) filename);
        close(fd);
        exit(-1);
    }

    // Parse first line
    buf[buf_len] = '\0';

    int line = 1;
    int islands_num = mx_atoi_ruthless(buf);
    if (islands_num <= 0) {
        print_error(LINE_INVALID, &line);
        close(fd);
        exit(-1);
    }

    return islands_num;
}

