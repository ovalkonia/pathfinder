#include "../inc/pathfinder.h"

void parent_pop_front(t_parent **parents) {
    if (parents == NULL || *parents == NULL) {
        return;
    }

    t_parent *temp = *parents;
    *parents = temp->next;
    parent_destroy(&temp);
}

