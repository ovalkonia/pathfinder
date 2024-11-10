#ifndef DIJKSTRA_H
#define DIJKSTRA_H

// Dijkstra

typedef struct s_dijkstra {
    t_parent *parents;
    t_parent *children;
    t_island *island;
    bool visited;
    int distance;
    struct s_dijkstra *next;
} t_dijkstra;

t_dijkstra *dijkstra_new(t_island *island);
t_dijkstra *dijkstra_from_islands(t_island *islands, t_island *island);
t_dijkstra *dijkstra_push_front(t_dijkstra **dijkstras, t_island *island);
t_dijkstra *dijkstra_push_back(t_dijkstra **dijkstras, t_island *island);
t_dijkstra *dijkstra_find_by(const t_dijkstra *dijkstras, bool (*cmp)(const t_dijkstra *, void *), void *arg);
t_dijkstra *dijkstra_min(t_dijkstra *dijkstras);
void dijkstra_destroy(t_dijkstra **dijkstra);
void dijkstra_destroy_all(t_dijkstra **dijkstras);
void dijkstra_pop_front(t_dijkstra **dijkstras);
void dijkstra_pop_back(t_dijkstra **dijkstras);
void dijkstra_print_paths(t_dijkstra *dijkstras, t_dijkstra *dst, t_parent *stack);
void dijkstra_children_to_parents_dsa(t_dijkstra *src, int distance, t_dijkstra *dijkstra);

// find functions

bool dijkstra_by_island(const t_dijkstra *dijkstra, void *island);

#endif

