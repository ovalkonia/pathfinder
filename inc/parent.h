#ifndef PARENT_H
#define PARENT_H

// Parent

typedef struct s_parent {
    int distance;
    struct s_dijkstra *dijkstra;
    struct s_parent *next;
} t_parent;

t_parent *parent_new(int distance, struct s_dijkstra *dijkstra);
t_parent *parent_push_front(t_parent **parents, int distance, struct s_dijkstra *dijkstra);
t_parent *parent_push_back(t_parent **parents, int distance, struct s_dijkstra *dijkstra);
t_parent *parent_find_by(const t_parent *parents, bool (*cmp)(const t_parent *, void *), void *arg);
void parent_destroy(t_parent **parents);
void parent_destroy_all(t_parent **parents);
void parent_pop_front(t_parent **parents);
void parent_pop_back(t_parent **parents);
void parent_print_path(t_parent *list, t_island *dst);

// Find functions

bool parent_by_dijkstra(const t_parent *parent, void *dijkstra);

#endif

