#include "../inc/pathfinder.h"

void parent_print_path(t_parent *list, t_island *dst) {
    mx_printstr("========================================\n");
    
    // Path
    mx_printstr("Path: ");
    mx_printstr(list->dijkstra->island->title);
    mx_printstr(" -> ");
    mx_printstr(dst->title);
    mx_printchar('\n');

    t_parent *iter = list->next;

    // Route
    mx_printstr("Route: ");
    mx_printstr(list->dijkstra->island->title);
    while (iter != NULL) {
        mx_printstr(" -> ");
        mx_printstr(iter->dijkstra->island->title);
        iter = iter->next;
    }
    mx_printchar('\n');

    iter = list->next;

    // Distance
    mx_printstr("Distance: ");
    mx_printint(list->distance);
    while (iter->next != NULL) {
        mx_printstr(" + ");
        mx_printint(iter->distance);
        iter = iter->next;
    }
    if (list->next != iter) {
        mx_printstr(" = ");
        mx_printint(iter->dijkstra->distance);
    }
    mx_printchar('\n');

    mx_printstr("========================================\n");
}

