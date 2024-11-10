#include "../inc/pathfinder.h"

void island_pop_back(t_island **islands) {
    if (islands == NULL || *islands == NULL) {
        return;
    }

    if ((*islands)->next == NULL) {
        island_destroy(islands);
        return;
    }

    t_island *iter = *islands;
    while (iter->next->next != NULL) {
        iter = iter->next;
    }

    island_destroy(&iter->next);
}

