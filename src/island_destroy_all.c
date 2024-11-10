#include "../inc/pathfinder.h"

void island_destroy_all(t_island **islands) {
    if (islands == NULL) {
        return;
    }

    while (*islands != NULL) {
        island_pop_front(islands);
    }
}

