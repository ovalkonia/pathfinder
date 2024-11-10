#include "../inc/pathfinder.h"

void dijkstra_destroy_all(t_dijkstra **dijkstras) {
    if (dijkstras == NULL) {
        return;
    }

    while (*dijkstras != NULL) {
        dijkstra_pop_front(dijkstras);
    }
}

