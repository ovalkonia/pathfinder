#include "../inc/pathfinder.h"

void island_print_paths_all(t_island *islands) {
    if (islands == NULL) {
        return;
    }

    t_island *src = islands;
    while (src->next != NULL) {
        island_print_paths(islands, src);
        src = src->next;
    }
}

