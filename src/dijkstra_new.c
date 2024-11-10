#include "../inc/pathfinder.h"

t_dijkstra *dijkstra_new(t_island *island) {
    t_dijkstra *dijkstra = malloc(sizeof(t_dijkstra));
    if (dijkstra == NULL) {
        return NULL;
    }

    dijkstra->parents = NULL;
    dijkstra->children = NULL;
    dijkstra->island = island;
    dijkstra->visited = false;
    dijkstra->distance = INT_MAX;
    dijkstra->next = NULL;

    return dijkstra;
}

