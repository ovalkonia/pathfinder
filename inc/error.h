#ifndef ERROR_H
#define ERROR_H

// Error

typedef enum e_error {
    USAGE,
    FILE_NONEXISTENT,
    FILE_EMPTY,
    LINE_INVALID,
    ISLANDS_INVALID,
    BRIDGES_DUPLICATE,
    BRIDGES_OVERFLOW,
} t_error;

void print_error(t_error type, void *arg);

#endif

