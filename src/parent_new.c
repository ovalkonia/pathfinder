#include "../inc/pathfinder.h"

t_parent *parent_new(int distance, struct s_dijkstra *dijkstra) {
    t_parent *parent = malloc(sizeof(t_parent));
    if (parent == NULL) {
        return NULL;
    }

    parent->distance = distance;
    parent->dijkstra = dijkstra;
    parent->next = NULL;

    return parent;
}

