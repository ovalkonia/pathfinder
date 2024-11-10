#include "../inc/pathfinder.h"

t_dijkstra *dijkstra_push_front(t_dijkstra **dijkstras, t_island *island) {
    if (dijkstras == NULL) {
        return NULL;
    }

    t_dijkstra *dijkstra = dijkstra_new(island);
    if (dijkstra == NULL) {
        return NULL;
    }

    dijkstra->next = *dijkstras;
    *dijkstras = dijkstra;

    return dijkstra;
}

