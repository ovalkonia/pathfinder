#include "../inc/pathfinder.h"

void dijkstra_pop_front(t_dijkstra **dijkstras) {
    if (dijkstras == NULL || *dijkstras == NULL) {
        return;
    }

    t_dijkstra *temp = *dijkstras;
    *dijkstras = temp->next;
    dijkstra_destroy(&temp);
}

