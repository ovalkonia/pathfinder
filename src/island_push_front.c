#include "../inc/pathfinder.h"

t_island *island_push_front(t_island **islands, const char *title) {
    if (islands == NULL) {
        return NULL;
    }

    t_island *island = island_new(title);
    if (island == NULL) {
        return NULL;
    }

    island->next = *islands;
    *islands = island;

    return island;
}

