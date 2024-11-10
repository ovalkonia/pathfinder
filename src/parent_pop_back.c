#include "../inc/pathfinder.h"

void parent_pop_back(t_parent **parents) {
    if (parents == NULL || *parents == NULL) {
        return;
    }

    if ((*parents)->next == NULL) {
        parent_destroy(parents);
        return;
    }

    t_parent *iter = *parents;
    while (iter->next->next != NULL) {
        iter = iter->next;
    }

    parent_destroy(&iter->next);
}

