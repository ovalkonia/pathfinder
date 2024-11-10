#include "../inc/pathfinder.h"

void dijkstra_children_to_parents_dsa(t_dijkstra *dijkstras, int distance, t_dijkstra *dijkstra) {
    if (dijkstra != NULL && parent_find_by(dijkstras->parents, parent_by_dijkstra, dijkstra) == NULL) {
        parent_push_front(&dijkstras->parents, distance, dijkstra);
    }

    if (dijkstras->children == NULL) {
        return;
    }

    t_parent *children = dijkstras->children;
    while (children != NULL) {
        dijkstra_children_to_parents_dsa(children->dijkstra, children->distance, dijkstras);
        children = children->next;
    }
}

