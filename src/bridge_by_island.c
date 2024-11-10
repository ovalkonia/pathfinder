#include "../inc/pathfinder.h"

bool bridge_by_island(const t_bridge *bridge, void *island) {
    return bridge->island == island;
}

