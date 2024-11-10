#include "../inc/pathfinder.h"

t_parent *parent_find_by(const t_parent *parents, bool (*cmp)(const t_parent *, void *), void *arg) {
    while (parents != NULL) {
        if (cmp(parents, arg)) {
            return (t_parent *) parents;
        }
        parents = parents->next;
    }

    return NULL;
}

