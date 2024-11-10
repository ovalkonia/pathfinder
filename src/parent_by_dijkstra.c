#include "../inc/pathfinder.h"

bool parent_by_dijkstra(const t_parent *parent, void *dijkstra) {
    return parent->dijkstra == dijkstra;
}

