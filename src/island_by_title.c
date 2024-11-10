#include "../inc/pathfinder.h"

bool island_by_title(const t_island *island, void *title) {
    return !mx_strcmp(island->title, title);
}

