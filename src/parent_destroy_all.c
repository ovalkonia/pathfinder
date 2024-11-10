#include "../inc/pathfinder.h"

void parent_destroy_all(t_parent **parents) {
    if (parents == NULL) {
        return;
    }

    while (*parents != NULL) {
        parent_pop_front(parents);
    }
}

