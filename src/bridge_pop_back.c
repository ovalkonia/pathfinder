#include "../inc/pathfinder.h"

void bridge_pop_back(t_bridge **bridges) {
    if (bridges == NULL || *bridges == NULL) {
        return;
    }

    if ((*bridges)->next == NULL) {
        bridge_destroy(bridges);
        return;
    }

    t_bridge *iter = *bridges;
    while (iter->next->next != NULL) {
        iter = iter->next;
    }

    bridge_destroy(&iter->next);
}

