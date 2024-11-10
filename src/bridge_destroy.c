#include "../inc/pathfinder.h"

void bridge_destroy(t_bridge **bridge) {
    if (bridge == NULL || *bridge == NULL) {
        return;
    }

    free(*bridge);
    *bridge = NULL;
}

