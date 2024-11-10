#include "../inc/pathfinder.h"

void island_pop_front(t_island **islands) {
    if (islands == NULL || *islands == NULL) {
        return;
    }

    t_island *temp = *islands;
    *islands = temp->next;
    island_destroy(&temp);
}

