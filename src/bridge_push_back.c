#include "../inc/pathfinder.h"

t_bridge *bridge_push_back(t_bridge **bridges, int length, struct s_island *island) {
    if (bridges == NULL) {
        return NULL;
    }

    t_bridge *bridge = bridge_new(length, island);
    if (bridge == NULL) {
        return NULL;
    }

    if (*bridges == NULL) {
        *bridges = bridge;
        return bridge;
    }

    t_bridge *iter = *bridges;
    while (iter->next != NULL) {
        iter = iter->next;
    }

    iter->next = bridge;

    return bridge;
}

