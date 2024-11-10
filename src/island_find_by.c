#include "../inc/pathfinder.h"

t_island *island_find_by(const t_island *islands, bool (*cmp)(const t_island *, void *), void *arg) {
    while (islands != NULL) {
        if (cmp(islands, arg)) {
            return (t_island *) islands;
        }
        islands = islands->next;
    }

    return NULL;
}

