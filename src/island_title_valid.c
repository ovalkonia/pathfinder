#include "../inc/pathfinder.h"

bool island_title_valid(const char *title) {
    if (title == NULL || *title == '\0') {
        return false;
    }

    while (*title != '\0') {
        if (!mx_isalpha(*(title++))) {
            return false;
        }
    }

    return true;
}

