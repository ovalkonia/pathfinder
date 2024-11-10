#include "../inc/pathfinder.h"

t_dijkstra *dijkstra_from_islands(t_island *islands, t_island *island) {
    if (islands == NULL || island == NULL) {
        return NULL;
    }

    t_dijkstra *dijkstras = NULL;
    while (islands != NULL) {
        t_dijkstra *temp = dijkstra_push_back(&dijkstras, islands);
        if (islands == island) {
            temp->distance = 0;
        }
        islands = islands->next;
    }

    t_dijkstra *min = NULL;
    while ((min = dijkstra_min(dijkstras)) != NULL) {
        t_bridge *bridges = min->island->bridges;
        while (bridges != NULL) {
            t_dijkstra *node = dijkstra_find_by(dijkstras, dijkstra_by_island, bridges->island);
            if (!node->visited) {
                int distance = min->distance + bridges->length;
                if (distance <= node->distance) {
                    if (distance < node->distance) {
                        parent_destroy_all(&node->parents);
                    }
                    node->distance = distance;
                    parent_push_front(&node->parents, bridges->length, min);
                }
            }

            bridges = bridges->next;
        }

        min->visited = true;
    }

    t_dijkstra *iter = dijkstras;
    while (iter != NULL) {
        t_parent *parents = iter->parents;
        while (parents != NULL) {
            parent_push_back(&parents->dijkstra->children, parents->distance, iter);
            parents = parents->next;
        }
        parent_destroy_all(&iter->parents);
        iter = iter->next;
    }

    return dijkstras;
}

