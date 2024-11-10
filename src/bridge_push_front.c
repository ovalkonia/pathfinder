#include "../inc/pathfinder.h"

t_bridge *bridge_push_front(t_bridge **bridges, int length, struct s_island *island) {
    if (bridges == NULL) {
        return NULL;
    }

    t_bridge *bridge = bridge_new(length, island);
    if (bridge == NULL) {
        return NULL;
    }

    bridge->next = *bridges;
    *bridges = bridge;

    return bridge;
}

