#include "../inc/pathfinder.h"

bool dijkstra_by_island(const t_dijkstra *dijkstra, void *island) {
    return dijkstra->island == island;
}

