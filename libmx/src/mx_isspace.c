#include "../inc/libmx.h"

bool mx_isspace(char c) {
    return (c >= '\t' && c <= '\r') || c == ' ';
}

