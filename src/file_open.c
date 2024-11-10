#include "../inc/pathfinder.h"

int file_open(const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error(FILE_NONEXISTENT, (void *) filename);
        exit(-1);
    }

    return fd;
}

