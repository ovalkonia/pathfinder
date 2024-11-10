#include "../inc/pathfinder.h"

t_parent *parent_push_front(t_parent **parents, int distance, struct s_dijkstra *dijkstra) {
    if (parents == NULL) {
        return NULL;
    }

    t_parent *parent = parent_new(distance, dijkstra);
    if (parent == NULL) {
        return NULL;
    }

    parent->next = *parents;
    *parents = parent;

    return parent;
}

