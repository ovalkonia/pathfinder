#include "../inc/pathfinder.h"

t_island *island_new(const char *title) {
    t_island *island = malloc(sizeof(t_island));
    if (island == NULL) {
        return NULL;
    }

    island->title = mx_strdup(title);
    island->bridges = NULL;
    island->next = NULL;

    return island;
}

