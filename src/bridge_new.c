#include "../inc/pathfinder.h"

t_bridge *bridge_new(int length, struct s_island *island) {
    t_bridge *bridge = malloc(sizeof(t_bridge));
    if (bridge == NULL) {
        return NULL;
    }

    bridge->length = length;
    bridge->island = island;
    bridge->next = NULL;

    return bridge;
}

