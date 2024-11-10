#include "../inc/pathfinder.h"

t_dijkstra *dijkstra_min(t_dijkstra *dijkstras) {
    t_dijkstra *min = NULL;
    while (dijkstras != NULL) {
        if (!dijkstras->visited && (min == NULL || dijkstras->distance < min->distance)) {
            min = dijkstras;
        }

        dijkstras = dijkstras->next;
    }

    return min;
}

