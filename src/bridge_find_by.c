#include "../inc/pathfinder.h"

t_bridge *bridge_find_by(const t_bridge *bridges, bool (*cmp)(const t_bridge *, void *), void *arg) {
    while (bridges != NULL) {
        if (cmp(bridges, arg)) {
            return (t_bridge *) bridges;
        }
        bridges = bridges->next;
    }

    return NULL;
}

