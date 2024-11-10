#include "../inc/pathfinder.h"

void island_destroy(t_island **island) {
    if (island == NULL || *island == NULL) {
        return;
    }

    free((*island)->title);
    bridge_destroy_all(&(*island)->bridges);
    free(*island);
    *island = NULL;
}

