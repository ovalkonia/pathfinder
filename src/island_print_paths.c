#include "../inc/pathfinder.h"

void island_print_paths(t_island *islands, t_island *island) {
    t_dijkstra *dijkstras = dijkstra_from_islands(islands, island);
    t_dijkstra *src = dijkstra_find_by(dijkstras, dijkstra_by_island, island);

    t_dijkstra *iter = src->next;
    while (iter != NULL) {
        dijkstra_print_paths(src, iter, NULL);
        iter = iter->next;
    }

    dijkstra_destroy_all(&dijkstras);
}

