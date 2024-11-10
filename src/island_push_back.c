#include "../inc/pathfinder.h"

t_island *island_push_back(t_island **islands, const char *title) {
    if (islands == NULL) {
        return NULL;
    }

    t_island *island = island_new(title);
    if (island == NULL) {
        return NULL;
    }

    if (*islands == NULL) {
        *islands = island;
        return island;
    }

    t_island *iter = *islands;
    while (iter->next != NULL) {
        iter = iter->next;
    }

    iter->next = island;

    return island;
}

