#include "../inc/pathfinder.h"

void parent_destroy(t_parent **parent) {
    if (parent == NULL || *parent == NULL) {
        return;
    }

    free(*parent);
    *parent = NULL;
}

