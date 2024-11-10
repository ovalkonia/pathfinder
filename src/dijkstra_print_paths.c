#include "../inc/pathfinder.h"

void dijkstra_print_paths(t_dijkstra *src, t_dijkstra *dst, t_parent *stack) {
    if (src == dst) {
        parent_push_back(&stack, 0, src);
        parent_print_path(stack, dst->island);
        parent_pop_back(&stack);
        return;
    }
    
    if (src->children == NULL) {
        return;
    }

    parent_push_back(&stack, src->children->distance, src);

    t_parent *children = src->children;
    while (children != NULL) {
        t_parent *last = stack;
        while (last->next != NULL) {
            last = last->next;
        }
        last->distance = children->distance;
        dijkstra_print_paths(children->dijkstra, dst, stack);
        children = children->next;
    }

    parent_pop_back(&stack);
}

