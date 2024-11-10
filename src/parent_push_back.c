#include "../inc/pathfinder.h"

t_parent *parent_push_back(t_parent **parents, int distance, struct s_dijkstra *dijkstra) {
    if (parents == NULL) {
        return NULL;
    }

    t_parent *parent = parent_new(distance, dijkstra);
    if (parent == NULL) {
        return NULL;
    }

    if (*parents == NULL) {
        *parents = parent;
        return parent;
    }

    t_parent *iter = *parents;
    while (iter->next != NULL) {
        iter = iter->next;
    }

    iter->next = parent;

    return parent;
}

