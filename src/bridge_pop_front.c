#include "../inc/pathfinder.h"

void bridge_pop_front(t_bridge **bridges) {
    if (bridges == NULL || *bridges == NULL) {
        return;
    }

    t_bridge *temp = *bridges;
    *bridges = temp->next;
    bridge_destroy(&temp);
}

