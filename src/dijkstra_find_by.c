#include "../inc/pathfinder.h"

t_dijkstra *dijkstra_find_by(const t_dijkstra *dijkstras, bool (*cmp)(const t_dijkstra *, void *), void *arg) {
    while (dijkstras != NULL) {
        if (cmp(dijkstras, arg)) {
            return (t_dijkstra *) dijkstras;
        }
        dijkstras = dijkstras->next;
    }

    return NULL;
}

