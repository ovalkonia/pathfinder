#include "../inc/pathfinder.h"

void bridge_destroy_all(t_bridge **bridges) {
    if (bridges == NULL) {
        return;
    }

    while (*bridges != NULL) {
        bridge_pop_front(bridges);
    }
}

