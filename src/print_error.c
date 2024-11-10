#include "../inc/pathfinder.h"

void print_error(t_error type, void *arg) {
    switch (type) {
        case USAGE:
            mx_printerr("usage: ./pathfinder [filename]\n");
            break;
        case FILE_NONEXISTENT:
            mx_printerr("error: file ");
            mx_printerr(arg);
            mx_printerr(" does not exist\n");
            break;
        case FILE_EMPTY:
            mx_printerr("error: file ");
            mx_printerr(arg);
            mx_printerr(" is empty\n");
            break;
        case LINE_INVALID: {
            char *ascii = mx_itoa(*((int *) arg));
            mx_printerr("error: line ");
            mx_printerr(ascii);
            mx_printerr(" is not valid\n");
            free(ascii);
            break;
        }
        case ISLANDS_INVALID:
            mx_printerr("error: invalid number of islands\n");
            break;
        case BRIDGES_DUPLICATE:
            mx_printerr("error: duplicate bridges\n");
            break;
        case BRIDGES_OVERFLOW:
            mx_printerr("error: sum of bridges lengths is too big\n");
            break;
    }
}

