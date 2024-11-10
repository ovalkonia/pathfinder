#include "../inc/pathfinder.h"

void dijkstra_pop_back(t_dijkstra **dijkstras) {
    if (dijkstras == NULL || *dijkstras == NULL) {
        return;
    }

    if ((*dijkstras)->next == NULL) {
        dijkstra_destroy(dijkstras);
        return;
    }

    t_dijkstra *iter = *dijkstras;
    while (iter->next->next != NULL) {
        iter = iter->next;
    }

    dijkstra_destroy(&iter->next);
}

