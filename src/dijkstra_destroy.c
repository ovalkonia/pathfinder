#include "../inc/pathfinder.h"

void dijkstra_destroy(t_dijkstra **dijkstra) {
    if (dijkstra == NULL || *dijkstra == NULL) {
        return;
    }

    parent_destroy_all(&(*dijkstra)->parents);
    parent_destroy_all(&(*dijkstra)->children);
    free(*dijkstra);
    *dijkstra = NULL;
}

