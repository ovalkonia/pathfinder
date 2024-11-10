#include "../inc/pathfinder.h"

t_dijkstra *dijkstra_push_back(t_dijkstra **dijkstras, t_island *island) {
    if (dijkstras == NULL) {
        return NULL;
    }

    t_dijkstra *dijkstra = dijkstra_new(island);
    if (dijkstra == NULL) {
        return NULL;
    }

    if (*dijkstras == NULL) {
        *dijkstras = dijkstra;
        return dijkstra;
    }

    t_dijkstra *iter = *dijkstras;
    while (iter->next != NULL) {
        iter = iter->next;
    }

    iter->next = dijkstra;

    return dijkstra;
}

